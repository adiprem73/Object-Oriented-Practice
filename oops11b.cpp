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

class Point{
    int x,y;
    friend double distance(Point, Point);
    public: 
        Point(int a, int b){
            x=a;
            y=b;
        }

        void displayPoint(){
            cout<<"("<<x<<" , "<<y<<")"<<endl;
        }
};

double distance(Point a, Point b){
    return (double)sqrt(pow(a.x-b.x, 2)+ pow(a.y-b.y, 2));
}

int main() {
    FAST_IO;
    Point p(1,0);
    Point q(70,0);
    p.displayPoint();
    q.displayPoint();
    cout<<distance(p,q);
    return 0;
}
//by ad73prem