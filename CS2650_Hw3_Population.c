/*
 ============================================================================
 Name        : CS2650_Hw3_Population.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main() {

   double birthRate;
   double startingPopulation;
   double deathRate;
   int numYears;
   int endPopulation;

   printf("Enter starting population size: \n");
   fflush(stdout);
   scanf("%lf", &startingPopulation);

   while (startingPopulation < 2)
   {
   	printf("Do not accept numbers less than 2 for the starting size. Please re-enter\n");
    fflush(stdout);
    scanf("%lf", &startingPopulation);
   }


   printf("Enter annual birth rate in percentage: \n");
   fflush(stdout);
   scanf("%lf", &birthRate);
   while(birthRate < 0)
   {
   	printf("Birth rate cannot be a negative number: Please enter again\n");
   	fflush(stdout);
   	scanf("%lf", &birthRate);
   }

   printf("Enter annual death rate in percentage \n");
   fflush(stdout);
   scanf("%lf", &deathRate);

   while (deathRate < 0)
   {
	 printf("Death rate cannot be negative Enter number again.\n");
     fflush(stdout);
     scanf("%lf", &deathRate);
   }

   printf("Enter number of years: \n");
   fflush(stdout);
   scanf("%d", &numYears);

   while (numYears < 1)
   {
     printf("Years need to be larger than 1 year. Please re-enter.\n");
     fflush(stdout);
     scanf("%d", &numYears);
   }
   endPopulation = (startingPopulation + ((birthRate/100)*startingPopulation) - ((deathRate/100)*startingPopulation))*numYears;

   printf("The new population size will be: %d", endPopulation);
   return 0;
}
