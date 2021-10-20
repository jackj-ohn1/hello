#include <stdio.h>

int Count(char arr[100],char flag,int input)
{
    int count = 0;
    for (int i =0;i<100;i++)
    {
        if (arr[i]==flag)
           {
                count++;
           }
    }
    return count;
}

int main()
{
    int input = 0;
    int i = 0;
    char str[100] = {'0'};
    scanf("%d",&input);
    getchar();
    while(input)
    { 
        for (i=0;i<100;i++)
        {
            str[i] = '0';
        }
        for (i=0;i<100;i++)
        {
            str[i] = getchar();
            if(str[i]=='\n')
                break;
        }
        str[i] = '\0';
        char end[6] = {'a','e','i','o','u','\0'};
        for (i=0;i<5;i++)
        {
            printf("%c:%d\n",end[i],Count(str,end[i],input));
        }
        if (input>1)
            printf("\n");
        input--;
    }
    return 0;
}       
