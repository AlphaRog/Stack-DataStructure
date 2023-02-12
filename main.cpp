#include <iostream>

using namespace std;

class StackC
{

private:
    int maxSize;
    int top;
    int *arr;

public:
    StackC(int s);
    bool isEmpty();
    bool isFull();
    void push(int x);
    int pop();
    int peek();


};

StackC::StackC(int s)
{

    arr=new int [s];
    maxSize=s;
    top=-1;

}

bool StackC::isEmpty()
{

    if(top==-1)
    {

        return true;

    }

    else
    {

        return false;

    }

}

bool StackC::isFull()
{

    if(top==maxSize-1)
    {
        return true;
    }

    else
    {
        return false;
    }

}

void StackC::push(int x)
{

    if (isFull())
    {
        cout << "Stack is full." << endl;
    }
    else
    {

        top++;
        arr[top]=x;

    }

}

int StackC::pop()
{

    if (isEmpty())
    {
        cout << "Stack is Empty." << endl;
        return -999;
    }
    else
    {

        int y=arr[top];
        top--;
        return y;

    }

}

int StackC::peek()
{

    if (isEmpty())
    {
        cout << "Stack is Empty." << endl;
        return -999;
    }
    else
    {
        return arr[top];
    }

}

int main()
{

    StackC s1(6);
    s1.push(10);
    s1.push(5);
    s1.push(6);
    s1.push(20);
    s1.pop();
    s1.push(8);
    s1.push(15);
    s1.pop();
    s1.push(22);
    cout<<s1.peek()<<endl;
    s1.push(30);
    s1.push(18);


    return 0;
}
