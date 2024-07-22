def vowelorconsonant(x):
    if(x=='a' or x=='i' or x=='e' or x=='o' or x=='u'):
        print("vowel")
    else:
        print("consonant")

vowelorconsonant('c')
vowelorconsonant('e')


def isVowel(ch):
	switcher = {
		'a': "Vowel",
		'e': "Vowel",
		'i': "Vowel",
		'o': "Vowel",
		'u': "Vowel",
		'A': "Vowel",
		'E': "Vowel",
		'I': "Vowel",
		'O': "Vowel",
		'U': "Vowel"
	}
	return switcher.get(ch, "Consonant")

# Driver Code
print('a is '+isVowel('a'))
print('x is '+isVowel('x'))
