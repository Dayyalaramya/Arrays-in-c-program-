#include<stdio.h>
int main()
{int size;
printf("enter the size of the array\n");
scanf("%d",&size);
int a[size];
for(int i=0;i<=(size-1);i++)
{
printf("enter the %d value :\n",(i+1));
scanf("%d",&a[i]);
}
int a1,b1;
int flag=0;
int k;
printf("enter the target sum value\n");
scanf("%d",&k);
for(int i=0;i<(size-1);i++)
{for(int j=0;j<=(size-1);j++)
{
if(a[i]+a[j]==k)
{
a1=a[i];
b1=b[j];
flag++;
}}}
if(flag!=0)
{
printf("a1=%d\t b1=%d\n",a1,b1);
}
else
{
printf("-1");
}
return 0;
}