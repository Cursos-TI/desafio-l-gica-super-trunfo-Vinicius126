#include <stdio.h>

int main() {
    // Atributos da Carta 1 (Brasil)
    int populacao1 = 211000000;
    int area1 = 8515767;
    int pib1 = 1868;
    int pontos1 = 12;
    int densidade1 = 25; 

    // Atributos da Carta 2 (Argentina)
    int populacao2 = 125800000;
    int area2 = 377975;
    int pib2 = 4937;
    int pontos2 = 20;
    int densidade2 = 333; 

    int escolha;

    printf("*** SUPER TRUNFO - Aventureiro ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica (vence o menor)\n");
    printf("Escolha o atributo para comparar (1-5): ");
    scanf("%d", &escolha);

    printf("Comparando cartas:\n");
    printf("Brasil vs Argentina\n");

    switch (escolha) {
        case 1:
            printf("População - Brasil: %d | Argentina: %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: Brasil\n");
            else if (populacao2 > populacao1)
                printf("Vencedor: Argentina\n");
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área - Brasil: %d | Argentina: %d\n", area1, area2);
            if (area1 > area2)
                printf("Vencedor: Brasil\n");
            else if (area2 > area1)
                printf("Vencedor: Argentina\n");
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB - Brasil: %d | Argentina: %d\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedor: Brasil\n");
            else if (pib2 > pib1)
                printf("Vencedor: Argentina\n");
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos - Brasil: %d | Argentina: %d\n", pontos1, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: Brasil\n");
            else if (pontos2 > pontos1)
                printf("Vencedor: Argentina\n");
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica - Brasil: %d | Argentina: %d\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: Brasil\n");
            else if (densidade2 < densidade1)
                printf("Vencedor: Argentina\n");
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
    }

    return 0;
}