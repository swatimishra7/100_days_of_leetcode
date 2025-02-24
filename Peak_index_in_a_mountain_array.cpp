int binsearch(vector<int>nums)
{
    int start=1;
    int end=nums.size()-2;
    while(start<=end)
    {

        int mid=(start+end)/2;
        if(nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1])
            return mid;
        if(nums[mid-1]<nums[mid])

            start=mid+1;
        else
            end=mid-1;

    }

return -1;
}
