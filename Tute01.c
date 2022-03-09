/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
   int mark, n , sum;
   float avg;
   
   while(n < 2)
   {
      printf("Enter mark %d: ", n + 1);
      scanf("%d", &mark);
             
     sum += mark;
     n += 1;
   }
   avg = sum / 2.0;
   printf("Average mark of the two subjects are: %f", avg);
  return 0;
}

