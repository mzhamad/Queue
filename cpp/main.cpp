//
//  main.cpp
//  Queue
//
//
//  Copyright © 2016 Mohammad Hamad. All rights reserved.
//

#include <iostream>
#include "Queue.hpp"



int main(int argc, const char * argv[]) {
    
    Queue q;
    q.enqueue(11);
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(8);
    q.printQueue();
    q.dequeue();
    q.enqueue(7);
    q.printQueue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.printQueue();
    
    
    
    
    
    
    return 0;
}
