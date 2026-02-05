public class Solution
{

    public static int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> nmap = [];
        for(int i = 0; i< nums.Length; ++i)
        {
            int c = target - nums[i];
            if(nmap.TryGetValue(c, out int value)) { return [value, i];}
            nmap[nums[i]]=i;
        }
        return [];
    }

}