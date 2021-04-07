found = False
array = []
for i in range(99999):
    # noinspection PyRedeclaration
    found = False
    if i % 13 == 0 and i % 17 == 0 and i % 19 == 0 and i % 2 != 0:
        found = True
        array.append(i)
print(len(array))
print(max(array))
array = str(array)
output_file = open('output.txt', 'w')
output_file.write(array)
