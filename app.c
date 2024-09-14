#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// pass arguments to reference min, max
void minMax(int arr[], int len, int *min, int *max){
    *min = arr[0];
    *max = arr[0];
    
    for(int i = 1; i < len; i++){
        if(arr[i] < *min)
            *min = arr[i];
        else if(arr[i] > *max)
            *max = arr[i];
    }
}

// function returns pointer
int *findMid(int arr[], int len){
    return &arr[len/2];
}

// function returns the sum of elements in array using pointer
int sumSeries(int arr[], int len){    
    int sum = 0, *p;

    for(p = &arr[0]; p <= &arr[len-1]; p++){
        sum += *p;
    }
   
    return sum;
}

// function reverses the order of elements in array using pointer
void reversedSeries(int *arr, int len){
    int temp = 0;
    for (int i = 0; i < len/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}


int main() {
    system("cls");
    int arr[] ={1, 7, 11, 12, 13, 14, 15, 17, 18, 19};
    int len = sizeof(arr) / sizeof(arr[0]);

    int *p = &arr[0];
    printf("%p\n", p);
    

    return 0;
 
}
