//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
float h,d,b,v;
void input()
{ puts("Enter the height:");
  scanf("%f", &h);
  puts("Enter the breadth:");
  scanf("%f", &b);
  puts("Enter the depth:");
  scanf("%f", &d);
}

float vol()
{ v = ((h*d*b) + ( d/b))/3; 
  return v;
}

void output()
{ printf("The volume of the tromboloid is %f", vol());
}

void main()
{ input();
  output();
}
