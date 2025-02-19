class solution{
public:
int profit(vector<int>prices)
{
int bestbuy=prices.at(0);int maxprofit=0;
for(int i=1;i<prices.size();i++)
{
if(prices[i]>bestbuy)
maxprofit=max(maxprofit,prices[i]-bestbuy);
bestbuy=min(bestbuy,prices[i]);
}
return maxprofit;
}
};
