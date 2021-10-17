#include <stdio.h>
#include <string.h>

int main()
{
  char choice[10];
  while (strcmp(choice, "sair") != 0)
  {
    printf("Voce esta preso em uma cela de masmorra. Em que direcao voce quer olhar?\n");
    scanf("%s", choice);
    if (strcmp(choice, "norte") == 0)
    {
      printf("Voce ve uma janela com grades.\n");
    }
    if (strcmp(choice, "leste") == 0)
    {
      printf("Voce ve uma parede de pedra.\n");
    }
    if (strcmp(choice, "oeste") == 0)
    {
      printf("Voce ve um monstro.\n");
    }
    if (strcmp(choice, "sul") == 0)
    {
      printf("Voce ve uma porta aberta. Voce escapou pela porta e ganhou o jogo!\n");
      break;
    }
  }
  printf("Tchaauu!");
  return 0;
}