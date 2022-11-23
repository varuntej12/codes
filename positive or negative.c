////positive or negative
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    
    if(n>0)
    printf("Positive number");
    else if(n==0)
    printf("Given number is 0");
    else
    printf("Negative number");
    return 0;
    
}
