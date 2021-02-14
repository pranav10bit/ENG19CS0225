//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
int x,y;
float dist;

struct points
{ int x, y;
};

void input(struct points *a, struct points *b)
{ puts("Enter the x coordinate of point 1:");
  scanf("%d", &a->x);
  puts("Enter the y coordinate of point 1:");
  scanf("%d", &a->y);
  puts("Enter the x coordinate of point 2:");
  scanf("%d", &b->x);
  puts("Enter the y coordinate of point 2:");
  scanf("%d", &b->y);
}


float compute(struct points *a, struct points *b)
{ dist = sqrt(pow(a->x-b->x,2)+pow(a->y-b->y,2));
  return dist;
}

void output(struct points *a, struct points *b)
{ printf("The distance between the two points is %f",compute(a,b));
}

void main()
{ struct points a;
  struct points b;
  input(&a, &b);
  output(&a, &b);
}
