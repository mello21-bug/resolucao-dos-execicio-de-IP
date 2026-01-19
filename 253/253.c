#include <stdio.h>
#include <string.h>

int main() {
    char s1[51], s2[51];

    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    /* Remove o '\n' do final, se existir */
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    if (strcmp(s1, s2) == 0) {
        printf("IGUAIS\n");
    } else {
        printf("DIFERENTES\n");
    }

    return 0;
}
