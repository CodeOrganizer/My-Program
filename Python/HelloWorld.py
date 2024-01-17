##name="scssc"
##age=True
##print(name)
##print(age)

##name= input("What is your name? ")
##print("hello "+name)

##first= input("Enter the first number: ")
##second= input("Enter the second number: ")
##sum=first+second
####sum= int(first) + int(second)
##print("The sum is "+str(sum))

name = "Rakib Islam"
##print(name.upper())
##print(name.lower())
##print(name)
##print(name.find(' '))
##print(name.find('n'))
##print(name.find("R"))
##print(name.find("Islam"))
####print(name.replace("Rakib","Munsi"))
####print(name.replace("Rakib Islam","Demo"))
##print(name.replace("h","Munsi"))
##
##print(name)

##print('H' in name)
##print('Rakib' in name)

##print(5/2)
##print(5//2)
##print(5%2)
##print(2**8)

##print (2>3 or 5<8)
##print(not 2>3)

##age=14
##
##if age>=18:
##    print("You are adult")
##    print("You can vote")
##elif age<18 and age>=5:
##    print("You are a boy")
##else:
##    print("You are a child")
##print("Thank you.")

##a=input("Enter the first number: ")
##b=input("Enter the second number: ")
##op=input("Enter the operator[+,-,/,*,%]: ")
##a=float(a)
##b=float(b)
##if op=='+':
##    print(a+b)
##elif op=='-':
##    print(a-b)
##elif op=='*':
##    print(a*b)
##elif op=='/':
##    print(a/b)
##elif op=='%':
##    print(int(a)%int(b))
##else:
##    print("Please enter valid operator.")

##numbers= range(5)
##print(numbers)

##i=1
##while i<=5:
##    print(i)
##    i+=1

##i=1
##while i<=5:
##    print(i*'*')
##    i+=1

##for i in range(5):
##    print(i+1)

marks=[23,52,71,"null"]
##print(marks)
##print(marks[-4])
####print(marks[-5])
##print(marks[0:2])
marks.append(56)
##print(len(marks))
marks.insert(0,40)
##print(56 in marks)
##for i in marks:
##    print(i)
##print(len(marks))
##i=0
##while i<len(marks):
##    print(marks[i])
##    i+=1
##marks.clear( )
##print(marks)

##alphabet=["a","b","c","d","e","f","g"]
##for i in alphabet:
##    if i=="d":
##        break
##    print(i)
##
##for i in alphabet:
##    if i=="e":
##        continue
##    print(i)

####Tuple: no modification. ()not compulsory, marks= 25,45,29 >> by default a tuple
##marks=(54,32,47,52,52,52)
##print(marks.count(52))
##print(marks.index(52))
#### set{}: store unique,unordered can't acess by index
##marks2={68,74,26,68,50}
##print(marks2)
##for i in marks2:
##    print(i)
####dictionary: {key:value}
##marks3={"Physics":68,"Chemistry":63,"math":40}
##print(marks3)
##print(marks3["math"])
##marks3["math"]=0
##marks3["bio"]=85
##print (marks3)

##import math
##print(dir(math))

##from math import sqrt ## or "from math import *"
##print(sqrt(2))

##def prsum(a,b=4):
##    print(a+b)
##prsum(1,2)
##prsum(5)