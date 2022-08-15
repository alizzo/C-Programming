//Example program #1 from Chapter 6 of
// Absolute beginners Guide to C, 3rd Edition
// File Chapter 6ex1.c

// this program pairs three kids with their favorite superhero.

#include <stdio.h>
#include <string.h>

main()
{

char Kid1[12];
//kid1 can hold an 11-character name
//kid2 will be 7 characters (maddie plus null 0
char Kid2[] ="maddie";
//kdi3 is also 7 characters, but specifically defined.
char Kid3[7] = "Andrew";
//Hero1 will be 7 characters (adding null 0!)
char Hero1[7] = "Batman";
//Hero2 will have extra room just in case
char Hero2[34] = "Spiderman";
char Hero3[25];

   Kid1[0] = 'K';   //kid1 is being defined character-by-character
   Kid1[1] = 'a';   // Not effiecent, but it does work
   Kid1[2] = 't';
   Kid1[3] = 'i';
   Kid1[4] = 'e';
   Kid1[5] = '\0';   // never forget the null 0 so C knows when the string ends

//strcopy(Hero3, "The Incredible Hulk");

  printf("%s\'s favorite hero is %s.\n", Kid1, Hero1);
  printf("%s\'s favorite hero is %s.\n", Kid2, Hero2);
  printf("%s\'s favorite hero is %s.\n", Kid3, Hero3);

  return 0;
}
