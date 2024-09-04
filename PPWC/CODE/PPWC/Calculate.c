#include <stdio.h>
int main()
{
      float a, b, sum, prod, div;
      
      printf("Enter 1st number : ");
      scanf("%f", &a);
      printf("Enter 2nd number : ");
      scanf("%f", &b);
      
      sum = a + b;
      prod= a * b;
      div = a / b;
      
      printf("  Sum    : %f\n", sum);
      printf("Product  : %f\n", prod);
      printf("Quotient : %f\n", div);
      
}
