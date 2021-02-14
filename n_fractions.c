//WAP to find the sum of n fractions.
#include <stdio.h>
#include <math.h>
struct fractions
{ int n, d;
};

void input(struct fractions *a, struct fractions *b)
{ puts("Enter the numerator of first fraction:");
  scanf("%d", &a->n);
  puts("Enter the denominator of first fraction:");
  scanf("%d", &a->d);
  puts("Enter the numerator of second fraction:");
  scanf("%d", &b->n);
  puts("Enter the denominator of second fraction:");
  scanf("%d", &b->d);
}


int compute(struct fractions *a, struct fractions *b, struct fractions *ans)
{ ans->n = (a->n*b->d+b->n*b->d);
  ans->d = a->d*b->d;
}

void output(struct fractions *ans)
{ printf("The resultant fraction is is %d / %d", ans->n, ans->d);
}

void main()
{ struct fractions a;
  struct fractions b, ans;
  input(&a, &b);
  compute(&a, &b, &ans);
  output(&ans);
}
