from sys import stdin, stdout

def processl(line):
  count = 0
  current = ""
  out = []
  for ch in line:
    if ch.isdigit():
      count += int(ch)
    elif ch == "!":
      out.append(current)
      current = ""
      count = 0
    else:
      if ch == "b":
        current += count * " "
      else:
        current += count * ch
      count = 0

  out.append(current)
  return out
  print("\n".join("".join(x) for x in maze))

maze = []
while True:
  line = stdin.readline()
  if line == "":
    print("\n".join("".join(x) for x in maze))
    break

  line = line.strip()
  if line == "": # End of current maze
    print("\n".join("".join(x) for x in maze))
    print()
    maze = []
  else:
    maze += processl(line)
