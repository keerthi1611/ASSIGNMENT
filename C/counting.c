#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	gets(str);
	int n=strlen(str),count=0,count1=0,i;
	for(i=0;i<n;i++)
	{
	
	if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
	{
		count++;
	}
	else
	{
		count1++;
	}
}
printf("alphabets=%d\n",count);
printf("numbers=%d",count1);

	return 0;
}
