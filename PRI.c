#include<stdio.h>
#include<conio.h>
int main (void)
{
    char exit_char = '\0';
    puts ("Entering main()");

    while (1)
    {
        printf ("Please enter your choice: ");

        exit_char = getchar();
        if (exit_char == 'Q')
            break;

        f1();
    }
    return 0;
}
