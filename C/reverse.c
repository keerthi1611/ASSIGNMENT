#include <stdio.h>
#include<string.h>
int main() {
    char str[50];
    gets(str);
    int n,i;
    n=strlen(str);
   for(i=n-1;i>=0;i--)
   {
       
       printf("%c",str[i]);
   }
   printf("\n");
   for(i=n-1;i>=0;i--)
   {
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
       {
           continue;
       }
         else
         {
           printf("%c",str[i]);
       }
   }
	return 0;
