n, x = map(int, input().split())
a = list(map(int, input().split()))

sum = 0
for i, c in enumerate(a):
	sum += c
	if (i % 2 == 1):
		sum -= 1

if sum <= x:
	print('Yes')
else:
	print('No')