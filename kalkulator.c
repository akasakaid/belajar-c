# include <stdio.h>

main()
{
    char banner;
    int pilihan,bilangan_pertama,bilangan_kedua,hasil;
    banner = "\t [ Super Kalkulator ]\n\t[ Author by AkasakaID]\n";
    printf("%s",banner);
    printf("\n\n");
    printf("# Metode Aritmatika #\n");
    printf("1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n# Pilih metode aritmatika : ");
    scanf("%d",&pilihan);
    if (pilihan == 1){
        printf("# Bilangan pertama : ");
        scanf("%i",&bilangan_pertama);
        printf("# Bilangan kedua : ");
        scanf("%i",&bilangan_kedua);
        hasil = bilangan_pertama + bilangan_kedua;
        printf("# Hasil Penjumlahan : %i",hasil);
    }
    else if (pilihan == 2){
        printf("# Bilangan pertama : ");
        scanf("%i",&bilangan_pertama);
        printf("# Bilangan kedua : ");
        scanf("%i",&bilangan_kedua);
        hasil = bilangan_pertama - bilangan_kedua;
        printf("# Hasil Penjumlahan : %i",hasil);
    }
    else if (pilihan == 3){
        printf("# Bilangan pertama : ");
        scanf("%i",&bilangan_pertama);
        printf("# Bilangan kedua : ");
        scanf("%i",&bilangan_kedua);
        hasil = bilangan_pertama * bilangan_kedua;
        printf("# Hasil Penjumlahan : %i",hasil);
    }
    else if (pilihan == 4){
        printf("# Bilangan pertama : ");
        scanf("%i",&bilangan_pertama);
        printf("# Bilangan kedua : ");
        scanf("%i",&bilangan_kedua);
        hasil = bilangan_pertama / bilangan_kedua;
        printf("# Hasil Penjumlahan : %i",hasil);
    }
}
