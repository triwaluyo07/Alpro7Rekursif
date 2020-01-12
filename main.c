#include "header.h"
///Nama : Tri Waluyo
///Kelas : A11.4203
///Nim : A11.2017.10097
int main()
{
    int angka1,angka2,hasil,hasil2;
    printf("masukkan angka 1 : ");
    scanf("%d",&angka1);
    printf("masukkan angka 2 : ");
    scanf("%d",&angka2);

    hasil=tambah(angka1,angka2);
    printf("\n");
    printf("hasil tambah = %d\n",hasil);
    printf("\n");

    hasil2=kali(angka1,angka2);
    printf("hasil kali = %d\n",hasil2);

    int fakto;
    printf("Masukkan angka faktorial : ");
    scanf("%d",&fakto);

    printf("Hasil : %d\n",faktorial(fakto));

    int data[4]={1,2,3,4,5};
    printf("\n");
    printf("hasil array= %d \n",sumArr(data,4));
    return 0;
}
