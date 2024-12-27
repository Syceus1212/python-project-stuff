# weight converter in python.

question = input("Which system of measuring weight would you like to convert? (kgs/lbs): ").upper()

if question == "KGS":
    weight = float(input("Please enter your weight in kgs: "))
    weight_in_lbs = round(weight * 2.205, 3) 
    print(f"Your weight in pounds is {weight_in_lbs}lbs.")
elif question == "LBS":
    weight = float(input("Please enter your weight in lbs: "))
    weight_in_kgs = round(weight / 2.205, 3)
    print(f"Your weight in kilograms is {weight_in_kgs}kgs.")
else:
    print(f"{question} is not a valid metric.")
