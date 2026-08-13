#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len;  /*current line length*/
    int max;  /*maximum length seen so far*/
    char line[MAXLINE]; /*current input line */
    char longest[MAXLINE];
    max = 0;
    while((len = getline(line,MAXLINE))>0)
    {
          if(len>max)
          {
            max = len;
            copy(longest,line);
          }
          if(max>0)
          printf("%s",longest);
        return 0;z
    }
}

int copy(char to[], char from[])
{
    int i =0;
    while(from[i]!=0)
    {
        to[i] = from[i];
        i++;
    }
    to[i] = '\0';
    return i;
}
int  getline(char s[],int lim)
{
    int c,i;
    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';i++)
    s[i]= c;
   if(c=='\n')
   {
      s[i] = c;
      ++i;
   }
   s[i] = '\0';
   return i;
}

int get(char s[])
{
    int j=0;
    int i=getchar();
    while(i!=EOF)
    {
        s[j] = i; 
    }
    i++;
    j++;
}