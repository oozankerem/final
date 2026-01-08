#include <stdio.h>
#define N 
//Umut Can Topsakal
//2420171008
//https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=AJaS7nrjmk

void bubbleSort(int arr[], int n) {
    int i, j, temp; 
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int binarySearch(int arr[], int low, int high, int target) {
    int mid;
    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int dizi[] = {64, 34, 25, 12, 22, 11, 90, 5};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int arananSayi;
    int sonuc;

    printf("siralama\n\n");

    printf("Dizinin Sirasiz Hali \n");
    printArray(dizi, n);

    bubbleSort(dizi, n);

    printf("Dizinin sirali hali \n");
    printArray(dizi, n);

    printf("\nDizide aramak istediginiz sayiyi giriniz");
    scanf("%d", &arananSayi); 

    sonuc = binarySearch(dizi, 0, n - 1, arananSayi);

    if (sonuc != -1) {
        printf("\nsonuc %d sayisi dizide bulundu (Indeks: %d)\n", arananSayi, sonuc);
    } else {
        printf("\nsonuc %d sayisi dizide bulunamasý\n", arananSayi);
    }
    

    return 0;
}

