#include <iostream>
#include "array.h"
#include "menu.h"


int main() {
    int array[SIZE] = {-17, 2, 3, 40, 5, 6, 7, 8, 9, 10};

    printf("Simple array\n");

    int option = 0;
    do{
        menu();
        scanf("%d", &option);
       switch (option){
           case 0:
               break;

           case 1 :
               enterData(array);
               break;
           case 2:
               displayArray(array);
               break;
           case 3 : {
               int max = findMaximumValue(array);
               printf("Max value is: %d\n", max);
               break;
           }

           case 4 : {
               int min = findMinimmumValue(array);
               printf("Min value is: %d\n", min);
               break;
           }

           case 5 :{
               float average = calcuateAverage(array);
               printf("average value is: %f\n", average);
               break;
           }
           case 6:{
               int a,b;
               printf("Podaj a i b\n");
               scanf("%d %d", &a, &b);

               swapElements(array, a,b);

               break;
           }
           case 7:{
               printf("Sorting\n");

               bubbleSort( array);

               break;
           }
           case 8:{
               printf( "Mediana: %.2f\n", findMedian( array ) );

               break;


           }
           default:
               printf("Choose a correct option \n");

       }
   }while (option != 0);
    printf("The End\n");

    return 0;
}