#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

#define pi 3.141592654

int main(void){
    double angulo, distTeodolito, altElfo, altArvore;

    while(cin >> angulo >> distTeodolito >> altElfo){
        angulo = (angulo * (pi/180));

        altArvore = (5*(((tan(angulo))*distTeodolito) + altElfo));

        printf("%.2f\n", altArvore);
    }
}