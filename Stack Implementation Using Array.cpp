// Stack class.
class Stack {

    public:
    int *arr;
    int cap;
    int i;
    Stack(int capacity) {
        arr = new int [capacity];
        cap = capacity;
        i = -1;
    }

    void push(int num) {
        // Write your code here.
        if(i < cap){
            arr[++i] = num;
        }
    }

    int pop() {
        if(i != -1){
            int ans = arr[i];
            i--;
            return ans;
        }
        return -1;
        // Write your code here.
    }

    int top() {
        if(i != -1){
            int ans = arr[i];
            return ans;
        }
        return -1;
        // Write your code here.
    }

    int isEmpty() {
        // Write your code here.
        return i == -1;
    }

    int isFull() {
        return i == cap;
        // Write your code here.
    }

};
