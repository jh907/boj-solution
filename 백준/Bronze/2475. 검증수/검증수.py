num = list(map(int, input().split()))
sum = 0

for i in range(5):
    sum += num[i] * num[i]

sum = sum % 10

print(sum)
