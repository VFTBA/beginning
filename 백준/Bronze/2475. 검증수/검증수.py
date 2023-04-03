num = list(map(int, input().split()))
addition = 0
for i in num:
     i = i * i
     addition += i
print(addition % 10)