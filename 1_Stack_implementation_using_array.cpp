// http://rb.gy/xwvyc
// Stack class.
class Stack {
    int topo;
    int *arr ;
    int size;
    
public:
    
    
    Stack(int capacity) {
        this->topo = -1;
        arr = new int[capacity];
        this->size = capacity;
    }

    void push(int num) {
        if(topo<size-1){
            topo++;
            arr[topo] = num;
            
        }
        
    }

    int pop() {
        if(topo>=0){
            int num = arr[topo];
            topo--;
            return num;
        }
        else{
            return -1;
        }
    }
    
    int top() {
        if(topo>=0){
            return arr[topo];
        }
        else{
            return -1;
        }
    }
    
    int isEmpty() {
        if(topo<0){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int isFull() {
        if(topo == size-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    ~Stack(){
        delete[] arr;
    }
    
};
