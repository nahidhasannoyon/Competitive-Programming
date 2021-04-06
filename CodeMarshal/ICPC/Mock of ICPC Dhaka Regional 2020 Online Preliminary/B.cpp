#include<bits/stdc++.h>
using namespace std;
///--------------------**********----------------------------------
#define     Aminahid               ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0)
#define     ll                     long long int
#define     ld                     long double
#define     db                     double
#define     ull                    unsigned long long int
#define     str                    string
#define     vc                     vector
#define     stk                    stack
#define     pb(x)                  push_back(x)
#define     all(x)                 x.begin(), x.end()
#define     allr(x)                x.rbegin(), x.rend())
#define     ig                     cin.ignore(numeric_limits<streamsize>::max(),'\n')
#define     gl(x)                  gerline(cin,x)
//------------------calculation-------------------------------------
#define     uni(y)                 y.erase(unique(all(y)), y.end())
#define     eras(y, k)             y.erase(y.begin() + k)
#define     srt(v1)                sort(all(v1))
#define     srtr(x)                sort(allr(x))
#define     mx(a)                  *max_element(all(a))
#define     mn(a)                  *min_element(all(a))
#define     min3(a,b,c)            min(a,min(b,c))
#define     min4(a,b,c,d)          min(d,min(a,min(b,c)))
#define     max3(a,b,c)            max(a,max(b,c))
#define     max4(a,b,c,d)          max(d,max(a,max(b,c)))
#define     max6(a1,a2,a3,b1,b2,b3) max(a1,max(a2,max(a3,max(b1,max(b2,b3)))))
#define     gcd(a,b)               __gcd(a,b)
#define     lcm(a,b)               ((a)*(b)/gcd(a,b))
#define     sqr(x)                 (x)*(x)
#define     sz(x)                  x.size()
///                                transform(s.begin(), s.end(), s.begin(), ::tolower);
//---------------------input/output---------------------------------------
#define     sl(x)                  scanf("%lld",&x)
#define     sl2(x,y)               scanf("%lld %lld", &x,&y)
#define     sl3(x,y,z)             scanf("%lld %lld %lld",&x,&y,&z)
#define     pl(x)                  printf("%lld",x)
#define     pl2(x,y)               printf("%lld %lld",x,y)
#define     pl3(x,y,z)             printf("%lld %lld %lld",x,y,z)
#define     no                     cout << "NO" << endl
#define     yes                    cout << "YES" << endl
#define     No                     cout << "No" << endl
#define     Yes                    cout << "Yes" << endl
#define     fs(x)                  fixed << setprecision(x)
#define     el                     << endl
#define     cl                     cout << endl;
#define     co(x)                  cout << x << endl
#define     ct(x)                  cout << x << "\t"
//----------------------loops---------------------------------------
#define     tci                    cin >> _; ig; while(_--)
#define     tc                     cin >> _; while(_--)
#define     lp(i,a,n)              for(i=a; i<= n; i++)
#define     lr(i,n,a)              for(i=n-1; i>= a; i--)
#define     trav(x)                for(auto i: x)
#define     print(x)               for(auto i: x) { cout << i << " "; }
//----------------------Constants-----------------------------------
#define     pi                     3.14159265358979323846
#define     max_int                2147483647
#define     min_int                -2147483648
#define     mod                    1000000007
///--------------------**********------------------------------------

ll _,a,b,c,i,j,k,l,m,n,o,t,len,loc,cnt,rem,sum,mul,maxi,mini;
db d,e,f,g;
char ch,ch2;
str s,r,z;

vc< ll > v,v2,v3;
vc< db > vd,vd2,vd3;
///vc< str > vs(1000000),vs2(10000),vs3(10000);
vc< vc< ll > > vv,vv2,vv3;

stk< ll > sl,sl2,sl3;
stk< db > sd,sd2,sd3;
stk< str > ss,ss2,ss3;
set< ll > se;
queue< ll > q;
priority_queue< ll > pq;
vc< ll > ::iterator it;

///****Main****///
int main()
{
    Aminahid;
    a=b=c=d=e=i=j=k=l=m=n=o=t=len=loc=cnt=sum=rem=0,mul=1;
    mini=max_int;
    maxi=min_int;
    j=1;
    cin >> a;
    while(a--)
    {
        cin >> n;
        ll arr[n+1];
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        cout << "Case " << j++ << ": " << arr[0]*arr[n-1] << endl;
    }


    return 0;
}
