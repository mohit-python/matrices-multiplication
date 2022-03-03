#include<stdio.h>
int main(){
int arr1[10][10],arr2[10][10],arr[10][10],r,c,i,j,k;
printf("enter rows of  matrix: \n");
scanf("%d",&r);
printf("enter columns of  matrix: \n");
scanf("%d",&c);

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr1[i][j]);
}
}
printf("Elements of 1st matrix are : ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d  ",arr1[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&arr2[i][j]);
}
}
printf("Elements of 2nd matrix are : ");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d  ",arr2[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
 arr[i][j]=0;
 for(k=0;k<c;k++)
 {
  arr[i][j] =  arr[i][j] + arr1[i][k]*arr2[k][j];
 }
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d  ",arr[i][j]);
}
printf("\n");
}
return 0;
}