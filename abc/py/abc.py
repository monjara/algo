n, a, x, y = map(int, input().split())
if n <= a:
	print(n * x)
else:
	print(x * a + ((n - a) * y))
