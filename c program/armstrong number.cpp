#include<stdio.h>
int main(){
int i,sum=0,x;
printf("/n enter the number to check");
scanf("%d",&i);x=i;
while(i>0){
sum=sum+(i%10)*(i%10)*(i%10);
i=i/10;
}
  if(sum==x)
  printf("/n the number is armstrong");
  else		
  printf("/n not a armstrong number");
  return 0;
}






