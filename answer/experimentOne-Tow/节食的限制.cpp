#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int SpaceValue[510];
int f[45100]={0};


int cal(int N,int H){
//    for(int i =1; i <= N; i++){
    for(int i =0; i < N; i++){
        for(int j = H ; j > 0 ; j--){
            if(j >= SpaceValue[i]){
                if(f[j] > f[j - SpaceValue[i]] + SpaceValue[i]){
                    f[j] = f[j];
                }else{
                    f[j] = f[j - SpaceValue[i]] + SpaceValue[i];
                }
            }
        }
    }
    cout<<f[H];
}



int main() {
    int H,N;
    cin >> H >> N;// M是草药树木,T是时间
    for(int i = 0; i < N ; i++){
        cin >> SpaceValue[i];
    }
    cal(N,H);
    return 0;
}











//
//# include "stdio.h"
//int n,v,f[45100],a[510];
//int main()
//{
//    int i,j,min;
//
//    scanf("%d%d",&v,&n);
//    for(i=0;i<n;i++)
//        scanf("%d",&a[i]);
//
//
//    for(i=0;i<n;i++)
//    {
//        for(j=v;j>=0;j--)
//            if (j-a[i]>=0)
//            {
//                if (f[j]>f[j-a[i]]+a[i])
//                    f[j]=f[j];
//                else f[j]=f[j-a[i]]+a[i];
//            }
//
//    }
//
//    printf("%d",f[v]);
//    return 0;
//}
//
//
//
//
