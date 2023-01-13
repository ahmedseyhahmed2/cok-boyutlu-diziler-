#include <stdio.h>
#include <string.h>

int main(void) {
    char sentence[1000];

    // Cümleyi kullan?c?dan al?yoruz
    printf("Cumleyi giriniz: ");
    fgets(sentence, 1000, stdin);

    // Cümlenin sonunda bulunan '\n' karakterini '\0' ile de?i?tiriyoruz
    sentence[strlen(sentence) - 1] = '\0';

    // En k?sa ve en uzun kelimeleri ar?yoruz
    char shortest[50] = "";
    char longest[50] = "";
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        if (strlen(word) < strlen(shortest) || strlen(shortest) == 0) {
            strcpy(shortest, word);
        }
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    // En k?sa ve en uzun kelimeleri yazd?r?yoruz
    printf("En kisa kelime: %s\n", shortest);
    printf("En uzun kelime: %s\n", longest);

    return 0;
}

