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

int eh_numero(int *n);
void inicializa_evento(Evento *p, Data dt, Hora inc, Hora fim, char *d, char *l);
void le_evento( Evento *p );
void mostra_evento( Evento p );
void le_dia(Evento *p);
void le_mes(Evento *p);
void le_ano(Evento *p);
void le_hora_inicio(Evento *p);
void le_minuto_inicio(Evento *p);
void le_hora_final(Evento *p);
void le_minuto_final(Evento *p);
void le_descricao(Evento *p);
void le_local(Evento *p);
int carrega_arquivo( char *nome_arq, Evento **pV, int *pN );