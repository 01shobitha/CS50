#include<stdio.h>
#include<cs50.h>
int main(void)
{

    printf("Minutes: ");
    int min=get_int();
    int bot=min*12;
    printf("bottles: %i \n ",bot);

}