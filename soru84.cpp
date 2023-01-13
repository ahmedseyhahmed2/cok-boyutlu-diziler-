#include <stdio.h>
#include <string.h>

// Girilen alfasayisal veriyi ters çeviren fonksiyon
void reverse_string(char *str) {
    // Iç içe geçmis iki döngü kullanarak veriyi ters çeviriyoruz
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

    // Veriyi ters çevirip yazdiriyoruz
    reverse_string(str);
    printf("Ters cevrilmis veri: %s\n", str);

    return 0;
}

