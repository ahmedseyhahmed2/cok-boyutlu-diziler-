#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char text[100];  // Sifrelenecek metin
  char code[26][3] = {  // Ikili kodlar
    "AB", "CD", "EF", "GH", "IJ", "KL",
    "MN", "OP", "QR", "ST", "UV", "WX",
    "YZ", "01", "23", "45", "67", "89"
  };

  // Klavyeden metin girilir
  printf("Enter text to encrypt: ");
  scanf("%s", text);

  // Metin sifrelenir
  for (int i = 0; i < strlen(text); i++) {
    char c = toupper(text[i]);  // Harfler büyük harfe dönüstürülür
    int index = c - 'A';  // Ikili kodun dizideki konumu bulunur
    printf("%s", code[index]);  // Ikili kod ekrana yazdirilir
  }

  return 0;
}

