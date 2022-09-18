//Write a function to find the next prime number of the given number.(TSRS)
#include <stdio.h>
void num(int);
int main()
{
   int n, i, j, c = 0;
   printf("enter the num\n");
   scanf("%d", &n);
   num(n);
   return 0;
}
void num(int n)
{
   int i, j, c = 0;
   for (i = n + 1; i <= 100; i++)
   {
      c = 0;
      for (j = 2; j < i; j++)
      {
         if (i % j == 0)
         {
            c = 1;
            break;
         }
      }
      if (c == 0)
      {
         printf("next prime is:%d", i);
         break;
      }
   }
}
