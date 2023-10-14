#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Створення стеку
    std::stack<int> myStack;

    // Додавання елементів до стеку
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    // Виведення значень елементів на екран
    cout << "Stack element value:" << endl;
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    // Виконання дій
    // Наприклад, додамо ще елементи
    myStack.push(6);
    myStack.push(7);

    // Виведення результатів
   cout << "\nNew stack element values:" << endl;
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }

    return 0;
}