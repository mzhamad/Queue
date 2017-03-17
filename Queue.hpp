//
//  Queue.hpp
//  Queue
//
//
//  Copyright © 2016 Mohammad Hamad. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp
#define MAX 10
#include <stdio.h>

class Queue{
    
    public:
    
        Queue();
        ~Queue();
        void enqueue(int);
        void dequeue();
        bool isEmpty();
        void printQueue();
    
    private:
    
        int data;
        int *size;
        int headElement;
        int tailElement;
    
    
    
};

#endif /* Queue_hpp */
