#include <stdio.h>

int main(){

    int x, mod;
    scanf("%d", &x);

    mod = x%2; // resto da divis�o por 2

    if(mod==1) //decis�o de arcodo com o resto do n�mero.
    {
        printf("O numero %d e impar", x);
    }else
    {
        printf("O numero %d e par", x);
    }


    return 0;
}
