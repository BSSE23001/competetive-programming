import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;

public class solution {

    public static int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> nmap = new HashMap<>();
        for (int i = 0; i < nums.length; ++i) {
            int c = target - nums[i];
            if (nmap.containsKey(c)) {return new int[] {nmap.get(c),i};}
            nmap.put(nums[i], i);
        }
        return new int[] {};
    }

    public static void main(String[] args) {
        int[] nums = {2,7,11,15};
        int[] results = twoSum(nums,9);
        System.out.println(Arrays.toString(results));
    }
}