#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int p=2,x=1,i;
	int d=n/2;
	
	for(i=1;i<=n;i++)
	{
		x=p*x;
		if(x==n)
		{
			printf("yes");
			break;
		}
		else
		{
			continue;
		}
		
	}
	if(x!=n)
	{
	
	printf("no");
	}
	return 0;
	
}
