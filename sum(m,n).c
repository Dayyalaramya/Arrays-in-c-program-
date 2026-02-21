#include<stdio.h>
int add( int i,int n,int sum)
{
if(i>n)
{
return sum;
}
sum=sum+i;
add(i+1,n,sum);
}
int main()
{
int m,n;
int sum=0;
printf("enter the start and end range\n");
scanf("%d%d",&m,&n);
int res=add(m,n,0);
printf("res=%d\n",res); 
return 0;
}