#include <stdio.h>

int parent[1001];

int find(int x) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void unite(int a, int b) {
    int pa = find(a);
    int pb = find(b);

    if (pa != pb)
        parent[pb] = pa;
}

int main() {
    int N, M;
    int i, a, b;
    int times = 0;

    scanf("%d %d", &N, &M);

    // Inicializa cada aluno como seu próprio time
    for (i = 1; i <= N; i++) {
        parent[i] = i;
    }

    // Processa as amizades
    for (i = 0; i < M; i++) {
        scanf("%d %d", &a, &b);
        unite(a, b);
    }

    // Conta quantos representantes existem
    for (i = 1; i <= N; i++) {
        if (find(i) == i)
            times++;
    }

    printf("%d\n", times);

    return 0;
}
