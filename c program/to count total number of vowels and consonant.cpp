#include<stdio.h>
int main(){
char str[50];
int i,vol=0,cons=0;
printf("enter your name=");
gets(str);
i=0;
while(str[i]!='\0'){
if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
{
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'str[i]=='O'||str[i]=='U')
vol++;
else
cons++;
}
i++;
}
printf("\n total vowels=%d and total consonant=%d",vol,cons);
return 0;
}
