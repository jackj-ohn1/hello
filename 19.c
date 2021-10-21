#include <stdio.h>
#include <math.h>
int main()
{
    int j,i,input,a,b;
    int re[1000] = {0};
    scanf("%d",&input);
    for (i=0;i<input;i++)
    {
        scanf("%d%d",&a,&b);
        re[i]=a*a+b*b;
    }
    for (i=0;i<input-1;i++)
    {
        for (j=i+1;j<input;j++)
        {
            if (re[i]<re[j])
            {
                int tmp = re[i];
                re[i] = re[j];
                re[j] = tmp;
            }
        }
    }
    double num = sqrt(re[0]);
    printf("%.2lf",num);

    return 0;
}
