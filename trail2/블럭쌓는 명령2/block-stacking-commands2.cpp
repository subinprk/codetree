#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    std::cin >> n >> k ;
    // Please write your code here.
    std::vector<std::pair<int, int>> order;
    for (int i = 0; i < k; i ++){
        int a, b;
        std::cin >> a >> b;
        order.push_back(make_pair(a, b));
        //std::cout << a << "  " << b << endl;
    }
    std::vector<int> arr(n);
    for (int i = 0; i < k; i ++){
        for (int j = 0; j < n; j ++){
            if (j >= order[i].first - 1 && j <= order[i].second - 1){
                arr[j] += 1;
            }
        }
        //for (auto &it : arr){
        //    cout << it << " ";
        //}
        //cout << endl;
    }
    std::cout << *max_element(arr.begin(), arr.end());
    return 0;
}