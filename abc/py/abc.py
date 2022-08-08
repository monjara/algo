s = input()
d = {}
for i in s:
	if i not in d:
		d[i] = 0
	d[i] += 1
ok = False
for k, v in d.items():
	if v == 1:
		print(k)
		ok = True
		break
if ok is False:
	print(-1)
