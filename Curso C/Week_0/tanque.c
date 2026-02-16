#include <stdio.h>

int main() {
    int nivel_agua = 0;
    int sensor_bomba = 1; // A bomba enche de 3 em 3 litros por segundo

    printf("--- INICIANDO SISTEMA DE BOMBEAMENTO ---\n");

    // A Lógica: Encher até chegar EXATAMENTE em 10 litros (para teste)
    while (nivel_agua < 10) {
        printf("Nivel atual: %d litros. Enchendo...\n", nivel_agua);
        nivel_agua = nivel_agua + sensor_bomba;
        
        // Simulação de segurança (se passar de 20, o tanque explodiu)
        if (nivel_agua > 20) {
            printf("[PERIGO] VAZAMENTO! O tanque estourou em %d litros!\n", nivel_agua);
            break; 
        }
    }

    printf("Sucesso! Tanque cheio em 10 litros.\n");
    return 0;
}