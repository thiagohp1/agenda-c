#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "Lista.h"
#include "agenda.h"


void mostra_e( void *x ){
	Evento *p = x;
	mostra_evento( *p );
}

int main(int argc, char *argv[]) {
    int op;
    Lista l1;
    Evento evento;
    
    inicializa_lista(&l1, sizeof(evento));


    do
    { 
        printf("\n--------\n|AGENDA|\n--------\n 1.Cadastrar um novo evento. \n 2.Mostrar todos os eventos da agenda. \n 3.Mostrar todos os eventos dessa data. \n 4.Mostrar todos os eventos que tenham essa descricao. \n 5.Remover evento.\n 6.Salvar e sair \n");
        scanf("%d", &op);

        switch (op)
        {
        case(1):
            le_evento( &evento);
            printf("\nEvento adicionado com sucesso!\n");
            insere_inicio( &l1, &evento);
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
            
            break;

        default:
            printf("\n-------------------\nERRO OPCAO INVALIDA\n-------------------\n");
            break;
        }

    } while (op!=6);


}




