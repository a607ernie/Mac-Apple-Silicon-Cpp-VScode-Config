#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2); 
    vec.push_back(3); 
    vec.push_back(4); 
    vec.push_back(5); 

    vec.pop_back(); 
    vec.pop_back();
    cout << "size: " << int(vec.size()) << endl; 

    
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    vec[0] = 99;

    vector<int>::iterator it = vec.begin();
    vec.insert(it+2, 6);
    vec.erase(it+2);

    for (auto &v : vec) {
        cout << v << " ";
    }
    cout << "\n";

    return 0;
}