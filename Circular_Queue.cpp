#include <iostream>

using namespace std;

class Cqueue{

    int rear, front;

    int size;
    int *arr;

public:
        Cqueue(int s){
            front = rear = -1;
            size = s;
            arr = new int[s];
        }

        void insert(int value);
        int remove();
        void show();
};


void Cqueue::insert(int value){
    
    if ((front == 0 && rear == size-1) || ((rear+1) % size == front)){
        
        cout << "\nQueue is Full" << endl;
        return;
    }

    else if (front ==-1){
        front = rear = 0;
        arr[rear] = value;
    }

    else if (rear == size-1 && front !=0){
        rear = 0;
        arr[rear] = value;
    }
    else{
        rear++;
        arr[rear] = value;
    }
};

int Cqueue::remove(){

    if (front == -1){
        cout << "\nQueue is Empty" << endl;
        return INT_MIN;
    }

    int rt = arr[front];
    arr[front] = -1;

    if (front == size-1){
        front = 0;
    }
    else if (front == rear){
        front = rear = -1;
    }

    else {
        front++;
    }

    return rt;
}

void Cqueue::show(){
    cout << "\n" << "Queue : ";
    for (int i = 0; i < size;i++){
        cout << arr[i] << " ";
    }
}

int main(){

    Cqueue g(5);

    g.insert(10);
    g.insert(11);
    g.insert(44);
    g.insert(60);
    g.insert(10);
    g.insert(6); // full
    g.remove();
    g.insert(44);
    g.insert(44);
    g.remove();
    g.remove();
    g.remove();
    g.remove();
    g.remove();
    g.insert(10);
    g.show();
    return 0;
}