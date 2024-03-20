#include <stdio.h>

<<<<<<< HEAD
int main(){
int opcao;
  do(
    printf("\n Menu Principal");
    printf("1= Criar tarefa");
  printf("2- deletar tarefa");
  printf("3- listar tarefa");
  printf("0-sair\n ");
  printf(" escolha um opcao");
  scanf("%d", &opcao);
  printf("opcao escolhida : %d\n",opcao)
  
  )
    while(opcao !=0);
        
  }
=======
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
>>>>>>> b06c4a3e29ed44b29e8d3e74132683afeb15871a
