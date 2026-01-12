#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int somma = 0;
    double media;

    // Legge il numero di voti
    printf("Inserisci il numero dei voti: ");
    scanf("%d", &N);

    int voti[N];

    // Legge i voti e calcola la somma
    for (int i = 0; i < N; i++) {
        printf("Inserisci voto %d: ", i + 1);
        scanf("%d", &voti[i]);
        somma += voti[i];
    }

    // Calcola la media generale
    media = (double)somma / N;

    // Ordina i voti in ordine crescente (bubble sort semplice)
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (voti[i] > voti[j]) {
                int temp = voti[i];
                voti[i] = voti[j];
                voti[j] = temp;
            }
        }
    }

    // Stampa la media generale
    printf("\nMedia generale della scuola: %.2f\n", media);

    // Stampa i 5 voti migliori
    printf("Migliori 5 voti:\n");
    for (int i = N - 1; i >= N - 5 && i >= 0; i--) {
        printf("%d\n", voti[i]);
    }

    return 0;
}
