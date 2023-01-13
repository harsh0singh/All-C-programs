#include<stdio.h>
int main(){
int a[3][3],i,j,even,odd;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
printf("\n enter the value in 2d array");
scanf("%d",&a[i][j]);
}
printf("2d element array are");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
}
even=odd=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++){
if(a[i][j]%2==0)
even++;
else
odd++;
}
printf("\n total even nmuber=%d and total odd number=%d",even,odd);
return 0;
}
