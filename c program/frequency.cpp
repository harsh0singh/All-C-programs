#include<stdio.h>
int
 main(){
int n,i,freq[30]={0};
for(i=0;i<10;i++){
printf(" enter the number");
scanf("%d",&n);
if(n>70)
freq[n-71]++;
}
for(i=0;i<30;i++){
if(freq[i]>0)
printf("%d marks was scored by %d student\n",i+71,freq[i]);
}
}
