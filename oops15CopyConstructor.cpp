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

class number{
    int a;
    public:
        number(){}

        number(int num){
            a=num;
        }

        number(number& obj) //pass an object as reference into the constructor nd that will be the copy constructor
        {
            cout<<"hello"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"Number  : "<<a<<endl;
        }
};



int main() {
    FAST_IO;
    number x,y,z(45); //if we do this without making a default constructor then it will throw an error
    z.display();
    number z1(z); //this way z1 will become a copy of the object z
    z1.display();

    number z2;
    z2=z;  //value will be assigned but copy constructor wont be invoked
    z2.display();

 
    number z3=z; //copy constructor will be invoked here. since in one line only we made the constructor and then assigned also. if we would have taken two lines like before then copy construcotr woont be called
    z3.display();
    // z1 should exactly resemble z
    return 0;
}
//by ad73prem

//even if we remove the copy constructor then also we dont get an error. compiler allocates a default copy constructor to each class. if we dont define that that is used. if we make then ours is used
