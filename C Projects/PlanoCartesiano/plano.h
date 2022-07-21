typedef struct{
    char n;
	int x;
	int y;
} Ponto;

void recebe_valor( Ponto *p, char pn, int px, int py);
void calcula_distancia (Ponto *p1, Ponto *p2);
void mostra_coordenada (Ponto *p);