#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int isOperand(char);
int precedence(char);

using namespace std;
class Stack
{
private:
    char *Arr;
    int top, NumberOfStackBlocks;

public:
    Stack(int numberOfBlocks)
    {
        this->NumberOfStackBlocks = numberOfBlocks;
        this->Arr = new char[numberOfBlocks]; // Creating the Dynamic-Blocks Of [Char-Type]
        this->top = -1;
    }

    char stackTop()
    {
        if (this->isEmpty())
            return '0';
        return (this->Arr[this->top]);
    }

    int isEmpty()
    {
        if (this->top == -1)
            return true;
        return false;
    }

    int isFull()
    {
        if (this->top == (this->NumberOfStackBlocks - 1))
            return true;
        return false;
    }

    char pop()
    {
        if (!(this->isEmpty()))
        {
            char poppedChar = this->Arr[this->top];
            // delete ((this->Arr + this->top));
            --(this->top);
            return (poppedChar);
        }
    }

    void push(char item)
    {
        if (!(this->isFull()))
        {
            ++(this->top);
            this->Arr[this->top] = item;
        }
    }
};

char *inToPostFix(char *infix)
{
    int i = 0, j = 0;
    Stack s(20);
    // char *postfix = (char *)malloc(strlen(infix) * sizeof(char));

    char *postfix = new char[strlen(infix)]; // strlen(infix) + 1

    while (*(infix + i) != '\0') // Will Traverse The whole String.. in [infix]
    {
        if (isOperand(*(infix + i))) // Checking If This Is an "Operand", copy the character in the [postfix-Dynamic-Array]
        {
            postfix[j] = infix[i];
            j++; // Will Track Postfix String
            i++; // Track Infix String!
        }
        else if (precedence(*(infix + i)) > precedence(s.stackTop())) // If Not? then, check The [Operator's Precedence], But The [Precedence Should B Greater Than The Previous Operator] to "push in Stack"
        {
            s.push(*(i + infix));
            i++; // increasing the "Index" of [Infix-Given-String]
        }
        else
        {
            postfix[j] = s.pop(); // if Precedence is "Equal or Less than The Previous One", then "Pop the Operator from the stack", and Store The "Character-Operator" in the [Resultant-Post-Fix-STRING]
            j++;                  // increasing the "Index" of [Postfix-Resultant-String]
        }
    }

    while (!s.isEmpty())
    {
        *(postfix + j) = s.pop();
        j++;
    }
    *(postfix + j) = '\0';
    return postfix;
}

int precedence(char infix_Ch)
{
    if (infix_Ch == '+' || infix_Ch == '-')
        return 1; // Returning 'Precedence'
    if (infix_Ch == '*' || infix_Ch == '/')
        return 2; // Returning 'Precedence'
    if (infix_Ch == '0')
        return -1;
}

int isOperand(char infix_Ch)
{
    if (infix_Ch == '+' || infix_Ch == '-' || infix_Ch == '/' || infix_Ch == '*') // If Any-Character Matches, Then The Character is An OPERATOR
        return false;
    return true;
}

int main(void)
{

    // Stack s(3);
    // s.push('3');
    // s.pop();
    // cout << s.stackTop();
    char A[] = {"x+y*z"};
    cout << inToPostFix(A);
}