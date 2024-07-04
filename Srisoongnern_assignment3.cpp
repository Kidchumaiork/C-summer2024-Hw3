// User Input:
// Please enter the value to print the odd Number = 8

// Expected Output:
// The output is:
// 1
// 3
// 5
// 7
// 9
// 11
// 13
// 15
// The sum of the given input is: 64

#include <iostream>

using namespace std;

class assignment3_friend_total
{
private:
    int n;
    int total;

public:
    void setN(int value) { n = value; }
    int getN() { return n; }
    void setTotal(int value) { total = value; }
    int getTotal() { return total; }

    friend class Srisoongnern_assignment3;
};

class Srisoongnern_assignment3
{
public:
    void countOddNum(assignment3_friend_total &assignment3_friend)
    {
        assignment3_friend.total = 0;
        int count = assignment3_friend.getN();
        int oddNumber = 1;

        cout << "The output is:" << '\n';
        for (int i = 0; i < count; i++)
        {
            cout << oddNumber << '\n';
            assignment3_friend.total += oddNumber;
            oddNumber += 2;
        }
        cout << "The sum of the given input is: " << assignment3_friend.total << '\n';
    }
};

int main()
{
    int n;
    cout << "Please enter the value to print the odd Number = ";
    cin >> n;

    Srisoongnern_assignment3 x1;

    assignment3_friend_total x2;

    x2.setN(n);

    x1.countOddNum(x2);

    return 0;
}