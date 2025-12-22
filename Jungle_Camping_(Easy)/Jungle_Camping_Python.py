# Title: Jungle Camping
# Difficulty: Easy

sound_to_animal = {
        "Grr": "Lion",
        "Rawr": "Tiger",
        "Ssss": "Snake",
        "Chirp": "Bird"
}
sounds = input().split()
animals = [sound_to_animal[sound] for sound in sounds]
print(*animals)
