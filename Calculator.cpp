#include <iostream>

#include <cmath>


using namespace std;


void Addition()

{
double NumberOneA;
double NumberTwoA;
double OperationAnsA;

cout << "Enter your first number " << endl;
cin >> NumberOneA;
cout << "Enter your second number " << endl;
cin >> NumberTwoA;

OperationAnsA = NumberOneA + NumberTwoA ;

cout << "The answer is " <<OperationAnsA<< endl;
}

void Subtraction()

{
double NumberOneS;
double NumberTwoS;
double OperationAnsS;

cout << "Enter your first number " << endl;
cin >> NumberOneS;
cout << "Enter your second number " << endl;
cin >> NumberTwoS;

OperationAnsS = NumberOneS - NumberTwoS ;

cout << "The answer is " <<OperationAnsS<< endl;

}


void Multiplication()

{
double NumberOneM;
double NumberTwoM;
double OperationAnsM;

cout << "Enter your first number " << endl;
cin >> NumberOneM;
cout << "Enter your second number " << endl;
cin >> NumberTwoM;

OperationAnsM = NumberOneM * NumberTwoM ;

cout << "The answer is " <<OperationAnsM<< endl;

}

void Division()

{
double NumberOneD;
double NumberTwoD;
double OperationAnsD;

cout << "Enter your first number " << endl;
cin >> NumberOneD;
cout << "Enter your second number " << endl;
cin >> NumberTwoD;

OperationAnsD = NumberOneD / NumberTwoD ;

cout << "The answer is " <<OperationAnsD<< endl;

}

void Modulus()

{
int NumberOneMo;
int NumberTwoMo;
int OperationAnsMo;

cout << "Enter your first number " << endl;
cin >> NumberOneMo;
cout << "Enter your second number " << endl;
cin >> NumberTwoMo;

OperationAnsMo = NumberOneMo % NumberTwoMo ;

cout << "The answer is " <<OperationAnsMo<< endl;


}

int main()

{
 while (1==1){

    char Operation;

    cout << "a) Addition" <<endl;

    cout << "b) Subtraction"<<endl;

    cout << "c) Multiplication"<<endl;

    cout << "d) Division"<<endl;

    cout << "e) Modulus"<<endl;


    cout << "Select an Operation:";

    cin >> Operation;


    switch ( Operation )

    {

        case 'a':

            Addition();

            continue;

        case 'b':

            Subtraction();

            continue;

        case 'c':

           Multiplication();

           continue;

        case 'd':

            Division();

            continue;

        case 'e':
            Modulus();

            continue;

        default:

            cout << "ERROR, bad in in in in i akajddffvf$&fydcivgei *self-destructing*"<<endl;

            break;

    }
 }
}
