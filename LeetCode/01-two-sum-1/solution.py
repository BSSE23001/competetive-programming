def twoSum(nums: list[int], target: int) -> list[int]:
    prev_map = {}
    for i,n in enumerate(nums):
        diff = target-n
        if diff in prev_map:
            return [prev_map[diff],i]
        prev_map[n]=i

if __name__ == "__main__":
    numList: list[int] = [2,7,11,15]
    arr: list[int] = twoSum(numList,9)
    print(f"Result: {arr}")
