#include<iostream>
#include<vector>
using namespace std;

int pp (vector<int> &nums,int low,int high){
    int pivot=nums[low];
    int i=low;
    int j=high;
    while(i<j){
        while(nums[i]<=pivot && i<=high){
            i++;
        }
        while(nums[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[low],nums[j]);
    return j;
}
void qs (vector<int> &nums,int low,int high){
    if(low<high){
        int pivot=pp(nums,low,high);
        qs(nums,low,pivot-1);
        qs(nums,pivot+1,high);
    }
}

int main(){
    int b;
    cout << "enter the size of the array: ";
    cin >> b;
    vector<int> nums(b);
    cout << "enter the elements of the array";
    for(int i=0;i<b;i++){
        cin >> nums[i];
    }
    cout << "unsorted arrays: " << endl;
    for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";}

    qs(nums,0,b-1);

    cout << "sorted array: " << endl ;
    for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";}

}