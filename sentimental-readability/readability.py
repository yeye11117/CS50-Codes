from cs50 import get_string

letters = float(0)
words = float(1)
sentence = float(0)

text = get_string("Text: ")

for i in text:

    if i.isalpha():
        letters += 1

    elif i == (" "):
        words += 1

    elif i == "." or i == "!" or i == "?":
        sentence += 1

l = float((letters/words)*100)
s = float((sentence/words)*100)

index = int(round((0.0588 * l) - (0.296 * s) - 15.8))

if index < 1:
    print("Before Grade 1\n")

elif index >= 16:
    print("Grade 16+\n")

else:
    print("Grade", round(index))