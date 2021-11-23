# Code to detect a cycle in the resource allocation graph
def traverse(node, visited):
    if node in visited:
        CYCLE!!
    else:
        visited.append(node)
        for outgoing_edge in node:
            if outgoing_edge.unmarked:
                outgoing_edge.mark
                traverse(outgoing_edge.to, visited)

def detect(graph):
    for node in graph:
        traverse(node)
    NO CYCLE!!
