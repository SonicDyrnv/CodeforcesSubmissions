#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
   
  
    if(n!=0){
        if(m>=1){nums1[m]=INT_MAX;}
        int i=0;
        int j=0;
        while(i<(m+n) && j<n){
            if(i<m || j<n){
                if(nums1[i]<=nums2[j]){
                    i++;
                }else if(nums1[i]>nums2[j]){
                    nums1.insert(nums1.begin()+(i),nums2[j]);
                    nums1.pop_back();
                    j++;
                }
            }
        }
    if(m==0 && n!=0){
        nums1=nums2;
    }
    }
        // for(int i=0;i<(m+n);i++){
        //     if(nums1[i]>nums2[j]){
        //         nums1.insert(nums1.begin()+i,nums2[j]);
        //         nums1.pop_back();
        //         j++;
        //     }else if(nums1[i]<=nums2[j] && k<m){
        //         k++;
        //     }
        //     if(k==m && j<n){
        //         nums1.insert(nums1.begin()+i,nums2[j]);
        //         nums1.pop_back();
        //         j++;
        //     }
        // }
    }   
};