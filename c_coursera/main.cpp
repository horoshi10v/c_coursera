//
//  main.cpp
//  c_coursera
//
//  Created by user on 12.04.2020.
//  Copyright © 2020 valentyn.khoroshylov. All rights reserved.
//

#include <string>
#include <math.h>
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
   int A, B;
    cin >> A >> B;
    while (A>0 && B>0 )
    if (A>B) A = A % B;
    else B = B % A;
    cout<<A+B;
     return 0;
    }
