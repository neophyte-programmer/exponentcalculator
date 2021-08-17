#include <iostream>

using namespace std;
/*
Assume that no programming language has a function for returning the result of
one integer raised to the power of another. It has become very necessary for you
to write a computer solution that can calculate  where a and b are integers.
Note that a may also be a real number but b should always be an integer
*/
int main()
{
/*
The specified variables in the questions are a and b where a is an integer but
 can also be a real number and b must always be an integer. So we have to create
 the variables a and b, and give them the appropriate datatypes and create a variable
 to store the answer.
 We also have to create a temporary variable(power) and initialise it to one
 because any number raised to the power 1 is equal to the number itself
 Also, since we will be using a for loop, we need another variable, i, to store
 the position of the individual instances of the exponent starting from 1.
*/
    float a, answer;
    int b, power=1, i;

//Print message for the user to enter the value to be assigned to a
    cout<<"Enter a number: ";
    cin>> a;
//Print message for the user to enter the value to be assigned to b
    cout<<"\nEnter the exponent: ";
    cin>> b;
//Writing the code to compute the problem using for loop
    for (i=1; i<= b; i++)
    {
        power *= a;
    }
    answer = power;
//Printing the answer
    cout<<"\nThe answer is: " <<answer ;

    return 0;
}
