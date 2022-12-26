#include <stdio.h>
#include <string.h>

void deciToBi(int decimal)
{
    int deci = decimal, i, k, temp[8], result = 0;
    long int pten = 10000000;

    for (i = 0; i < 8; i++)
    {
        temp[i] = deci % 2;
        deci = deci / 2;
    }
    for (i = 7; i >= 0; i--)
    {            
        printf("%d", temp[i]);
    }
}

void main()
{
    char input[50];
    int len;

    printf("Enter your text:- ");
    len = strlen(gets(input));

    for (int i = 0; i < len; i++)
    {
        int num = 0;

        num = input[i];
        deciToBi(num);
        printf(" ");
    }
}