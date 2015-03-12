#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//O(n) solution w.o corner
/*
 * void euler(int T, int *ar) {
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
*/

void euler(int T, int *ar){
    long long int i, n1, n2, n3, l1, l2, l3, sum = 0;
    for (i = 0; i < T; i++){
        sum = 0;
        n1 = (ar[i]-1)/3; //3
        n2 = (ar[i]-1)/5; //2
        n3 = (ar[i]-1)/15;
        l1 = n1*3; //9
        l2 = n2*5; //10 
        l3 = n3*15;
        sum += ((n1*(3 + l1))/2) + ((n2*(5 + l2))/2);
        sum -= (n3 * (15 + l3))/2;
        printf("%lld\n", sum);
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

