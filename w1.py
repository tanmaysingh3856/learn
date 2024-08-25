#1.	Create variables of different data types (int, float, complex, bool, string) and print their types using the type() function

a = 10
b = 10.5
c = 10+5j
d = True
e = "Hello"

print(type(a))
print(type(b))
print(type(c))
print(type(d))
print(type(e))

#2.	Use the id() function to show that two variables with the same value have the same memory address.

f = 10
g = 10

print(id(f))
print(id(g))


#3.	Create a list of numbers from 0 to 9 using the range() function and print it.

h = list(range(10))
print(h)


#4.	Write a program that takes a user's name and age as input, then prints a greeting message using string formatting.

name = input("Enter your name: ")
age = int(input("Enter your age: "))
print("Hello, {}! You are {} years old.".format(name, age))


#5.	Demonstrate the difference between integer and float division by dividing 10 by 3 in both ways.

print(10/3)
print(10//3)


