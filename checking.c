#include <stdio.h>
#include <string.h>
void parser(char *a)
{
    int in = 0;
    int index = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (a[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            a[index] = a[i];
            index++;
        }
    }
    a[index] == '\0';
    while (a[0] == ' ')
    {
        for (int i = 0; i < strlen(a); i++)
        {
            a[i] = a[i + 1];
        }
    }
    while (a[strlen(a) - 1] == ' ')
    {
        a[strlen(a) - 1] == '\0';
    }
}

int main()
{
    char a[] = "  <h1>   this is a parser   </h1>  ";
    parser(a);
    printf("Parsed String Is : ~~%s~~", a);
    return 0;
}