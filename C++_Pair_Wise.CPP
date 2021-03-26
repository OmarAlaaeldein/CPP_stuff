
#include <iostream>

using namespace std;

int main()
{
    int n;
    int res=0;
    cin >> n;
    int numbers[n];
    for (int i=0;i<n;++i){
        cin>> numbers[i];
    }
    for (int j=0;j<n;++j){
        for (int h=j+1;h<n;++h){
            if (numbers[j]*numbers[h]>res){
                res=numbers[j]*numbers[h];
            }
        }
    }
    cout<<res<<'\n';
    return 0;
}
