
st = input()

current_char = 'D'
count = 0
ans = 0

for i in range(len(st)):
    if st[i] != current_char:
        ans = max(ans, count)
        count = 0
    
    count += 1
    current_char = st[i]
ans = max(ans, count)
print(ans)