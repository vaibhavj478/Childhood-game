#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

char random()
{
    int rando = (rand() % 100 + 1);
    if (rando < 33)
        return 's';
    else if (33 < rando && rando > 66)
        return 'p';
    else
        return 'r';
}

int function_cmp(char user, char comp)
{
    if (user == comp)
    {
        return 0;
    }

    if (user == 's' && comp == 'r')
    {
        return -1;
    }
    else if (user == 's' && comp == 'p'){
        return 1;}

         if (user == 'p' && comp == 's')
    {
        return -1;
    }
    else if (user == 'p' && comp == 'r'){
        return 1;}

         if (user == 'r' && comp == 'p')
    {
        return -1;
    }
    else if (user == 'r' && comp == 's'){
        return 1;}
        
}

int main()
{
    int result;
    char user_char;
    char comp_char;

    printf("Enter Rock(r)/Paper(p)/Seccior(s):");
    scanf("%c", &user_char);

    srand(time(0));

    comp_char = random();

printf("You enter : '%c' Copmuter enter '%c'",user_char,comp_char);
    result = function_cmp(user_char, comp_char);
    if(result==0){
        printf("Drwa!");
    }
    else if(result==1){
        printf("You Win!");
    }
    else{
        printf("You Loss!");
    }

    return 0;
}