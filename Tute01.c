/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int mark, n, sum;
   float avg;
   
   while(n > 2)
   {
      printf("Enter mark %d, n);
      scanf("%d", &mark);
             
     sum += mark;
   }
   avg = sum / 2;
   printf("Average mark of the two subjects are: %f", avg);
  return 0;
}

