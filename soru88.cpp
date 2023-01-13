#include <stdio.h>
#include <string.h>

int main(void) {
    char ciphertext[1000];
    char key[1000];

    // Sifrelenmis metin ve anahtari kullanicidan aliyoruz
    printf("Sifrelenmis metni giriniz: ");
    fgets(ciphertext, 1000, stdin);
    printf("Anahtari giriniz: ");
    fgets(key, 1000, stdin);

    // Metin ve anahtarin sonundaki '\n' karakterlerini '\0' ile degistiriyoruz
    ciphertext[strlen(ciphertext) - 1] = '\0';
    key[strlen(key) - 1] = '\0';

    // Sifrelenmis metni çözüyoruz
    for (int i = 0; i < strlen(ciphertext); i++) {
        ciphertext[i] = (ciphertext[i] - key[i % strlen(key)] + 26) % 26 + 'A';
    }

    // Çözülmüs metni yazdiriyoruz
    printf("Cozulmus metin: %s\n", ciphertext);

    return 0;
}

