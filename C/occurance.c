#include <stdio.h>
#include<string.h>
int main() {
	char str[50];
	gets(str);
	 int i,j,count=1;
	int n=strlen(str);
	for(i=0;i<n;i++)
	{
	    count=1;
	    if(str[i]=='+')
	    {
	        continue;
	    }
	    for(j=i+1;j<n;j++)
	    {
	        if(str[i]==str[j])
	        {
	        count++;
	        str[j]='+';
	       }
	        
	        
	    }
	  printf("%c-%d\n",str[i],count); 
	}
	
	 
	return 0;
}
