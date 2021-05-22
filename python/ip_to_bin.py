def convert(data_list, base, size=16):
    for hex_part in data_list:
        hex_part = str(hex_part)
        print(bin(int(hex_part, base))[2:].zfill(size))


data: str = input()
if "." in data:
    box = data.split(".")
    convert(box, 10)
if ":" in data:
    box = data.split(":")
    convert(box, 16)
