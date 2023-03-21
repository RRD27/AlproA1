/* Nama File    : FrekNilTabel.c */
/* Deskripsi    : Menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali*/
/* Pembuat      : Raden Rico Dwianda */

#include <stdio.h>

int main()
{
/* Kamus */
    int T[] = { 7,4,5,7,6,5,3,5,1,4 };
    int n = sizeof(T) / sizeof(T[0]);
    int frekuensi[n];
    int i, j;
/* Algoritma */
    for (i = 0; i < n; i++) {
        frekuensi[i] = 1 ;
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (T[i] == T[j]) {
                frekuensi[i]++;
                frekuensi[j]=0;
            }
        }
    }

    printf("Elemen yang muncul lebih dari satu kali: ");
    for (i = 0; i < n; i++) {
        if (frekuensi[i] > 1) {
            printf("%d ", T[i]);
        }
    }

    return 0;
}
