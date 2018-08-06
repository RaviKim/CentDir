#include <iostream>

#define ITEM_SIZE 10

using namespace std;

void print_arr(int a[], int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

void merge(int a[], int left, int mid, int right) {
    int i, j, k;

    i = left;
    j = mid + 1;
    k = left;

    int tmp_arr[ITEM_SIZE];

    // left ?? mid ??? ??? mid + 1 ?? right ??? ??? ?? ??
    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) {
            tmp_arr[k] = a[i];
            i++;
        }
        else {
            tmp_arr[k] = a[j];
            j++;
        }
        k++;
    }

    // left ??? ?? ? ??????, right ??? index? ?? ?? ??
    // right ??? ?? ??? ????? tmp_arr? ??
    if (i > mid) {
        for (int m = j; m <= right; m++) {
            tmp_arr[k] = a[m];
            k++;
        }
    }
    // left ??? ?? ??? ????? tmp_arr? ??
    else {
        for (int m = i; m <= mid; m++) {
            tmp_arr[k] = a[m];
            k++;
        }
    }

    // ?? ??? tmp_arr? ?? ?? ??? ????.
    for (int m = left; m <= right; m++) {
        a[m] = tmp_arr[m];
    }
}

void merge_sort(int a[], int left, int right) {
    int mid;

    if (left < right) {
        // ???? ??? ?? ?? ?? ??
        mid = (left + right) / 2;

        // ??
        merge_sort(a, left, mid);
        merge_sort(a, mid + 1, right);

        // ??
        merge(a, left, mid, right);
    }
}

int main() {
    int a[ITEM_SIZE] = { 15, 2, 24, 18, 7, 13, 12, 4, 21, 9 };
    print_arr(a, ITEM_SIZE);
    merge_sort(a, 0, ITEM_SIZE - 1);
    print_arr(a, ITEM_SIZE);
    return 0;
}
