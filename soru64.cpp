#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char key[7] = "SECRET";  // Anahtar kelime
  char text[100];  // Çözülecek metin
  char matrix[6][6] = {  // Sifreleme matrisi
    {'A', 'D', 'F', 'G', 'V', 'X'},
    {'B', 'E', 'H', 'I', 'W', 'Y'},
    {'C', 'J', 'K', 'L', 'Z', 'M'},
    {'N', 'O', 'P', 'Q', 'R', 'S'},
    {'T', 'U', 'V', 'X', 'Y', 'Z'},
    {'0', '1', '2', '3', '4', '5'}
  };

  // Klavyeden sifrelenmis metin girilir
  printf("Enter encrypted text: ");
  scanf("%s", text);

  // Metin çözülür
  for (int i = 0; i < strlen(text); i += 2) {
    char c1 = toupper(text[i]);  // Önceki ve sonraki karakterler
    char c2 = toupper(text[i+1]);
    int row, col;
    for (int j = 0; j < 6; j++) {
      if (matrix[0][j] == c1) {
        col = j;
      }
      if (matrix[j][0] == c2) {
        row = j;
      }
    }
    printf("%c", matrix[row][col]);  // Çözülmüs metin ekrana yazdirilir
  }

  return 0;
}

