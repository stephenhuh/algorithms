#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void euler(int T, int *ar) {
    int idx, i = 3;
    int sum = 0;
    for (idx = 0; idx < T; idx++){
        while (i < ar[idx]){
            if (i % 3 == 0 || i % 5 == 0)
                sum += i;
            i++;
        }
        printf("%d\n", sum);
    }
}

int main() {
    int T, i;
    scanf("%d", &T);
    int ar[T];
    for (i=0; i<T; i++){
        scanf("%d", &ar[i]);
    }
    euler(T, ar);
    return 0;
}

