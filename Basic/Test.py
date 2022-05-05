a = input("Enter first string :")
b = input("Enter second string :")
a = sorted(a)
b = sorted(b)
if (len(a) != len(b)):
    print("Not anagram")
else:
    if a != b:
        print("not anagram")
    else:
        print("Anagram")
