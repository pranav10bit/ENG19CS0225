#include<stdio.h>
typedef struct
{   int n,d;
}fraction;

fraction input(int n)
{   fraction f;
    printf("Enter the numerator for fraction %d\n",n);
    scanf("%d",&f.n);
    printf("Enter the denominator for fraction %d\n",n);
    scanf("%d",&f.d);
    return f;
}

int gcd(int n, int d)
{
    int temp;
    while (n)
    {   temp=n;
        n=d%n;
        d=temp; 
    }
    return d;
}

fraction compute(fraction ans, fraction f1, fraction f2)
{   ans.n=(f1.n*f2.d)+(f2.n*f1.d);
    ans.d=f1.d*f2.d;
    int g;
    g = gcd(ans.n,ans.d);
    ans.n=ans.n/g;
    ans.d=ans.d/g;
    return ans;
}

void output(fraction f1, fraction f2, fraction ans)
{    printf("The sum of %d/%d and %d/%d is %d/%d\n",f1.n,f1.d,f2.n,f2.d,ans.n,ans.d);
}

void main()
{   fraction f1,f2,ans;
    f1=input(1);
    f2=input(2);
    ans=compute(ans,f1,f2);
    output(f1,f2,ans);
}
