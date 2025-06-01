#include <iostream>
#include <vector>

using namespace std;

int main(){
    // Just declaration
    // vector<int> vec;

    // Declaration and Initialization
    vector<int> vec = {1, 2, 3, 4, 5};
    // vector<int> vec (5, 0);
    // vector.size()
    // cout << vec.size() << endl; 
    
    // vector.push_back()
    // for(int i=0; i<5; i++){
    //     int x;
    //     cin >> x;
    //     vec.push_back(x);
    // }
    cout << "Current Size of the vector= " << vec.size() << endl;
    cout << "===========" << endl;
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;
    cout << "===========" << endl;
    // vector.pop_back()
    vec.pop_back();
    cout << "After pop_back size of the vector= " << vec.size() << endl;
    // vector.front() and vector.back()
    cout << "front = " << vec.front() << endl;
    cout << "back = " << vec.back() << endl;

    return 0;
}