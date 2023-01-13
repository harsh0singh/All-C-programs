#include<stdio.h>
int main(){
char a[50];
int i;
printf("enter your name=");
gets(a);
i=0;
while(a[i]!='\0')
{
printf("\n total number of cahracter is %d",i);
i++;
}
return 0;
}

