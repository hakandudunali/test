#include<stdio.h>
#include<math.h>

int main(){
    
    printf("Arac Turunu Giriniz: \n\n");
    int arac_turu;
    float motor_hacmi,mtv;
    char devam = 'E';


    while (devam == 'e' || devam == 'E')
    {
        printf("Arac Turunu Giriniz: \n\n");
        printf("Kamyon - 1\nOtomobil - 2\nMotor - 3\n");
        printf("Seciminiz: ");
        scanf("%d", &arac_turu); 
        printf("Motor Hacmini Giriniz: ");
        scanf("%f",&motor_hacmi);


        
        if(arac_turu == 1){
            if(motor_hacmi <= 1600){
                mtv = 0.0004 * motor_hacmi;
            }
            else if(motor_hacmi > 1600 && motor_hacmi <= 2200){
                mtv = 0.005 * motor_hacmi;
            }
            else{
                mtv = 0.009 * motor_hacmi;
            }
            
          
        }
        else if(arac_turu == 2){
            if(motor_hacmi <= 1600){
                mtv = 0.0004 * motor_hacmi;
            }
            else if(motor_hacmi > 1600 && motor_hacmi <= 2200){
                mtv = 0.005 * motor_hacmi;
            }
            else{
                mtv = 0.009 * motor_hacmi;
            }
            
        }
        else if(arac_turu == 3){
            if(motor_hacmi <= 1600){
                mtv = 0.0004 * motor_hacmi;
            }
            else if(motor_hacmi > 1600 && motor_hacmi <= 2200){
                mtv = 0.005 * motor_hacmi;
            }
            else{
                mtv = 0.009 * motor_hacmi;
            }
        }

        else{
            printf("Hatali Giris Yaptiniz");
        }
        printf("Hesaplanan MTV: %.2f TL\n", mtv);

        printf("Devam etmek istiyon mu la?");
        scanf(" %c", &devam);

        
    }
        


    return 0;
    }
    
    
    
    



