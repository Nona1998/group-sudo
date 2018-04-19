#include <iostream>

class Stack {
    private:
        int top;
        unsigned int n;
        int *arr;
    public:
        Stack (unsigned int n)
        {
            top = -1;
            (*this).n = n;
            arr = new int [n];
        }
        ~Stack () {
            delete [] arr;
        }
        void setN (unsigned int n) {
            this->n = n;
        }
        void setTop (int top) {
            this->top = top;
        }
        int size () {
            return top;
        }
        int getN () {
            return n;
        }
        void push (int element) {
            if (top != n - 1) {
                arr[++top] = element;
            } else {
                std::cout << "Error: Stack is full." << std::endl;
            }
        }
        int pop () {
            if (top != -1) {
                return arr[top--];
            }
            std::cout << "\nError:Stack is empty" << std::endl;
            return -1;
        }
        bool isEmpty () {
                return (top == -1);
        }
};

int main () {
    int size;
    std::cout << "Enter the size of the array: " ;
    std::cin >> size;
    Stack a(size);
    std::cout << "Add elements to the stack: "<< std::endl;
    int elements;
    while (a.size() != size - 1) {
        std::cin >> elements;
        a.push(elements);
    }
    while (a.size() != -1) {
        std::cout << a.pop();
    }
    std::cout << std::endl;
    return 0;
}
