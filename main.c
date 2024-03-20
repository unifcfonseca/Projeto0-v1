#include <stdio.h>

int main(void) {
  int opcao;
  do {
    printf("\nMenu Principal\n");
    printf("1 - Criar Tarefa\n");
    printf("2 - Deletar Tarefa\n");
    printf("3 - Listar Tarefas\n");
    printf("0 - Sair\n");
    scanf("%d", &opcao);
    printf("Opção: %d\n", opcao);

  } while (opcao != 0);
}
