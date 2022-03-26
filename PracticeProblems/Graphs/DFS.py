def dfs(Adj, s , parent=None, order = None):
    if parent is None:
        parent = [None for v in Adj]
        parent[s] = s
        order = []
    for v in Adj[s]:
        if parent[v] is None:
            parent[v] = s
            dfs(Adj , v , parent , order)
    order.append(s)
    return parent , order

Adj = {
    0:set([2]),
    2:set([0,3,4]),
    3:set([2,1]),
    4:set([2]),
    1:set([3])
}


parent , order = dfs(Adj ,2 , None , None)
print(parent)
print(order)