#include<stdio.h>
int main(){
int a[10],i,flag=0,key,pos;
for(i=0;i<10;i++){
printf("/n enter the number ");
scanf("%d",&a[i]);
}
 printf("/n enter the number to be search");
 scanf("%d",&key);
 for(i=0;i<10;i++){
 if(a[i]==key){
 pos=i+1;;
 flag=1;
 break;
}
}
 if(flag==1){
 printf("/n number found at %d ,pos");
 
}
  else
 printf("number not found");
 return 0;
}
