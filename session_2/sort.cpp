#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(){
    // std::sort
    vector<int> vec;
    while(1){
        int temp;
        cin >> temp;
        if(temp==0) break;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end()); // O(nlogn)
    // sort(vec.begin(), vec.end(), compare);
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << ", ";
    }
    cout << endl;
    return 0;
}