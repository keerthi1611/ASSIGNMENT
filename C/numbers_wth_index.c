#include<stdio.h>
int main()
{
    int i,n,j,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Numbers with same index:\n");
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            printf("%d\n",a[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("after sorting:\n");
     for(i=0;i<n;i++)
     {
         
         printf("%d\n",a[i]);
     }
    return 0;
}
