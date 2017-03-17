//
//  Queue.cpp
//  Queue
//
//
//  Copyright © 2016 Mohammad Hamad. All rights reserved.
//

#include "Queue.hpp"
#include <iostream>
#define MAX 10


//constructor
Queue::Queue()
:size (new int [MAX]),
headElement(-1),
tailElement(-1){}


//destructor
Queue::~Queue(){
    delete[] size;
}



//prints all the elements in the queue
void Queue::printQueue(){
    if (isEmpty()) {
        std::cout<< "Queue is empty"<<std::endl;
    }
    else{
        std::cout <<"Current Queue: ";
        for (int i =headElement; i <= tailElement; i++){
            std::cout << " " << size[i];
        }
        std::cout<<std::endl;
    }
}



//inserts an element in the queue from the back, FIFO (first in first out)
void Queue::enqueue(int data){
    //if tail has not reached end
    if (tailElement < MAX-1){
        size[tailElement+1] = data;
        tailElement++;
        std::cout<<"element enqueued"<<std::endl;
        if (headElement == -1){
            headElement++;
        }
    }
    //if queue reached end
    else{
        
        //if queue is not full
        if (headElement > 0){
            
            
            //if  tail == MAX-1, and head !=0, and tail != head, shift left
            int temp = 0;
            for ( int i= headElement; i <= tailElement; i++){
                size[temp] = size[i];
                temp++;
            }//end for
            
            headElement= 0;
            tailElement = temp;
            size[tailElement] = data;
        }//end is not full loop
    }//end if reached else loop
}//end enqueue





//deletes an element in the queue from the back, FIFO (first in first out)
void Queue::dequeue(){
    //if not empty
    if (!isEmpty()){
        headElement++;
        std::cout<<"element dequeued"<<std::endl;
    }
    
    
    //adjust if head>tail
    if (headElement > tailElement) {
        headElement=-1;
        tailElement=-1;
    }
}




//checks if the queue is empty
bool Queue::isEmpty(){
    if (tailElement == -1 && headElement == -1) {
        return true;
    }
    else
        return false;
}