#include <stdio.h>
#include <stdbool.h>

// Tamsayinin asal olup olmadigini kontrol eden fonksiyon
bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int upper;

    // Üst siniri kullanicidan aliyoruz
    printf("Upper degerini giriniz: ");
    scanf("%d", &upper);

    // 2 tabani karsiliklarini listeleyip, 1 sayisini ve asal olup olmadiklarini kontrol ediyoruz
    for (int i = 1; i <= upper; i++) {
        int ones = 0;
        int n = i;
        while (n > 0) {
            if (n % 2 == 1) {
                ones++;
            }
            n /= 2;
        }
        printf("%d: %d ones, ", i, ones);
        if (is_prime(ones)) {
            printf("prime\n");
        } else {
            printf("not prime\n");
        }
    }

    return 0;
}

