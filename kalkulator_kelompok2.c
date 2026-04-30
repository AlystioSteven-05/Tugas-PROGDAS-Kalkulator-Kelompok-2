#include <stdio.h>

void displayheader(){
    printf("\n=================================\n");
    printf("            CALCULATOR           \n");
    printf("=================================\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
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
    float input1, input2, result;
    int angka, choice;

    do{
        displayheader ();
        printf("Masukkan PIlihan: ");
        scanf("%d", &choice);

        switch (choice){
        case 1:
            printf("\n===== Penjumlahan =====\n");
            printf("Masukkan Angka Pertama: ");
            scanf("%f", &input1);
            printf("Masukkan Angka Kedua: ");
            scanf("%f", &input2);

            result = penjumlahan(input1, input2);
            printf("Hasil %.2f + %.2f = %.2f\n", input1, input2, result);
            break;
            
        default:
            printf("Pilihan Tidak Valid! Coba lagi\n");
            break;
        }
    }while(choice != 0);
    return 0;
}