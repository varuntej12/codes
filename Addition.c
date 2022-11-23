////addition of digits
#include<stdio.h>
int main()
{
    int s=0,n,m;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    while(n!=0)
    {
        m=n%10;
        s=s+m;
        n=n/10;
        
    }
       printf("%d",s);
    
    return 0;
    
}
