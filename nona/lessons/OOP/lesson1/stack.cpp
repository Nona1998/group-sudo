#include <iostream>

class Stack {
    private:
        int top;
        unsigned int n;
        int *arr;
    public:
        Stack (int n,int top = 0)
        {
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
            if (top < n) {
                arr[++top] = element;
            }
            if (top == n) {
                std::cout << "Error: Stack is full." << std::endl;
            }
        }
        int pop () {
            if (top != 0)  {
                arr[--top] = 0;
                return arr[top];
            }
            if (top == 0) {
                std::cout << "\nError:Stack is empty" << std::endl;
            }
        }
        bool isEmpty () {
            if (top == 0) {
                return true;
            }
        }
};

int main () {
    int size;
    std::cout << "Enter the size of the array: " ;
    std::cin >> size;
    Stack a(size);
    std::cout << "Add elements to the stack: "<< std::endl;
    int elements;
    while (a.size() != 0) {
        std::cin >> elements;
        a.push(elements);
    }
    while (a.size() >= 0) {
        std::cout << a.pop();
        if (a.size() == 0) {
            a.pop();
            break;
        }
    }
    std::cout << "The number of elements in stack: " << a.size() << std::endl;
    return 0;
}
