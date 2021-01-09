from sys import stdin

for message in stdin:
	if message == '':
		break
	decoded = ''				
	for ch in message:
		decoded += chr(ord(ch) - 7)

	print(decoded)	