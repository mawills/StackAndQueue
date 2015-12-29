#include "queue.h"

int main()
{
    Queue<int>IntQueue;
    int x;

    IntQueue.MakeEmpty();
    IntQueue.Dequeue(x);
    IntQueue.Enqueue(10);
    IntQueue.Enqueue(20);
    IntQueue.Enqueue(30);
    IntQueue.Enqueue(40);

    cout << "The int queue contains: "  << endl;
    IntQueue.Print();

    cout << "int length 3 = " << IntQueue.length() << endl;

    IntQueue.Dequeue(x);

    cout << "The int queue contains: "  << endl;
    IntQueue.Print();

    cout << "int length 4 = " << IntQueue.length() << endl;

    if(IntQueue.IsFull() == false)
    cout << "The int queue is not full !" << endl;
    else
    cout << "The int queue is full !" << endl;

    cout <<endl;

    Queue<float>FloatQueue;
    float y;

    FloatQueue.MakeEmpty();
    FloatQueue.Dequeue(y);
    FloatQueue.Enqueue(7.1);

    cout << "The float queue contains: "  << endl;
    FloatQueue.Print();

    cout << "float length 3 = " << FloatQueue.length() << endl;

    FloatQueue.Enqueue(2.3);
    FloatQueue.Enqueue(2.4);
    FloatQueue.Enqueue(2.5);
    FloatQueue.Dequeue(y);

    cout << "The float queue contains: "  << endl;
    FloatQueue.Print();

    cout << "float length 4 = " << FloatQueue.length() << endl;

    FloatQueue.Enqueue(3.1);
    FloatQueue.Dequeue(y);

    cout << "The float queue contains:  " << endl;
    FloatQueue.Print();

    Queue<float> FloatQueue2 = FloatQueue;

    cout << "The float queue 2 contains:  " << endl;
    FloatQueue2.Print();

    FloatQueue.MakeEmpty();

    cout << "The float queue 3 contains:  " << endl;
    FloatQueue2.Print();
}
