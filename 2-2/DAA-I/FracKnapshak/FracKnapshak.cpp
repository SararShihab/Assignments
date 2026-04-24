#include<iostream>
#include<iomanip>
#include<vector>
#include<unordered_map>
#include<tuple>
#include<algorithm>
using namespace std;

class Knapshak {
private:
    vector<tuple<char, int, int>> items;
    vector<char> uniqueItems;
    unordered_map<char, bool> exists;

public:
    void addItem(char it, int p, int w) {
        items.push_back({it, p, w});
        if (!exists[it]) {
            uniqueItems.push_back(it);
            exists[it] = true;
        }
    }

    void solve(int capacity) {
        sort(items.begin(), items.end(), [](const auto& a, const auto& b) {
            auto [it1, p1, w1] = a;
            auto [it2, p2, w2] = b;
            return (double)p1 / w1 > (double)p2 / w2;
        });

        double totalProfit = 0.0;
        int currentWeight = 0;

        cout << "\n------------------------------------" << endl;
        cout << "Item \t Weight \t Profit" << endl; 
        cout << "------------------------------------" << endl;

        for (auto [it, p, w] : items) {
            if (currentWeight + w <= capacity) {
                currentWeight += w;
                totalProfit += p;
                cout << it << " \t " << w << " \t\t " << (double)p << endl;
            } else {
                int remaining = capacity - currentWeight;
                double fractionProfit = p * ((double)remaining / w);
                totalProfit += fractionProfit;

                cout << it << " \t " << remaining << "\t   (f) " << fixed << setprecision(2) << fractionProfit << endl;

                currentWeight = capacity;
                break;
            }
        }

        cout << "------------------------------------" << endl;
        cout << "Total: \t\t\t " << fixed << setprecision(2) << totalProfit << endl;
        cout << "------------------------------------" << endl;
    }
};

int main() {
    int E;
    cin >> E;

    Knapshak bag;

    for (int i = 0; i < E; i++) {
        char it;
        int p, w;
        cin >> it >> p >> w;
        bag.addItem(it, p, w);
    }

    int capacity;
    cin >> capacity;

    bag.solve(capacity);
    return 0;
}