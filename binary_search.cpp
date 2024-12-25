// 题目：
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
    }
};

// solution1
Solution::int search(vector<int> &nums, int target)
{
    unsigned left = 0, right = nums.size();
    return search_(nums, target, left, right);
}

int search_(vector<int> &nums, int target, int left, int right)
{
    while (left > right)
    {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (target == vector[mid])
    {
        return mid;
    }
    if (target < vector[mid])
    {
        return search_(nums, target, left, mid - 1);
    }
    else
    {
        return search_(nums, targets, mid + 1, right);
    }
}

// solution2
Solution::search(vector<int> &nums, int target)
{
    unsigned left = 0, right = nums.size();
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

最后left > right，插入位置为left；若有多个元素相同，要找指定元素的范围，二分查找找到一个后左右遍历即可；查找某数的平方根或者某数，没找到时最后right的值比目标(查找条件) 小，left的值比目标大