#include <stdio.h>

int main()
{
   int input;
   long way[1000] = {0};
   while(scanf("%d",&input)!=EOF&&input>1&&input<1000)
   {
        for (int j =0;j<1000;j++)
            way[j]=0;//对数组初始化防止多次运行的结果导致混乱。
        int re = 0;
        way[2] = 2;
        way[3] = 2;
        way[4] = 6;
        for(int i =5;i<=input;i++)
        {
            way[i] = way[i-1]*2 + way[i-2]; 
        }
        re = way[input]%10000;
        int how = way[input]/10000;
        printf("%d+10000*%d\n",re,how);
        printf("\n");
   }
    return 0;
}

