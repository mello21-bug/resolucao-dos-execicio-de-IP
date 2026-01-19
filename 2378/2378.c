#include <stdio.h>

struct Complexo {
    int a; // Parte real
    int b; // Parte imaginária
};

int main() {
    struct Complexo z1, z2, s, m;

    // Leitura do primeiro número complexo (a e b)
    if (scanf("%d %d", &z1.a, &z1.b) != 2) return 0;
    
    // Leitura do segundo número complexo (a e b)
    if (scanf("%d %d", &z2.a, &z2.b) != 2) return 0;

    // --- CÁLCULO DA SOMA ---
    // Regra: (z1.a + z2.a) + (z1.b + z2.b)i
    s.a = z1.a + z2.a;
    s.b = z1.b + z2.b;

    // --- CÁLCULO DA MULTIPLICAÇÃO ---
    // Regra: (z1.a*z2.a - z1.b*z2.b) + (z1.a*z2.b + z2.a*z1.b)i
    m.a = (z1.a * z2.a) - (z1.b * z2.b);
    m.b = (z1.a * z2.b) + (z2.a * z1.b);

    // --- SAÍDA DA SOMA ---
    printf("Soma: %d", s.a);
    if (s.b >= 0) {
        printf("+%di\n", s.b);
    } else {
        printf("%di\n", s.b); // O sinal de menos já está em s.b
    }

    // --- SAÍDA DA MULTIPLICAÇÃO ---
    printf("Multi: %d", m.a);
    if (m.b >= 0) {
        printf("+%di\n", m.b);
    } else {
        printf("%di\n", m.b); // O sinal de menos já está em m.b
    }

    return 0;
}