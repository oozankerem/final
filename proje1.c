#include <stdio.h>
//OZAN KEREM 
//2420171039
//https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=L8dcN6gGGn
//oozankerem

void arayaEklemeSiralama(int dizi[], int boyut) {
    int i, key, j;
    for (i = 1; i < boyut; i++) {
        key = dizi[i];
        j = i - 1;

        while (j >= 0 && dizi[j] > key) {
            dizi[j + 1] = dizi[j];
            j = j - 1;
        }
        dizi[j + 1] = key;
    }
}

int ikiliArama(int dizi[], int sol, int sag, int aranan) {
    int orta;
    while (sol <= sag) {
        orta = sol + (sag - sol) / 2;

        if (dizi[orta] == aranan)
            return orta;

        if (dizi[orta] < aranan)
            sol = orta + 1;
        else
            sag = orta - 1;
    }
    return -1;
}

void diziyiYazdir(int dizi[], int boyut) {
    int i;
    for (i = 0; i < boyut; i++)
        printf("%d ", dizi[i]);
    printf("\n");
}

int main() {
    int dizi[] = {64, 34, 25, 12, 22, 11, 90};
    int boyut = 7; 
    int arananSayi, sonuc;

    printf("Program Basladi\n");
    
    printf("Dizinin Siralanmadan Onceki Hali: \n");
    diziyiYazdir(dizi, boyut);

    arayaEklemeSiralama(dizi, boyut);
    
    printf("\nDizi Siralandi: \n");
    diziyiYazdir(dizi, boyut);

    printf("\nDizide Aramak Istediginiz Sayiyi Girin: ");
    scanf("%d", &arananSayi);

    sonuc = ikiliArama(dizi, 0, boyut - 1, arananSayi);

    if (sonuc != -1) {
        printf("\nSonuc: %d sayisi dizinin %d. indeksinde bulundu.\n", arananSayi, sonuc);
    } else {
        printf("\nSonuc: %d sayisi dizide BULUNAMADI.\n", arananSayi);
    }

    
    return 0;
}
