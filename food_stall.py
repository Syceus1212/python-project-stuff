# food stall program

menu = {"pizza": 3.00,
        "nachos": 4.50,
        "popcorn": 4.00,
        "fries": 4.75,
        "coke": 3.50}

quant = []
number = -1
cart = []
total = 0

for key,value in menu.items():
    print(f"{key}: {value}")

while True:
    food = input("select an item (q to quit): ").lower()

    if food =="q":
        break
    elif menu.get(food) is not None:
        cart.append(food)
    else:
        print(f"{food} is not in the Menu!")
        continue

    quantity = int(input(f"Enter the quantity of {food} you would like to order: "))   
    if 100 > quantity > 0:
        quant.append(quantity)
        number += 1
    else:
        print(f"Cannot sell that quantity of {food}!")
        continue

print("----------------------")
print("Your Cart:")
for item in cart:
    print(item)

print()
print("----------------------")
for food in cart:
    total = (quant[number] * menu.get(food)) + total
    
print(f"Your total is: ${round(total, 2)}")
