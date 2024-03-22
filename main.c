#include <stdio.h>
<include <tarefas.h>
//tarefa.c-------------------------------------------------------------------
Erro criar(tarefa t[], int *pos){
  if(*pos>=TOTAL)
    return MAX_TAREFA;

  printf("entre com uma prioridade: ");
  scanf("%d", &t[*pos].prioridade);

  printf("entre com a descricao :");
  fgets(t[*pos].descriacao, 30, stdin);

  printf("entre com a categoria :");
  fgets(t[*posicao].categoria,100,stdin);

  printtarefa(t[*pos]);
  *pos=*pos+1;
}

int main(){

  }
