#include<stdio.h>
int main(){
int a[3][3],i,j,sum;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
printf("\n ener the 2d value of array");
scanf("%d",&a[i][j]);
}
printf("\n enter the 2d element are");
for(i=0;i<3;i++){
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
}
for(i=0;i<3;i++){
sum=0;
for(j=0;j<3;j++)
sum=sum+a[i][j];
printf("\n sum of rows %d is %d",i+1,sum);
}
for(i=0;i<3;i++){
sum=0;
for(j=0;j<3;j++)
sum=sum+a[i][j];
printf("\n sum of column %d is %d",i+1,sum);
}
return 0;
}





