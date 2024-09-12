#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//struct
typedef struct{
    char name[20];
    int score;
} User;

int main() {
    system("cls");
    
    User p1;

    strcpy(p1.name, "juan");
    p1.score = 100;

    printf("Player 1 name: %s\n", p1.name);
    printf("Player 1 score: %d\n", p1.score);

 
}
