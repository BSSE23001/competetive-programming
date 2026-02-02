let twoSum = function (nums, target) {
  const nmap = new Map();
  for (let i = 0; i < nums.length; ++i) {
    const c = target - nums[i];
    if (nmap.has(c)) {
      return [nmap.get(c), i];
    }
    nmap.set(nums[i], i);
  }
};

let nlist = [2, 7, 11, 15];
let result = twoSum(nlist, 9);
console.log(`Results are: ${result}`);
