import sys


def main():
    number = get_credit()
    validate_number(number)
    
# Program to get credit card Number from user and reprompt in case of invalid input


def get_credit():
    while True:
        number = input("Number: ")
        # check weather number is valid integer and not a sentinal value
        try:
            if len(number) > 0 and int(number):
                break
        except ValueError:
            continue
    return number
    
# Program to calculate checksum and validate for soecific credit card company


def validate_number(number):

    sum1 = sum2 = 0
    # Check length of the number 
    if len(number) not in [13, 14, 15, 16]:
        print("INVALID")
        sys.exit(0)
        
    # check weather number is even or odd to calculate checksum
    if len(number) % 2 == 0:
        for i in range(len(number)):
            # Calculating Sum 1
            if i % 2 != 0:
                sum1 += int(number[i])
            # Calculating Sum 2
            else:
                mul = int(number[i]) * 2
                if mul >= 10:
                    sum2 += mul // 10
                    sum2 += mul % 10
                else:
                    sum2 += mul
                
    else:
        for i in range(len(number)):
            # Calculating Sum 1
            if i % 2 == 0:
                sum1 += int(number[i])
                # Calculating Sum 2
            else:
                mul = int(number[i]) * 2
                if mul >= 10:
                    sum2 += mul // 10
                    sum2 += mul % 10
                else:
                    sum2 += mul
 
    ttl = sum1 + sum2
    if ttl % 10 != 0:
        print("INVALID")
        sys.exit(0)
    
    first = int(number[0])
    second = int(number[1])
    
    # check wheather it is an Master Card or not
    if first == 5 and second in [1, 2, 3, 4, 5]:
        print("MASTERCARD")
        sys.exit(0)
     
    # check wheather it is an American Express card or not   
    elif first == 3 and (second == 4 or second == 7):
        print("AMEX")
        sys.exit(0)
        
    # check wheather it is an VISA card or not
    elif first == 4:
        print("VISA")
        sys.exit(0)
        
    else:
        print("INVALID")
        
        
main()