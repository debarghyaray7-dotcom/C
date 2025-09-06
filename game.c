/*We will write a program that generates a random number and ask the player to guess it.
If the player's guess is higher than the actal number, the program displays "Lower number
please". Similarly if the user's guess is too low, the program prints "Higher number please".
When the user guesses the correct number, the program displays the number of guesses the player
used to arrive at the number*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int Random_Number = (rand() % 100) + 1;
    int No_of_g = 0;
    int guessed_number;

    printf("Welcome to the Number guessing game\n");
    printf("I am thinking a number between 1 to 100 and if guessed out of that range that attempt will be counted\n");
    do
    {
        printf("Guess the number:\n");
        scanf("%d", &guessed_number);

        if (guessed_number > 100)
        {
            printf("Please enter a number between 1 to 100");
        }

        else if (guessed_number < Random_Number)
        {
            printf("Higher nummber please!\n");
        }
        
        else if (guessed_number > Random_Number)
        {
            printf("Lower number please!\n");
        }
        
        else
        {
            printf("Congrats you guessed the right number!");
        }
        No_of_g++;

    } while (guessed_number != Random_Number);
    printf(" in %d guesses\n", No_of_g);

    return 0;
}