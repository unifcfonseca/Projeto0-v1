typedef struct Tarefa{
  int prioridade;
  char categoria[100];
  char descricao[100];
} Tarefa;

typedef enum Erro{

OK,ABRIR, FECHAR, LER, ESCREVER, MAX_TAREFAS, SEM-TAREFAS, NAO_ENCONTRADO

} Erro;

Erro criar(Tarefa t[], int*pos);
Erro deletar(Tarefa t[], int*pos);
Erro listar(Tarefa t[], int*pos);

Erro salvar(Tarefa t[], int*pos, int tamamho);
Erro carregar(Tarefa t[], int*pos, int tamamho);