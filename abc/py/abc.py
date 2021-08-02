n, a, x, y = map(int, input().split())
if n > a:
	ans = x * a + y * (n - a)
else:
	ans = x * n
print(ans)
