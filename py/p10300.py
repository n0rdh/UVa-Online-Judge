
def main():
    test_cases = int(input())
    for _ in range(test_cases):
        premium = 0
        number_of_farmers = int(input())
        for x in range(number_of_farmers):
            size, noa, fef = map(int,input().split()) 
            premium += (size * fef)
        
        print(premium)
    
 
if __name__ == '__main__':
    main()