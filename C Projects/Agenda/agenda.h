typedef struct {
    int dia,mes,ano;
}Data;

typedef struct {
    int hora,minuto;
}Hora;

typedef struct {
    Data data;
    Hora inicio;
    Hora fim;
    char descricao[50];
    char local[50];
}Evento;

void inicializa_evento(Evento *p, Data dt, Hora inc, Hora fim, char *d, char *l);
void le_evento( Evento *p );
void mostra_evento( Evento p );
