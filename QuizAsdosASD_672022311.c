#include <stdio.h>
#include <conio.h>
#include <windows.h>

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

main(){
    int inputan,a=1;
    char pil;

    system("cls");
    do{
    if(a==0){
         a++;
         continue;
        }
        if(a==5){
            a--;
            continue;
        }
    gotoxy(0,2);
    printf("   ");
    for(int a=0;a<33;a++){printf("=");}
    printf("\n   | **          Menu           ** |\n   ");
    for(int a=0;a<33;a++){printf("=");}
    printf("\n   |         1. Level 1            |\n");
    printf("   |         2. Level 2            |\n");
    printf("   |         3. Level 3            |\n");
    printf("   |         4. Keluar             |\n");
    printf("   |                               |\n   ");
    for(int a=0;a<33;a++){printf("=");}
    setColor(1);
    gotoxy(8,4+a);
    printf("==>");
            pil=getch();
            switch(pil){
            case 72:
                a--;
                break;
            case 80:
                a++;
                break;
            default:
                break;
        }
    }
    while((int)pil!=13);
    inputan=a;
    system("cls");
    switch (inputan){
    case 1:{
        int input;
    printf("Menu 1\nmasukan angka : ");
    scanf("%d",&input);
        for (int i=0;i<=input;i++){
            for(int z=i;z<=i*2;z++){
                printf("%d ",z);
            }
            printf("\n");
        }
        break;
    }
    case 2: {
           system("cls");
        int masukan;
        printf("Masukkan angka : ");
        scanf("%d", &masukan);
        for(int i=1; i<=masukan; i++){
        for(int j=1; j<=i; j++){
            printf ("%d ", i*j);

        }
        printf("\n");
    }
        break;
    }
    case 3: {
        system("cls");
    int isi, batas, bilangan, temp, temp2, bataskiri, tengah, segitiga1, segitiga2, segitiga3, segitiga4, spasi1,spasi2;
        printf("Masukan Bilangan: ");
        scanf("%d",&bilangan);
        isi=bilangan-1;
        temp=isi;
        temp2=isi;
    for (batas=1;batas<=isi;batas++){
        //Segitiga Kiri atas
        for (spasi1=isi;spasi1>=batas;spasi1--)
            printf("%s"," ");
            for (segitiga1=1;segitiga1<=batas;segitiga1++)
                printf("%d",segitiga1);
                         //Segitiga Kanan atas
                for (segitiga2=batas-1;segitiga2>=1;segitiga2--)
                    printf("%d",segitiga2);
                    printf("\n");
    }
                    //Tengah
    for(bataskiri=1;bataskiri<=bilangan;bataskiri++)
        printf("%d",bataskiri);
            for(tengah=bilangan-1;tengah>=1;tengah--)
                printf("%d",tengah);
                    printf("\n");
    for (batas=1;batas<=isi;batas++){
        //Segitiga Kiri Bawah
    for (spasi2=1;spasi2<=batas;spasi2++)
        printf("%s"," ");
            for (segitiga3=1;segitiga3<=temp;segitiga3++)
                printf("%d",segitiga3);temp=temp-1;
                //Segitiga Kanan Bawah
    for (segitiga4=temp2-1;segitiga4>=1;segitiga4--)
        printf("%d",segitiga4);temp2=temp2-1;
            printf("\n");
    }
    break;
    }
    case 4: {
        printf("Anda Keluar"); system("pause > null"); exit(0);
    }
    default : break;

}
system("pause > null");
system("pause");
goto*main();
}
