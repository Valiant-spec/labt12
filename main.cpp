##include <iostream>
using namespace std;

//prob1
/*int main() {
    int x = 10;
    int *ptr = &x;

    cout<<"Value of x: " <<x<< endl;
    cout <<"Address of x:" << ptr << endl;
    cout <<"Value at ptr: "<< *ptr << endl;

    return 0;
}*/


//prob2
/*int main() {
    int num = 20;
    int *ptr = &num;

    *ptr = 100;

    cout << "Updated value: " << num << endl;

    return 0;
}
*/


//prob3
/*void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
*/

//prob4
/*int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
*/


//prob5
/*int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int *middle = ptr + 2;

    cout << "Middle element: " << *middle << endl;

    return 0;
}
*/


//prob6
/*void square(int *n) {
    *n = (*n) * (*n);
}

int main() {
    int num = 6;
    square(&num);
    cout << "Squared: " << num << endl;
    return 0;
}
*/


//prob7
/*int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << "Size of array: " << sizeof(arr) << endl;
    cout << "Size of pointer: " << sizeof(ptr) << endl;

    return 0;
}
*/


//prob8
/*int main() {
    int x = 42;
    void *ptr = &x;

    cout << "Value: " << *(int*)ptr << endl;

    return 0;
}
*/


//prob9
/*int main() {
    int arr[5] = {3, 9, 1, 7, 5};
    int *ptr = arr;
    int max = *ptr;

    for (int i = 1; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    cout << "Max value: " << max << endl;
    return 0;
}
*/
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.