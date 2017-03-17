
public class QueueJava {
	//initialization
	public int MAX = 10;
	
	private int size[] = new int [MAX];
	private int data;
	private int headElement= -1;
	private int tailElement= -1;
	
	
	
	
	public static void main(String[] sort){
			
			QueueJava q = new QueueJava();
		
			//testing queue
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

		
	}//end main
	
	
	

	//prints all the elements in the queue
	public void printQueue(){
	    if (isEmpty()) {
	        System.out.print("Queue is empty" + "\n");
	    }//end if
	    else{
	        System.out.print("Current Queue: ");
	       
	        for (int i =headElement; i <= tailElement; i++){
	            System.out.print(" " + size[i]); 
	        }//end for
	        System.out.print("\n");
	    }//end else
	}//end printQueue



	//inserts an element in the queue from the back, FIFO (first in first out)
	public void enqueue(int data){
	    //if tail has not reached end
	    if (tailElement < MAX-1){
	        size[tailElement+1] = data;
	        tailElement++;
	        System.out.print("element enqueued"+ "\n");
	        if (headElement == -1){
	            headElement++;
	        }//end if
	    }//end if
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
	    }//end if reached end loop
	}//end enqueue




	//deletes an element in the queue from the back, FIFO (first in first out)
	public void dequeue(){
	    //if not empty
	    if (!isEmpty()){
	        headElement++;
	        System.out.print("element dequeued"+ "\n");
	        
	    }//end if
	    //adjust if head>tail
	    if (headElement > tailElement) {
	        headElement=-1;
	        tailElement=-1;
	    }//end if
	}//end enqueue




	//checks if the queue is empty
	public Boolean isEmpty(){
	    if (tailElement == -1 && headElement == -1) {
	        return true;
	    }//end if
	    else
	        return false;
	}//end isEmpty

	



	
}//end class
