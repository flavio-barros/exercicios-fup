
typedef struct ponto Ponto;

/*
Função que aloca a memória para um ponto e retorna o ponteiro para o ponto
*/
Ponto* ponto_criar(float x, float y);

void ponto_liberar(Ponto* p);

void ponto_acessar(Ponto* p, float* x, float* y);

void ponto_atribuir(Ponto* p, float x, float y);

float ponto_calcular_distancia(Ponto* p1, Ponto* p2);