//
//  main.cpp
//  LaplaceTransform
//
//  Created by Navroop Singh Bajwa on 04/09/17.
//  Copyright © 2017 Bajwa. All rights reserved.
//

#include "Header.h"
int main(int argc, const char * argv[]) {
    string sent[100];
    int n,in=0;
    cin>>n;
    cin.ignore();
    while(n--){
        getline(cin,sent[in++]);
        cout<<getvalofword(sent[in-1])<<endl;
    }
    
    return 0;
}
