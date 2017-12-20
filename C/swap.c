#include <stdio.h>
#include<string.h>
int main() {
	char a[50],temp;
	int i;
	gets(a);
	int n=strlen(a);

	for(i=0;i<n;i+=2)
	{
	    
	    temp=a[i];
	    a[i]=a[i+1];
	    a[i+1]=temp;
	   
	}
if(n%2!=0)
{
    printf("%s%c",a,temp);
}
else
{
    printf("%s",a);
}
}
