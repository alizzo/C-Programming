/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// A function to generate the file name and returns a pointer to a the file created
FILE* newFile(int fileNo)
{
    char fileName[2];
    sprintf(fileName, "%d", 0);

    if (fileNo >= 10)
    {
        sprintf(fileName, "0%d.jpg", fileNo);
    }
    else
    {
        sprintf(fileName, "00%d.jpg", fileNo);
    }

    FILE* file = fopen(fileName, "w");

    if (file == NULL)
    {
        printf("Unable to create file\n");
    }
    return file;
}

int main(int argc, char* argv[])
{
    // Opens card.raw in read-only mode
    FILE* file = fopen("card.raw", "r");

    // Error handling
    if (file == NULL)
    {
        printf("Could not open card.raw\n");
        return 1;
    }

    // Gets the size of file in bytes and stores in sz
    fseek(file, 0L, SEEK_END);
    int sz = ftell(file);
    fseek(file, 0L, SEEK_SET);

    // A true or false for determining whether to write the block or not
    int writing = -1;

    // To store the 512 bytes block
    uint32_t* block = malloc(512);

    FILE* currentFile = NULL;

    for (int i = 0, blockSize= sz / 512, fileSeq = 0; i < blockSize; i++)
    {
        // Reads a block
        fread(block, 512, 1, file);

        // Checks for a JPEG pattern
        if (block[0] == 0xe0ffd8ff || block[0] == 0xe1ffd8ff)
        {
            // Closes the previous file if opened
            if (currentFile != NULL)
            {
                fclose(currentFile);
            }

            // Creates a new file and stores it in current file
            currentFile = newFile(fileSeq);

            // Increment the file sequence
            fileSeq++;

            // Start writing the blocks
            writing = 1;
        }

        // Writes the block when told to
        if (writing > 0)
        {
            fwrite(block,512,1,currentFile);
        }
    }
    // Set it free
    free(block);
    fclose(currentFile);
    fclose(file);
    return 0;
}
