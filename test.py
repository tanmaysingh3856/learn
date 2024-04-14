class solution:
    def restoreIpAddresses(s):
    if len(s) < 4 or len(s) > 12:
        return []
    result = []
    for i in range(1, min(4, len(s))):
        for j in range(i+1, min(i+4, len(s))):
            for k in range(j+1, min(j+4, len(s))):
                part1, part2, part3, part4 = s[:i], s[i:j], s[j:k], s[k:]
                if all(map(lambda x: x == "0" or not x.startswith("0") and 0 <= int(x) <= 255, (part1, part2, part3, part4))):
                    result.append(f"{part1}.{part2}.{part3}.{part4}")
    return result