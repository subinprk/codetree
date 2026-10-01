#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> line(100);
    for (int i = 0; i < n; i ++){
        int a, b;
        cin >> a >> b;
        for (auto it = line.begin() + a - 1; it != line.begin() + b; it ++){
            *it += 1;
        }
        //for (auto &tmp : line){
        //        cout << tmp << " ";
        //    }
        //    cout << endl;
    }
    cout << *max_element(line.begin(), line.end());
    return 0;
}