# Quiz game!

questions = ("How many elements are in the periodic table?: ",
             "Which animal lays the largest eggs?: ",
             "What is the most abundant gas in Earth's atmosphere?: ",
             "How many bones are present in the human body?: ",
             "Which planet in the solar system is the hottest?: ")

options = (("A. 201", "B. 118", "C. 119", "D. 107"),
           ("A. Elephant", "B. Ostrich", "C. Whale", "D. Elephant"),
           ("A. Nitrogen", "B. Oxygen", "C. Carbon Dioxide", "D. Helium"),
           ("A. 203", "B. 207", "C. 206", "D. 208"),
           ("A. Mercury", "B. Venus ", "C. Mars", "D. Earth"))

answers = ("B", "B", "A", "C", "B")
guesses = []
score = 0
question_num = 0

for question in questions:
    print("------------------------")
    print(question)

    for option in options[question_num]:
        print(option)

    guess = input("enter (A, B, C, D): ").upper()
    guesses.append(guess)
    if guess == answers[question_num]:
        print("Correct!")
        score += 1
    else:
        print("Incorrect!")
        print(f"{answers[question_num]} is the correct answer.")
    
    question_num += 1

print("-------------------------------")
print(f"         Result: {score} / {question_num}            ")
print("-------------------------------")

score_percentage = (score / len(questions) * 100)
print(f"You guessed {score_percentage}% of the answers correctly!")
