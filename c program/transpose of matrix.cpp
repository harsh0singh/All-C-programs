#include<stdio.h>
int main(){
int a[2][3],i,j;
printf("enter element in array a");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d",a[j][i]);
}
printf("\n");
}
}
