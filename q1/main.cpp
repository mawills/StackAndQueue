#include "stack.h"

int main()
{


    Stack <int> IntStack;
    int x;


    IntStack.Pop(x);
    IntStack.Push(11);
    IntStack.Push(22);

    cout << "int length 1 = ";
    cout << IntStack.length() << endl;

    IntStack.Pop(x);
    IntStack.Push(33);

    cout << "int length 2 = " << IntStack.length() << endl;
    cout << "The int stack contains:  " << endl;

    IntStack.Print();
    IntStack.Push(44);
    IntStack.Push(55);
    IntStack.Push(66);
    IntStack.Push(77);


    if(IntStack.IsFull() == false)
        cout << "The int stack is not full !" << endl;
    else
        cout << "The int stack is full !" << endl;

    Stack <int> IntStack2(IntStack);
    cout << "The int stack2 contains:  " << endl;

    IntStack2.Print();

    IntStack2.MakeEmpty();

    cout << "The int stack3 contains: "  << endl;
    IntStack2.Print();


     Stack <float> FloatStack;
     float y;


     FloatStack.Pop(y);
     FloatStack.Push(7.1);

     cout << "float length 1 = " << FloatStack.length() << endl;

     FloatStack.Push(2.3);
     FloatStack.Push(3.1);

     cout << "float length 2 = " << FloatStack.length() << endl;
     FloatStack.Pop(y);

     cout << "The float stack contains:  " << endl;

     FloatStack.Print();
     Stack <float> FloatStack2 = FloatStack;

     cout << "The float stack 2 contains:  " << endl;

     FloatStack2.Print();
     FloatStack.MakeEmpty();

     cout << "The float stack 3 contains:  " << endl;
     FloatStack2.Print();



     return 0;
}
