#include<stdio.h>
int main()
{
	int n,true=1,false=0;
	scanf("%d",&n);
	int a[n],i,var=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int b=a[n-1];     
	for(i=0;i<n;i=i+var)
	{
		var=a[i+a[i]];
	
		if(a[i+a[i]]==b)
		{
			//return true;
			printf("true");
		}
	
		else
		{
			
			
			continue;
		}
	
	}


}
