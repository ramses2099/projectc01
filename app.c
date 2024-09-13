#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int main() {
    system("cls");
    
    int x = 10;
    int *ptr = &x;
    printf("the value of x = %d\n", x);
    printf("the value od the ptr = %d", *ptr);

    *ptr = 20;
    printf("\nNow the value of x = %d\n", x);
    printf("the value of the ptr = %d", *ptr);
    
    return 0;
 
}
