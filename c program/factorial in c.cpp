#include<stdio.h>
int main(){
int i,fac=1;
printf("enter the value of fac");
scanf("%d",&i);
while(i>=1){
fac=fac*i;
i--;
}
printf("factorial numbr is %d",fac);
return 0;
}
