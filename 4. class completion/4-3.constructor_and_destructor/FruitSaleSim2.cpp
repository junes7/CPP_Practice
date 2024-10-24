#include <iostream>
using namespace std;

class FruitSeller {
   private:
    int ApplePrice;
    int numOfApples;
    int myRevenue;

   public:
    FruitSeller(int price, int num, int revenue) {
        ApplePrice = price;
        numOfApples = num;
        myRevenue = revenue;
    }

    int SaleApples(int money) {
        if (money < 0) {
            cout << "잘못된 정보가 전달되어 판매를 취소합니다." << endl;
            return 0;
        }
        int num = money / ApplePrice;
        numOfApples -= num;
        myRevenue += money;
        return num;
    }

    void ShowSalesResult() const {
        cout << "남은 사과: " << numOfApples << endl;
        cout << "판매 수익: " << myRevenue << endl
             << endl;
    }
};

class FruitBuyer {
   private:
    int numOfApples;
    int myMoney;

   public:
    FruitBuyer(int money) {
        myMoney = money;
        numOfApples = 0;
    }

    void BuyApples(FruitSeller &seller, int money) {
        if (money < 0) {
            cout << "잘못된 정보가 전달되어 구매를 취소합니다." << endl;
            return;
        }
        myMoney -= money;
        numOfApples += seller.SaleApples(money);
    }

    void ShowBuyResult() const {
        cout << "현재 잔액: " << myMoney << endl;
        cout << "사과 개수: " << numOfApples << endl
             << endl;
    }
};

int main(void) {
    FruitSeller seller(1000, 20, 0);
    FruitBuyer buyer(5000);
    buyer.BuyApples(seller, 2000);
    cout << "과일 판매자의 현황" << endl;
    seller.ShowSalesResult();
    cout << "과일 구매자의 현황" << endl;
    buyer.ShowBuyResult();
    return 0;
}