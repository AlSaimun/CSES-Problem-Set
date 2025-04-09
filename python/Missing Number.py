n = int(input())
nums = list(map(int, input().split()))
sum = sum(nums)
total_sum = n * (n + 1) // 2
missing_number = total_sum - sum
print(missing_number)   