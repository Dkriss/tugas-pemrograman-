\\ Dam iki kok ga kenek, padahal iki titik koma e wis tak deloki ga onok sing kelewat. tapi error e tulisan e "error: expected ';' before ')' token ndek baris 13 sing for i 

#include <stdio.h>

int main(){
    int jumlahbil, angka;

    printf("Masukkan jumlah bilangan: ");
        scanf("%d", &jumlahbil);
    float bil[jumlahbil], total, rata;
    total = 0;

    for(angka=1, angka<=jumlahbil, angka++){
        printf("Masukkan Bilangan %d: ", angka);
        scanf("%f", &bil[jumlahbil]);
        total = total + bil[angka];
    }
    rata = total/jumlahbil;
    printf("Rata-rata dari %d bilangan: %.4f", jumlahbil, rata);

    return 0;
}
