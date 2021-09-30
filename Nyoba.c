#include <stdio.h>


void main(){
    int nilai;
    int nim;
    char namalengkap[50];
    int matkul;

    printf("\t\t\t\t\t====Daftar Penilaian Mahasiswa====\n");
    printf("\t\t\t\t=======Masukkan Nilai Dengan Tepat======\n\n\n");
    printf("Masukkan Nama Anda: ");
        scanf("%s", &namalengkap);
    printf("\n\nMasukkan NIM Anda: ");
        scanf("%i", &nim);
    printf("\n\nDaftar Mata Kuliah: ");
    printf("\n\t1. Kalkulus\n\t2. Fisika\n\t3. Matematika Diskrit\n\t4. Pancasila\n\t5. Bahasa Indonesia\n\t6. Agama");
    printf("\nPilih Mata Kuliah Anda: ");
        scanf("%i", &matkul);

        switch(matkul){
            case 1:
                printf("\n1. Kalkulus");
                break;
            case 2:
                printf("\n2. Fisika");
                break;
            case 3:
                printf("\n3. Matematika Diskrit");
                break;
            case 4:
                printf("\n4. Pancasila");
                break;
            case 5:
                printf("\n5. Bahasa Indonesia");
                break;
            case 6:
                printf("\n6. Agama");
                break;
        }

    printf("\n\nMasukkan Nilai Anda: ");
        scanf("%i", &nilai);

    if(nilai > 70 && nilai <= 100){
        printf("Nilai Anda sudah memenuhi KKM");
        printf("\nAnda tidak perlu mengulang Ujian\n\n");
    }else{
        printf("Nilai Anda belum memenuhi KKM");
        printf("\nAnda dimohon untuk mengulang kembali ujian\n\n");
    }
} 
