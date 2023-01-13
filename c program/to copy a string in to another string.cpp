#include<stdio.h>
int main(){
char a[50],b[50];
int i;
printf("enter your name=");
gets(a);
i=0;
while(a[i]!='\0'){
b[i]=a[i];
i++;
}
b[i]='\0';
printf("\n copied string=%s",b);
return 0;
}
