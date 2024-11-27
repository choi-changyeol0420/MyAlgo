
#include <iostream>
#include <string>
#include <numeric>
#include <vector>
#include <algorithm>

using namespace std;

//1부터 n까지의 합을 반환하는 함수
int sum_iterative(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

//1부터 n까지의 합을 반환하는 재귀 함수 100 => sum(99) + 100
int sum_recursive(int n)
{
    //기저 조건부
    if (n < 1) return 0;
    else if (n == 1) return 1;

    //재귀 호출부
    return sum_recursive(n - 1) + n;
}
/*
    sum(5)
    5 + sum(4)
        4 + sum(3)
            3 + sum(2)
                2 + sum(1)
                    1 + sum(0)
                        0 + sum(0-1)
                            -1 + sum(-2)
                                ........
*/

// n! 구하는 함수 : n * (n-1) * (n-2) * ..... * 3 * 2 * 1
long long factorial(int n)
{
    //기저 조건부
    if (n <= 0)
    {
        return 1;
    }

    //재귀 호출
    return n * factorial(n - 1);
}

//피보나치 수열 구하는 함수 : 1,1,2,3,5,8,
//n번째 위치한 피보나치 수열값 구하기
long long fibona(int n)
{
    //기저 조건부
    if (n < 1)
        return 0;
    else if (n == 1)
        return 1;
    //재귀호출부
    return fibona(n - 1) + fibona(n - 2);
}
// HELLO 뒤집기
/*
    f(HELLO)
        f(ELLO) + H
            f(LLO) + E
                f(LO) + L
                    f(O) + L
                    O
*/

string reverse(const string& str)
{
    //기저 조건부
    if (str.length() == 0)
        return "";
    //재귀호출부
    return reverse(str.substr(1)) + str[0];
}
//최대공약수 18, 24
/*
    gcd(24,18) -> gcd(18, 24%18) -> gcd(18,6) -> gcd(18, 18%6) -> gcd(6,0) -> 6
*/
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
//vector 출력 함수
template <typename T>
void print_vector(const vector<T> vec)
{
    for (auto& e : vec)
    {
        cout << e << ",";
    }
    cout << endl;
}

//순열 구해 출력
void permutauion(vector<int>& vec, int k)
{
    //기저조건부
    if (k == vec.size() -1)
    {
        //바꾼 자리 출력
        print_vector(vec);
        return;
    }

    for (int i = k; i < vec.size(); i++)
    {
        swap(vec[k], vec[i]);   //자리바꾸기 - 앞자리 고정
        permutauion(vec, k + 1);    //재귀호출
        swap(vec[k], vec[i]);   //제자리 돌리기
    }
}

int main()
{
    vector<int> vec{ 1,2,3,4,5 };
    permutauion(vec, 0);


    /*cout << gcd(24, 18) << endl;
    cout << lcm(3, 4) << endl;
    string str = "HELLO";
    cout << reverse(str) << endl;
    for (int i = 1; i <= 20; i++)
    {
        cout << fibona(i) << ", ";
    }
    cout << endl;

    cout << fibona(50) << endl;
    cout << factorial(5) << endl;
    cout << factorial(10) << endl;
    cout << factorial(20) << endl;
    cout << sum_recursive(100) << endl;
    cout << sum_iterative(100) << endl;*/
}