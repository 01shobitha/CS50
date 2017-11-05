#include<stdio.h>
#include<cs50.h>
int main(void)
{

    int height;
    do{
    printf("Height: ");
    height = get_int();
    }
    while (height<0||height>23); // this is to ask the user to input value untill it is right
     for (int l = 0; l< height; l++) // loop for space and hash
    {
          for (int s= height-l; s> 1; s--)
          {
            printf(" ");
        }
        for (int h= 0; h<l+2; h++)
        {
            printf("#");
        }
        printf("\n");
    }
}
