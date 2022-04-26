#include<bits/stdc++.h>

using namespace std;

void print(int T,int K){
    cout<<"Case #"<<T<<": "<<K<<endl;
}

int main(){
    int T,K,N;
    string S;
    cin>>T;
    for (int i=0; i <T;i++){
        cin>>N>>K;
        cin>>S;
        int C=0,nC=N-1;
        while(C<nC){
            if(S[C]!=S[nC]){
                K--;
            }
            C++;
            nC--;
        }
        print(i+1,K);
    }
    return 0;
}