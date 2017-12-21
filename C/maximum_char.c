#include<stdio.h>
#include<string.h>
int main()
{
    char ch[50];
    gets(ch);
    int i,cou[50],j,a=0;
    int n=strlen(ch);
    for(i=0;i<n;i++)
    {
        cou[i]=1;
   if(ch[i]=='+')
   {
       continue;
   }
        for(j=i+1;j<n;j++)
        {
            if(ch[i]==ch[j])
            {
               cou[i]=cou[i]+1;
                ch[j]='+';
            }
            
        }
        
        a++;
    }
  
    
    for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(cou[i]>cou[j])
             printf("%c\n",ch[i]);
              break;
         }
       
     }
    }
