#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#define PI 3.14
#define MAX 255

//void menuporolan(void);

int cont;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void penjumlahan(){
    int a, b, hasil;
        while(1) {
        printf("\n1. Penjumlahan :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a + b;
        printf("Hasil:\t\t\t   %d\n", hasil);
        printf("Ingin mengulang Penjumlahan? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                    menuporolan();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    break;
                }

        }
}
void pengurangan(){
    int a,b,hasil;
        ngulang:
        printf("\n1. Pengurangan :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a - b;
        printf("Hasil:\t\t\t   %d\n", hasil);

        mauulang:
        printf("Ingin mengulang Pengurangan? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void perkalian(){
        int a,b,hasil;
        ngulang:
        printf("\n1. Perkalian :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%d", &a);
        printf("Masukan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a * b;
        printf("Hasil:\t\t\t   %d\n", hasil);

        mauulang:
        printf("Ingin mengulang Perkalian? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void pembagian(){
        float c,d,hasilbagi;
        ngulang:
        printf("\n1. Pembagian :\n");
        printf("Masukan bilangan pertama : ");
        scanf("%f", &c);
        printf("Masukan bilangan kedua   : ");
        scanf("%f", &d);
        hasilbagi = c / d;
        printf("Hasil:\t\t\t   %.2f\n", hasilbagi);

        mauulang:
        printf("Ingin mengulang Pembagian? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void Sinus(){
   double inputan, result;
    ngulang:
    printf("Masukkan derajat sinus : ");
    scanf("%lf", &inputan);
   // Mengubah Ke Derajat
   inputan = (inputan * PI) / 180;
   result = sin(inputan);

   printf("Hasil sinus adalah = %.2lf\n", result);

                mauulang:
                printf("Ingin mengulang Sinus? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void cosinus(){
double inputan, result;
    ngulang:
    printf("Masukkan derajat Cosinus : ");
    scanf("%lf", &inputan);
   // Mengubah Ke Derajat
   inputan = (inputan * PI) / 180;
   result = sin(inputan);

   printf("Hasil Cosinus adalah = %.2lf\n", result);

                mauulang:
                printf("Ingin mengulang Cosinus? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}

void Tangen(){
    double arg, result;
    ngulang:
    printf("Masukkan derajat Tangen : ");
    scanf("%lf", &arg);
   // Mengubah ke Derajat
   arg = (arg * PI) / 180;
   result = tan(arg);

   printf("Hasil Tangen adalah = %.2lf\n", result);

        mauulang:
        printf("Ingin mengulang Tangen? (y/n): ");
        getchar();
        cont = getchar();
        if (cont == 'y'|| cont == 'Y'){
        system("cls");
        goto ngulang;
                }
        else if(cont =='n'|| cont=='N'){
        system("cls");
        goto*menu_utama();
                }
        else{
        system("cls");
        printf("Pilihan tidak tersedia\n");
        goto mauulang;
                }
}

void kel_Persegi(){
    float a, b, hasil;
        ngulang:
        printf("\n1. Keliling Persegi :\n");
        printf("Masukan Panjang Persegi : ");
        scanf("%f", &a);
        printf("Masukan Lebar Persegi   : ");
        scanf("%f", &b);
        hasil = 2*(a+b);
        printf("Keliling Persegi Adalah = %.2f\n", hasil);

        mauulang:
        printf("Ingin mengulang Persegi? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void kel_Trapesium(){
    float a,b,c,hasil,tinggi=0.5,tampung;
        ngulang:
        printf("\n1. Keliling Trapesium :\n");
        printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
        scanf("%f", &a);
        printf("Masukkan Sisi Bawah Trapesium Sama Kaki   : ");
        scanf("%f", &b);
        printf("Masukkan Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &c);
        hasil=tinggi*(a+b);
        tampung=hasil;
        //tinggi=1/2*(a+b);
        //printf("\n%.2f", tinggi);
        printf("Keliling Trapesium Sama Kaki adalah = %.2f\n", tampung+a+b+c);

        mauulang:
        printf("Ingin mengulang Trapesium? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void kel_LayangLayang(){
    float a,b,hasil;
        ngulang:
        printf("\n1. Keliling Layang-Layang :\n");
        printf("Masukkan Panjang Sisi Atas : ");
        scanf("%f", &a);
        printf("Masukkan Panjang Sisi Bawah   : ");
        scanf("%f", &b);
        hasil =2*(a+b);
        printf("Keliling Layang-Layang adalah = %.2f\n", hasil);

        mauulang:
        printf("Ingin mengulang Layang-Layang? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void kel_Lingkaran(){
    float c,d,tampung1,tampung2;
    float phi =3.14;
        ngulang:
        printf("\n1. Lingkaran :\n");
        printf("Masukkan Panjang Diameter : : ");
        scanf("%f", &c);
        printf("Masukkan Panjang Jari-jari   : ");
        scanf("%f", &d);
        tampung1=phi*c;
        tampung2=2*(phi*d);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", tampung1);
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", tampung2);

        mauulang:
        printf("Ingin mengulang Lingkaran? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void Luas_Persegi(){
    float a, b, hasil;
        ngulang:
        printf("\n1. Luas :\n");
        printf("Masukan Panjang Persegi : ");
        scanf("%f", &a);
        printf("Masukan Lebar Persegi   : ");
        scanf("%f", &b);
        hasil =a*b;
        printf("Luas Persegi Adalah = %.2f\n", hasil);

        mauulang:
        printf("Ingin mengulang Persegi? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void Luas_Trapesium(){
    float a,b,c,hasil,tinggi=0.5,tampung;
        ngulang:
        printf("\n1. Luas Trapesium :\n");
        printf("Masukkan Sisi Atas Trapesium Sama Kaki : ");
        scanf("%f", &a);
        printf("Masukkan Sisi Bawah Trapesium Sama Kaki   : ");
        scanf("%f", &b);
        printf("Masukkan Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &c);
        hasil=tinggi*(a+b);
        tampung=hasil;
        printf("Luas Trapesium Sama Kaki adalah = %.2f\n", 0.5*(a+b)*tampung);

        mauulang:
        printf("Ingin mengulang Trapesium? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void Luas_LayangLayang(){
    float a,b,hasil;
        ngulang:
        printf("\n1. Luas Layang-Layang :\n");
        printf("Masukkan Panjang Sisi Atas : ");
        scanf("%f", &a);
        printf("Masukkan Panjang Sisi Bawah   : ");
        scanf("%f", &b);
        hasil =0.5*(a*b);
        printf("Luas Layang-Layang adalah = %.2f\n", hasil);

        mauulang:
        printf("Ingin mengulang Layang-Layang? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void Luas_Lingkaran(){
    float c,d,tampung1,tampung2;
    float phi=3.14;
        ngulang:
        printf("\n1. Luas Lingkaran :\n");
        printf("Masukkan Panjang Diameter : : ");
        scanf("%f", &c);
        printf("Masukkan Panjang Jari-jari   : ");
        scanf("%f", &d);
        tampung1=0.25*phi*(c*c);
        tampung2=phi*(d*d);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", tampung1);
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", tampung2);

        mauulang:
        printf("Ingin mengulang Lingkaran? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void Volum_Kubus(){
    float a;
        ngulang:
        printf("\n1. Volume Kubus :\n");
        printf("Masukkan Panjang Sisi Kubus : ");
        scanf("%f", &a);
        printf("Volume Kubus adalah = %.2f\n", a*a*a);

        mauulang:
        printf("Ingin mengulang Kubus? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void Volum_Prisma(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,tampung,phi=3.14;
        ngulang:
        printf("\n1. Volum Prisma :\n");
        printf("Masukkan Sisi Persegi : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Masukkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Masukkan Tinggi Segitiga : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Masukkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Masukkan Diameter Lingkaran :");
        scanf("%f", &e);
        printf("Masukkan Tinggi Prisma :");
        scanf("%f", &f);
        printf("Volume Prisma Persegi adalah = %.2f\n", a*a*a);
        printf("Volume Prisma Segitiga adalah = %.2f\n", ((b*c)/2)*f);
        printf("Volume Silinder berdasar Jari-Jari adalah = %.2f\n", phi*(d*d*f));
        printf("Volume Silinder berdasar Diameter adalah = %.2f\n", 0.25*phi*(e*e)*f);

        mauulang:
        printf("Ingin mengulang Prisma? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void Volum_Limas(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,tampung,phi=3.14,luas_alas,rdiameter;
        ngulang:
        printf("\n1. Volum Limas :\n");
        printf("Masukkan Sisi Persegi : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Masukkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Masukkan Tinggi Segitiga : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Masukkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Masukkan Diameter Lingkaran :");
        scanf("%f", &e);
        printf("Masukkan Tinggi Limas :");
        scanf("%f", &f);
        luas_alas=0.5*b*f;
        rdiameter=e/2;
        printf("Volume Limas Persegi adalah = %.2f\n", 0.33*a*a*f);
        printf("Volume Limas Segitiga adalah = %.2f\n", 0.33*luas_alas*f);
        printf("Volume Limas Silinder berdasar Jari-Jari adalah = %.2f\n", phi*d*d*f);
        printf("Volume Limas Silinder berdasar Diameter adalah = %.2f\n", phi*rdiameter*rdiameter*f);

        mauulang:
        printf("Ingin mengulang Limas? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }
}
void Volum_Lingkaran(){
    float c,d,rdiameter,tampung2;
    float phi=3.14;
        ngulang:
        printf("\n1. Volume Bola :\n");
        printf("Masukkan Jari-Jari Lingkaran : ");
        scanf("%f", &c);
        printf("Masukkan Diameter Lingkaran : ");
        scanf("%f", &d);
        rdiameter=d/2;
        printf("Keliling Lingkaran berdasar Jari-Jari = %.2f\n", 1.33*phi*c*c*c);
        printf("Keliling Lingkaran berdasar Diameter = %.2f\n", 1.33*phi*rdiameter*rdiameter*rdiameter);

        mauulang:
        printf("Ingin mengulang Lingkaran? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }

}
void akar(){
    float inputan;
    double tampung;
        ngulang:
        printf ("Masukkan bilangan yang akan diakar = ");
        scanf (" %f", &inputan);
        // sqrt(squareroot
        tampung = sqrt(inputan);
        printf (" \nHasil akar dari %.2f adalah %.2f\n", inputan, tampung);

        mauulang:
        printf("Ingin mengulang Akar? (y/n): ");
                getchar();
                cont = getchar();
                if (cont == 'y'|| cont == 'Y'){
                    system("cls");
                goto ngulang;
                }
                else if(cont =='n'|| cont=='N'){
                    system("cls");
                goto*menu_utama();
                }
                else{
                    system("cls");
                    printf("Pilihan tidak tersedia\n");
                    goto mauulang;
                }

}
void menuporolan(){
                //Menu penjumlahan

        int input,inMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<41;a++){printf("+");}
        printf("\n   | >>         Tugas Kalkulator        << |\n   ");
        for(int a=0;a<41;a++){printf("+");}
        printf("\n   |                                       |\n");
        printf("   |         1. Perkalian                  |\n");
        printf("   |         2. Pembagian                  |\n");
        printf("   |         3. Penjumlahan                |\n");
        printf("   |         4. Pengurangan                |\n");
        printf("   |         5. Return Menu utama          |\n");
        printf("   |                                       |\n   ");
        for(int a=0;a<41;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                perkalian();
                break;
            case 2 :
                pembagian();
                break;
            case 3 :
                penjumlahan();
                break;
            case 4 :
                pengurangan();
                break;
            case 5 :
                system("cls");
                goto*menu_utama();


        }
}

void menusincostan(){

        //Menu SinCostan

        int input,inMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==5){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<41;a++){printf("+");}
        printf("\n   | >>            Sincostan            << |\n   ");
        for(int a=0;a<41;a++){printf("+");}
        printf("\n   |                                       |\n");
        printf("   |         1. Sinus                      |\n");
        printf("   |         2. Cosinus                    |\n");
        printf("   |         3. Tangen                     |\n");
        printf("   |         4. Return Menu utama          |\n");
        printf("   |                                       |\n   ");
        for(int a=0;a<41;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                Sinus();
                break;
            case 2:
                cosinus();
                break;
            case 3:
                Tangen();
                break;
            case 4:
                system("cls");
                goto*menu_utama();


        }

}

void menukeliling(){


        //Menu Keliling Luas Volume

        int input,inMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==5){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<51;a++){printf("+");}
        printf("\n   | >>            Keliling Luas Volume           << |\n   ");
        for(int a=0;a<51;a++){printf("+");}
        printf("\n   |                                                 |\n");
        printf("   |         1. Hitung Keliling Bangun Datar         |\n");
        printf("   |         2. Hitung Luas Bangun Datar             |\n");
        printf("   |         3. Hitung Volume Bangun Ruang           |\n");
        printf("   |         4. Return Menu utama                    |\n");
        printf("   |                                                 |\n   ");
        for(int a=0;a<51;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                menukelilingbangundtr();
                break;
            case 2:
                menuluasbangundtr();
                break;
            case 3:
                menuvolum();
                break;
            case 4:
                system("cls");
                goto*menu_utama();


        }
}

void menukelilingbangundtr(){

    //Menu Keliling Bangun Datar

        int input,inMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   | >>            Keliling Bangun Datar         << |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   |                                                |\n");
        printf("   |         1. Keliling Persegi                    |\n");
        printf("   |         2. Keliling Trapesium                  |\n");
        printf("   |         3. Keliling Layang-Layang              |\n");
        printf("   |         4. Keliling Lingkaran                  |\n");
        printf("   |         5. Kembali ke Menu Sebelumnya          |\n");
        printf("   |                                                |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    kel_Persegi();
                break;
             case 2 :
                    kel_Trapesium();
                break;
             case 3 :
                    kel_LayangLayang();
                break;
             case 4 :
                    kel_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }
}

void menuluasbangundtr(){

    //Menu Luas Bangun Datar

        int input,inMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   | >>             Luas Bangun Datar            << |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   |                                                |\n");
        printf("   |         1. Luas Persegi                        |\n");
        printf("   |         2. Luas Trapesium                      |\n");
        printf("   |         3. Luas Layang-Layang                  |\n");
        printf("   |         4. Luas Lingkaran                      |\n");
        printf("   |         5. Kembali ke Menu Sebelumnya          |\n");
        printf("   |                                                |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    Luas_Persegi();
                break;
             case 2 :
                    Luas_Trapesium();
                break;
             case 3 :
                    Luas_LayangLayang();
                break;
             case 4 :
                    Luas_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }

}

void menuvolum(){

    //Menu Volum Bangun Ruang

        int input,inMenu,y=1;
        int up=24,down=25;
        int menutambah;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F8");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        gotoxy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   | >>             Volume Bangun Ruang          << |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        printf("\n   |                                                |\n");
        printf("   |         1. Volume Kubus                        |\n");
        printf("   |         2. Volume Prisma                       |\n");
        printf("   |         3. Volume Limas                        |\n");
        printf("   |         4. Volume Bola                         |\n");
        printf("   |         5. Kembali ke Menu Sebelumnya          |\n");
        printf("   |                                                |\n   ");
        for(int a=0;a<50;a++){printf("+");}
        gotoxy(8,5+y);printf(">>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    Volum_Kubus();
                break;
             case 2 :
                    Volum_Prisma();
                break;
             case 3 :
                    Volum_Limas();
                break;
             case 4 :
                    Volum_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }

}

void menu_utama(){
        int input,inMenu,y=1;
    int up=24,down=25;
    int menutambah;
    char pil;

    system("mode con: cols=120 lines=30");
    system("color F8");
    system("cls");
    do{
    if(y==0){
         y++;
         continue;
    }
        if(y==6){
            y--;
            continue;
        }
    gotoxy(0,2);
    printf("   ");
    for(int a=0;a<41;a++){printf("+");}
    printf("\n   | >>         Tugas Kalkulator        << |\n   ");
    for(int a=0;a<41;a++){printf("+");}
    printf("\n   |                                       |\n");
    printf("   |         1. PingPoroLanSudo            |\n");
    printf("   |         2. SinCosTan                  |\n");
    printf("   |         3. Hitung Keliling dan Luas   |\n");
    printf("   |         4. Hitung Akar Kuadrat        |\n");
    printf("   |         5. Exit                       |\n");
    printf("   |                                       |\n   ");
    for(int a=0;a<41;a++){printf("+");}
    gotoxy(8,5+y);printf(">>");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
    }
    }while((int)pil!=13);
    inMenu=y;
    system("cls");

    switch (inMenu){
    case 1:{
            menuporolan();
        break;
    }
    case 2:{
            menusincostan();
        break;
    }
    case 3:{
            menukeliling();
        break;
    }
    case 4:{
            akar();
        break;
     }
    default : printf("\t\t\t\t\t\tAnda Telah Keluar\n"); exit(0);
    }
}

void main() {
    char username[20];
    char pass[20];
    int i;

    while (1) {
        system("cls");
        printf("Enter username: ");
        scanf("%s", username);

        printf("Enter pass: ");
        i = 0;
        while (1) {
            char c = getch();
            if (c == '\r') {
                pass[i] = '\0';
                break;
            } else if (c == '\b') {
                if (i > 0) {
                    i--;
                    printf("\b \b");
                }
            } else {
                pass[i] = c;
                i++;
                printf("*");
            }
        }
        printf("\n");

        if (strcmp(username, "admin") == 0 && strcmp(pass, "password") == 0) {
            printf("Selamat Login telah berhasil\n");
            system("pause");
            menu_utama();
        } else {
            printf("Username dan Password salah\n");
            system("pause");
        }
    }

}

