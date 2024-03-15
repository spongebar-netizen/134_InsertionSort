#include <iostream>
using namespace std;
int arr[11];
int n;

void input() {
	while (true) {
		cout << "masukkan banyaknya element array = ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "===========" << endl;
	cout << "Masukkan beberapa Elemen Array" << endl;
	cout << "===========" << endl;

	for (int i = 0; i < n; i++) {
		cout << "Data ke berapa-" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

void insertionSort() {
    int i, n, temp, j;
    int arr[11];

    for (i = 1; i <= n - 1; i++) //langkah pertama
    {
        temp = arr[i]; // lamgkah kedua
        j = i - 1; //langkah ketiga
        while (j >= 0 && arr[j] > temp) // langkah keempat
        {
            arr[j + 1] = arr[j]; // langkah keempat bagian A
            j = j - 1; // langkah 4 bagian B
        }
        arr[j + 1] = temp; // langkah 5

    }



}

int main()
{
    std::cout << "Hello World!\n";
}

