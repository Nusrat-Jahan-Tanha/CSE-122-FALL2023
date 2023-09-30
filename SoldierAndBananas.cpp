#include<iostream>
int main() {
    int k, n, w;
    std::cin >> k >> n >> w;
    // Calculate the total cost of w bananas
    int totalCost = k * w * (w + 1) / 2;
    // Calculate the amount the soldier has to borrow from his friend
    int borrowAmount = std::max(0, totalCost - n);
    std::cout << borrowAmount << std::endl;
    return 0;
}
