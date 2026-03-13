#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    int maxTill;
    int count;
    int ansArr[t];
    for(int i=0;i<t;i++){
        maxTill=0;
        cin>>n;
        int arr1[n];
        for(int j=0;j<n;j++){
            cin>>arr1[j];
            if(arr1[j]>maxTill){
                count=1;
                maxTill=arr1[j];
            }else if(arr1[j]==maxTill){
                count++;
            }
        }
        ansArr[i]=count;
    }
    for(int p=0;p<t;p++){
        cout<<ansArr[p]<<endl;
    }
    return 0;
}
