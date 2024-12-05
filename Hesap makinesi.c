#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void toplama();
void cikarma();
void carpma();
void bolme();
void usAlma();
void karekok();
void ortalama();
void faktoriyel();
void gecmisIslemler();

char gecmis[100][100];
int gecmisIndex = 0;

int main() {
    int devam = 1;

    while (devam) {
        int secim;

        printf("\nHesap Makinesi\n");
        printf("1. Toplama\n");
        printf("2. Cikarma\n");
        printf("3. Carpma\n");
        printf("4. Bolme\n");
        printf("5. Us Alma\n");
        printf("6. Karekok Alma\n");
        printf("7. Ortalama Hesaplama\n");
        printf("8. Faktoriyel Hesaplama\n");
        printf("9. Gecmis Islemleri Goruntule\n");
        printf("Cikmak icin 0'a basin\n\n");

        printf("Seciminizi yapin: ");
        scanf("%d", &secim);

        switch (secim) {
        case 0:
            devam = 0;
            break;
        case 1:
            toplama();
            break;
        case 2:
            cikarma();
            break;
        case 3:
            carpma();
            break;
        case 4:
            bolme();
            break;
        case 5:
            usAlma();
            break;
        case 6:
            karekok();
            break;
        case 7:
            ortalama();
            break;
        case 8:
            faktoriyel();
            break;
        case 9:
            gecmisIslemler();
            break;
        default:
            printf("Gecersiz secim. Lutfen 1-9 arasinda bir secim yapin.\n");
            break;
        }
    }

    printf("Programdan cikiliyor. Gorusuruz!\n");
    return 0;
}

void toplama() {
    double sayi1, sayi2, sonuc;
    printf("Birinci sayiyi girin: ");
    scanf("%lf", &sayi1);
    printf("Ikinci sayiyi girin: ");
    scanf("%lf", &sayi2);

    sonuc = sayi1 + sayi2;
    printf("Sonuc: %.2lf\n", sonuc);

    snprintf(gecmis[gecmisIndex++], 100, "%.2lf + %.2lf = %.2lf", sayi1, sayi2, sonuc);
}

void cikarma() {
    double sayi1, sayi2, sonuc;
    printf("Birinci sayiyi girin: ");
    scanf("%lf", &sayi1);
    printf("Ikinci sayiyi girin: ");
    scanf("%lf", &sayi2);

    sonuc = sayi1 - sayi2;
    printf("Sonuc: %.2lf\n", sonuc);

    snprintf(gecmis[gecmisIndex++], 100, "%.2lf - %.2lf = %.2lf", sayi1, sayi2, sonuc);
}

void carpma() {
    double sayi1, sayi2, sonuc;
    printf("Birinci sayiyi girin: ");
    scanf("%lf", &sayi1);
    printf("Ikinci sayiyi girin: ");
    scanf("%lf", &sayi2);

    sonuc = sayi1 * sayi2;
    printf("Sonuc: %.2lf\n", sonuc);

    snprintf(gecmis[gecmisIndex++], 100, "%.2lf * %.2lf = %.2lf", sayi1, sayi2, sonuc);
}

void bolme() {
    double sayi1, sayi2, sonuc;
    printf("Birinci sayiyi girin: ");
    scanf("%lf", &sayi1);
    printf("Ikinci sayiyi girin: ");
    scanf("%lf", &sayi2);

    if (sayi2 != 0) {
        sonuc = sayi1 / sayi2;
        printf("Sonuc: %.2lf\n", sonuc);

        snprintf(gecmis[gecmisIndex++], 100, "%.2lf / %.2lf = %.2lf", sayi1, sayi2, sonuc);
    }
    else {
        printf("Hata: Bir sayi sifira bolunemez.\n");
    }
}

void usAlma() {
    double taban, us, sonuc;
    printf("Taban sayiyi girin: ");
    scanf("%lf", &taban);
    printf("Us degerini girin: ");
    scanf("%lf", &us);

    sonuc = pow(taban, us);
    printf("Sonuc: %.2lf\n", sonuc);

    snprintf(gecmis[gecmisIndex++], 100, "%.2lf ^ %.2lf = %.2lf", taban, us, sonuc);
}

void karekok() {
    double sayi, sonuc;
    printf("Sayiyi girin: ");
    scanf("%lf", &sayi);

    if (sayi >= 0) {
        sonuc = sqrt(sayi);
        printf("Sonuc: %.2lf\n", sonuc);

        snprintf(gecmis[gecmisIndex++], 100, "sqrt(%.2lf) = %.2lf", sayi, sonuc);
    }
    else {
        printf("Hata: Negatif bir sayinin karekoku alinamaz.\n");
    }
}

void ortalama() {
    int adet, i;
    double sayi, toplam = 0, sonuc;

    printf("Kac sayi gireceksiniz?: ");
    scanf("%d", &adet);

    for (i = 0; i < adet; i++) {
        printf("%d. sayiyi girin: ", i + 1);
        scanf("%lf", &sayi);
        toplam += sayi;
    }

    sonuc = toplam / adet;
    printf("Sonuc: %.2lf\n", sonuc);

    snprintf(gecmis[gecmisIndex++], 100, "%d sayinin ortalamasi = %.2lf", adet, sonuc);
}

void faktoriyel() {
    int sayi, i;
    unsigned long long sonuc = 1;

    printf("Faktoriyelini almak istediginiz sayiyi girin: ");
    scanf("%d", &sayi);

    for (i = 1; i <= sayi; i++) {
        sonuc *= i;
    }

    printf("Sonuc: %llu\n", sonuc);
    snprintf(gecmis[gecmisIndex++], 100, "%d! = %llu", sayi, sonuc);
}

void gecmisIslemler() {
    printf("Gecmis Islemler:\n");
    for (int i = 0; i < gecmisIndex; i++) {
        printf("%s\n", gecmis[i]);
    }
}
