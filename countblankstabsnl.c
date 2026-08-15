#include <stdio.h>

int main()
{
    int c;
    int nl = 0;
    int tabs = 0;
    int blanks=0;
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
        ++nl;
        else if(c=='\t')
        ++tabs;
        else if(c==' ')
        ++blanks;

    }
        printf("The number of newline is %d and the number of tabs is %d and the number of blanks is %d",nl,tabs,blanks);
}