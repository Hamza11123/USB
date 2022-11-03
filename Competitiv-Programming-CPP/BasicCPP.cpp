// #include<stdio.h>
// #include<conio.h>
// #include<iostream>

#include<bits/stdc++.h>

using namespace std;



int main(void){
    /*------------ calculation-Order in data-types  ----------*/

    cout<< 23/ 3.0 <<endl; // 'Gives Float' As The [Calculation-Order-Of-Higher-Data-Types]
    cout<< 'a' + 3 <<endl; // 'Gives Integer'

    int a = 45/23;
    cout<< a  <<endl; // 'Gives Integer' As The Higher-Order-Calculation & The Variable Both Our 'Ints'

    float A = 45/23;
    cout<< A  <<endl; // 'Gives Integer' As The Higher-Order-Calculation Is 'Integer'


    // [Data-Type-Order By Size]
    // 1. double
    // 2. float
    // 3. long int int
    // 4. long int
    // 5. Int
    // 6. Characters


    /*------------ calculation-Order in data-types  ----------*/


    /*------------ Over-Flow -------------*/
    double overflow1 = 1000000000;
    double overflow2 = 1000000000;
    double c = overflow1  * overflow2;

    
    cout<<fixed<<setprecision(0)<< c;
    
    /*------------ Over-Flow -------------*/

}