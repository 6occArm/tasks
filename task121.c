int maxProfit(int* prices, int pricesSize) {
    if (pricesSize == 0) {
        return 0;
    }
    
    int minPrice = prices[0];  // Минимальная цена покупки
    int maxProfit = 0;         // Максимальная прибыль
    
    for (int i = 1; i < pricesSize; i++) {
        // Обновляем минимальную цену
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } 
        // Или проверяем, можно ли получить большую прибыль
        else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    
    return maxProfit;
}