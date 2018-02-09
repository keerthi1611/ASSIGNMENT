#include<stdio.h>
int main()
{
 
   int i,j,n;
  scanf("%d",&n);
    int a[n];
  scanf("%d",&a[0]);
        printf("%d ",a[0]);
   
   for(i=1;i<n;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]<=a[i-1])
      {
         printf("%d ",a[i]);
      }
      else{
           printf("%d ",a[i-1]);
      }
     
       }
        
   
}
