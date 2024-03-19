# Projeto0-v1
Projeto 0 - Lista de Tarefas
Para este primeiro projeto você deverá implementar um programa que gerencia uma lista de tarefas, sendo que cada tarefa deve conter uma descrição, uma categoria e uma prioridade (quanto maior o valor, maior a prioridade da tarefa). Seu programa deve conseguir armazenar até 100 tarefas e permitir que o usuário cadastre, delete e liste as tarefas.

Nesta parte do projeto, ainda não teremos nenhum tipo de filtro ou ordenação das tarefas e seu objetivo é apenas mater os dados armazenados de forma que o usuário consiga usar as informações.

A interação do usuário com o seu programa deve ser definida por você, porém as 3 operações (cadastrar, lista e deletar) são obrigatórias.

Requisitos
O projeto deve ser desenvolvido em C;
O programa deve ser capaz de armazenar até 100 tarefas;
O usuário deve poder criar, deletar, listar todas as tarefas;
Os dados das tarefas devem ser armazenados em arquivos binários usando funções para armazenar os dados em arquivos binários (fread e fwrite);
Formato dos dados
Um array de struct contendo:

Prioridade da tarefa (valor inteiro entre 0 e 10);
Descrição da tarefa (array de char de até 300 letras);
Categoria (array de char de até 100 letras);
Limitações
Não será permitido o uso de bibliotecas além do que já é oferecido no momento da instalação.
O projeto pode ser desenvolvido em qualquer sistema operacional e com qualquer IDE ou editor de texto. Porém, para a avaliação, a compilação e execução serão realizadas no replit e será avaliado o funcionamento do programa no ambiente fornecido pelo serviço;
