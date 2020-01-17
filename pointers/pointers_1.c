#include <stdio.h>
void skip(char *msg)
{
    puts(msg+6);
}

int main()
{
    char *msg_f="Don't call me";
    skip(msg_f);
    return 0;
}
