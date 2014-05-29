//
//  LinkedLists.cpp
//  jucarii
//
//  Created by Cristina Metgher on 5/29/14.
//  Copyright (c) 2014 cmetgher. All rights reserved.
//

#include "LinkedLists.h"
#include <iostream>
#include <list>

using namespace std;

//LInked lists:

//halelyjah for nodes, w/o them there's no linked lists

template<class T> // we use templates to have the freedom to use more data types
class node{
    
private:
	T Data;         //here we store data
	node<T>* Link;  //here we store the address of the next element; it's of type node as it will point to another element in memory of type node
    
public:
	//constructor
	node(){Link = 0;}
	node(T d) { Data = d; Link = 0; }
    
	//accessors
	T& data(){ return Data; }
	node<T>*& link(){ return Link; }
    
};


void LinkedLists::printMe(){
    
	node<char> a('a'), b('b'), c('c');
    
    //give the address to the link:
	a.link() = &b;
	b.link() = &c;
    
    //print each element:
	cout << a.data() << endl;
	cout << b.data() << endl;
	cout << c.data() << endl;
    
    //the list looks like this:
    //a --> b --> c

}
