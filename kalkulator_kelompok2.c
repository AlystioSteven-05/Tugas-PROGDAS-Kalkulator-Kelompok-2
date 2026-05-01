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
    if (input2 == 0){
        return -1;
    }
    float hasil = input1 / input2;
    return hasil;
}

int ganjil_genap (int angka){
    if (angka %2 == 0){
        return 1;
    }
}

float pangkat (float input1, float bil_pangkat){
    float hasil = pow(input1, bil_pangkat);
    return hasil;
}

int main (){
    int pilihan;
    float input1, input2, angka, result;

    do{
        displayheader ();
        printf("Masukkan Pilihan: ");
        scanf("%d", &pilihan);

        switch(pilihan){
        case 1:
            printf("\n===== Penjumlahan =====\n");
            printf("Masukkan Angka Pertama: ");
            scanf("%f", &input1);
            printf("Masukkan Angka Kedua: ");
            scanf("%f", &input2);

            result = penjumlahan(input1, input2);
            printf("Hasil %.2f + %.2f = %.2f\n", input1, input2, result);
            break;
        case 2:
        printf("\n===== Pengurangan =====\n");
            printf("Masukkan Angka Pertama: ");
            scanf("%f", &input1);
            printf("Masukkan Angka Kedua: ");
            scanf("%f", &input2);

            result = pengurangan(input1, input2);
            printf("Hasil %.2f - %.2f = %.2f\n", input1, input2, result);
            break;
        case 3:
            printf("\n===== Perkalian =====\n");
            printf("Masukkan Angka Pertama: ");
            scanf("%f", &input1);
            printf("Masukkan Angka Kedua: ");
            scanf("%f", &input2);

            result = perkalian(input1, input2);
            printf("Hasil %.2f x %.2f = %.2f\n", input1, input2, result);
            break;
        case 4:
            printf("\n===== Pembagian =====\n");
            printf("Masukkan Angka Pertama: ");
            scanf("%f", &input1);
            printf("Masukkan Angka Kedua: ");
            scanf("%f", &input2);

            result = pembagian(input1, input2);
            if (result == -1){
                printf("Penyebut Tidak Boleh 0\n");
            }else{
                printf("Hasil %.2f / %.2f = %.2f\n", input1, input2, result);
            }
        case 5:
            printf("\n===== Ganjil/Genap =====\n");
            printf("Masukkan Angka: ");
            scanf("%d", &angka);

            result = ganjil_genap(angka);
            if (result == 1){
                printf("Angka %d adalah genap\n", angka);
            }else{
                printf("Angka %d adalah ganjil\n", angka);
            }
        break;
        case 6:
            printf("\n===== Pangkat =====\n");
            printf("Masukkan kedua angka: ");
            scanf("%f %f", &input1, &input2);
            result = pangkat(input1, input2);
            printf("Hasil:  %.2f\n", result);
        break;
        case 0:
        printf("Terima Kasih\n");
        break;
        default:
        printf("Input Invalid\n");
        break;
        }
    } while(pilihan != 0);

    return 0;
}