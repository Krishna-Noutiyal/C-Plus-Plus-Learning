#include <iostream>
#include <string>

using namespace std;

class queue
{

    int front = -1;
    int rear = -1;
    int size;
    int *arr;

public:
    queue(int s)
    {

        size = s;
        arr = new int[s];
    }

    void enqueue(int value);
    int dequeue();
    void display();
};

void queue::enqueue(int value)
{

    if ((front == 0 && rear == size - 1) || ((rear + 1 )% size == front))
    {
        cout << "\n Queue is Full !!" << endl;
        return;
    }

    if (rear == -1)
    {
        front = rear = 0;
    }
    else if (rear == size - 1)
    {
        rear = 0;
    }
    else
        rear++;

    arr[rear] = value;
}

int queue::dequeue()
{

    if (front == -1)
    {
        cout << "\nQueue is Empty !!" << endl;
    }

    int rt = arr[front];
    arr[front] = -1;

    if (front == size - 1)
    {
        front = 0;
    }
    else
        front++;

    return rt;
}

void queue::display()
{
    cout << "\n"
         << "Queue : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    queue g(5);

    g.enqueue(10);
    g.enqueue(11);
    g.enqueue(44);
    g.enqueue(60);
    g.enqueue(10);
    g.enqueue(6); // full
    // g.enqueue(8);
    // g.enqueue(44);
    // g.enqueue(44);
    g.dequeue();
    // g.dequeue();
    // g.dequeue();
    // g.dequeue();
    // g.dequeue();
    g.enqueue(44);
    g.enqueue(44);
    g.display();
    return 0;
}