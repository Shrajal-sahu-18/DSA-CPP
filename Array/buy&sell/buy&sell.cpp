#include <iostream>
#include <climits>
using namespace std;
void maxprofit(int *prices , int n){
    int bestbuy[100000];//[n] dynamic sizing in function not possible
    bestbuy[0] = INT_MAX;
    //cout << bestbuy[0] << ",";
    for(int i = 1; i <= n; i++){
        bestbuy[i] = min(bestbuy[i-1] , prices[i-1]);
        //cout << bestbuy[i] << ",";
    }
    int maxprofit = 0;
    for(int i = 0; i < n; i++){
        int currprofit = prices[i] - bestbuy[i];
        maxprofit = max(maxprofit, currprofit);

    }
    cout << "MaxProfit ==>" << maxprofit << endl;
}