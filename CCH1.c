#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    double lancamentos, auxiliar, Receber=0, Pagar=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &auxiliar);
        if (auxiliar !=0)
        {
           lancamentos=auxiliar;
        }
        if (lancamentos>0)
        {
            Receber+=lancamentos;
        }
         if (lancamentos<0)
        {
            Pagar+=lancamentos;
        }
        
        
    }

    printf("Pagar: R$%.2lf", Pagar);
    printf("Receber: R$%.2lf", Receber);
    printf("Saldo: R$%.2lf", Pagar+Receber);
return 0;
}