class MyCircularQueue {
    vector<int> data;
    int head, size;
public:
    MyCircularQueue(int k): head(0), size(0) {
        data.insert(data.begin(), k, 0); 
    }
    
    bool enQueue(int value) {
        if(size == data.size()) return false; 
        
        data[ (head + size) % data.size() ] = value;
        size++;
        return true;
    }
    
    bool deQueue() {
        
        if(size == 0) return false;
        
        head = (head + 1) % data.size(); 
        size--; 
        
        return true;
        
    }
    
    int Front() {
        return size > 0 ? data[head] : -1; 
    }
    
    int Rear() {
        return size > 0 ? data[(head + size - 1) % data.size()] : -1;
    }
    
    bool isEmpty() {
        return size == 0; 
    }
    
    bool isFull() {
        return size == data.size();
    }

};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */