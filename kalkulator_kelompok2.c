#include <stdio.h>

void displayheader(){
    printf("\n=================================\n");
    printf("            CALCULATOR           \n");
    printf("=================================\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Ganjil/Genap\n");
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

int main (){

    return 0;
}