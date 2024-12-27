# calculator


operator = input("enter an operator (+ - / *): ")
num1 = float(input("enter value of first number: "))
num2 = float(input("enter value of second number: "))

if operator == "+":
    print(round(num1 + num2, 3))
elif operator == "-":
    print(round(num1 - num2, 3))
elif operator == "/":
    print(round(num1 / num2, 3))
elif operator == "*":
    print(round(num1 * num2, 3))
else:
    print("You did not enter the correct operator!")
