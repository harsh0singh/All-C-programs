#include<stdio.h>
int main(){
int i,x,y,z;
printf("/n ente the maxium limit");
scanf("%d",&i);
x=0;
y=1;
z=0;
while(z<=i){
printf("%d",z);
x=y;
y=z;
z=x+y;
}
return 0;
}

