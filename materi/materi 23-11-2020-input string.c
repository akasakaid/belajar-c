# include <stdio.h>

main()
{
    char nama[20],alamat[20];
    printf("masukkan nama anda : ");
    scanf("%[^\n]",&nama);
    printf("masukkan alamat anda : ");
    scanf("%s",&alamat);
    printf("nama anda adalah %s , alamat anda adalah %s",nama,alamat);
}
