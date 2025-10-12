#include <stdio.h>

int main() {
    int n, i, key;
    scanf("%d", &n);

    int arr[1000];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);


    int pos = 0;
    while(pos < n && arr[pos] < key) {
        pos++;
    }

   
    for(i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = key; // insert key
    n++; 


    for(i = 0; i < n; i++) {
        if(i != 0) printf(" ");
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}

