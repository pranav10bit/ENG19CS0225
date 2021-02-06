//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int a,b, res;
void input()
{   puts("Enter first number");
    scanf("%d", &a);
    puts("Enter second number");
    scanf("%d", &b);
}

int result()
{   res = a+b;
    return res;
}

void output(int res)
{   printf("The sum of %d and %d is %d", a, b, res);
}

void main()
{   input();
    output(result());
}
  

