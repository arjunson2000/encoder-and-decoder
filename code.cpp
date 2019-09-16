#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{char s[30];
int i,j;
printf("enter the string ");
gets(s);
j=2;
for(i=0;s[i]!='\0';i++)
{
s[i]=s[i]+j;
if(isalpha(s[i]+j))
s[i]=s[i]+j;
else
s[i]=s[i]-(26-j);
}
printf("the string is %s ",s);

for(i=0;s[i]!='\0';i++)
{
s[i]=s[i]-j;
if(isalpha(s[i]-j))
s[i]=s[i]-j;
else
s[i]=s[i]+(26-j);
}
printf("the code is %s ",s);

return 0;
}
