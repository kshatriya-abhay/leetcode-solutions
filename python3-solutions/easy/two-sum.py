class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # dicts are hashmaps
        hashmap = {}
        for i in range(len(nums)):
            compl = target - nums[i]
            if compl in hashmap:
                return [i,hashmap[compl]]
            hashmap[nums[i]] = i