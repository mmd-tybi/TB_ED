#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{

    unsigned short int value = 0;

    // printf("%s", argv[1]);

    if (argc > 1)
    {
        // printf("%c", argv[1][4]);
        for (unsigned short int i = 0; i < (argc - 1); i++)
        {
            for (unsigned short int j = 0; j < 8; j++)
            {
                if (argv[i + 1][j] == '1')
                {
                    value += pow(2, (7 - (j)));
                }
                else
                {
                    continue;
                }
            }
            printf("%c", (char)value);
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