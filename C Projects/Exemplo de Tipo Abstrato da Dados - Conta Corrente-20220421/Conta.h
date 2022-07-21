#define SALDO_INSUFICIENTE -1

typedef struct{
	int num;
	float saldo;
} Conta;

void inicializa_conta( Conta *p, int n, float s );
void mostra_conta( Conta x );
void deposito( Conta *p, float v );
int saque( Conta *p, float v );
int transfere( Conta *origem, Conta *destino, float v );
