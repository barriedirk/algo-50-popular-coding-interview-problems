# source: https://www.youtube.com/watch?v=nbg1YiL-dv8

def maximum_sum(stacks):
    if len(stacks) == 0:
        return 0
    reachable = [{0} for i in range(len(stacks))]
    for i in range(len(stacks)):
        cumulative_sum = 0
        for num in stacks[i]:
            cumulative_sum += num
            reachable[i].add(cumulative_sum)
    intersection = set.intersection(*reachable)
    return max(intersection)
