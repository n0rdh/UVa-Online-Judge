def solution(sample_input):
    a,b = (int(x) for x in sample_input.split())
    print(abs(a - b))

while True:
  try:
    sample_input = input()
    solution(sample_input)
    
  except EOFError:
    break