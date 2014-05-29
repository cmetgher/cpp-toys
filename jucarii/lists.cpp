//
//  Lists.cpp
//  jucarii
//
//  Created by Cristina Metgher on 5/29/14.
//  Copyright (c) 2014 cmetgher. All rights reserved.
//

#include <iostream>
#include <list>
#include "Lists.h"
using namespace std;

void Lists::printMe(){
    //lists demo
    list<int> SuperList;
    SuperList.push_back(0);
    SuperList.push_front(10);
    
    SuperList.insert(++SuperList.begin(), 2);
    
    SuperList.push_back(5);
    SuperList.push_back(6);
    SuperList.push_front(9);
    SuperList.push_back(2);
    SuperList.push_front(0);
    
    list<int>::iterator i;
    
    for (i=SuperList.begin(); i!=SuperList.end(); ++i) {
        
        cout << *i << " " ;
    }


}