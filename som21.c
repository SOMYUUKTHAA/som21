#include<stdio.h>
int main()
{
int i,num,tem1=0,tem2=1,nxt;
printf("Enter the number of terms:");
scanf("%d", &num);
printf("FIBONACCI SERIES:");
for (i = 1; i <= num; ++i)
{
printf("%d, ", tem1);
nxt=tem1+tem2;
tem1=tem2;
tem2 =nxt;
}
return 0;
}
