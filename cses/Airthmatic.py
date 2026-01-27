# Airthmatic Operation 

# Addition
a = 5
b=56
print(a+b)

# Subtraction 
print(a-b)


# Modulus 

print(a/b)

# Divison 

print (a%b)

# Relational Operator  This is called comparation operation 
print(a>b)
print(a<b)
print(a==b)
print(a!=b)
print(a>=b)
print(a<=b)


# Write a program to perform the all comparision operation between two numbers  72 and 65 by using the 3rd variable using C 
x=72
y=65
z=0 
z = x + y
print("Addition is :",z)
z = x - y
print("Subtraction is :",z)
z = x * y   
print("Multiplication is :",z)
z = x / y
print("Division is :",z)
z = x % y
print("Modulus is :",z)


# Write a program to find the greatest number among three numbers using logical operator in python 
p = 45
q = 78
r = 23
if (p>q) and (p>r):
    print("p is greatest")
elif (q>p) and (q>r):
    print("q is greatest")
else:
    print("r is greatest")
    



# Simple progeam to demonstrate the while loop in python 
print("Print numbers from 1 to 10:")
i = 1
while i<=10:
    print(i)
    i = i + 1  #  This is the increment operator 
#  This is the decrement operator
print("Print numbers from 10 to 1: For the devcrement operator:")
j = 10
while j>=1:
    print(j)
    j = j - 1  # This is the decrement operator

# Write a program to check even or odd number using if else statement in python
print("Check even or odd number:")
num = 29
if num % 2 == 0:
    print(num,"is even")
else:
    print(num,"is odd")

print ("Fibonacci series:")

# Write a program to find the febonacci series using for loop in python 
n = 32
a, b = 0, 1
for i in range(n):
    print(a, end=' ')
    a, b = b, a + b 