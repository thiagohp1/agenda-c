#include <stdio.h>
#include <stdlib.h>
#include "Conta.h"

int main(int argc, char *argv[]) {
	Conta x, y;
	
	inicializa_conta( &x, 123, 1000 );
	mostra_conta( x );
	deposito( &x, 100 );
	mostra_conta( x );
	
	float valor = 200;
	
	if( saque( &x, valor ) == SALDO_INSUFICIENTE )
		printf("Saldo insuficiente!\n");
	else
		printf("Saque realizado!\n");
	
	mostra_conta( x );
	
	inicializa_conta( &y, 456, 200 );
	mostra_conta( y );
	
	valor = 500;
	
	if( transfere( &x, &y, valor ) == SALDO_INSUFICIENTE )
		printf("Saldo insuficiente!\n");
	else
		printf("Saque realizado!\n");
	
	mostra_conta( x );
	mostra_conta( y );
		
	return 0;
}
