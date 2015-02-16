#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int ar_size, int *ar){
<<<<<<< HEAD
    int tmp = ar[ar_size-1], i, j; //take last element into tmp
    if (tmp >= ar[ar_size-2]){
        return;
=======
    int tmp = ar[ar_size-1], i, j;
    for (i = 1; i < ar_size; i++){
        if ( ar[ar_size-1-i] > tmp){
            ar[ar_size-i] = ar[ar_size-1-i];
        }
        else 
            ar[ar_size-i] = tmp;
        for (j = 0; j < ar_size; j++)
            printf("%d ", ar[j]);
        printf("\n");
>>>>>>> 5d1c7d348502916dcb71c76a2e180b3fe3d199a2
    }
    else
        for (i = 0; i < ar_size; i++){ //
            if (tmp < ar[ar_size-2-i]){
                ar[ar_size-1-i] = ar[ar_size-2-i];
                for (j = 0; j < ar_size; j++)
                    printf("%d ", ar[j]);
                printf("\n");
            }    
            else  {
                ar[ar_size-1-i] = tmp;
                for (j = 0; j < ar_size; j++)
                    printf("%d ", ar[j]);
                return;
                printf("\n");
            }
        }
}


int main (void){

    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for (_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        scanf("%d", &_ar[_ar_i]);
    }
    
    insertionSort(_ar_size, _ar);

    return 0;
}
