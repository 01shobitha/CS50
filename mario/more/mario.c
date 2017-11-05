#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int h = 0;
    printf("Height:");
    h = get_int();

    while (h < 0 || h > 23)
    {
        printf(" ");
        h = get_int();
    }

    // on each row
    for (int i = 0; i < h; i++)
    {

        for (int s = 0; s < h - i - 1; s++)
        {
            printf(" ");
        }

        //left-side hashtags
        for (int x = h - i - 1; x <= h; x++)
        {
            printf("#");

        }
        // print gap
        printf("  ");

        //right-side hashtags
        for (int x = h - i - 1; x <= h; x++)
        {
                printf("#");
        }


        printf("\n");
    }
    return 0;
}
