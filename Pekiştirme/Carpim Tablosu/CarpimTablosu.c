
#include <stdio.h>

void carpimTablosu(int sayi1, int sayi2){
  int i, j;
  for(i = 1; i <= sayi1; i++){
    for(j = 1; j <= sayi2; j++){
      printf("%d x %d = %d\n", i, j, i*j);
    }
  }
}

int main() {
  int sayi1, sayi2;
  printf("1. sayiyi giriniz: ");
  scanf("%d", &sayi1);
  printf("2. sayiyi giriniz: ");
  scanf("%d", &sayi2);
  carpimTablosu(sayi1, sayi2);
  return 0;
}
