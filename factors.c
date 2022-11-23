//Factors of given number
#include <stdio.h>
void main()
{
    int n;
    printf("enter the no. you want to find factors \n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
         printf("%d ",i);
    }


}
