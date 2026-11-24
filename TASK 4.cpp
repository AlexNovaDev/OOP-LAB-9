#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack {
private:
    T* items;
    int capacity;
    int top;

public:
    Stack(int cap) {
        capacity = cap;
        top = 0;
        items = new T[capacity];
    }

    void push(T value) {
        if (top == capacity) {
            cout << "Stack is full, cannot push " << value << endl;
        }
        else {
            items[top] = value;
            top++;
        }
    }

    T pop() {
        if (top == 0) {
            cout << "Stack is empty" << endl;
            return T();
        }

        top--;
        return items[top];
    }

    T peek() {
        if (top == 0) {
            return T();
        }

        return items[top - 1];
    }

    bool isEmpty() {
        return top == 0;
    }

    bool isFull() {
        return top == capacity;
    }

    int size() {
        return top;
    }

    ~Stack() {
        delete[] items;
    }
};

int main() {

    Stack<int> s1(3);

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);

    cout << "Popping: ";
    while (!s1.isEmpty()) {
        cout << s1.pop() << " ";
    }
    cout << endl;

    Stack<char> s2(6);

    string word = "LAHORE";

    for (int i = 0; i < 6; i++) {
        s2.push(word[i]);
    }

    cout << "LAHORE reversed: ";
    while (!s2.isEmpty()) {
        cout << s2.pop();
    }
    cout << endl;

    Stack<string> s3(3);

    s3.push("google.com");
    s3.push("github.com");
    s3.push("gutech.edu.pk");

    cout << "Current page: " << s3.peek() << endl;

    s3.pop();

    cout << "After Back: " << s3.peek() << endl;

    return 0;
}