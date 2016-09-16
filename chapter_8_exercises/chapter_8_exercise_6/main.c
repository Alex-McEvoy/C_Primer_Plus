#include <stdio.h>
#include <ctype.h>
char get_first(void);

int main()
{
    int ch;

    ch = get_first();

    printf("%c\n", ch);




    return 0;
}

char get_first(void)
{
    char ch;

    while((ch = getchar()))
    {
        if(!isspace(ch))
            break;
        else
            continue;
    }

    return ch;

}
