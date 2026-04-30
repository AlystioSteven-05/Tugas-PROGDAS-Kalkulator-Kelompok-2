#include <stdio.h>
#include <math.h>

void displayheader(){
    printf("\n=================================\n");
    printf("            CALCULATOR           \n");
    printf("=================================\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Ganjil/Genap\n");
    printf("6. Bilangan Pangkat\n");
    printf("0. Keluar\n");
}

float penjumlahan (float input1, float input2){
    float hasil = input1 + input2;
    return hasil;
}

float pengurangan (float input1, float input2){
    float hasil = input1 - input2;
    return hasil;
}

float perkalian (float input1, float input2){
    float hasil = input1 * input2;
    return hasil;
}

float pembagian (float input1, float input2){
    if (input2 <= 0){
        return -1;
    }
    float hasil = input1 / input2;
    return hasil;
}

float pangkat (float bil_pangkat, float input1){
    return pow(input1, bil_pangkat);
}

int main (){
    int pilihan;
    float input1, input2, result;

    printf("Pilih:  ");
    scanf("%d", &pilihan);

    switch(pilihan){
        case 1:
        printf("Masukkan kedua angka: ");
        scanf("%d %d", &input1, &input2);
        result = penjumlahan(input1, input2);
        printf("Hasil:  %f", result);
        case 2:
        printf("Masukkan kedua angka: ");
        scanf("%d %d", &input1, &input2);
        result = pengurangan(input1, input2);
        printf("Hasil:  %f", result);
        case 3:
        printf("Masukkan kedua angka: ");
        scanf("%d %d", &input1, &input2);
        result = perkalian(input1, input2);
        printf("Hasil:  %f", result);
        case 4:
        case 5:
        case 6:
        default:
    }
    return 0;
}