#include<stdio.h>
int main(){
int a[3][3],i,j,sum=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++){
printf("ener the vlue in 2d array");
scanf("%d",&a[i][j]);
}
printf("enter the 2d element are");
for(i=0;i<3;i++){
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
}
for(i=0;i<3;i++)
for(j=0;j<3;j++)
sum=sum+a[i][j];
printf("sumn of 2d array is =%d",sum);
return 0;
}


