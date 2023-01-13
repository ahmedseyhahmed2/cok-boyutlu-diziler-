#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1000];

    // C�mleyi kullanicidan aliyoruz
    printf("Cumleyi giriniz: ");
    fgets(sentence, 1000, stdin);

    // C�mlenin sonunda bulunan '\n' karakterini '\0' ile degistiriyoruz
    sentence[strlen(sentence) - 1] = '\0';

    // Karakterlerin sayisini tutan dizi
    int counts[256] = {0};

    // Karakterlerin sayisini hesapliyoruz
    for (int i = 0; i < strlen(sentence); i++) {
        counts[(int)sentence[i]]++;
    }

    // En �ok tekrarlanan karakteri buluyoruz
    char most_common;
    int max_count = 0;
    for (int i = 0; i < 256; i++) {
        if (counts[i] > max_count) {
            most_common = (char)i;
            max_count = counts[i];
        }
    }

    // En �ok tekrarlanan karakteri yazdiriyoruz
    printf("En cok tekrarlanan karakter: '%c'\n", most_common);

    return 0;
}

