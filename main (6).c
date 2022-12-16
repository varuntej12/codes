#include<stdio.h>
int main()
{
    int num,fact=1;
    printf("Please enter a number to find factorial\n");
    scanf("%d",&num);
    for(int i=num;i>1;i--)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",num,fact);
}