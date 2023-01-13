#include <stdio.h>

int main(void) {
    int n;

    // Dizi boyutunu ve elemanlarini kullanicidan aliyoruz
    printf("Dizi boyutunu giriniz: ");
    scanf("%d", &n);
    int values[n];
    printf("Dizi elemanlarini giriniz: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }

    // Yerel minimumlari ariyoruz
    printf("Yerel minimumlar: ");
    for (int i = 1; i < n - 1; i++) {
        if (values[i] < values[i - 1] && values[i] < values[i + 1]) {
            printf("%d ", values[i]);
        }
    }
    printf("\n");

    return 0;
}

