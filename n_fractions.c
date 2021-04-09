
#include<stdio.h>
typedef struct
{   int n,d;
}fraction;

fraction input_one()
{   fraction f;
    puts("Enter the numerator for fraction");
    scanf("%d",&f.n);
    puts("Enter the denominator for fraction");
    scanf("%d",&f.d);
    return f;
}

int frac_n()
{   int n;
    puts("Enter the number of fractions");
    scanf("%d",&n);
    return n;
}

void input_n(int n, fraction x[n])
{   for(int i=0; i<n; i++)
        x[i]= input_one();
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

fraction compute_one(fraction f1, fraction f2)
{   fraction ans;
    ans.n=(f1.n*f2.d)+(f2.n*f1.d);
    ans.d=f1.d*f2.d;
    int g = gcd(ans.n,ans.d);
    ans.n=ans.n/g;
    ans.d=ans.d/g;
    return ans;
}

fraction compute_n(int n, fraction x[n])
{   fraction temp;
    temp.n=0;
    temp.d=1;
    for(int i=0; i<n; i++)
        temp = compute_one(temp,x[i]);
    return temp;
}

void output(fraction x[], int n, fraction ans)
{   printf("The sum of the fractions is:");
    for(int i=0; i<n; i++)
        printf("%d/%d ", x[i].n, x[i].d);
    printf("is %d/%d", ans.n, ans.d);    
}

void main()
{   int n = frac_n();
    fraction x[n];
    input_n(n, x);
    fraction final_res;
    final_res = compute_n(n, x);
    output( x, n, final_res);
}
