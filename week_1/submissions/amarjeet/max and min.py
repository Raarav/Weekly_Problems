def max(value):
    value.sort()
    value.pop(0)
    print(value)
    return "the max sum is {}".format(sum(value))
def min(value):
    value.sort()
    value.pop(4)
    print(value)
    return "yne min sum is {}",format(sum(value))
