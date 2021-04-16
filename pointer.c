#include<stdio.h>
main()
{
int number[2][2]={{2,4},{8,9}},i=0;
int *ptr;
ptr = &number[0][0];
while(i<4)
{
printf("\t%d\t",*ptr);
ptr++;
i++;
}
int x, *p;
p = &x;
*p =0;
printf("x is %d \n",x);
printf("*p is %d\n",*p);
*p +=1;
printf("x is %d \n ", x);
(*p)++;
printf("x is %d \n",x);
//exit(exit_sucess);
}
