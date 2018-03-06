#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

using namespace std;

void show(set<int> setOfInt)
{
    set<int>::iterator itr;
    itr = setOfInt.begin();
    for(; itr!=setOfInt.end(); itr++){
        cout<< *itr<<endl;
    }

}

int main(){

    set<int> intSet;

    if(intSet.empty()){
        for(int i = 0; i < 120; i++){
            intSet.insert(i);
        }
    }
    intSet.erase(49);


   if(intSet.find(99)){
        intSet.erase(99);
        intSet.insert(228);}
    
    
    show(intSet);
     intSet.swap()
     int minimalOfIntSet = (*std::min_element(intSet.begin(), intSet.end()));
     cout<<"Minimal = " << minimalOfIntSet <<endl;

     int maximalOfIntSet = (*std::max_element(intSet.begin(), intSet.end()));
     cout<<"Maximal = " << maximalOfIntSet <<endl;
     
}
