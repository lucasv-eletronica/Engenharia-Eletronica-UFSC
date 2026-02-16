#include <stdio.h>

int main(){
    int opcao;

    printf("Escolha o Estado (1-Verde, 2-Amarelo, 3-Vermelho):");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("[INFO] Sinal VERDE. Fluxo liberado.\n");
            break;
    case 2:
        printf("[ALERTA] Sinal AMARELO. Reduza a Velocidade.\n");
            break;
    case 3:
        printf("[AVISO] Sinal VERMELHO. Pare o veiculo.\n");
            break;
    default:
        printf("[PERIGO] Erro no sensor! Sistema em modo de seguranca: AMARELO PISCANTE.\n");
            break;
    }

    return 0;

}