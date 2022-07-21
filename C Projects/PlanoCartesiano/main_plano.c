#include <stdio.h>
#include "plano.h"

int main(){
    Ponto a, b;

    recebe_valor(&a, 'a', 4, 4);
    recebe_valor(&b, 'b', 3, 3);
    calcula_distancia(&a, &b);
    mostra_coordenada (&a);
    mostra_coordenada (&b);
}

