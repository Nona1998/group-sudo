#include <iostream>

class Stack {
    private:
        unsigned int top = 0;
        int n;
        int arr[10];
    public:
        Stack (int top = 0, int n = 0)
        {
            (*this).n = n;
        }
        void push (int element) {
            if (top < 10) {
                arr[top++] = element;
            } else {
                std::cout << "Error: Stack is full." << std::endl;
            }
        }
        int pop () {
            if (top == 9) {
                arr[top] = 0;
                top--;
            } else if (top == 0){
                std::cout << "Error: Stack is empty." << std::endl;
            }
            return arr[top];
        }
        int size () {
            return top;
        }
        int isEmpty () {
            if (top == 0) {
                return false;
            } else {
                return true;
            }
        }
        ~Stack ()
        {
        
        }

};

int main () {
    Stack a;
    a.pop();
    a.isEmpty();
    std::cout << "\nThe number of elements in stack: " << a.size() << std::endl;
    return 0;
}
