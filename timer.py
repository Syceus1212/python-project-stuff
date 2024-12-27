import time

counter = int(input("How many seconds would you like to set up the timer for?: "))

for x in reversed(range(0, counter)):
    
    seconds = x % 60
    minutes = int(x / 60) % 60
    hours = int(x / 3600) % 24

    print(f"{minutes:02}:{minutes:02}:{seconds:02}")
    time.sleep(1)

print("TIME'S UP!")
