#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // user input starting population (s) larger than 9
    int s;
    do
    {

        s = get_int("Starting population of llamas: \n");

    }
    while (s < 9);

    //user input ending population size (f)
    int f;
    do
    {

        f = get_int("Ending population of llama: \n");

    }
    while (f < s);


    //number of years until the goal
    int y = 0;
    while (s < f)
    {
        s = s + s / 3 - s / 4;
        y++;
    }

    //print number of years

    printf("Years: %i\n", y);
}
