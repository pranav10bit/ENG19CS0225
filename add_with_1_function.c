//Write a program to add two user input numbers using one function.
#include <stdio.h>
void main()
{ int a,b;
  puts("Enter first number:");
  scanf("%d", &a);
  puts("Enter second number:");
  scanf("%d", &b);
  printf("Sum of %d and %d is %d", a,b,a+b);
}
