#include <stdio.h>

int main(void) {
    int upper;

    // �st siniri kullanicidan aliyoruz
    printf("Upper degerini giriniz: ");
    scanf("%d", &upper);

    // 1'den baslayarak �st sinira kadar t�m tamsayilari yazdiriyoruz
    for (int i = 1; i <= upper; i++) {
        printf("%d\n", i);
    }

    return 0;
}

