#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#define NULL 0
void main ()
{
    int *ptr;
    int i,n, sum=0;
    float avg;
    printf("enter the number");
    scanf("%d", &n);
    ptr = (int *) malloc (n*sizeof(int));
    if (ptr==NULL)
    {
        printf("not available");
        //getch();
        exit(0);

    }
    else
    {
        printf("enter the element");
        for ( i = 0; i < n; i++)
        {
            scanf("%d", ptr + i);
            }
            for ( i = 0; i < n; i++)
            {
                sum =sum+(*(ptr+i));
            }
            printf("the sum is %d ",sum);

        }


    //getch();
}
