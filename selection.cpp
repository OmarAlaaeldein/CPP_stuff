#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;
int main()
{
int n;
cin>>n;
int l[n];
for (int i=0;i<n;++i){
    cin>>l[i];
}
/* increasing order       */
for (int j=0;j<n-1;++j){
    for (int k=j+1;k<n;++k){
        if (l[k]<l[j]){
            swap(l[k],l[j]);
        }
    }
}
for (int i=0;i<n;++i){
    cout<<l[i]<<" ";
}


return 0;
}
