def convert(data_list, base=16, size=16):
    for hex_part in data_list:
        hex_part = str(hex_part)
        print(bin(int(hex_part, base))[2:].zfill(size))


data: str = input()
data.split(":")
convert(data)
