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
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    int N,c;
    vector<int> V;
    cin>>N;
    //деление по алгоритму
    while (N!=0) {
        c=N%2;
        N=N/2;
        V.push_back(c);
    }
    //обратная запись и вывод
    for (long i = V.size() - 1; i >= 0; --i) {
            cout << V[i];
     }
    
    return 0;
    }
