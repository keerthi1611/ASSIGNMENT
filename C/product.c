#include <stdio.h>
int main() {
int i,n,res=1;
scanf("%d",&n);
int a[n],temp[n],c[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
    res=res*a[i];
    
}
for(i=0;i<n;i++)
{
    c[i]=res/a[i];
    printf("%d ",c[i]);
}
	return 0;
}
