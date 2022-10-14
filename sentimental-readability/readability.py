from cs50 import get_string

letters = float(0)
words = float(1)
sentence = float(0)

text = get_string("Text: ")

for i in range(len(text)):

    if text.isnumeric():
        letters += 1
        print(letters)

    elif text == (" "):
        words += 1
        print(words)

    elif text == "." or "!" or "?":
        sentence += 1
        print(sentence)