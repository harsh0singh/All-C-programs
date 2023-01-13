#include<stdio.h>
int main(){
char a[50];
int i,word=1;
printf("enter your name");
gets(a);
i=0;
while(a[i]!='\0'){
if(a[i]=='')
 word++;
i++;
}
printf("\n total number of word=%d",word);
return 0;
}
