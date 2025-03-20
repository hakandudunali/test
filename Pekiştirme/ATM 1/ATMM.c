#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
    printf("Banka Otomasyonu\n");

    float anapara = 0.0, tutarBilgisi, CekilecekParaTutari;
    int islemTuru;

    while (1) { // Sürekli işlem yapabilmek için sonsuz döngü
        printf("\nYapmak istenilen islem nedir?\n");
        printf("1 - Para cekme\n");
        printf("2 - Para yatirma\n");
        printf("3 - Bakiye Bilgisi\n");
        printf("0 - Cikis\n");  // Kullanıcı çıkmak için 0 girebilir
        printf("Lutfen yapmak istediginiz islem turunu tuslayiniz: ");
        scanf("%d", &islemTuru);

        if (islemTuru == 0) {
            printf("Cikis yapiliyor...\n");
            break;  // Döngüyü sonlandırarak programdan çık
        } 
        else if (islemTuru == 1) {
            printf("Cekmek istediginiz tutari giriniz: ");
            scanf("%f", &CekilecekParaTutari);
            if (CekilecekParaTutari > anapara) {
                printf("Yetersiz bakiye. Lutfen tekrar deneyiniz.\n");
            } else {
                anapara -= CekilecekParaTutari;
                printf("Islem basarili. Kalan bakiyeniz: %.2f\n", anapara);
            }
        } 
        else if (islemTuru == 2) {
            printf("Yatirmak istediginiz tutari giriniz: ");
            scanf("%f", &tutarBilgisi);
            anapara += tutarBilgisi;
            printf("Islem basarili. Yeni bakiyeniz: %.2f\n", anapara);
        } 
        else if (islemTuru == 3) {
            printf("Bakiyeniz: %.2f\n", anapara);
        } 
        else {
            printf("Yanlis bir islem turu tusladiniz. Lutfen tekrar deneyiniz.\n");
        }
    }

    return 0;
}

