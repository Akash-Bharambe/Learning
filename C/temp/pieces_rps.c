#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char pc_op()
{
    char pc_op;
    srand(time(NULL));

    switch (rand() % 3)
    {
    case 0:
        pc_op = 'r';
        break;
    case 1:
        pc_op = 'p';
        break;
    case 2:
        pc_op = 's';
        break;
    default:
        break;
    }
    return pc_op;
}

char user_ip()
{
    char user_ip;
    printf("\nPress\'r\' for rock\nPress\'p\' for paper\nPress\'s\' for scissors\nEnter your Choice: ");
    scanf(" %c",&user_ip);
    return user_ip;
}

int score(char user_choice, char pc_choice, char *name){
    static int score_pc=0,score_user=0;
    if ((user_choice=='r' && pc_choice == 'r')||(user_choice=='p' && pc_choice == 'p')||(user_choice=='s' && pc_choice == 's'))
    {
        printf("\nThis round is Draw\nPC: %d\t%s: %d",score_pc,name,score_user);
    }
    else if ((user_choice=='r' && pc_choice == 's')||(user_choice=='p' && pc_choice == 'r')||(user_choice=='s' && pc_choice == 'p'))
    {
        score_user++;
        printf("\n%s wins this round\nPC: %d\t%s: %d",name,score_pc,name,score_user);
        
    }
    else if ((user_choice=='r' && pc_choice == 'p')||(user_choice=='p' && pc_choice == 's')||(user_choice=='s' && pc_choice == 'r'))
    {
        score_pc++;
        printf("\nPC wins this round\nPC: %d\t%s: %d",score_pc,name,score_user);
    }
    return score_user > score_pc ? score_user : score_pc;
}

int main()
{
    char name[10];
    int rounds,i=0;
    printf("Enter Your Name: ");
    scanf("%s",name);
    while (i<3)
    {
        char user_choice = user_ip();
        char pc_choice = pc_op();
        score(user_choice, pc_choice, name);
        i++;
    }
    return 0;
}
