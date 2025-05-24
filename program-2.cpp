#include<iostream>
using namespace std;

template <typename Temp>

class Demo
{
public:
    Temp a,b;
    Demo()
    {
        this->a = a;
        this->b = b;
    }
    Temp Sum(Temp a,Temp b)
    {
        return a + b;
    }
    Temp Subtraction(Temp a,Temp b)
    {
        return a - b;
    }
    Temp Product(Temp a,Temp b)
    {
        return a * b;
    }
    Temp Division(Temp a,Temp b)
    {
        return a / b;
    }
};

int main()
{
    Demo<double> obj;
    double num_1,num_2;

    cout << "Enter A Number :- ";
    cin >> num_1;
    cout << "Emnter Another Number :- ";
    cin >> num_2;

    int choice;
    do
    {
        cout << endl << endl << "---- Calculator ----" << endl;
        cout << "Press 1 To Perform Addtion (+)." << endl;
        cout << "Press 2 To Perform Subtraction (-)." << endl;
        cout << "Press 3 To Perform Multiplication (*)." << endl;
        cout << "Press 4 To Perform Division (/)." << endl;
        cout << "Press 0 To Exit." << endl;
        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << endl << "---- Your Program Is Sucessfully Exited ----";
            break;

        case 1:
            cout << "The Sum Of "<< num_1 <<" And "<< num_2 <<" Is :- ",obj.Sum(num_1,num_2);
            break;

        case 2:
            cout << "The Subtraction Of "<< num_1 <<" And "<< num_2 <<" Is :- ",obj.Subtraction(num_1,num_2);
            break;

        case 3:
            cout << "The Multiplication Of "<< num_1 <<" And "<< num_2 <<" Is :- ",obj.Product(num_1,num_2);
            break;

        case 4:
            cout << "The Division Of "<< num_1 <<" And "<< num_2 <<" Is :- ",obj.Division(num_1,num_2);
            break;

        default:
            while (choice != 0)
            {
                cout << endl << "Sorry Wrong Input Please Enter Between (0-4)" << endl;
                cout << endl << endl << "---- Calculator ----" << endl;
                cout << "Press 1 To Perform Addtion (+)." << endl;
                cout << "Press 2 To Perform Subtraction (-)." << endl;
                cout << "Press 3 To Perform Multiplication (*)." << endl;
                cout << "Press 4 To Perform Division (/)." << endl;
                cout << "Press 0 To Exit." << endl;
                cout << "Enter Your Choice :- ";
                cin >> choice;
            }
            break;
        }
    } while (choice != 0);
    
    return 0;
}