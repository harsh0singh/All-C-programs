#include<stdio.h>
int main(){
int a[5],i,freq=0,key;
for(i=0;i<5;i++){
printf("/n enter the number");
scanf("%d",&a[i]);
}
printf("/n  enter the number to find frequency");
scanf("%d",&key);
for(i=0;i<5;i++)
if(a[i]==key)
freq++;
printf("/n frequency of %d is %d",key,freq);
return 0;
}
