#include<iostream>
using namespace std;

int maxArea(int a[],int len){
    int area = 0;
    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            area = max(area, min(a[j], a[i]) * (j - i));
        }
    }

    return area;
}

int main(){
    int A[] = {1,8,6,2,5,4,8,3,7};
    int len = sizeof(A)/sizeof(A[0]);
    int ans=maxArea(A,len);
    cout<<ans;
    return 0;
}