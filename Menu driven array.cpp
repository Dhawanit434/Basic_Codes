#include <iostream>
using namespace std;
void create(int arr[], int N) {
    cout << "Enter " << N << " elements:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
}
void display(int arr[], int N) {
    cout << "Array elements:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insert(int arr[], int& N, int position, int element) 
{
    for (int i = N; i > position; i--) 
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    N++;
}
void deletion(int arr[], int& N, int position) 
{
    for (int i = position; i < N - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    N--;
}
int main() {
    int choice;
    int arr[100];
    int N = 0;
    do {
        cout << "1. Create Array" << endl;
        cout << "2. Display Array" << endl;
        cout << "3. Insert Element" << endl;
        cout << "4. Delete Element" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the number of elements: ";
                cin >> N;
                create(arr, N);
                break;
            case 2:
                display(arr, N);
                break;
            case 3:
                if (N == 0) {
                    cout << "Create array first." << endl;
                } else {
                    int position, element;
                    cout << "Enter position and element to insert: ";
                    cin >> position >> element;
                    insert(arr, N, position, element);
                }
                break;
            case 4:
                if (N == 0) {
                    cout << "Create array first." << endl;
                } else {
                    int position;
                    cout << "Enter position to delete element: ";
                    cin >> position;
                    deletion(arr, N, position);
                }
                break;
            case 5:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } 
    while (choice != 5);
    return 0;
}

