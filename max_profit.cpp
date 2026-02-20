#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) 
{
	if(prices.empty()) return 0;
	vector<int> buy(prices.size());
	vector<int> dp(prices.size());
	
	buy[0] = prices[0];
	dp[0] = 0;
	
	for(size_t i = 1; i < prices.size(); i++)
	{
		buy[i] = min(buy[i-1], prices[i]);
		dp[i] = max(dp[i-1], prices[i] - buy[i-1]);
	}
	
	return dp[prices.size() - 1];
}
int main()
{
	vector<int> prices = {7, 1, 4, 5, 1, 1};
	cout << maxProfit(prices);
	return 0;
}
