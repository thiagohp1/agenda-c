#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Lista.h"
#include "agenda.h"


void mostra_e( void *x ){
	Evento *p = x;
	mostra_evento( *p );
}

int compara_data( void *x, void *y ){
	Evento *a = x, *b = y;
	
    if( a->data.ano < b->data.ano )
        return -1;
        if( a->data.mes < b->data.mes )
            return -1;
		    if( a->data.dia < b->data.dia )
                return -1;
	if( a->data.ano > b->data.ano )
        return 1;
		if( a->data.mes > b->data.mes )
            return 1;
            if( a->data.dia > b->data.dia )
                return 1;
	return 0;
	
}

int compara_horario( void *x, void *y ){
	Evento *a = x, *b = y;
	
    if( a->inicio.hora < b->inicio.hora)
        return 1;
		if( a->inicio.minuto < b->inicio.minuto )
            return 1;
	if( a->inicio.hora > b->inicio.hora )
        return -1;
		if( a->inicio.minuto > b->inicio.minuto )
            return -1;
	return 0;
	
}

int main(int argc, char *argv[]) {
    int op;
    Lista l1;
    Evento evento;
    Evento *pt1 = &evento;
    
    inicializa_lista(&l1, sizeof(evento));
    carrega_arquivo("teste", &pt1, &l1.tamInfo );

    do
    { 
        printf("\n--------\n|AGENDA|\n--------\n 1.Cadastrar um novo evento. \n 2.Mostrar todos os eventos da agenda. \n 3.Mostrar todos os eventos dessa data. \n 4.Mostrar todos os eventos que tenham essa descricao. \n 5.Remover evento.\n 6.Salvar e sair \n");
        scanf("%d", &op);
        
        int (*p)(void*, void*);
        switch (op)
        {
        case(1):
            p = compara_data;
            le_evento( &evento);
            printf("\nEvento adicionado com sucesso!\n");
            if(p == 0)
                p = compara_horario;
            insere_ordem( &l1, &evento, p);
            break;

        case(2):
            mostra_lista( l1, mostra_e );
            break;

        case(3):
            
            break;

        case(4):
            
            break;
                    
        case(5):
            
            break;

        case(6):
            limpa_lista(&l1);
            break;

        default:
            printf("\n-------------------\nERRO OPCAO INVALIDA\n-------------------\n");
            break;
        }

    } while (op!=6);


}




