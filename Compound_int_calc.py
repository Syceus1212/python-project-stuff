Principle = 0
r = 0
t = 0

Principle = float(input("type in an initial principle investment ($): "))

while Principle <= 0:
    print(f"{Principle} is not a valid principle investment.")
    Principle = float(input("type in an initial principle investment ($): "))

r = float(input("type in a valid interest rate: "))
while r <= 0:
    print(f"{r} is not a valid interest rate.")
    r = float(input("enter a valid interest rate: "))

t = float(input("type in a valid time span (in years): "))
while t <= 0:
    print(f"{t} is not a valid time span.")
    t = float(input("please enter a valid time span for your investment: ")) 


print(f"Calculating the compound interest for an investment of ${Principle} with an interest rate of {r}%, for {t} years long...")
total = Principle * pow((1 + r/100), t)

print(f"the total balance after {t} years will be: {total}. ")
