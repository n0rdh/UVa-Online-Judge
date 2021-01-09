def solution(sample_input):
    v,t = (int(x) for x in sample_input.split())
    print((v * t) * 2)

while True:
  try:
    sample_input = input()
    solution(sample_input)
    
  except EOFError:
    break