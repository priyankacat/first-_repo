#include<stdio.h>
int main()
{
int i;
for(i=1;i<26;i++)
{
printf("%d*",i);
if(i>5)
{
i=10;
}
//print("\n");
else if(i>15)
{
i=20;
}
//print("\n");
//i=15;
}
return 0;
}
