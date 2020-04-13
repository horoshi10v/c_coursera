//
//  main.cpp
//  c_coursera
//
//  Created by user on 13.04.2020.
//  Copyright © 2020 valentyn.khoroshylov. All rights reserved.
//

#include <string>
#include <math.h>
#include <iostream>
#include <vector>
using namespace std;
int x;
int Factorial (int x){
    if (x>0){
        int F = 1;
        for(int i=1; i<=x; ++i)
        {
        F *= i;
        }
        return F;}
   if (x<0)
   return 1;
   return  1;
}

int main(int argc, const char * argv[]) {
    cin >> x;
    cout<<Factorial(x);
    return 0;
    }
