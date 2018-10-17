#include<stdio.h>
int main()
{
int num,count=0;
int rem,i;
int rev=0;
int pri;
int a[34];
int qri;
printf("enter the starting number");
scanf("%d",&pri);
printf("enter the ending number");
scanf("%d",&qri);
for(i=pri;i<=qri;i++)
{
printf("enter the number");
scanf("%d",&a[i]);
}
for(i=pri;i<=qri;i++)
{
num=a[i];
rev=0;
while(num>0)
{
rem=num%10;
rev=rem+rev*10;
num=num/10;
}
num=a[i];
printf("%d\n",rev-num);
if((rev-num)%2==0)
{
count=count+1;
}
}
printf(" the final answer %d",count);
return 0;
}






