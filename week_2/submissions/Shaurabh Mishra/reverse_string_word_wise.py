str1 = input("Enter the string : ")
str2 = ".".join(str1.split('.')[::-1])
print(str2)