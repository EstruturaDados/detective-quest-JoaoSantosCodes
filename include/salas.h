#ifndef SALAS_H
#define SALAS_H

// Estruturas e APIs do Nível Novato (árvore binária de salas)
// Notas:
// - Os nomes das salas são ponteiros para literais estáticos (const char*).
// - Se futuramente os nomes forem lidos dinamicamente, adapte criarSala para duplicar a string e liberar em destruirSalas.

typedef struct Sala {
    const char* nome;    // nome do cômodo (literal estático neste nível)
    struct Sala* esquerda; // ponteiro para sala à esquerda
    struct Sala* direita;  // ponteiro para sala à direita
} Sala;

// Cria uma sala com "nome" e filhos nulos.
// Retorna um ponteiro alocado dinamicamente.
Sala* criarSala(const char* nome);

// Conecta duas salas como filhas esquerda e direita de "pai" (pode ser NULL).
void conectarSalas(Sala* pai, Sala* esquerda, Sala* direita);

// Explora a mansão a partir da sala raiz, lendo entradas do usuário (e/d/s).
// Ao alcançar um nó-folha, permite reiniciar (r) ou sair (s).
// Ao finalizar, exibe o caminho percorrido.
void explorarSalas(Sala* raiz);

// Modo demonstração: executa passos automaticamente a partir de uma string
// Exemplo: "eed" (esquerda, esquerda, direita). Aceita 'e', 'd' e 's'.
// Ao finalizar, exibe o caminho percorrido.
void explorarSalasDemo(Sala* raiz, const char* script);

// Libera memória de todas as salas (pós-ordem). Não libera "nome" pois é literal.
void destruirSalas(Sala* raiz);

#endif // SALAS_H