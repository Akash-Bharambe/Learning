#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char pc_op()
{
    char options[] = {'r', 'p', 's'};
    return options[rand() % 3];
}

char user_ip()
{
    char user_ip;
    printf("\nPress\'r\' for rock\nPress\'p\' for paper\nPress\'s\' for scissors\nEnter your Choice: ");
    scanf("%c", &user_ip);
    while (getchar() != '\n')
        ;
    return user_ip;
}

int score(char user_choice, char pc_choice, char *name)
{
    static int score_pc = 0, score_user = 0;
    if ((user_choice == 'r' && pc_choice == 'r') || (user_choice == 'p' && pc_choice == 'p') || (user_choice == 's' && pc_choice == 's'))
    {
        printf("You Choose: %c\nPC Choose: %c", user_choice, pc_choice);
        printf("\n\nThis round is Draw\nPC: %d\t%s: %d\n", score_pc, name, score_user);
    }
    else if ((user_choice == 'r' && pc_choice == 's') || (user_choice == 'p' && pc_choice == 'r') || (user_choice == 's' && pc_choice == 'p'))
    {
        score_user++;
        printf("You Choose: %c\nPC Choose: %c", user_choice, pc_choice);
        printf("\n\n%s wins this round\nPC: %d\t%s: %d\n", name, score_pc, name, score_user);
    }
    else if ((user_choice == 'r' && pc_choice == 'p') || (user_choice == 'p' && pc_choice == 's') || (user_choice == 's' && pc_choice == 'r'))
    {
        score_pc++;
        printf("You Choose: %c\nPC Choose: %c", user_choice, pc_choice);
        printf("\n\nPC wins this round\nPC: %d\t%s: %d\n", score_pc, name, score_user);
    }
    if (score_user > score_pc)
    {
        return 1;
    }
    else if (score_pc > score_user)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    srand(time(NULL));
    char name[10], user_choice, pc_choice;
    int rounds, i = 0, result;
    printf("Enter Your Name: ");
    scanf("%9s", &name);
    printf("How many rounds you want to play: ");
    scanf("%d", &rounds);
    while (getchar() != '\n')
        ;

    while (i < rounds)
    {
        user_choice = user_ip();
        if (user_choice == 'r' || user_choice == 'p' || user_choice == 's')
        {
            pc_choice = pc_op();
            result = score(user_choice, pc_choice, name);
            i++;
        }
        else
        {
            printf("\nEnter Valid input\n");
        }
    }

    if (result == 1)
        printf("\n\n********************\n%s wins the game\n********************", name);
    else if (result == -1)
        printf("\n\n********************\nPC wins the game\n********************");
    else
        printf("\n\n********************\nThe game is a draw\n********************");

    return 0;
}
