//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>
void main()
{ float h,b,d,v;
  puts("Enter the height:");
  scanf("%f", &h);
  puts("Enter the breadth:");
  scanf("%f", &b);
  puts("Enter the depth:");
  scanf("%f", &d);
  printf("The volume of the tromboloid is %f", ((h*d*b) + ( d/b))/3);
}
