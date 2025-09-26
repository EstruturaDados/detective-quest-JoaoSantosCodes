#include <stdio.h>
#include <string.h>
#include "../include/salas.h"

int main(int argc, char** argv) {
    // Construir a árvore da mansão (exemplo):
    //            Hall
    //         /        -
    //   Biblioteca    Cozinha
    //    /     -      /
    // Escritório  Sótão  Porão

    Sala* hall = criarSala("Hall de Entrada");
    Sala* biblioteca = criarSala("Biblioteca");
    Sala* cozinha = criarSala("Cozinha");
    Sala* escritorio = criarSala("Escritorio");
    Sala* sotao = criarSala("Sotao");
    Sala* porao = criarSala("Porao");

    conectarSalas(hall, biblioteca, cozinha);
    conectarSalas(biblioteca, escritorio, sotao);
    conectarSalas(cozinha, porao, NULL);

    if (argc >= 3 && strcmp(argv[1], "-demo") == 0) {
        printf("[Demo] Script: %s\n", argv[2]);
        explorarSalasDemo(hall, argv[2]);
    } else {
        printf("Controles: e=esquerda, d=direita, s=sair (p=trilha, h=ajuda)\n");
        explorarSalas(hall);
    }

    destruirSalas(hall);
    return 0;
}