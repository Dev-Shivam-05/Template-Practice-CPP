#include<iostream>
using namespace std;

template <typename T1>

T1 Sum(T1 a,T1 b)
{
    return a + b;
}

int main()
{
    double num_1,num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;
    cout << "Enter Another Number :- ";
    cin >> num_2;

    cout << "The Sum Of "<< num_1 <<" + "<< num_2 <<" Is :- " << Sum(num_1,num_2);
    return 0;
}