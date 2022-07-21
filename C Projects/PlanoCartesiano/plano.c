#include "plano.h"
#include <stdio.h>
#include <math.h>

void recebe_valor( Ponto *p, char pn, int px, int py){
    p->n = pn;
    p->x = px;
	p->y = py;

}
void calcula_distancia (Ponto *pa, Ponto *pb){
    int d, Xa, Ya, Xb, Yb;
    
    Xa = pa->x;
	Ya = pa->y;
    Xb = pb->x;
    Yb = pb->y;

    d = sqrt((pow((Xb-Xa),2))+(pow((Yb-Ya),2)));

    printf("Distancia entre os pontos = %d\n",d);
}

void mostra_coordenada (Ponto *p){
printf("Coordenada X do ponto %c = %d\n", p->n, p->x);
printf("Coordenada Y do ponto %c = %d\n", p->n, p->y);
}