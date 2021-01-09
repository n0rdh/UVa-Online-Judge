import re

while True:
  try:
  	print(len(re.findall(r'[a-zA-Z]+', input())))
    
  except EOFError:
    break
