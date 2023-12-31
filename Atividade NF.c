#include <stdio.h>
#include <string.h>

int main()
{
    char palavras[5][6][35] = {
        {"maca", "e uma fruta.", "e redonda.", "geralmente vermelha", "comeC'a com a letra -m-.", "crocante e suculenta."},
        {"cabeca", "e uma parte do corpo ", "pode ter cabelo", "Pode balanC'ar acenar abanar", "e redondo", "fonte de ideias"},
        {"copo", "e um objeto", "existe de varios tamanhos", "permite entrada de liquidos", "tem forma cilindrica", "pode ter alca"},
        {"gato", "e um animal", "possui garras", "e mamifero e carnivoro", "pode ou nao ter pelos", "escala e salta."},
        {"estante", "e um objeto", "encontrado em livrarias", "possui prateleiras", "de madeira ou outros materiais", "e uma peC'a de mobiliario"}
    };

    int escolha;
    int chances = 5;
    int dicas = 5;
    int venceu = 0;
    int erros = 0;
    int dica_cont = 1;
    char letra;
    char tentativa_letras[20];

    printf("----------Bem Vindo a Forca----------");
    printf("\n\ntemos uma lista com 5 palavras digite um numero de 1 a 5 para selecionar a palavra\n");
    scanf("%i", &escolha);

    while (escolha < 1 || escolha > 5){
        printf("escolha um numero valido!");
        scanf("%i", &escolha);
    }
    escolha = escolha - 1;

    size_t tamanho_palavra = strlen(palavras[escolha][0]);
    char revel_palavra[tamanho_palavra + 1];    // +1 para o caractere nulo de terminacao

    for (size_t i = 0; i < tamanho_palavra; i++){
        revel_palavra[i] = '-';
    }
    revel_palavra[tamanho_palavra] = '\0';    // Adiciona o caractere nulo de terminacao

    while (erros != chances || venceu == 1){
        printf("\nA palavra tem %zu letras. %s\n", tamanho_palavra, revel_palavra);
        printf("Voce tem %i chances de errar e direito a %i dicas.\n", chances-erros, dicas-(dica_cont-1));
        printf("Deseja chutar uma letra ou quer uma dica?\nPara Dica digite 1 e Para letra digite 2: ");

        int diletra;
        scanf("%i", &diletra);
        
        while (diletra != 1 || diletra != 2){
            printf("escolha uma opção valida!");
            scanf("%i", &diletra);
        }

        if (dica_cont > dicas){
            printf("\n\nvoce nao tem mais dicas! Dicas anteriores:");
            for (int i = 1; i < dica_cont; i++){
                printf("\n dicas: ");
                printf("%s", palavras[escolha][i]);
            }
        }

        if (diletra == 1 && dica_cont <= dicas){
            for (int i = 1; i <= dica_cont; i++){
                printf("\nDica N%i: %s\n", dica_cont, palavras[escolha][i]);
            }
            dica_cont++;
        }
        else if (diletra == 2){
            printf("\ndigite a letra: ");
            scanf(" %c", &letra);

            int encontrou = 0;
            for (size_t j = 0; j < tamanho_palavra; j++){
                if (palavras[escolha][0][j] == letra){
                    revel_palavra[j] = letra;
                    encontrou = 1;
                }
            }

            if (!encontrou){
                erros++;
                printf("\nFoi mal, nao tem esta letra ");
                strcat(tentativa_letras, &letra);
                strcat(tentativa_letras,"-");
            }
            printf("\nLetras chutadas: %s", tentativa_letras);
        }
        printf("\n");
        
        if(strcmp(palavras[escolha][0], revel_palavra) == 0){
            printf("\n\nParabens voce venceu!\n");
            venceu = 1;
            break;
        }else if(erros == chances){
            printf("\n\nQue pena, voce perdeu!\n");
            venceu = 1;
            break;
        }

    }

    return 0;
}
