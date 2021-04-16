//program to insert in an array in a given position
//just for the git commit
//adding comment for second git commit
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[100],len,num,pos,i;

printf("enter the lenght of the array \n");
scanf("%d", &len);
printf("enter the element of the array \n");
for(i=0;i<=len-1;i++)
{
scanf("%d", &a[i]);
}
printf("the elements of the array are: \n");
for(i=0; i <= len-1; i++)
{
printf("%d",a[i]);
printf("\n");
}
printf("enter the position to insert the number \n");
scanf("%d",&pos);
printf("enter the number to insert in the array \n");
scanf("%d",&num);

--pos;
insert_array(a,pos,num,len);     //function calling
return 0;
}

//function to insert in a given position
insert_array(int a[],int pos,int num,int len)
{
for(int i=len;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=num;

if (pos>len)
{
printf("the element cannot be inserted\n");
}
len++;
printf("new array is:");
for(int i=0;i<len;i++)
{
printf("\n%d\n",a[i]);
}

}

