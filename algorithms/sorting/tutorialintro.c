#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int V, n, i;

    scanf("%d", &V);
    scanf("%d", &n);
    
    int ar[n];

    for (i = 0; i < n; i++){
        scanf("%d", &ar[i]);
    }

    for (i = 0; i < n; i++){
        if (V == ar[i])
            printf("%d", i);
    }
    return 0;

}
