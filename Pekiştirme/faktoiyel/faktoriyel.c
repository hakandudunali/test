#include <stdio.h>

/* int faktoriyel(int n) {
    if (n == 0) {
        return 1;
    }
    return n * faktoriyel(n - 1);
}


int main() {
    
    int n;
    printf("Faktoriyeli alinacak sayiyi giriniz: ");
    scanf("%d", &n);
    
    printf("%d! = %d\n", n, faktoriyel(n));


    return 0;
}
*/

// Sen faktoriyel(0) = 1 döndürüldüğünde sürekli 1 döndüreceğini düşünüyorsun. 
//Ancak faktoriyel(0) sadece 1 döndürüp işin içinden çıkıyor,
// üst seviyedeki çağrılar da bu sonucu kullanarak işlemi devam ettiriyor.

// ✔ Özyineleme, çağrılar geri dönerken işlem yaparak sonuç üretir!

//***************************  VEYA  ************************

int fakt(int a)
{
    if (a==0){
        return 1;
    }
    else if(a < 0){
        printf("Negatif sayilarin faktoriyeli alinamaz.\n");
        return 0;
        
    }
    else{
        int sonuc=1;
        for(int i = 1; i<= a; i++){
            sonuc *= i;
            
        } 
    return sonuc;
    }

}
    int main(){

        int sayi;
        printf("Faktoriyeli alinacak sayiyi giriniz: ");
        scanf("%d", &sayi);
        printf("%d! = %d\n", sayi, fakt(sayi));
        return 0;
    }
 

