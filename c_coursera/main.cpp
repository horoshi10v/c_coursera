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
    string a;
    cin>>a;
    int i=0,b=0;
    for (auto c : a){
        if (c =='f'){
            b++;
        if(b==2){cout<<i;}
        }
        i++;}
    if (b==1){cout<<"-1";}
    else if (b==0){cout <<"-2";}
    return 0;
}
