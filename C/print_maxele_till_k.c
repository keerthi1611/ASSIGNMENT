#include <stdio.h>

int main() {
int n,k,i,max;
scanf("%d %d",&n,&k);
int a[n];
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);  
}
max=a[0];
for(i=0;i<k;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
    
}
printf("%d",max);
	return 0;
}
