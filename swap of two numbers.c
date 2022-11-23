////swap of two numbers 
#include<stdio.h>
int main()
{
    int n,m,temp=0;
    printf("Enter the two numbers : ");
    scanf("%d%d",&n,&m);
    temp=n;
    n=m;
    m=temp;
    printf("numbers after swapping %d %d",n,m);
    
    return 0;
    
}
