/*
    FruitSeller → ApplePrice numOfApples myRevenue
    과일 판매자의 현황 (사과 1000원)
    남은 사과: 18
    판매 수익: 2000
    InitMembers
    SellApples
    ShowSalesResult

    FruitBuyer → myMoney numOfApples
    과일 구매자의 현황
    현재 잔액: 3000
    사과 개수: 2
    InitMembers
    BuyApples
    ShowBuyResult
*/
#include <iostream>
using namespace std;

class FruitSeller {
   private:
    int ApplePrice;
    int numOfApples;
    int myRevenue;

   public:
    void InitMembers(int price, int num, int revenue);
    int SellApples(int money);
    void ShowSalesResult();
};

void FruitSeller::InitMembers(int price, int num, int revenue) {
    ApplePrice = price;
    numOfApples = num;
    myRevenue = revenue;
}

int FruitSeller::SellApples(int money) {
    int num = money / ApplePrice;
    numOfApples -= num;
    myRevenue += money;
    return num;
}

void FruitSeller::ShowSalesResult() {
    cout << "남은 사과: " << numOfApples << endl;
    cout << "판매 수익: " << myRevenue << endl
         << endl;
}

class FruitBuyer {
   private:
    int myMoney;
    int numOfApples;

   public:
    void InitMembers(int money);
    void BuyApples(FruitSeller &seller, int money);
    void ShowBuyResult();
};

void FruitBuyer::InitMembers(int money) {
    myMoney = money;
    numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money) {
    numOfApples += seller.SellApples(money);
    myMoney -= money;
}

void FruitBuyer::ShowBuyResult() {
    cout << "현재 잔액: " << myMoney << endl;
    cout << "사과 개수: " << numOfApples << endl
         << endl;
}

int main(void) {
    FruitSeller seller;
    seller.InitMembers(1000, 20, 0);
    FruitBuyer buyer;
    buyer.InitMembers(5000);
    buyer.BuyApples(seller, 2000);
    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();
    cout << "과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();
    return 0;
}