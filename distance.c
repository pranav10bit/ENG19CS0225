//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>
int x,y,a,b;
float dist;
void input()
{ puts("Enter the x co-ordinate of point 1:");
  scanf("%d", &x);
  puts("Enter the y co-ordinate of point 1:");
  scanf("%d", &y);
  puts("Enter the x co-ordinate of point 2:");
  scanf("%d", &a);
  puts("Enter the y co-ordinate of point 2:");
  scanf("%d", &b);
}

float compute()
{ dist = sqrt(pow(a-x,2)+pow(b-y,2));
  return dist;
}

void output()
{ printf("The distance between the two points is %f",compute());
}

void main()
{ input();
  output();
}
