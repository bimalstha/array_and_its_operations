#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[100],pos,len,i;
printf("enter the length of the array\n");
scanf("%d",&len);
printf("enter the elements for the array\n");
for(i=0;i<len;i++)
{
scanf("%d",&a[i]);
}

printf("the elements are \n");
for(i=0;i<len;i++)
{
printf("%d\n",a[i]);
}

printf("enter the position of element to delete from the array");
scanf("%d",&pos);

deletion_of_array(a,len,pos);
}



//function for deletion of an element in an array

deletion_of_array(int a[],int len,int pos)
{
for(int i=pos-1;i<len;i++)
{
a[i]=a[i+1];
}
if(pos>len)
{
printf("there is no element in this position");
}
len--;
//displaying the array after deletion
for(int i=0;i<len;i++)
{
printf("%d\n",a[i]);
}
}


