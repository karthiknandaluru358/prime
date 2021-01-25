#include<stdio.h>
int primenum(int,int);
int main()
{
int num,verify;
printf("enter a number\n");
scanf("%d",&num);
verify=primenum(num,num/2);
if(verify==1)
{
printf("\n given number  is prime");
}
else
{
printf("given number is not a prime");
}
return 0;
}
int primenum(int num,int i)
{
if(i==1)
{
return 1;
}
else
{
if(num%i==0)
{
return 0;
}
else
{
return primenum(num,i-1);
}
}
}