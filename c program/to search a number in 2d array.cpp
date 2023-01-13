#include<stdio.h>
int main(){
int a[3][3],i,j,key;
for(i=0;i<3;i++)
for(j=0;j<3;j++){
printf(" enter the  value in 2d array");
scanf("%d",a[i][j]);
}
printf("enter the 2d element are");
for(i=0;i<3;i++)
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",a[i][j]);
}
printf("\n enter the number to search");
scanf("%d",&key);
for(i=0;i<3;i++)
for(j=0;j<3;j++)
{
if(a[i][j]==key){
printf("number found a%d%d pos",i,j);
return 0;
}
printf("nuber are not found");
return 0;
}


