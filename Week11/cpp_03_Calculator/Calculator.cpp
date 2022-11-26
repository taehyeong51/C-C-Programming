#include <iostream>
using namespace std;

#include "Adder.h"
#include "Calculator.h"

void Calculator::run() {
    cout << "type Two number: ";
    int a,b;
    cin >> a >> b;
    Adder adder(a,b);
    cout << adder.process();
}

