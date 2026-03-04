#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    printf(" 1 = Guesser : Player.\n 2 = Guesser : Bot.\n >> ");
    int action;
    scanf("%d",&action);
    
    if(action==1){
    printf(" Guess the number between 1-100\n");
    srand(time(0));
    int number = rand() % 100+1,guess_count = 0;
    while(true){
        guess_count++;
        int guess;
        printf(" Guess = ");
        scanf("%d",&guess);
    
        if(guess < number)
            printf(" Higher\n");
        else if(guess > number)
            printf(" lower\n");
        else{
            printf(" Correct guess!\n");
            break;
        }
    }
    printf("\n You took %d guesses to get correct!",guess_count);
    }
    
    
    
    else if(action==2){
        printf(" \nChoose a number for bot to guess between 1-100.\n >> ");
        srand(time(0));
        int choosen_num,min = 1, max = 100;
        scanf("%d",&choosen_num);
        while(true){
            int bot_guess = rand() % (max - min + 1) + min,tell;
            
            printf(" --------\n Bot : %d\n --------\n",bot_guess);
            if(bot_guess == choosen_num){
                printf("\n--------------------------------------\n BOT WINS, BOT GUESSED CORRECT NUMBER.\n --------------------------------------");
                break;
            }
            
            printf(" 1 = Number is higher.\n 2 = Number is lower\n >> ");
            scanf("%d",&tell);
            if(tell==1){
                min = bot_guess;
            } else if(tell==2){
                max = bot_guess;
            }
            printf("\n");
        }
    }
}