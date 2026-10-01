#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;
    vector<int> line(202);
    for (int i = 0; i < n; i ++){
        int a, b;
        cin >> a >> b;
        for (auto it = line.begin() + 100 + a; it != line.begin() + 100 + b; it ++){
            *it += 1;
        }
        //for (auto it : line){
        //   std::cout << it << " ";
        //}
        //cout << endl;
    }
    cout << *max_element(line.begin(), line.end());
    return 0;
}