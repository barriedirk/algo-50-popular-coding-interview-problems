# source: https://www.youtube.com/watch?v=vjrSYpeFXeQ
# restore_ip_addresses.py
def rec(s, i, address, addresses):
    if len(address) == 4:
        if i == len(s):
            addresses.append('.'.join(address))
    else:
        for j in range(i+1, i+4):
            next_int = s[i:j]
            if j <= len(s) and 0 <= int(next_int) <= 255 and (next_int == '0' or not next_int.startswith('0')):
                address.append(next_int)
                rec(s, j, address, addresses)
                address.pop()

def restore_addresses(s):
    address = []
    addresses = []
    rec(s, 0, address, addresses)
    return addresses

# example input s="101023"
# output: ["1.0.10.23", "1.0.102.3", "10.1.0.2.3", "10.10.2.3", "101.0.2.3"]