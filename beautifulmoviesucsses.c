#include<stdio.h>
#include<conio.h
#include<stdlib.h>
void main()
{
int p,num;
int q,k;
int i;
int count=0;
int rev=0;
int rem;
int a[1000];
printf("enter the first elements u want to enter ");
scanf("%d",&p);
printf("enter the second elements u want to enter");
scanf("%d",&q);
printf("enter the value of k");
scanf("%d",&k);
for(i=p;i<=q;i++)
{
    num=i;
    rev=0;
    while(num>0)
    {
        rem=num%10;
        rev=rem+rev*10;
        num=num/10;
    }
    num=i;
    printf("%d\n",rev);
    printf("%d\n",num);
    if((rev-num)%k==0||rev-num==0)
    {   printf("no is found\n");
        count=count+1;
    }
}
printf("%d\n",count);
getch();
}

