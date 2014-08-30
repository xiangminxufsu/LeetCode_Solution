public class BestTimeToBuyAndSellStockII {
	public int maxProfit(int[] prices) {
		// Start typing your Java solution below
		// DO NOT write main() function
		if (prices.length == 0 || prices.length == 1) {
			return 0;
		}
		int value = 0;
		for (int i = 0; i < prices.length - 1; i++) {
			if (prices[i] <= prices[i + 1]) {
				value += prices[i + 1] - prices[i];
			}
		}
		return value;

	}
}