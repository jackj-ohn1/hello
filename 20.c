#include <stdio.h>

int Judge(int n)
{
    if (n%2==0)
        return -1;
    else if (n%2!=0)
        return 1;
}

int main()
{
    int input,i;
    int num[1000]={0};
    scanf("%d",&input);
    for(i=0;i<input;i++)
        scanf("%d",&num[i]);
    for (i=0;i<input;i++)
    {
        float sum=0;
        for (int j =1;j<=num[i];j++)
        {
            sum = sum +(1.0/j)*Judge(j); 
        }
        printf("%.2f\n",sum);
    }
    
    return 0;
}
