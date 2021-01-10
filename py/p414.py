while True:
    try:
        n = int(input())
        if n == 0:
            break
        spaces = []
        for x in range(n):
            spaces.append(input().count(' '))

        result = 0
        for i in spaces:
            result += i - min(spaces)

        print(result)

    except EOFError:
        break
