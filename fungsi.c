#include "header.h"

int tambah(int basis, int rekuren)
{
    int hsl_tambah;
    if(basis==0)
    {
        hsl_tambah=rekuren;
    }
    else
    {
        hsl_tambah=1+tambah((basis-1),rekuren);
        printf("+1");
    }

    return hsl_tambah;
}

int kali(int basis1, int rekuren1)
{
    int hsl_kali;
    if(basis1==0)
    {
        hsl_kali=0;
    }
    else
    {
        hsl_kali=kali((basis1-1),rekuren1)+rekuren1;
    }

    return hsl_kali;
}

int faktorial(int n)
{
    int hasil_f;

    if(n==0||n==1)
    {
        hasil_f=1;
    }
    else
    {
        hasil_f= n*faktorial(n-1);
    }
    return hasil_f;
}

int sumArr(int data[],int banyak)
{
    int hsl_array = 0;
    if(banyak==0)
    {
        return data[0];
    }
    else
    {
        return(data[banyak]+sumArr(data,banyak-1));
    }
}
