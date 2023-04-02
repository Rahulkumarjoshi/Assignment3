#include <stdio.h>
int main()
{
   int f, s, *p, *q, sum;

   printf("Enter two number\n");
   scanf("%d%d", &f, &s);

   p = &f;
   q = &s;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}