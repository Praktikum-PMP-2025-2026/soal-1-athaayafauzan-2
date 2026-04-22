/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2-Data Manipulation and External Files 
 *   Hari dan Tanggal    : Rabu, 22 April 2026
 *   Nama (NIM)          : Abdullah Athaaya Fauzan (13224094)
 *   Nama File           : soal1.c
 *   Deskripsi           : statistik array menggunakan fungsi parameter pointer untuk menjumlah, rata-rata, nilai maksimum, dan posisi pertama kemunculan nilai maksimum 
 */

#include <stdio.h>

void mesinanalisis(int *arr, int n, int *sum, double *avg, int *max, int *idx){
    *sum = 0;
    *max = *arr; 
    *idx = 0;

    for (int i = 0; i<n; i++){    
        *sum += *(arr + i);
        if (*(arr + i) > *max){
            *max = *(arr + i);
            *idx = i;
        }
    }
    *avg = (double) * sum / n;
}

int main(){
    int n;
    if (scanf("%d", &n) != 1 || n <= 0){
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int sum, max, idx;
    double avg;

    mesinanalisis(arr, n, &sum, &avg, &max, &idx);

    printf("SUM %d\nAVG %.2f\nMAX %d\nIDX %d\n", sum, avg, max, idx);

    return 0;
}