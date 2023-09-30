#include <iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>& nums,int k){
  vector<int> temp(nums.size());

  for(int i=0;i<nums.size();i++){
    temp[(i+k)%nums.size()] = nums[i];
  }
  //copy temp into num vector
  nums=temp;
}
int main() {

 
}