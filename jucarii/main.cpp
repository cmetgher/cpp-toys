#include <iostream>
#include <list>

using namespace std;

int main(){
    list<int> L;
    L.push_back(0);
    L.push_front(10);
    
    L.insert(++L.begin(), 2);
    
    L.push_back(5);
    L.push_back(6);
    L.push_front(9);
    L.push_back(2);
    L.push_front(0);
    
    list<int>::iterator i;
    
    for (i=L.begin(); i!=L.end(); ++i) {
    
        cout << *i << " ";
    
    }
    


}