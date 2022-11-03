#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

#include <iostream>

/*---------------- It's Quit Easy For Us(Humans) to Find-Out The Parenthesis-Matching ---------------------*/
/*---------------- But It isn't Really True For Computers We Gotta Solve The Problem  ---------------------*/

// ((3+3)*(4/2)) => [Parenthesis-Balanced];
// 4) *(9; => [Not-Parenthesis-Balanced];
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

    int pop(char *getPoppedItem)
    {
        if (this->isEmpty())
        {
            *getPoppedItem = -1;
            return false;
        }
        else
        {
            *getPoppedItem = this->charArray[this->top];
            free((this->charArray + this->top));
            --(this->top);
            return true;
        }
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

void parenthesis(char str[])
{
    char getPoppedItem;
    bool cantPopped = false;
    Stack s(100);
    int index;

    for (index = 0; index < strlen(str); index++)
    {
        if (str[index] == '(')
            s.push(str[index]);
        else if (str[index] == ')')
        {
            // Condition 1: If The Stack Is Already Empty, And Even NOW WE tryna "POP Something"!
            if (s.pop(&getPoppedItem) == false)
            {
                cout << "\n\n The Stack is EMPTY We can't POP At: " << index << " :(\n\n";
                cantPopped = true;
                break;
            }
        }
    }

    // Condition 2: If This Is False MEANS, "The STACK Is Not EMPTY! After Traversal Of The [WHOLE-STRING]:("
    if (s.isEmpty() == true)
    {
        if (cantPopped == false)                          // Another Condition: -> if(index == strlen(str))
            cout << "\n\nParenthesis Is Matched! :)\n\n"; // If Both The Conditions Doesn't [SATISFY], mEANS [Parenthesis-Balanced]
    }
    else
        cout << "\n\nIn the End The Stack Is not EMPTY At: " << index << " :(\n\n";
}

/*-------------------- Code Isn't Working Properly! ---------------------------*/
void allBracketsMatching(string str)
{
    Stack s(100);
    bool cantPopped = false;
    int index;
    char getPoppedItem, recentlyPushedItem;

    for (index = 0; index < str.length(); index++)
    {
        if (str[index] == '(' || str[index] == '{' || str[index] == '[')
        {
            s.push(str[index]);
            recentlyPushedItem = str[index];
        }
        else if (str[index] == ')' || str[index] == '}' || str[index] == ']')
        {
            // Condition 1: If The Stack Is Already Empty, And Even NOW WE tryna "POP Something"!w,
            // Condition 3: If the The Recently Pushed-Item Equals To THe PoppedItem, This Should Satisfy To Be Called A [MatchedExptression]
            if (s.pop(&getPoppedItem) == false)
            {
                cout << "\n Zabradasti Pop Krny ki koshish";
                cantPopped = true; // Its True Means, The Stack Is Already Empty! But "EVEN NOW" We Tried To POP an Element;
                break;
            }
            // Facing Matching Problem Here... :(  Would Solve Soon!
            else if (str[index] != recentlyPushedItem) // if The Popped-Element(Opening-Bracket) Is Equal to THe Recently Pushed-Element(Open-Bracket)
            {
                cout << "loop count at: =" << str[index] << ", recentlyPushedItem=" << recentlyPushedItem;
                cantPopped = true;
                break;
            }
        }
    }

    // Condition 2: If This Is False MEANS, "The STACK Is Not EMPTY! After Traversal Of The [WHOLE-STRING]:("
    if (s.isEmpty() == true)
    {
        // cout << "Stack Is empty!";
        if (cantPopped == false) // Another Condition: -> if(index == strlen(str))
            cout
                << "\n\nParenthesis Is Matched! :)\n\n"; // If Both The Conditions Doesn't [SATISFY], mEANS [Parenthesis-Balanced]
    }
    else
        cout << "\n\nIn the End The Stack Is not EMPTY At: " << index << " :(\n\n";
}
/*-------------------- Code Isn't Working Properly! ---------------------------*/
