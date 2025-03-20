#include <stdio.h>
#include <stdlib.h>
#define _CTR_SECURE_NO_WARNINGS


int basamak(int n){
    if(n==0){
        return 0;
    }
    return 1 + basamak(n/10);
}

// veya 

/*
int basamak2(int n){
    int basamakSayisi = 0;
    while(n!=0){
        n = n/10;
        basamakSayisi++;
    }
    return basamakSayisi;
}
*/



int main(int argc, char *argv[]) {
	
   
    int sayi1 ;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi1);
    printf("Basamak sayisi: %d\n", basamak2(sayi1));

	return 0;
}