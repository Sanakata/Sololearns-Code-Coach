# Title: YouTube Link Finder
# Difficulty: Medium

link = input()
print(link[17:] if link[0:17] == "https://youtu.be/" else link[32:])
