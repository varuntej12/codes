#include<stdio.h>
void main()
{
    int a[1000],n,s=0,l=0;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the elements of array \n");
    for(int i=1;i<=n-1;i++)
        scanf("%d",&a[i]);
        
    for(int i=1;i<=n-1;i++)
    {
        
            s=s+a[i];
        
    }
        
    l=l+((n*(n+1))/2);
    printf("%d\n",s);
    printf("%d\n",l);
    printf("%d",l-s);
        
           
       
}
