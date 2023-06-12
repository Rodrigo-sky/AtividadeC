#include <stdio.h>
#include <string.h>

int main()
{
    char palavras [5][6][35] = {{"maca", "e uma fruta.", "e redonda.", "geralmente vermelha", "começa com a letra -m-.", "crocante e suculenta."}, {"cabeca", "e uma parte do corpo ", "pode ter cabelo", "Pode balançar acenar abanar", "e redondo", "fonte de ideias"}, {"copo", "e um objeto", "existe de varios tamanhos", "permite entrada de liquidos","tem forma cilindrica", "pode ter alca"}, {"gato", "e um animal", "possui garras", "e mamifero e carnivoro", "pode ou nao ter pelos", "escala e salta."}, {"estante", "e um objeto", "encontrado em livrarias", "possui prateleiras", "de madeira ou outros materiais", "e uma peça de mobiliario"}};
    int escolha;
    int chances = 5;
    int dicas = 5;
    char venceu;
    char erros = 0;
    int dica_cont = 1;
    char letra;
    
    printf("----------Bem Vindo a Forca----------");
    printf("\n\ntemos uma lista com 5 palavras digite um numero de 1 a 5 para selecionar a palavra\n");
    scanf("%i", &escolha);
    
    
    while(escolha < 1 || escolha > 5){
        printf("escolha um numero valido!");
        scanf("%i", &escolha);
    }
    escolha = escolha - 1;
    
    
    while(venceu != "tru" || erros == chances){
        size_t tamanho_palavra = strlen(palavras[escolha][0]);
        printf("\nA palavra tem %zu letras.\nVoce tem %i chances de errar e direito a %i dicas.\n", tamanho_palavra, chances, dicas);
        printf("\nDeseja chutar uma letra ou quer uma dica?\nPara Dica digite 1 e Para letra digite 2: ");
        
        int diletra;
        scanf("%i", &diletra);
        
        if(dica_cont>dicas){
            printf("\n\nvoce nao tem mais dicas! Dicas anteriores:");
            for (int i = 1; i < dica_cont; i++){
                printf("\n dicas: ");
                printf(palavras[escolha][i]);
            }
        }
        
        if(diletra == 1 & dica_cont<=dicas){
            for (int i = 1; i <= dica_cont; i++){
                printf("\nDica N%i: %s\n",dica_cont, palavras[escolha][i]);
            }
            dica_cont++;
        }else if(diletra == 2){
            printf("digite a letra: ");
            scanf("%c", &letra);
        }
        printf("\n");
        
    }

    return 0;
}
