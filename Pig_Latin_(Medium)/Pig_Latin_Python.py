# Title: Pig Latin
# Difficulty: Medium

sentence = input().split(" ")
pig_words = []
for word in sentence:
    pig_word = word[1:] + word[0] + "ay "
    pig_words.append(pig_word)
print("".join(pig_words))
