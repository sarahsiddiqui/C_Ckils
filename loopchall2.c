#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char **argv){

    // declare and intilaize variables
    //number they guess
    int guessnum = 0;
    //time variables
    int t = 5;
    //store a random number (between 0-20) in the an int varaibles
    int randomnum = rand() % 21;

    //communicate with the player
    printf ("Guess a number between 0 and 20: ");
    scanf ("%d", &guessnum);

     //construct loop for player to  guess the number
     for (int i =0; i<=t; ++i){
         if (guessnum == randomnum){
             printf ("Congratulations! You guessed the correct number %d!", randomnum);
        }
        else{
            t -= 1;
            printf ("You have %d tries left, enter a guess: ", t);
            scanf ("%d", &guessnum); 
        } 
     }
    
    return 0;
}

