class DSU:
    def __init__(self, n):
        # Initialize parent to itself and rank to 0
        self.parent = list(range(n))
        self.rank = * n

    def find(self, x):
        if self.parent[x] == x:
            return x
        # Path compression
        self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, x, y):
        x_parent = self.find(x)
        y_parent = self.find(y)

        if x_parent == y_parent:
            return

        # Union by rank
        if self.rank[x_parent] > self.rank[y_parent]:
            self.parent[y_parent] = x_parent
        elif self.rank[x_parent] < self.rank[y_parent]:
            self.parent[x_parent] = y_parent
        else:
            self.parent[y_parent] = x_parent
            self.rank[x_parent] += 1