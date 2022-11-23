//Fibonacci series
#include<stdio.h>
int main()
{
    int sum,n,a=0,b=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        printf(" %d ",a);
        sum=a+b;
        a=b;
        b=sum;
       
        
    }
    return 0;
    
}
