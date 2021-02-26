/*
Dibuat Oleh Ahmad Fawwaz Thorif
Kelas IK1C
NIM 3.34.20.2.02
*/

# include <stdio.h>

main()
{
    int alas,tinggi,hasil;
    printf("\t[ Penghitung luas segitiga ]\n");
    printf("\t   [ Author : A Fawwaz T ]");
    printf("\n");
    printf("\n");
    printf("[+] masukkan alas segitiga (cm) : ");
    scanf("%d",&alas);
    printf("[+] masukkan tinggi segitiga (cm) : ");
    scanf("%d",&tinggi);
    //printf("alas segitiga %d dan tinggi segitiga %d",alas,tinggi);
    hasil = alas * tinggi / 2;
    printf("[+] luas segitiga : %d",hasil);
    printf("\n\n");
}
