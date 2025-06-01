#include <iostream>
#include <vector>

using namespace std;

int main(){
    // vector<int> vec(10);
    vector<int> vec;
    // vector.resize()
    vec.resize(10);
    // vector.reserve()
    vec.reserve(10);
    cout << vec.size() << endl;
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    cout << " ============ " << endl;
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << ", ";
    }
    return 0;
}