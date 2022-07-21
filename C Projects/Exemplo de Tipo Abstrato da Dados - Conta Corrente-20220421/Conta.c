#include "Conta.h"
#include <stdio.h>

void inicializa_conta( Conta *p, int n, float s ){
	p->num = n;
	p->saldo = s;
}

void mostra_conta( Conta x ){
	printf("(%d, R$%.2f)\n", x.num, x.saldo);
}

void deposito( Conta *p, float v ){
	p->saldo += v;
}

int saque( Conta *p, float v ){
	if( v > p->saldo )
		return SALDO_INSUFICIENTE;
	
	p->saldo -= v;
	return 1; // Saque realizado com sucesso.	
}

int transfere( Conta *origem, Conta *destino, float v ){
	if( saque( origem, v ) == SALDO_INSUFICIENTE )
		return SALDO_INSUFICIENTE;
	
	deposito( destino, v );
	return 1; // Transferência realizada com sucesso.
}


