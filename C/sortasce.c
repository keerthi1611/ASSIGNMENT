#include <stdio.h>

int main() {
int n,i,j,temp,found,pos;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
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

for(i=0;i<n-i-1;i++)
{
    printf("%d\n",a[i]);
}
	return 0;
}
