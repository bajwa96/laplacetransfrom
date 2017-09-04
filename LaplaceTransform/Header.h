//
//  Header.h
//  LaplaceTransform
//
//  Created by Navroop Singh Bajwa on 04/09/17.
//  Copyright © 2017 Bajwa. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <iostream>
#include <string.h>
using namespace std;
//struct
int getvalofword(string word){
    int sum=1;
    for(int i=0;i<word.length();i++){
        //cout<<(int)word.at(i)<<endl;
        sum*=(int)word.at(i);
    }
    sum=sum%100;
    return sum;
}
#endif /* Header_h */
