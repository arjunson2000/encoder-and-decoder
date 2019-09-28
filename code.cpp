#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{char s[30];
int i,j;
printf("enter a string: \n");
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
printf("the encoded string is: %s \n",s);

for(i=0;s[i]!='\0';i++)
{
s[i]=s[i]-j;
if(isalpha(s[i]-j))
s[i]=s[i]-j;
else
s[i]=s[i]+(26-j);
}
printf("the decode of encoded string is: %s \n",s);

return 0;
}
