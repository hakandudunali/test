#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main() {

int secim = 1;
int tutar, anapara = 0;

while (secim != 4) {

printf("Merhaba, Lutfen yapmak istedginiz islemi tuslayiniz!\n\n");
printf("Para cekme - 1\nPara yatirma - 2\nBakiye sorgulama - 3\nKart iade - 4\n");

scanf("%d",&secim);

switch (secim) {

case 1: printf("Tutari giriniz: \n\n");
    scanf("%d", & tutar);

    if (tutar < anapara) {
        anapara -= tutar;
        printf("Islem Basarili, Yeni bakiyeniz: %d\n\n", anapara);
    }
    else{
        printf("Yetersiz Bakiye\n\n");
    }
    break;

 case 2: printf("Yatirilmak istenen tutari giriniz: \n\n");   
        scanf("%d", &tutar);               
        anapara += tutar;
        printf("İslem basarili, Yeni bakiyeniz: %d\n\n", anapara);
    break;

 case 3: printf("Bakiyeniz: %d\n\n",anapara);
    break;

case 4: printf("Kartiniz iade ediliyor...\n");
    break;   

default: printf("Hatali secim yaptiniz, Lutfen tekrar deneyiniz.\n");
    break;
}
}
}



/* 1. while Yerine Sonsuz Döngü (while(1)) ve break Kullanmak
Eğer döngünün ne zaman sonlanacağını tam olarak belirlemek istiyorsanız, sonsuz bir döngü (while(1)) kullanıp,
secim == 4 olduğunda break ile döngüden çıkabilirsiniz.
örn:
while (1) {
    printf("Merhaba, Lutfen yapmak istedginiz islemi tuslayiniz!\n\n");
    printf("Para cekme - 1\nPara yatirma - 2\nBakiye sorgulama - 3\nKart iade - 4\n");

    scanf("%d", &secim);

    switch (secim) {
        case 1: 
            printf("Tutari giriniz: \n\n");
            scanf("%d", &tutar);

            if (tutar <= anapara) {
                anapara -= tutar;
                printf("İslem Basarili, Yeni bakiyeniz: %d\n\n", anapara);
            }
            else {
                printf("Yetersiz Bakiye\n\n");
            }
            break;

        case 2: 
            printf("Yatirilmak istenen tutari giriniz: \n\n");   
            scanf("%d", &tutar);               
            anapara += tutar;
            printf("İslem basarili, Yeni bakiyeniz: %d\n\n", anapara);
            break;

        case 3: 
            printf("Bakiyeniz: %d\n\n", anapara);
            break;

        case 4: 
            printf("Kartiniz iade ediliyor...\n");
            return 0; // Programı sonlandır

        default: 
            printf("Hatali secim yaptiniz, Lutfen tekrar deneyiniz.\n");
            break;
    }
}
*/
/* 2) 1. while Yerine do-while Kullanmak
Eğer döngünün en az bir kere çalışmasını istiyorsanız,
do-while kullanabilirsiniz. Bu durumda, kullanıcıdan seçim almak için döngü başlamadan önce ekstra bir scanf yazmanıza gerek kalmaz.

örn:
do {
    printf("Merhaba, Lutfen yapmak istediginiz islemi tuslayiniz!\n\n");
    printf("Para cekme - 1\nPara yatirma - 2\nBakiye sorgulama - 3\nKart iade - 4\n");

    scanf("%d", &secim);

    switch (secim) {
        case 1: 
            printf("Tutari giriniz: \n\n");
            scanf("%d", &tutar);

            if (tutar <= anapara) {
                anapara -= tutar;
                printf("İslem Basarili, Yeni bakiyeniz: %d\n\n", anapara);
            }
            else {
                printf("Yetersiz Bakiye\n\n");
            }
            break;

        case 2: 
            printf("Yatirilmak istenen tutari giriniz: \n\n");   
            scanf("%d", &tutar);               
            anapara += tutar;
            printf("İslem basarili, Yeni bakiyeniz: %d\n\n", anapara);
            break;

        case 3: 
            printf("Bakiyeniz: %d\n\n", anapara);
            break;

        case 4: 
            printf("Kartiniz iade ediliyor...\n");
            break;   

        default: 
            printf("Hatali secim yaptiniz, Lutfen tekrar deneyiniz.\n");
            break;
    }
} while (secim != 4);
*/