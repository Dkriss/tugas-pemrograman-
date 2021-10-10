#include <stdio.h>

main(){
    int jumlahbil, angka;

    printf("Masukkan jumlah nilai: ");
        scanf("%d", &jumlahbil);
    float bil[jumlahbil], total, rata;
    total = 0;

    for(angka=1; angka<=jumlahbil; angka++){
        printf("Masukkan Bilangan %d: ", angka);
            scanf("%f", &bil[angka]);
            total = total + bil[jumlahbil];
    }
    total = total + bil[angka];
    rata = total / jumlahbil;
    printf("Total dari jumlah nilai tersebut adalah: %f\n", total);
    printf("Rata-rata dari %d bilangan: %.2f", jumlahbil, rata);

    return 0;
}
