#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(i, a, b) for(int i=a;i<b;i++)
#define all(x) x.begin(),x.end()
#define vprint(v) for (auto& elem : v) cout << elem << " "; cout << endl;
#define mprint(m) for (auto it:m) cout<<it.first<<" : "<<it.second<<endl; cout<<endl;
#define vint vector<int>
#define vstring vector<string>
#define vmat vector<vector<int>>
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mii map<int,int>
#define mll map<ll,ll>

const int INF = 1e9;
const ll MOD = 1e9+7;

class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }

        friend Complex sumComplex(Complex o1, Complex o2); //now the sumcomplex  function has permission to use the private members of the Complex class. perviouslu sumbomplex could not access o1.a and o2.a etc. but now it can access it

        //note that this does not mean the sumComplex is now a member function of the class Complex. it just has peermission to acces top use the private members.

        void printNumber(){
            cout<<"your number is : "<<a<<" + "<<b<<"i"<<endl; 
        }
};

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}

int main() {
    FAST_IO;
    Complex c1, c2,  sum;
    c1.setNumber(1,4);
    c2.setNumber(5,8);
    c1.printNumber();
    c2.printNumber();
    sum= sumComplex(c1,c2);
    sum.printNumber();
    return 0;
    
}

/*
PROPERTIES OF FRIEND FUNCTIONS : FRIENDS CAN ACCESS THEIR PRIVATE MEMBERS AND FUNCTIONS OF THE ONES WHOM THEY ARE FRIEND OF

1. not in the scope of class. this simple means that it does nto is the member of the class.

2. since it is not in the scope of the class, it cannot be called from the object o the class. c1.sumComplex====Invalid!!!

3. can be invoked withouth the help of any object

4. usually contains the objects and arguments

5. cam be declared inside public or  private section of the class

6. it cannot access the member sidrectly by their names and need object_name.member_name it access nay member


*/



//by ad73prem