#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void) {
    int n;
    int count = 0;
    printf("hai! how much change is owned?");
    n = get_int();
    if (n % 25 == 0)
        printf("%d\n" ,n/25);

    else {
        int x = n % 25;
        count += (n / 25); {
            if(x%10==0)
            {  //to store the number of times x is divisible by 10
            count= count+(x/10);
            }

        else
        { int z= x%10 ;
          count=count+x/10;

          if(z%5==0)
          {
              int a= z/10;
              count= count+a;

          }
          else {
                count=count+ z/5;
               }

            count= count+(z%5);
        }}}
        printf("%d\n", count);
}