////Armstrong number
#include<stdio.h>
int main()
{
    int s=0,n,m,x;
    printf("Enter the number : ");
    scanf("%d",&n);
    x=n;
    while(x!=0)
    {
        m=x%10;
        s=s+(m*m*m);
        x=x/10;
        
        
        
    }
    
   
     if(s==n)
       printf("Given number is Armstrong number");
     else
       printf("Given number is not a Armstrong number");
      
    
    return 0;
    
}
