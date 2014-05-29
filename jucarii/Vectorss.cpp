
//
//  Vectorss.cpp
//  jucarii
//
//  Created by Cristina Metgher on 5/29/14.
//  Copyright (c) 2014 cmetgher. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Vectorss.h"

using namespace std;

void Vectorss::printIt(){
    
    vector <int> superVector;
//    if (superVector.empty()) {
//        cout << "the super vector is not super, it's empty!";
//    }
    
    for (int i =1; i<=10; i++) {
        superVector.push_back(i);
    }
    
    cout << "super vector size is: " << superVector.size() << endl;

   
    vector<int>::iterator it;
    cout<< "The items are: ";
    for (it = superVector.begin(); it!=superVector.end(); ++it) {
        cout << " " << *it;
    }
    cout << endl;
    
    

}