#include <iostream>

using namespace std;

static const int N = 10000;
int main()
{ 
    int i, p, q, id[N];
    for(i=0; i<N; i++) id[i] = i;

    while (cin >> p >> q){
        cout<<p<<"-"<<q<<endl;
        int temp = id[p];
        if (id[q]==temp) continue;        
        for(i=0; i<N; i++)
            if(id[i]==temp) id[i] = id[q];
        cout <<"     "<<p<<"-"<<q<<endl;
    }
}