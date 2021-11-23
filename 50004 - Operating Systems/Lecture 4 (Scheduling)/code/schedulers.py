from typing import List, Tuple

def fcfs(ps : List[Tuple[str,int]]):
    time = 0
    turnaround = 0
    for (p, t) in ps:
        time += t
        turnaround += t
        print("{} completed after {}".format(p, time))
    print("Avg turnaround: {}\nThroughput: {}", float(turnaround) / len(ps), float(time) / len(ps))

def rr(ps : List[Tuple[str,int]]):
    turnaround = 0
    ps = sorted(ps, key=lambda pt : pt[1])
    n = len(ps)
    lastt = ps[0][1]
    time = lastt * n
    print("{} completed after {}".format(ps[0][0], time))
    for (p, t) in ps[1:]:
        n -= 1
        time += (t - lastt) * n
        turnaround += time
        print("{} completed after {}".format(p, time))
        lastt = t
    print("Avg turnaround: {}\nThroughput: {}", float(turnaround) / len(ps), float(time) / len(ps))