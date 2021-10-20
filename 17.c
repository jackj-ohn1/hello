#include <stdio.h>

int main()
{
    int start,end,i;
    int count = 0;
    int num_line = 0;
    int num[10000] = {0};
    scanf("%d%d",&start,&end);
    for (i=2;;i++)
    {
        int flag = 1;
        for(int j = 2;j<i;j++)
        {
            if(i%j==0)
            {
                flag = 0;
                break;
            }
        }
        if (flag==1)
        {
            count++;
        }
        if (count>=start)
        {
            if (flag)
            {
                num_line++;
                if (num_line<10)
                    printf("%d ",i);
                else if (num_line==10)
                {    
                    printf("%d\n",i);
                    num_line=0;
                }
           }
        }
        if (count==end)
            break;
    }
    return 0;
}
