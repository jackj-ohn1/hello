#include <stdio.h>

int main()
{
    int input ,i;
    int sen[1000] = {0};
    while(scanf("%d",&input)!=EOF&&input>=1&&input<=1000)
    {
        for (i=0;i<input;i++)
        {
            scanf("%d",&sen[i]);
        }
        sen[input] = '\0';
        for (i=0;i<input;i++)
        {
               printf("%c",sen[i]);
        }
        break;
    }
    return 0;
}
