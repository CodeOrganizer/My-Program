##1.
##a=int(input("Number 1:"))
##b=int(input("Number 2:"))
##c=int(input("Number 3:"))
##
##if(a<b):
##    temp=b
##    b=a
##    a=temp
##if(a<c):
##    temp=c
##    c=a
##    a=temp
##if(b<c):
##    temp=c
##    c=b
##    b=temp
##
##print(a,">",b,">",c)

##2.

#for i in range(0,5):
    # for j in range(0,i+1):
    #     print(a, end="\t")
    #     a+=1
    # print()

# for i in range (1,100):
#     if(i%2!=0):
#         print(i)

# def gcd(a,b):
#     while(b!=0):
#         temp=int(a%b)
#         a=b
#         b=temp
#     return a
# print(gcd(4,9))

# try:
#     a=float(input("Enter the number"))
#     if (a<0):
#         raise ValueError("Number is negative")
        
#     else:
#         print("the number is:",a)
# except ValueError as e:
#     print("Error:",e)

# try:
#     num1=float(input("Enter number 1"))
#     num2=float(input("Enter the 2nd number"))
#     sub=num1*num2
#     print("sub:",sub)
#     div=num1/num2
#     print("div:",div)
# except ZeroDivisionError:
#     print("Division by zero is not allower")
# except ValueError:
#     print("enter valid input")
# except Exception as e:
#     print("An error occoured:",e)
# try:
#     num1=float(input("Enter number:"))
#     print(num1**2)
# except KeyboardInterrupt:
#     print("\nKeyboardInterrupt: Ctrl + C pressed ")
# except Exception as e:
#     print("Error:",e)

# import random
# try:
#     count=0
#     while(1):
#         num=random.randint(1,100)
#         print(num)
#         count+=1
#         if(count==10):
#             raise StopIteration("10 num done")
# except StopIteration as e:
#     print("Exception:",e)

class NegativeAge(Exception):
    def __init__(self, message):
        self.message=message
# try:
#     age=int(input("Enter age:"))
#     if(age<0):
#         raise NegativeAge("age can't be negative")
#     else:
#         print(age)
# except NegativeAge as e:
#     print("Error:",e)
