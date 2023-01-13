#include <stdio.h>

int main(void) {
    int n;
    double sum, average;

    // Eleman sayisini ve elemanlari kullanicidan aliyoruz
    printf("Eleman sayisini giriniz: ");
    scanf("%d", &n);
    double values[n];
    printf("Elemanlari giriniz: ");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &values[i]);
        sum += values[i];
    }

    // Ortalamasini hesapliyoruz
    average = sum / n;

    // Silinen elemani ariyoruz
    double missing;
    for (int i = 0; i < n; i++) {
        double temp_sum = sum - values[i];
        double temp_average = temp_sum / (n - 1);
        if (temp_average == average) {
            missing = values[i];
            break;
        }
    }

    // Silinen elemani yazdiriyoruz
    printf("Silinen eleman: %f\n", missing);

    return 0;
}

