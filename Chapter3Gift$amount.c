/* The first code listing from chapter 3 of the absolute beginner's guide to C programming */

#include <stdio.h>
int main()
{
float gift 1; gift 2; gift 3; gift 4; gift 5 /* variables to hold cost */
float total; /*variable to hold the total amount*/
/*Ask for each gift amount*/
printf("How much do you want to spend on your Mom?");
scanf("%f",&gift1);
printf("How much do you want to spend on your Dad?");
scanf("%f",&gift2);
printf("How much do you want to spend on your Sister?");
scanf("%f",&gift3);
printf("How much do you want to spend on your brother?");
scanf("%f",&gift4);
printf("How much do you want to spend on your favorite...");
printf("Alexander?")
scanf("%f",&gift5);

total = gift 1 + gift 2 + gift 3 + gift 4 + gift 5;   /*Computes total amount spend on gifts*/
printf("\nthe total you will be spending on gifts is $%.2£", total);
return 0; /*ends program*/
}
