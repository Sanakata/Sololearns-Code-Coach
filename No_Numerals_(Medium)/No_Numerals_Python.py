# Title: No Numeral
# Difficulty: Medium

num_to_word = {
        1: "one",
        2: "two",
        3: "three",
        4: "four",
        5: "five",
        6: "six",
        7: "seven",
        8: "eight",
        9: "nine",
        10: "ten",
}

sentence = input().split()
new_sentence = [
        num_to_word[int(word)] if word.isdigit() and int(word) in num_to_word else word for word in sentence
]
print(" ".join(new_sentence))
