#include <stdio.h>
int main()
{
      float a, b, c, avg;
      
      printf("Enter 1st number : ");
      scanf("%f", &a);
      printf("Enter 2nd number : ");
      scanf("%f", &b);
      printf("Enter 3rd number : ");
      scanf("%f", &c);
      
      avg = (a + b + c) / 3;
      
      printf("Average : %f\n", avg);
      
}
