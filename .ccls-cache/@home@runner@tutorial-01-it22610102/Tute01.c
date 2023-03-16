/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) 
{
  float subject1;
  float subject2;
  float total,avarage;

  printf("Enter frist subject mark :");
  scanf("%f",&subject1);

  printf("Enter Second subject mark :");
  scanf("%f",&subject2);

  total=subject1+subject2;

  avarage=total/2;

  printf("Average is %.2f",avarage);
  
  



  
  return 0;
}

