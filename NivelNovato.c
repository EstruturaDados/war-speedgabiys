#include <stdio.h> // biblioteca para entrada e saida de dados (printf, scanf)
#include <string.h> //biblioteca para manipulação de strings

//Definir a estrutura
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
   struct Territorio lugar1; // Declaração de uma variável do tipo Territorio

   // Solicitar a entrada de dados do usuario
   printf("Digitar o nome do territorio: ");
   // Lê um inteiro do teclado e armazena no campo 'nome'
   // A função fgets é mais segura para ler strings, evitando buffer overflow
   fgets(lugar1.nome, sizeof(lugar1.nome),stdin);
   // remover a quebra de linha ('\n') adicionada por fgets
   lugar1.nome[strcspn(lugar1.nome, "\n")] = 0;

   printf("digite a cor do territorio: ");
   //Lê um inteiro do teclado e armazena no campo 'cor'
   scanf("%s", &lugar1.cor );

   printf("Digite a quantidade de tropas do territorio: ");
   //Lê um inteiro do teclado e armazena no campo 'tropas'
   scanf("%d", &lugar1.tropas );

   // exibe os dados armazenados na struct
   printf("\n--- Dados Cadrastrados ---\n");
   printf("Nome: %s\n", lugar1.nome);
   printf("Cor: %s\n", lugar1.cor);
   printf("Tropas: %d\n", lugar1.tropas);

   return 0;
}