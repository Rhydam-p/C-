#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n, m;
    cin>> n>>m;
    int a1[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a1[i][j];
        }
    }
    for(int j=0;j<m;j++)
    {
        if(j%2==0){
            for(int i=0;i<n;i++)
            {
                cout << a1[i][j] << endl;
            }
        }
        else{
             for(int i=n-1;i>=0;i--)
            {
                cout << a1[i][j] << endl;
            }
        }
    }
}
