#include <stdio.h>

int checkFun(int ch);

int main()
{
    int ch;
    int output;
    printf("Enter letter or character : ");
    // getchar();
    scanf("%d", &ch);

    output = checkFun(ch);
    printf("Output is :  %d", output);
    return 0;
}

int checkFun(int ch)
{
    if (ch >= 0 && 9 <= ch)
    {
        return 1;
    }
    if (ch >= 'a' && 'z' <= ch || ch >= 'A' && 'Z' <= ch)
    {
        return 0;
    }
}