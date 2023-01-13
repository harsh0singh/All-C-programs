#include<stdio.h>
int main(){
char a[50];
int i;
printf("\nenter your name=");
gets(a);
i=0;
while(a[i]!='\0'){
printf("%c",a[i]);
i++;
}
printf("\n total number of character is= %d",i);
return 0;
}

