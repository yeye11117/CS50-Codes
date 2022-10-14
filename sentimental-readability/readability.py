from cs50 import get_string

letters = float(0)
words = float(1)
sentence = float(0)

text = get_string("Text: ")

for i in range(len(text)):

    if text.isalnum():
        letters += 1
        print("let", letters)

    elif text == (" "):
        words += 1
        print("words", words)

    elif text == "." or "!" or "?":
        sentence += 1
        print("sen", sentence)