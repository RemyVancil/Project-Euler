def problem(limit):
	sum_of_multiples = sum(x for x in range(limit) if(x % 3 == 0 or x % 5 == 0))
	print(sum_of_multiples)

if __name__ == '__main__':
	problem(1000)