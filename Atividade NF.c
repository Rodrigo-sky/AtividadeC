#include <stdio.h>
#include <string.h>

int main()
{
    char palavras [5][6][35] = {{"maca", "e uma fruta.", "e redonda.", "geralmente vermelha", "começa com a letra -m-.", "crocante e suculenta."}, {"cabeca", "e uma parte do corpo ", "pode ter cabelo", "Pode balançar acenar abanar", "e redondo", "fonte de ideias"}, {"copo", "e um objeto", "existe de varios tamanhos", "permite entrada de liquidos","tem forma cilindrica", "pode ter alca"}, {"gato", "e um animal", "possui garras", "e mamifero e carnivoro", "pode ou nao ter pelos", "escala e salta."}, {"estante", "e um objeto", "encontrado em livrarias", "possui prateleiras", "de madeira ou outros materiais", "e uma peça de mobiliario"}};
    int escolha;
    printf("----------Bem Vindo a Forca----------");
    printf("\n\ntemos uma lista com 5 palavras digite um numero de 1 a 5 para selecionar a palavra\n");
    scanf("%i", &escolha);
    
    while(escolha < 1 || escolha > 5){
        printf("escolha um numero valido!");
        scanf("%i", &escolha);
    }
    escolha = escolha - 1;
    
    size_t tamanho_palavra = strlen(palavras[escolha][0]);
    printf("\nO tamanho da palavra escolhida e: %zu\n", tamanho_palavra);
    
    
    //printf(strlen(palavras[escolha][0]));
    
    //for (int i = 1; i <= 5; i++){
    //    printf("\n dicas: ");
    //    printf(palavras[4][i]);
    //}


    return 0;
}
