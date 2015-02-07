#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tc, i, j;
    scanf("%d", &tc);
    int array[tc];
    int cycle[tc];
    for (i = 0; i < tc; i++){
        array[i] = 1;
        scanf("%d", &cycle[i]);
    }
    for (i = 0; i < tc; i++){
        for (j = 0; j < cycle[i]; j++){
            if (j != 0 && (j+1) % 2 == 0){
                array[i]++;
            }
            else {
                array[i] *=2;
            }
        }
     }

    for (i = 0; i < tc; i++)
        printf("%d\n", array[i]);
    return 0;
}

