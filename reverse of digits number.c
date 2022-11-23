////reverse of digits number
#include<stdio.h>
int main()
{
    int s=0,n,m;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    while(n!=0)
    {
        m=n%10;
        s=m;
        printf("%d",s);
        n=n/10;
        
        
    }
       
    
    return 0;
    
}
