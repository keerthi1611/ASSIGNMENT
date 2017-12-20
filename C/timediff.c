 #include <stdio.h>
#include<time.h>
int main()
{
    int hr[10],min[10],i,j,mins[100],diff;
    for(i=0;i<2;i++)
    {
    scanf("%d",&hr[i]);
    scanf("%d",&min[i]);
    }
    for(j=0;j<2;j++)
    {
        mins[j]=(hr[j]*60)+min[j];
    }
  
    for(i=0;i<1;i++)
    {
    if(mins[i]<mins[i+1])
    {
        diff=mins[i+1]-mins[i];
        printf("%dmins\n",diff);
    }
    else
    {
        diff=mins[i]-mins[i+1];
        printf("%dmins\n",diff);
    }
    }
    int totalhr=(diff/60);
    int totalmin=(diff%60);
    printf("%d:%d",totalhr,totalmin);
    return 0;
}

