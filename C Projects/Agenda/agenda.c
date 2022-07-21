#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "agenda.h"
#include "Lista.h"

void inicializa_evento(Evento *p, Data dt, Hora inc, Hora fim, char *d, char *l){
    p->data = dt;
    p->inicio = inc;
    p->fim = fim;
    strcpy( p->descricao, d );
    strcpy( p->local, l );
}

void le_evento( Evento *p ){
        printf("Digite o dia:\n");
        scanf("%d", &p->data.dia);
        printf("Digite o mes:\n");
        scanf("%d", &p->data.mes);
        printf("Digite o ano:\n");
        scanf("%d", &p->data.ano);
        printf("Digite a hora de inicio:\n");
        scanf("%d", &p->inicio.hora);
        printf("Digite o minuto de inicio\n");
        scanf("%d", &p->inicio.minuto);
        printf("Digite a hora final:\n");
        scanf("%d", &p->fim.hora);
        printf("Digite o minuto final:\n");
        scanf("%d", &p->fim.minuto);
        printf("Digite a descricao:\n");
        scanf("%s", p->descricao);
        printf("Digite o local:\n");
        scanf("%s", p->local);
}

void mostra_evento( Evento p ){
    printf("\nEvento: %s\nLocal: %s\n",p.descricao, p.local);
    printf("Data: %02d/%02d/%02d\n", p.data.dia, p.data.mes, p.data.ano);
    printf("Entre %02d:%02d e %02d:%02d horas \n",p.inicio.hora, p.inicio.minuto, p.fim.hora, p.fim.minuto);
    
}

       