from cs50 import get_string

letters = float(0)
words = float(1)
sentence = float(0)

text = get_string("Text: ")

for i in text:

    if i.isalpha():
        letters += 1
        print("let", letters)

    elif i == (" "):
        words += 1
        print("words", words)

    elif i == "." or i == "!" or i == "?":
        sentence += 1
        print("sen", sentence)