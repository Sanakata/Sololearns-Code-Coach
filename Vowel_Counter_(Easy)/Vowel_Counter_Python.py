# Title: Vowel Counter
# Difficulty: Easy

sentence = input()
vowels = {'a', 'i', 'u', 'e', 'o'}
print(sum(1 for c in sentence if c.lower() in vowels))
