// OOPS- classes and objects
// C++ -> C with classes
// class->  extension of structres of C
// structures had some limitations
//      ->members are public by defautl so no data protection
//      -> No methods
// classes = structures+ more
// classes can make few members as private and few as public
// structures in C++ are typedefed by dafault
// you cn declare objects along with the class declaration

/*class Employess{
    // class definition
} harry, rohan, lovish;*/

// NESTING OF MEMBER FUNCTIONS


#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define vprint(v)            \
    for (auto &elem : v)     \
        cout << elem << " "; \
    cout << endl;
#define mprint(m)                                       \
    for (auto it : m)                                   \
        cout << it.first << " : " << it.second << endl; \
    cout << endl;
#define vint vector<int>
#define vstring vector<string>
#define vmat vector<vector<int>>
#define FAST_IO                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pii pair<int, int>
#define pll pair<ll, ll>
#define mii map<int, int>
#define mll map<ll, ll>

const int INF = 1e9;
const ll MOD = 1e9 + 7;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number : "<<endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    chk_bin(); //here one function of the class calls another function hence nesting of a function occurs
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1')s[i]='0';
        else if(s[i]=='0')s[i]='1';
    }
}

void binary :: display(void){
    cout<<"Your bianry number : "<<s<<endl;
}

int main()
{
    FAST_IO;
    binary b;
    b.read();
    b.chk_bin();
    b.ones();
    b.display();
    return 0;
}
// by ad73prem