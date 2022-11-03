#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <stack>

using namespace std;

class mainStack
{
    int *arr, top, size;
    // creating the Supporting-Stack with STL
    stack<int> supportingStack;

public:
    mainStack(int sizeOfStack)
    {
        this->size = sizeOfStack;
        this->top = -1;
        this->arr = new int[sizeOfStack];
    }

    int isEmpty()
    {
        if (this->top == -1)
            return true;
        return false;
    }
    int isFull()
    {
        if (this->top == (this->size - 1))
            return true;
        return false;
    }

    int pop()
    {
        if (!this->isEmpty())
        {
            // if both Stacks Top is Same, then pop the Element From mainStack and supportingStack as well!
            if (this->arr[this->top] == supportingStack.top())
                supportingStack.pop();

            int poppedItem = this->arr[this->top];
            this->top--;

            return poppedItem;
        }
    }
    int push(int item)
    {
        if (!this->isFull())
        {
            this->top++;
            this->arr[this->top] = item;

            // if the mainStack is Having lesser Top-Element than supportingStack's top then, push in Secondary-Stack(supportingStack)
            if (supportingStack.empty() || this->arr[this->top] <= supportingStack.top())
                supportingStack.push(item); // pushing the same Element in the SUpporting Stack
        }
    }

    int getMin()
    {
        if (!supportingStack.empty()) // The Supporting Stack Should Not Be Empty! when Calling its [getMin-function]
        {
            return (supportingStack.top());
        }
    }

    void stackTraversal()
    {
        for (int i = 0; i < this->top; i++)
            cout << this->arr[i] << endl;
    }
};

int main()
{
    mainStack st(8);
    st.push(45);
    cout << st.getMin();
}
