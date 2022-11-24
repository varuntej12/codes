#include<stdio.h>
void main()
{
    int a[1000],n,large=0;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    int small=a[0];    
    for(int i=1;i<=n;i++)
    {
        
        if(small>a[i])
        {
            small=a[i];
        }
        
    }
        
    for(int i=1;i<=n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
        
    }
        
        printf("small=%d\n",small);
        printf("large=%d\n",large);    
       
}
