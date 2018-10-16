#include<stdio.h>
int main()
{
int num,count=0;
int rem,i;
int rev=0;
int p;
int a[34];
int q;
printf("enter the starting number");
scanf("%d",&p);
printf("enter the ending number");
scanf("%d",&q);
for(i=p;i<=q;i++)
{
printf("enter the number");
scanf("%d",&a[i]);
}
for(i=p;i<=q;i++)
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
printf("%d",count);
return 0;
}






