#ifndef QUEUE
#define QUEUE
class Queue {
    private:
        int *_arr;
        unsigned int _length;
        int _head;
        int _tail;
    public:
        Queue(unsigned int length = 10);
        Queue(const Queue& obj);
        ~Queue();
        int length();
        void enqueue(int element);
        int dequeue();
        bool isEmpty();
};
#endif
