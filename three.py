first = int(input())
second = int(input())
third = int(input())
if (first > second) and (first > third):
	largest=first
elif (second > first) and (second > third):
	largest=second
else :
	largest=third
print(largest)
