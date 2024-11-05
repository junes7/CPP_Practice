/*
    30
    40
*/
#include <iostream>
using namespace std;

namespace AAA {
namespace BBB {
namespace CCC {
int num1;
int num2;
}  // namespace CCC
}  // namespace BBB
}  // namespace AAA

int main(void) {
    AAA::BBB::CCC::num1 = 30;
    AAA::BBB::CCC::num2 = 40;
    namespace ABC = AAA::BBB::CCC;
    cout << ABC::num1 << endl;
    cout << ABC::num2 << endl;
    return 0;
}
