#include <stdio.h>
#include <string.h>

// Girilen alfasayisal veriyi ters �eviren fonksiyon
void reverse_string(char *str) {
    // I� i�e ge�mis iki d�ng� kullanarak veriyi ters �eviriyoruz
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main(void) {
    char str[100];

    // Alfasayisal veriyi kullanicidan aliyoruz
    printf("Alfasayisal veriyi giriniz: ");
    scanf("%s", str);

    // Veriyi ters �evirip yazdiriyoruz
    reverse_string(str);
    printf("Ters cevrilmis veri: %s\n", str);

    return 0;
}

