#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
void ins(class ArrayAsAnAbstract *);
class ArrayAsAnAbstract *createADT(class ArrayAsAnAbstract *, int , int );
class ArrayAsAnAbstract *setVal(class ArrayAsAnAbstract * );
void showVal(class ArrayAsAnAbstract * );
 using namespace std;

class ArrayAsAnAbstract 
{
    public:
    int tsize, usize, *ptr;
};

class ArrayAsAnAbstract *createADT(class ArrayAsAnAbstract *getAddressOfArrayAsAnAbstract, int ts, int us)
{
    (*getAddressOfArrayAsAnAbstract).tsize = ts;
    (*getAddressOfArrayAsAnAbstract).usize = us;
    (*getAddressOfArrayAsAnAbstract).ptr = (int*)malloc(ts * sizeof(int));
    return(getAddressOfArrayAsAnAbstract);
}
void showVal(class ArrayAsAnAbstract *getAddressOfArrayAsAnAbstract )
{
    cout<<"runnig showval function\n\n";
    for(int i=0; i<= (*getAddressOfArrayAsAnAbstract).usize; i++){
        cout<<"the value At " <<i <<" Is " << (getAddressOfArrayAsAnAbstract->ptr)[i] <<endl;
    }
}
class ArrayAsAnAbstract *setVal(class ArrayAsAnAbstract *getAddressOfArrayAsAnAbstract )

{
    cout<<"runnig setval function\n\n";
    for(int i=0; i<= (*getAddressOfArrayAsAnAbstract).usize; i++){
        printf("insert val in %d Index:\n", i);
    cin>>(getAddressOfArrayAsAnAbstract->ptr)[i];
    }
        return(getAddressOfArrayAsAnAbstract);
}


////////////////////////////////////////////////////// Insertion Function My Own Logic ///////////////////////////////////////////;)
void ins(class ArrayAsAnAbstract *getAddressOfArrayAsAnAbstract, int getValForInsertion, int getIndex)
{
    int increamentVar;
    for(int i=getIndex; i<= getAddressOfArrayAsAnAbstract->usize; i++){
        increamentVar = i +1 ;
        (getAddressOfArrayAsAnAbstract->ptr)[increamentVar] = (getAddressOfArrayAsAnAbstract->ptr)[i];
    }
    getAddressOfArrayAsAnAbstract->ptr[getIndex] = getValForInsertion;
}

// int main(void)
// {
//     ArrayAsAnAbstract ADT;
    
//     showVal(setVal(createADT(&ADT, 10, 3)));
//     return 0;
// }
int main(void)
{
    int count =1;
    for(int i =0; i<=8; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<count<<" ";
            count++;            
        }
        cout<<endl;
    }
    
}