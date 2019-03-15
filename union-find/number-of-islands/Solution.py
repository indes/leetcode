import collections


class Solution(object):
    def __init__(self, *args, **kwargs):
        self.parent = []

    def numIslands(self, grid):
        """
        :type grid: List[List[str]]
        :rtype: int
        """
        count = 0
        self.parent = [
            [[-1, -1] for n in range(len(grid[0]))] for n in range(len(grid))]

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if(int(grid[i][j]) != 0):
                    count = count+1
                    merged = False
                    if(i-1 >= 0):
                        if(int(grid[i-1][j]) == 1 and not self.in_a_set(i, j, i-1, j)):
                            self.union_set(i, j, i-1, j)
                            if(not merged):
                                count = count - 1

                    if(j-1 >= 0):
                        if(int(grid[i][j-1]) == 1 and not self.in_a_set(i, j, i, j-1)):
                            self.union_set(i, j, i, j-1)
                            if(not merged):
                                count = count - 1
        return count

    def get_root(self, x, y):
        while(self.parent[x][y] != [-1, -1]):
            x, y = self.parent[x][y][0], self.parent[x][y][1]
        return x, y

    def in_a_set(self, x1, y1, x2, y2):
        return self.get_root(x1, y1) == self.get_root(x2, y2)

    def union_set(self, x1, y1, x2, y2):
        root_x_1, root_y_1 = self.get_root(x1, y1)
        root_x_2, root_y_2 = self.get_root(x2, y2)
        self.parent[root_x_1][root_y_1] = [root_x_2, root_y_2]


if __name__ == "__main__":
    s = Solution()
    g = [
        "11000",
        "10000",
        "00100",
        "00001"
    ]
    a = s.numIslands(g)
    print(a)
