// Simple Project 1: Number Guessing Game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int num,guess;
    int count = 1;
    srand(time(0));
    num = rand() % 100+1;
    printf("----------Welcome to the Number Guessing Game----------\n");
    printf("I have chosen a number between 1 and 100\n");
    do{
        printf("Enter Your Guess: ");
        scanf("%d",&guess);
        if(guess > num){
            printf("Lower Number Please!\n");
        }
        else if(guess < num){
            printf("Upper Number Please!\n");
        }
        else{
            printf("Congratulations! You guessed it in %d Attempts.\n",count);
        }
        count++;
    }while(guess != num);
    return 0;
}
