# include <stdio.h>

main()
{
    int nilaiujian;
    printf("Masukkan nilai ujian anda : ");
    scanf("%d",&nilaiujian);

    if (nilaiujian >= 80 && nilaiujian <= 100){
        printf("Kamu Istimewa\n");
    }
    if (nilaiujian >= 40 && nilaiujian <= 80 ){
        printf("kamu Lulus\n");
    }
    if (nilaiujian < 40){
        printf("Kamu Gagal\n");
    }
    else
        printf("input salah");
}
