import sys


def extract_vietnamese_characters(file_path):
  characters = set()

  with open(file_path, mode='r', encoding='utf-8') as file:
    for line in file:
      for char in line:
        # The base Latin font already contains characters through U+017F.
        if ord(char) > 0x017F:
          characters.add(char)

  return characters


file_path = sys.argv[1]
characters = extract_vietnamese_characters(file_path)
print(','.join(hex(ord(char)) for char in sorted(characters, key=ord)))
