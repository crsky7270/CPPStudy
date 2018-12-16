#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    print_line("Hello World!");
    return 0;
}

void print_line(char *str)
{
    if (str != NULL)
    {
        printf("%s\r\n", str);
    }
    else
    {
        printf("null_string\r\n");
    }
}
