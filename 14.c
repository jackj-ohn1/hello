#include <stdio.h>

int main()
{
    int num[100];
    int mid[100];
    int input,i;
    int tmp = 0;
    while(scanf("%d",&input)!=EOF && input<100)
    {
        if (input==0)
            break;
        for (i=0;i<input;i++)
        {
            scanf("%d",&num[i]);
            mid[i]=num[i];
        }

        for (i=0;i<input-1;i++)
        {
            for (int j=i+1;j<input;j++)
            {
                if (mid[i]<mid[j])
                {
                    tmp = mid[i];
                    mid[i]=mid[j];
                    mid[j]=tmp;
                }
            }
        }

        for (i=0;i<input;i++)
        {
            if(mid[input-1]==num[i])
            {
                tmp = num[i];
                num[i]=num[0];
                num[0]=tmp;
            }
       }

       for (i=0;i<input;i++)
       {
            printf("%d ",num[i]);
       }
       printf("\n");
    }
    return 0;
    
}
