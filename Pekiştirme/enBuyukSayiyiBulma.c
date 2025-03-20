#include <stdio.h>

int enbuyuksayi(int sayi[], int size) {
    int max = sayi[0];  // Dizinin ilk elemanını başlangıç değeri yap
    for (int i = 1; i < size; i++) {
        if (sayi[i] > max) {
            max = sayi[i];
        }
    }
    return max;
}

int main() {
    int size;

    printf("Kac tane sayi gireceksiniz? ");
    scanf("%d", &size);

    int sayilar[size]; // Kullanıcının belirttiği boyutta dizi oluştur

    printf("Lutfen %d sayi giriniz:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &sayilar[i]);
    }

    printf("En buyuk sayi: %d\n", enbuyuksayi(sayilar, size));

    return 0;
}
