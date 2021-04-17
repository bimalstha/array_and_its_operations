//program to merge two sorted array

#include<stdio.h>
int main ()
{
int i,array1[100],len1,array2[100],len2,array3[100],len3;
printf("enter the length of array1 \n");
scanf("%d",&len1);
printf("enter the sorted elements of array1\n");
for(i=0;i<len1;i++)
{
scanf("%d",&array1[i]);
}
printf("enter the length of array2\n");
scanf("%d",&len2);
printf("enter the sorted elements of array2\n");
for(i=0;i<len2;i++)
{
scanf("%d",&array2[i]);
}
int m=0;
int n=0;
int c=0;
while((m<len1)&&(n<len2))
{
    if (array1[m]<=array2[n])
    array3[c]=array1[m++];
    else
    array3[c]=array2[n++];
    c++;
}
if (m<len1)
{
array3[c]=array1[m];
m++;
c++;
}
 if (n<len2)
 {
 array3[c]=array2[n];
 c++;
 n++;
 }
 //now printing the merged array
 len3=len1+len2;
 printf("the elements of the merged array are:\n");
 for(i=0;i<len3;i++)
 {
 printf("%d",array3[i]);
 }

}
