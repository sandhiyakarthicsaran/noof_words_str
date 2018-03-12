#include<stdio.h>
#include<conio.h>
int main()
{
int count=0,i,n;
char a[77];
gets(a);
n=strlen(a);
for(i=1;i<=n;i++)
{
if(a[i]==' ')
count=count+1;
}
printf("%d\n",count+1);
return 0;
}
