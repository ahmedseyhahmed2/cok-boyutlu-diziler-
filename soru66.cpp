#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char text[100];  // Çözülecek metin
  char code[26][3] = {  // Ikili kodlar
    "AB", "CD", "EF", "GH", "IJ", "KL",
    "MN", "OP", "QR", "ST", "UV", "WX",
    "YZ", "01", "23", "45", "67", "89"
  };

  // Klavyeden sifrelenmis metin girilir
  printf("Sifrelenmis metni girin: ");
  scanf("%s", text);

  // Metin çözülür
  for (int i = 0; i < strlen(text); i += 2) {
    char c1 = toupper(text[i]);  // Önceki ve sonraki karakterler
    char c2 = toupper(text[i+1]);
    for (int j = 0; j < 26; j++) {
      if (c1 == code[j][0] && c2 == code[j][1]) {  // Ikili kod bulundu
        printf("%c", 'A' + j);  // Çözülmüs metin ekrana yazdirilir
        break;
      }
    }
  }

  return 0;
}

