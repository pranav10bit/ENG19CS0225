//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
int n, a[50], sum=0;
void input()
{   puts("Enter the number of terms to be added");
    scanf("%d", &n);
    puts("Enter the numbers");
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void compute()
{   for(int i=0; i<n; i++)
        sum += a[i];
}

void output()
{   printf("The sum of the %d numbers is %d",n,sum);
}

void main()
{   input();
    compute();
    output();
}
