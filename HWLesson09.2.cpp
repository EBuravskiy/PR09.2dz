#include <iostream>
#include <string>
using namespace std;

void CreateArray(string *arr, int rows) {
    cout << "Enter surnames:\n";
    for (int i = 0,count = 1; i < rows; i++,count ++) {
            cout << count << "\t";
            cin >> arr[i];
        }
}

void ShowArray(string *arr, int rows) {
    cout << "Surnames in array:\n";
    for (int i = 0, count = 1; i < rows; i++, count++) {
            cout << count << "\t" << arr[i] << endl;
    }
}

void SortArray(string* arr, int rows) {
    bool fl = true;
    int count = 0;
    while (fl) {
        fl = false;
        for (int i = 0; i < rows - 1; i++) {
            if ((int)arr[i][0] > (int)arr[i + 1][0]) {
                string temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                fl = true;
            }
        }
        count++;
    }
    fl = true;
    while (fl) {
        fl = false;
        for (int i = 0; i < rows - 1; i++) {
            if ((int)arr[i][0] == (int)arr[i + 1][0] && (int)arr[i][1] > (int)arr[i + 1][1]) {
                string temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                fl = true;
            }
        }
        count++;
    }
    cout << count << endl;
}

int main()
{
    int rows = 0;
    cout << "Enter the number of surnames: " << endl;
    cin >> rows;
    string *arr = new string [rows];
    CreateArray(arr, rows);
    ShowArray(arr, rows);
    SortArray(arr, rows);
    ShowArray(arr, rows);
    delete[]arr;
    arr = nullptr;
    return 0;
}