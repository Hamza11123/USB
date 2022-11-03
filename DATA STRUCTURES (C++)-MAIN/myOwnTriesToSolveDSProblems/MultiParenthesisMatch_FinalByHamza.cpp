#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <conio.h>

/*----------------- This Code Is Correct, cuz It's Written After Practicing Alot!!----------------*/

int parenthesisMatching(char *);
int match(char, char);
int parenthesisMatchingAll(char *);

using namespace std;

class Stack
{
private:
    // Stores The Data Related The Position Of The Stack
    int top;
    // Stores The SizeOf The {Array}
    int size;
    // Will Point The [Dynamic-Array], Created By "Calloc()" Function;
    char *charArray;

public:
    Stack(int sizeOfTheStack)
    {

        this->top = -1;
        // Assigning The Entered-Size Of the Stack By Userht
        this->size = sizeOfTheStack;
        // Allocating Memory From Heap (Dynamically);
        this->charArray = (char *)malloc(sizeOfTheStack * sizeof(char));
    }
    int isEmpty()
    {
        // If The Top Is -1, It'll Return 1 else 0;
        if (this->top == -1)
            return true;
        return false;
    }
    int isFull()
    {
        if (this->charArray[top] == (this->size) - 1)
            return true;
        return false;
    }

    char pop()
    {
        char poppedItem;
        poppedItem = this->charArray[this->top];
        free((this->charArray + this->top));
        --(this->top);
        return poppedItem;
    }
    void push(char item)
    {
        if (this->isFull())
            cout << "It is Full!" << endl
                 << endl;
        else
        {
            ++(this->top);
            this->charArray[this->top] = item;
        }
    }

    char stackTop()
    {
        return (this->charArray[(this->top)]);
    }

    char stackBottom()
    {
        return (this->charArray[0]);
    }

    // Takes Postion Number As An Argument And returns The Corresponding Value Of It!
    char peek(int postionIndex) // Working Well :)
    {
        if (postionIndex > 0)
            return (this->charArray[((this->top) - postionIndex + 1)]);
    }

    // Operation Same As Peek But It's Relatively To The TOP!!
    char getElementByTopPostioning(int topIndex) // This Is doing Some Problem!! :(
    {
        return (this->charArray[(this->top)]);
    }

    // Operation to Know The Position Of The TOP!
    int topAt()
    {
        return (this->top);
    }

    void status(void)
    {
        for (int i = 0; i < this->size - 1; i++)
            cout << this->charArray[i] << endl;
    }
};
int main(void)
{
    char A[50] = {"[(euhteu + ()){}]"};
    cout << parenthesisMatchingAll(A);
}

int parenthesisMatchingAll(char *str)
{
    Stack s(100);
    // Traversing The Whole Array...
    for (int i = 0; i < strlen(str); i++)
    {
        // if It finds Any Of Them [Opening-Brace-CHARACTER]  then PUSH It To The STACK
        if (*(str + i) == '(' || *(str + i) == '[' || *(str + i) == '{')
            s.push(*(str + i));
        // if it finds any of them [Closing-Brace-CHARACTER]  Then POP From The Stack;
        else if (*(str + i) == ')' || *(str + i) == ']' || *(str + i) == '}')
        {
            // Condition 1. During The Traversal, The Stack Shouldn't B Empty! if not, Parenthesis is Unbalanced
            if (s.isEmpty())
                return 0;
            else
            {
                // Condition 2. The POPPed [Opening-Brace] Should Match With The [Closing-Brace] At [Current-Index]
                char popped_ValChar = s.pop();
                if (!match(popped_ValChar, *(str + i)))
                    return 0;
            }
        }
    }
    // after traversal The stack should be empty to flag the Balanced Parenthesis
    if (s.isEmpty())
        return 1;
    return 0;
}

int match(char openingBrace_PoppedFromStack, char ClosingBrace_atCurrentIndex)
{
    if (openingBrace_PoppedFromStack == '(' && ClosingBrace_atCurrentIndex == ')')
        return 1;
    if (openingBrace_PoppedFromStack == '[' && ClosingBrace_atCurrentIndex == ']')
        return 1;
    if (openingBrace_PoppedFromStack == '{' && ClosingBrace_atCurrentIndex == '}')
        return 1;
    return 0;
}
int parenthesisMatching(char *str)
{
    Stack s(100);
    // Traversing The Who Array
    for (int i = 0; i < strlen(str); i++)
    {
        // If it finds an Opening Brace, push this to The STACK
        if (*(str + i) == '(')
            s.push(*(str + i));
        // But If it finds an Closing Brace, Then POP From The Stack
        else if (*(str + i) == ')')
        {
            // if The Stack Is Empty "While Traversing The Array", means There is no Element Remains To B Popped!!
            if (s.isEmpty()) // or In Other Words, Zabardasti POP Krny Ki Koshish!
                return 0;
            s.pop(); // and When It's Not Empty, Continue Traversing...
        }
    }

    // [In THe End] or [After Traversing] The Stack Should B Empty!, If Not? "Parenthesis is Un-Balanced"
    if (s.isEmpty())
        return 1;
    return 0;
}
