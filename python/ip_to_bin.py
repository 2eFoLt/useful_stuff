def ip_convert(data_list, base, size=16):
    for hex_part in data_list:
        hex_part = str(hex_part)
        print(bin(int(hex_part, base))[2:].zfill(size))


def bin_convert(data_list, base):
    if base == 16:
        for hex_part in data_list:
            print(hex(int("0b" + hex_part, 2))[2:])
    if base == 10:
        for dec_part in data_list:
            print(int(dec_part, 2))


while True:
    print("1. Ip to Bin")
    print("2. Bin to Ip")
    print("3. Quit")
    cmd = input("Select: ")
    if cmd == "1":
        data: str = input()
        if "." in data:
            box = data.split(".")
            ip_convert(box, 10, 8)
        if ":" in data:
            box = data.split(":")
            ip_convert(box, 16)
    elif cmd == "2":
        data: str = input()
        box = data.split(" ")
        inp = input("Base: ")
        inp = int(inp)
        bin_convert(box, inp)
    elif cmd == "3":
        break
