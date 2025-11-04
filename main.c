#include <stdio.h>
#define N 5

int main(){
    // 1. Declarar a matriz NxN
int matriz[N][N];

// 2. Inicializar a matriz
// atribuir '0' a todos os elementos
for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		matriz[i][j]=0;
	}
}

// Debug: Imprimir a matriz inicializada
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}
// 3. Criar as conexões (arestas)
// Verificar quantas arestas: (7)


// origem: 0-3
// destino: 3-0

    return 0;
}