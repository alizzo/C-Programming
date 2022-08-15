/* The first code listing from chapter 3 of the absolute beginner's guide to C programming */

#include <stdio.h>
int main()
{
float gift1, gift2, gift3, gift4, gift5; /* variables to hold cost */
float total; /*variable to hold the total amount*/
/*Ask for each gift amount*/
printf("How much do you want to spend on your Mom?");
scanf(" %f",&gift1);
printf("How much do you want to spend on your Dad?");
scanf(" %f",&gift2);
printf("How much do you want to spend on your Sister?");
scanf(" %f",&gift3);
printf("How much do you want to spend on your brother?");
scanf(" %f",&gift4);
printf("How much do you want to spend on your favorite...");
printf("Alexander?");
scanf(" %f",&gift5);

total = gift1 + gift2 + gift3 + gift4 + gift5;   /*Computes total amount spend on gifts*/
printf("\nThe total you will be spending on gifts is $%.2f", total);
return 0; /*ends program*/
}
