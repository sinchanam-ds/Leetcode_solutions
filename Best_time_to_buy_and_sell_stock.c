int maxProfit(int* prices, int pricesSize) {
    int maxProfit=0;
    int buy=prices[0];
    int i;
    for(i=0;i<pricesSize;i++){
        if (prices[i]<buy){
            buy=prices[i];
        }
        int profit=prices[i]-buy;
        if(profit>maxProfit){
            maxProfit=profit; 
        }
    }
    return maxProfit;
}
