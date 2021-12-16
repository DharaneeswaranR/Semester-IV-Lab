def isPalindrome(num):
    rev = 0
    orig = num

    while num != 0:
        rev = (rev * 10) + (num % 10)
        num //= 10

    return rev == orig

num = int(input())
print("{} is a palindrome".format(num) if isPalindrome(num) else "{} is not a palindrome".format(num))
