a, b = map(int, input().split())

if ( 0 < a ) & ( b == 0 ):
	print('Gold')
elif ( a == 0 ) & ( 0 < b ):
	print('Silver')
elif ( 0 < a ) & ( 0 < b ):
	print ('Alloy')
