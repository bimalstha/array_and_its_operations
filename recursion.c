#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{
if (n == 0)
return 1;
else
return n * factorial(n-1);
}
int main()
{
int n;
printf("enter a number for finding factorial");
scanf("%d",&n);
printf("the factorial is %d",factorial(n));
}

