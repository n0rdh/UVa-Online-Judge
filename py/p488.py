number_of_cases = int(input())
for i in range(number_of_cases):
    input()
    amplitude = int(input())
    frequency = int(input())
    for f in range(frequency):
        x = 1
        print(x)
        while True:
            x += 1
            if x >= amplitude:
                print(str(x) * x)
                break
            print(str(x) * x)
        while True:
            x -= 1
            if x < 1:
                break
            print(str(x) * x)

        if f < frequency - 1:
            print()
