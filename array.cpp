#include <iostream>
#include "array.h"


void displayArray(int array[]) {
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
void enterData(int array[]){
    printf("Enter data into array\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("array[%d] = ", i);
        scanf("%d", &array[i]);
    }
}
int findMaximumValue(int array[]) {
    int max = array[0];
    for (int i = 0; i < SIZE; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}
int findMinimmumValue(int array[]) {
    int min = array[0];
    for (int i = 0; i < SIZE; ++i){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}
float calcuateAverage(int array[]){
    int sum = 0;
    for(int i = 0; i < SIZE; ++i){
        sum += array[i];
    }
    float average = (float) sum/SIZE;
    return average;
}

void swapElements(int array[], int a, int b){

    int tmp = array[a];
    array[a] = array[b];
    array[b] = tmp;
}
void bubbleSort(int array[]){

    for( int i=0; i<SIZE; i++ ){
        for( int j=0; j<SIZE-i; j++ ){
            if( array[j] > array[j+1] ){
                swapElements( array, j, j+1 );
            }
        }
    }
}
float findMedian( int array[]){
    bubbleSort( array);
    return ( array[SIZE/2 - 1] + array[SIZE/2] )/2;
}