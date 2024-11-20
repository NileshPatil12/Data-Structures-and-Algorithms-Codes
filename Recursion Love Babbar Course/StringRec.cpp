#include <iostream>
using namespace std;
void revstring(string &s, int i, int n)
{
    if (i >= n)
    {
        return;
    }
    swap(s[i++], s[n--]);
    revstring(s, i, n);
}
// head recursion reversal
void reverseApp2(string s, int i, int size, string &ans)
{
    if (i == size)
        return;
    reverseApp2(s, i + 1, size, ans);
    ans.push_back(s[i]);
}

void printSubsequences(string str, int index, string ans)
{
    if (index == str.length())
    {
        cout << ans << " ";
        return;
    }

    // include
    printSubsequences(str, index + 1, ans + str[index]);
    // exclude
    printSubsequences(str, index + 1, ans);
}

void stringSum(string a, string b, int i, int j, string &ans, int carry)
{
    if (i < 0 && j < 0 && carry == 0)
    {
        return;
    }
    int first = 0;
    int second = 0;

    if (i >= 0)         //if first='11' second='2222222' then i will get out of bound but second will be still on to avoid that this condition is given same vice versa for second condition for j
    {
        first = a[i] - '0';
    }
    if (j >= 0)
    {
        second = b[j] - '0';
    }
    int sum = first + second + carry;
    int lastDigit = sum % 10;
    carry = sum / 10;
    ans.push_back(lastDigit + '0');
    stringSum(a, b, i - 1, j - 1, ans, carry);
}

int main()
{
    // string s="abc";

    // string a="";
    // printSubsequences(s,0,a);
    // revstring(s,0,10);
    // reverseApp2(s,0,11,a);
    // cout<<a<<endl;
    string a = "12";
    string b = "23";
    string ans = "";
    stringSum(a, b, a.length() - 1, b.length() - 1, ans, 0);
    revstring(ans,0,ans.length()-1);
    cout << ans << endl;
}