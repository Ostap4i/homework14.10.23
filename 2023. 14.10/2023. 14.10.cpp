#include <iostream>
#include <stack>

using namespace std;

// Функція для порівняння двох стеків
bool compareStacks(stack<int>& stack1, stack<int>& stack2) {
    if (stack1.size() != stack2.size()) {
        return false;
    }

    while (!stack1.empty()) {
        if (stack1.top() != stack2.top()) {
            return false;
        }
        stack1.pop();
        stack2.pop();
    }

    return true;
}

// Функція для виводу стека
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> stack1, stack2;

    // Додавання елементів у перший стек
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);

    // Додавання елементів у другий стек
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);

    cout << "Stack 1 for comparison: ";
    printStack(stack1);
    cout << "Stack 2 for comparison: ";
    printStack(stack2);

    if (compareStacks(stack1, stack2)) {
        // Якщо стеки однакові, здійснити інверсію одного з них
        stack<int> invertedStack = stack1;
        while (!invertedStack.empty()) {
            invertedStack.top() *= -1;
            invertedStack.pop();
        }
        cout << "Stack 1 after inversion:";
        printStack(invertedStack);
    }
    else {
        // Якщо стеки різні, створити новий стек з від'ємних елементів
        stack<int> negativeStack;
        while (!stack1.empty() && !stack2.empty()) {
            negativeStack.push(-(stack1.top() + stack2.top()));
            stack1.pop();
            stack2.pop();
        }
        cout << "New stack with negative elements: ";
        printStack(negativeStack);
    }

    return 0;
}