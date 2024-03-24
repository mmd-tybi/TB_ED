#include <stdio.h>
#include <math.h>

char arg_check(char arg[])
{
    if((arg[0] == '-') && (arg[1] == 'b'))
    {
        return 'b';
    }
    else if ((arg[0] == '-') && (arg[1] == 't'))
    {
        return 't';
    }
    else if ((arg[0] == '-') && (arg[1] == 'h'))
    {
        return 'h';
    }
    else {
        return 'o';
    }
}

int main(int argc, char *argv[])
{

    unsigned short int value = 0;

    // printf("%d\n", argc);
    // for(unsigned short int i = 1; i < argc; i++){
    //     printf("%s\n", argv[i]);
    // }

    if ((argc == 1) && (arg_check(argv[1]) == 'b'))
    {
        printf("TBED (Text to Binary decode and vise versa): \n");
        printf("-b: binary input\n");
        printf("-t: text input\n");
        printf("-h: prints this dialog and exits\n");
        printf("\n");
    }

    if ((argc > 1) && (argv[1] != "-b"))
    {
        printf("%s\n", argv[1]);
        for (unsigned short int i = 2; i < argc; i++)
        {
            for (unsigned short int j = 0; j < 8; j++)
            {
                if (argv[i][j] == '1')
                {
                    value += pow(2, (7 - (j)));
                }
                else
                {
                    continue;
                }
            }
            printf("%c", (char)value);
            value = 0;
        }
    }

    // char test_char[] = "01000011";
    // unsigned short int value = 0;
    // for(unsigned short int i = 0; i < 8; i++) {
    //     if(test_char[i] == '1') {
    //         value += pow(2, (7 - i));
    //     } else {
    //         continue;
    //     }
    // }

    printf("\n");

    return 0;
}