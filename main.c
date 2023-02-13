#include <stdio.h>

int main() {
  int opcaoPrincipal;

  do {
    printf("\nEscolha uma opcao:\n");
    printf("1 - Primeira opcao\n");
    printf("2 - Segunda opcao\n");
    printf("3 - Terceira opcao\n");
    printf("0 - Sair\n");
    scanf("%d", & opcaoPrincipal);

    switch (opcaoPrincipal) {
    case 1: {
      int opcaoSubmenu;
      do {
        printf("\nEscolha uma opcao (1-3, 0 para sair):\n");
        printf("1 - Subopcao A\n");
        printf("2 - Subopcao B\n");
        printf("3 - Subopcao C\n");
        printf("0 - Voltar\n");
        scanf("%d", & opcaoSubmenu);

        switch (opcaoSubmenu) {
        case 1:
          printf("\nVoce escolheu a subopcao A\n");
          break;
        case 2:
          printf("\nVoce escolheu a subopcao B\n");
          break;
        case 3:
          printf("\nVoce escolheu a subopcao C\n");
          break;
        case 0:
          printf("\nVoltando...\n");
          break;
        default:
          printf("\nOpcao Invalida\n");
          break;
        }
      } while (opcaoSubmenu != 0);
      break;
    }
    case 2: {
      int opcaoSubmenu;
      do {
        printf("\nEscolha uma opcao (1-3, 0 para sair):\n");
        printf("1 - Subopcao D\n");
        printf("2 - Subopcao E\n");
        printf("3 - Subopcao F\n");
        printf("0 - Voltar\n");
        scanf("%d", & opcaoSubmenu);

        switch (opcaoSubmenu) {
        case 1:
          printf("\nVoce escolheu a subopcao D\n");
          break;
        case 2:
          printf("\nVoce escolheu a subopcao E\n");
          break;
        case 3:
          printf("\nVoce escolheu a subopcao F\n");
          break;
        case 0:
          printf("\nVoltando...\n");
          break;
        default:
          printf("\nOpcao Invalida\n");
          break;
        }
      } while (opcaoSubmenu != 0);
      break;
    }
    case 3: {
      int opcaoSubmenu;
      do {
        printf("\nEscolha uma opcao (1-3, 0 para sair):\n");
        printf("1 - Subopcao G\n");
        printf("2 - Subopcao H\n");
        printf("3 - Subopcao I\n");
        printf("0 - Voltar\n");
        scanf("%d", & opcaoSubmenu);

        switch (opcaoSubmenu) {
        case 1:
          printf("\nVoce escolheu a subopcao G\n");
          break;
        case 2:
          printf("\nVoce escolheu a subopcao H\n");
          break;
        case 3:
          printf("\nVoce escolheu a subopcao I\n");
          break;
        case 0:
          printf("\nVoltando...\n");
          break;
        default:
          printf("\nOpcao Invalida\n");
          break;
        }
      } while (opcaoSubmenu != 0);
      break;
    }
    case 0:
      printf("\nSaindo...\n");
      break;
    default:
      printf("\nOpcao Invalida\n");
      break;
    }
  } while (opcaoPrincipal != 0);

  return 0;
}
