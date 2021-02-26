/* Author : Ahmad Fawwaz Thorif */
/* Program penghitung waktu hidup dibumi */

# include <stdio.h>
# include <time.h>

int total_hari[12] = {0,31,59,90,120,151,181,212,243,273,304,334};

int hitung(int data_tanggal,int data_bulan, int data_tahun, int tahun_sekarang, int *hitung_hari,int *hitung_tahun){
    if (data_bulan == 1){
        data_bulan = total_hari[0];
    } else if (data_bulan == 2){
        data_bulan = total_hari[1];
    } else if (data_bulan == 3){
        data_bulan = total_hari[2];
    } else if (data_bulan == 4){
        data_bulan = total_hari[3];
    } else if (data_bulan == 5){
        data_bulan = total_hari[4];
    } else if (data_bulan == 6){
        data_bulan = total_hari[5];
    } else if (data_bulan == 7){
        data_bulan = total_hari[6];
    } else if (data_bulan == 8){
        data_bulan = total_hari[7];
    } else if (data_bulan == 9){
        data_bulan = total_hari[8];
    } else if (data_bulan == 10){
        data_bulan = total_hari[9];
    } else if (data_bulan == 11){
        data_bulan = total_hari[10];
    } else if (data_bulan == 12){
        data_bulan = total_hari[11];
    }
    *hitung_hari = data_bulan+data_tanggal;
    *hitung_tahun = tahun_sekarang-data_tahun;
}

int main(){
    int tanggal_lahir,bulan_lahir,tahun_lahir,hari,bulan,tahun,hasil_hari_a,hasil_tahun_a,hasil_hari_b,hasil_tahun_b;
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\tProgram penghitung waktu hidup dibumi\n");
    printf("\tCoded : Ahmad Fawwaz Thorif - IK1C - 33420202\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\n");
    time_t waktu;
    time(&waktu);
    hari = localtime(&waktu)->tm_mday;
    bulan = localtime(&waktu)->tm_mon+1; // 11 + 1 = 12
    tahun = localtime(&waktu)->tm_year+1900; // 2021 ->> output 121
    printf("Masukkan Tanggal Lahir : ");
    scanf("%i",&tanggal_lahir);
    if (tanggal_lahir > 31 || tanggal_lahir == 0){
        printf("Tanggal Lahir Salah !\n");
        return 0;
    }
    printf("Masukkan Bulan Lahir : ");
    scanf("%i",&bulan_lahir);
    if (bulan_lahir > 12 || bulan_lahir == 0){
        printf("Bulan Lahir Salah !\n");
        return 0;
    }
    printf("Masukkan Tahun Lahir : ");
    scanf("%i",&tahun_lahir);
    if (tahun_lahir > tahun || tahun_lahir == 0){
        printf("Tahun Lahir Salah !\n");
        return 0;
    }
    hitung(tanggal_lahir,bulan_lahir,tahun_lahir,tahun,&hasil_hari_a,&hasil_tahun_a);
    hitung(hari,bulan,tahun,tahun,&hasil_hari_b,&hasil_tahun_b);
    int jumlah = hasil_tahun_a*365-hasil_hari_a+hasil_hari_b;
    jumlah += floor(hasil_tahun_a/4);
    int berapa_jam = jumlah*24;
    int berapa_detik = berapa_jam*60;
    printf("\n");
    printf("[*] Berikut laporan waktu kamu hidup dibumi \n");
    printf("[*] ukuran tahun : %i tahun\n",hasil_tahun_a);
    printf("[*] ukuran hari : %i hari\n",jumlah);
    printf("[*] ukuran jam : %i jam\n",berapa_jam);
    printf("[*] ukuran detik : %i detik\n",berapa_detik);
    printf("\n");
    int ultah;
    if (hasil_hari_a > hasil_hari_b){
        ultah = hasil_hari_a - hasil_hari_b;
    }else{
        ultah = 365-hasil_hari_b+hasil_hari_a;
    }
    if (hasil_hari_b < 59 && hari == tanggal_lahir){
        ultah += 1;
    }
    if (bulan == bulan_lahir && tanggal_lahir == hari){
        printf("[*] selamat ulang tahun ^-^\n");
    }else{
        printf("[*] %i hari lagi menuju ulang tahunmu ^-^\n",ultah);
    }
    printf("[*] Semoga Menyenangkan Terima kasih telah menggunakan program ini ^-^\n");
}

