// CATATAN 
    /* Iki aku lak njajal nggawe rata-rata dam, lah kadang aku jek kebingungan lek sing nggawe cara biasa karo sing cara loop+array, iki tak duduhi garapanku. Gurung mari garapanku,
        sepurane lek jek cekeremes uelek wkwkwkwk. Tulung duduhno sing nggawe cara manual biasa karo sing loop+array. Sing garapanku ojo dihapus, copas trus dekek ning ndisor ae 
        :v SUWUN DAAAAMMMM
        
// IKI GARAPANKU 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int pemrogramandasar, kalkulus, pti, orkom, nim;
    char namalengkap[50];
    float rata = (pemrogramandasar+kalkulus+pti+orkom)/4;

    printf("\t\t\t\t\t====Program Cek Kelulusan Nilai Mahasiswa====\n");
    printf("\t\t\t\t=======Masukkan Nilai Dengan Tepat======\n\n\n");
    printf("Masukkan Nama Anda: ");
        scanf("%s", &namalengkap);
	printf("Masukkan NIM Anda: ");
		scanf("%d", &nim);
	printf("\nMasukkan nilai mata kuliah Pemrograman Dasar Anda: ");
		scanf("%d", &pemrogramandasar);
	printf("Masukkan nilai mata kuliah Kalkulus Anda: ");
		scanf("%d", &kalkulus);
	printf("Masukkan nilai mata kuliah PTI Anda: ");
		scanf("%d", &pti);
	printf("Masukkan nilai mata kuliah Organisasi Komputer Anda: ");
		scanf("%d", &orkom);
        scanf("%f", &rata);
	
	if((pemrogramandasar+kalkulus+pti+orkom)/4 >= 75){
		printf("Nilai Rata-rata Anda Adalah: ", rata;
		printf("\nSelamat Anda LULUS");
	}else{
		printf("Nilai Rata-rata Anda Adalah: ", rata;
		printf("\nAnda Belum lulus, dimohon untuk mengulang lagi");	
	} 
	
	return 0;	
}
        
