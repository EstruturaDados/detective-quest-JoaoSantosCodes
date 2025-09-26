# Checklist do Projeto: Detective Quest

Este checklist acompanha o progresso, qualidade de código e próximos passos do projeto em C.

## 1) Estado atual (validado)
- [x] Estrutura modular: `src/` e `include/` criados (`tests/` pendente)
- [x] Sistema de build: `Makefile` (GCC/MinGW) com `-Wall -Wextra -Wpedantic -std=c11`
- [x] Nível Novato implementado (árvore binária de salas)
  - Funções: `criarSala`, `conectarSalas`, `explorarSalas`, `explorarSalasDemo`, `destruirSalas`
  - Trilha do caminho (registro e impressão), opções `e/d/s` e extras `p/h`
  - Reinício em folha com `r/s` (mensagem usa o nome da raiz dinamicamente)
  - Mensagens padronizadas em ASCII para compatibilidade no Windows
- [x] Compilação e execução validadas (build limpo, sem warnings)
- [ ] Testes automatizados
- [ ] Documentação técnica detalhada (ex.: Doxygen, `docs/`)

## 2) Estrutura atual de pastas
- `src/` — `main.c`, `salas.c`
- `include/` — `salas.h`
- `Makefile` — alvo principal para build com GCC/MinGW
- (pendente) `tests/`, `docs/`, `.gitignore`

## 3) Ações concluídas
- [x] Implementação do módulo `salas`:
  - Criação e conexão de salas como nós de árvore binária
  - Exploração interativa com ajuda (`h`) e trilha (`p`)
  - Modo demonstração via `-demo <script>`
  - Reinício ao atingir folha (r/s)
- [x] Refinamentos de UX e robustez:
  - Mensagens sem acentuação e prompts claros
  - Exibição dos nomes das salas filhas
  - Tratamento de entradas inválidas e limpeza de buffer
  - Aviso no modo demo para comandos desconhecidos

## 4) Pendências e próximos passos
- [ ] Criar pasta `tests/` e primeiros testes automatizados
- [ ] Adicionar `.gitignore` e (opcional) `docs/` com diagramas
- [ ] Documentação técnica mais detalhada (Doxygen/MD)
- [ ] Refatorar `main.c` (opcional): extrair construção da mansão para `construirMansaoBasica()`
- [ ] Uniformizar terminologia "Trilho/Trilha" (opcional)
- [ ] Planejamento dos próximos níveis (em progresso):
  - Adventurer Level — BST para pistas (`include/pistas.h`, `src/pistas.c`)
  - Master Level — Tabela Hash para suspeitos (`include/suspeitos.h`, `src/suspeitos.c`)
  - Integração com menu simples no `main.c`

## 5) Como compilar e executar (rápido)
- Compilar: `gcc -Wall -Wextra -Wpedantic -std=c11 -Iinclude src/main.c src/salas.c -o detective-quest.exe`
- Executar interativo: `./detective-quest.exe`
- Executar demo: `./detective-quest.exe -demo eed`

Mantenha este checklist atualizado conforme concluímos cada etapa.