/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
*/
class CustomStack {
public:

    // dynamic arr.
    int *arr;

    // properties for stack in form of an array.
    int next_index = 0;
    int cap;

    // CustomStack(int maxSize) Initializes the object with maxSize which is the maximum number of elements in the stack.
    CustomStack(int maxSize) {

        // dynamic allocation.
        arr = new int[maxSize];

        // store the total capacity in a local var.
        cap = maxSize;
    }
    
    // void push(int x) Adds x to the top of the stack if the stack has not reached the maxSize.
    void push(int x) {

        // check if stack's at capacity.
        if(next_index == cap){
            return;
        }

        // else, append to stack.
        arr[next_index] = x;
        next_index++;
    }
    
    // int pop() Pops and returns the top of the stack or -1 if the stack is empty.
    int pop() {

        // check if stack is empty.
        if(next_index == 0){
            return -1;
        }

        // else, pop top-most element.
        int temp = arr[next_index - 1];
        next_index--;
        return temp;
    }
    
    // void inc(int k, int val) Increments the bottom k elements of the stack by val. 
    // If there are less than k elements in the stack, increment all the elements in the stack.
    void increment(int k, int val) {

        // increment operation.
        int num_iters;
        if(k >= next_index){
            num_iters = next_index;
        }
        else{
            num_iters = k;
        }

        for(int i{0}; i < num_iters; i++){
            arr[i] += val;
        }
    }
};