#include <iostream>
#include <time.h>
#include <chrono>

using namespace std;

class Sorting_expert {
public:
    int tab[900];

    Sorting_expert(int needed_array[]) {
        for (int i = 0; i < 900; i++) {
            tab[i] = needed_array[i];
        }
    }

    void get_Array() {
        for (int i = 0; i < 900; i++) {
            cout << tab[i] << " ";
        }
        cout << endl << endl;
    }

    void set_Array();

    void bubble_sort() {
        int* pom = new int;
        for (int i = 0; i < 900; i++)
            for (int j = 0; j < 900; j++) {
                if (tab[i] < tab[j]) {
                    *pom = tab[i];
                    tab[i] = tab[j];
                    tab[j] = *pom;
                    delete pom;
                    pom = new int;
                }
            }
        delete pom;
    }

    int part(int low, int high) {
        int pivot = tab[high];
        int i = (low - 1);
        int* pom = new int;
        for (int j = low; j < high; j++) {
            if (tab[j] <= pivot) {
                i++;
                *pom = tab[i];
                tab[i] = tab[j];
                tab[j] = *pom;
                delete pom;
                pom = new int;
            }
        }
        *pom = tab[i + 1];
        tab[i + 1] = tab[high];
        tab[high] = *pom;
        delete pom;
        return i + 1;
    }

    void quick_sort(int low, int high) {
        if (low < high) {
            int pi = part(low, high);

            quick_sort(low, pi - 1);
            quick_sort(pi + 1, high);
        }
    }

    void insert_sort() {
        for (int i = 1; i < 900; i++) {
            int q = i - 1;
            int marker = tab[i];

            while (q >= 0 && tab[q] > marker) {
                tab[q + 1] = tab[q];
                q--;
            }
            tab[q + 1] = marker;
        }
    }
};

int main()
{
    int choice;
    int arr[900];
    int left = 0;
    int right = 899;

    for (int i = 0; i < 900; i++) {
        arr[i] = rand() % 1000 + 1;
    }

    Sorting_expert obj1(arr);
    Sorting_expert obj2(arr);
    Sorting_expert obj3(arr);
    Sorting_expert obj4(arr);

    obj1.get_Array();

    auto start = std::chrono::high_resolution_clock::now();
    obj1.bubble_sort();
    auto finish = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Time of sorting by bubble sort: " << elapsed.count() << " s\n";
    cout << endl << endl;

    auto start_2 = std::chrono::high_resolution_clock::now();
    obj2.quick_sort(left, right);
    auto finish_2 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed_2 = finish_2 - start_2;
    std::cout << "Time of sorting by quick sort: " << elapsed_2.count() << " s\n";
    cout << endl << endl;

    auto start_3 = std::chrono::high_resolution_clock::now();
    obj3.insert_sort();
    auto finish_3 = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed_3 = finish_3 - start_3;
    std::cout << "Time of sorting by insertion sort: " << elapsed_3.count() << " s\n";
    cout << endl << endl;

       cout << "Sorted array: " << endl;
    obj3.get_Array();


    return 0;
}
