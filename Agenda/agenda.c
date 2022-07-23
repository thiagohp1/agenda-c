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
    le_dia(p);
    le_mes(p);
    le_ano(p);
    le_hora_inicio(p);
    le_minuto_inicio(p);
    le_hora_final(p);
    le_minuto_final(p);
    le_descricao(p);
    le_local(p);
}

void mostra_evento( Evento p ){
    printf("\nEvento: %s\nLocal: %s\n",p.descricao, p.local);
    printf("Data: %02d/%02d/%02d\n", p.data.dia, p.data.mes, p.data.ano);
    printf("Entre %02d:%02d e %02d:%02d horas \n",p.inicio.hora, p.inicio.minuto, p.fim.hora, p.fim.minuto);
    
}

int eh_numero(int *n)
{
    while(scanf("%d",n) != 1)
    {
        while(getchar() != '\n');
        printf("Voce inseriu uma letra\nTente outra vez com um valor valido:\n");
    }
    return *n;
}

void le_dia(Evento *p){
    do {
        printf("Digite o dia:\n");
        eh_numero(&p->data.dia);
         
        if(p->data.dia > 31 || p->data.dia < 0)
            printf("erro dia invalido\ntente outra vez\n");
    }while(p->data.dia > 31 || p->data.dia < 0);
    
}

void le_mes(Evento *p){
    do {
        printf("Digite o mes:\n");
        eh_numero(&p->data.mes);

        if(p->data.mes > 12 || p->data.mes < 0)
            printf("erro mes invalido\ntente outra vez\n");
    }while(p->data.mes > 12 || p->data.mes < 0);    
}

void le_ano(Evento *p){
    do {
        printf("Digite o ano:\n");
        eh_numero(&p->data.ano);

        if(p->data.ano > 9999 || p->data.ano < 0)
            printf("erro ano invalido\ntente outra vez\n");
    }while(p->data.ano > 9999 || p->data.ano < 0);
}

void le_hora_inicio(Evento *p){
    do{
        printf("Digite a hora de inicio:\n");
        eh_numero(&p->inicio.hora);
        if(p->inicio.hora > 24 || p->inicio.hora < 0)
            printf("erro minuto invalido\ntente outra vez\n");
    }while(p->inicio.hora > 24 || p->inicio.hora < 0);
}

void le_minuto_inicio(Evento *p){
    do{
        printf("Digite o minuto de inicio\n");
        eh_numero(&p->inicio.minuto);

        if(p->inicio.minuto > 59 || p->inicio.minuto < 0)
            printf("erro minuto invalido\ntente outra vez\n");
    }while(p->inicio.minuto > 59 || p->inicio.minuto < 0);

}

void le_hora_final(Evento *p){
    do{
        printf("Digite a hora final:\n");
        eh_numero(&p->fim.hora);

        if(p->fim.hora > 24 || p->fim.hora < 0)
            printf("erro minuto invalido\ntente outra vez\n");
    }while(p->fim.hora > 24 || p->fim.hora < 0);
}

void le_minuto_final(Evento *p){
    do{
        printf("Digite o minuto de final\n");
        eh_numero(&p->fim.minuto);

        if(p->fim.minuto > 59 || p->fim.minuto < 0)
            printf("erro minuto invalido\ntente outra vez\n");

    }while(p->fim.minuto > 59 || p->fim.minuto < 0);
}

void le_descricao(Evento *p){
    printf("Digite a descricao:\n");
    scanf("%s", p->descricao);
}

void le_local(Evento *p){
    printf("Digite o local:\n");
    scanf("%s", p->local);
}   

int carrega_arquivo( char *nome_arq, Evento **pV, int *pN ){
	FILE *f = fopen( nome_arq, "rt");
	if( f == NULL ){
		return 0; // Erro!
	}
	int n;
	fscanf(f, "%d", &n);
	Evento *v = malloc( sizeof(Evento) * n );
	int i;
	for( i = 0 ; i < n ; i++ ){
		fscanf(f, "%d", &v[i].data.dia);
        fscanf(f, "%d", &v[i].data.mes);
        fscanf(f, "%d", &v[i].data.ano);
        fscanf(f, "%d", &v[i].inicio.hora);
        fscanf(f, "%d", &v[i].inicio.minuto);
        fscanf(f, "%d", &v[i].fim.hora);
        fscanf(f, "%d", &v[i].fim.minuto);
		fscanf(f, " %[^\n]", v[i].descricao);
        fscanf(f, " %[^\n]", v[i].local);
	}
	fclose( f );
	*pV = v;
	*pN = n;
	return 1; // Sucesso!
}
