#include<stdio.h>
int main()
{
    int n, arr[100],i,r,sum=0;
    scanf("%d",&n);
   while(n/10!=0)
   {
       sum=0;
       while(n!=0)
       {
           r=n%10;
           sum=sum+r;
           n=n/10;
       }
       n=sum;
   }
   printf("%d",sum);
}