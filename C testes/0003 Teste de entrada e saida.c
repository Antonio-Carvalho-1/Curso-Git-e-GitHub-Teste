#include <stdio.h>

int main(){

    int a, b;

    a=15;
    b=2;

    b*=a; // isso � igual � b = b*a

    printf("%d %d\n", a, b);
    b=a--;
    printf("%d %d\n", a, b);


    return 0;
}
