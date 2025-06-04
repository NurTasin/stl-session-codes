
#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector.begin
    vector<int> vec = {1,2,3,4,5};
    cout << *vec.begin() << endl;
    *vec.begin() = 7;
    cout << *vec.begin() << endl;
    
    // vector.end
    cout << *(vec.end()-1) << endl;
    cout << *(vec.end()-2) << endl;
    
    
    // vector.rbegin
    cout << *vec.rbegin() << endl;
    // vector.rend
    // Why Garbage?
    cout << *vec.rend() << endl;
    return 0;
}