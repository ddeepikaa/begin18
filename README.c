# begin18
#include<stdio.h>
int main()
{
int num=153,safe;
int rem,div,sum=0,pro;
safe=num;
for(num=0;num<=100;num++)
{
while(num!=0)
{
rem=rem%10;
num=num/10;
pro=rem*rem*rem;
sum=sum+pro;
}
if(safe==sum)
printf("%d");
sum=0;
count=0;
}
}
