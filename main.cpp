#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    int arr[] = {4, 2, 1, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Measure execution time
    auto start = high_resolution_clock::now();
    bubbleSort(arr, n);
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Execution time: " << duration.count() << " microseconds" << endl;

    // Measure space complexity
    int space = sizeof(arr) + sizeof(n);
    cout << "Space complexity: " << space << " bytes" << endl;

    return 0;
}

/*Waktu: Dalam kasus terburuk, Bubble Sort memiliki kompleksitas waktu O(n^2). Hal ini disebabkan oleh dua iterasi bersarang, masing-masing dengan n-1 dan n-i-1 perulangan, di mana n adalah jumlah elemen dalam array. Meskipun mungkin ada kondisi terbaik di mana array sudah terurut dan kompleksitas waktu menjadi O(n), tetapi kompleksitas rata-rata dan terburuk adalah O(n^2).
Ruang: Bubble Sort menggunakan jumlah ruang konstan, yaitu O(1), karena hanya ada penggunaan variabel tambahan dan tidak ada alokasi memori tambahan yang bergantung pada ukuran input.
Jadi Bubble Sort tidak efisien untuk pengurutan besar karena waktu eksekusi yang relatif lambat. Metode pengurutan lain seperti Quick Sort atau Merge Sort biasanya lebih disukai karena memiliki kompleksitas waktu yang lebih baik seperti O(nlogn).
*/
