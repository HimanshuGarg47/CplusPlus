#include <bits/stdc++.h>
using namespace std;

void MergeSort(vector<int> &arr, int low, int high);

class KthLargest
{
private:
    int k;
    vector<int> nums;

public:
    KthLargest(int k, vector<int> &nums)
    {
        this->k = k;
        this->nums = nums;
        sort(this->nums.begin(), this->nums.end(), greater<int>());
        // for (auto i : nums)
        //     cout << i << " ";
    }

    int add(int val)
    {
        if (val >= nums[k - 1])
        {
            nums[k - 1] = val;
            MergeSort(nums, 0, k);

            // cout << endl;
            // for (auto i : nums)
            //     cout << i << " ";
        }

       // cout << "\n k = " << k << endl;
        return nums[k - 1];
    }
};

void Merging(vector<int> &arr, int low, int mid, int high)
{
    int l = low;
    int sec_low = mid + 1;
    int n = high - low + 1;
    vector<int> merge(n, 0);
    int k = 0; // for index in merged array
    while (low <= mid && sec_low <= high)
    {
        if (arr[low] > arr[sec_low])
            merge[k++] = arr[low++];

        else
        {
            merge[k++] = arr[sec_low++];
        }
    }

    while (low <= mid)
    {
        merge[k++] = arr[low++];
    }

    while (sec_low <= high)
    {
        merge[k++] = arr[sec_low++];
    }

    for (int i = 0; i < n; i++)
    {
        arr[l++] = merge[i];
    }
}
void MergeSort(vector<int> &arr, int low, int high)
{

    while (low < high)
    {
        int mid = (low + high) / 2;

        MergeSort(arr, low, mid);
        //  Merging(arr,low,mid,high);

        MergeSort(arr, mid + 1, high);

        //    Merging(arr,low,mid,high);

        Merging(arr, low, mid, high);
        return;
    }
}
int main()
{
    vector<int> nums = {4,5,8,2};
    KthLargest *obj = new KthLargest(3,nums);

    int param = obj->add(3);
    cout << param << endl;

     param = obj->add(5);
    cout << param << endl;

     param = obj->add(10);
    cout << param << endl;

     param = obj->add(9);
    cout << param << endl;

     param = obj->add(4);
    cout << param << endl;

}