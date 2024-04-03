from collections import defaultdict

def insert(trie, food_chain):
    current_node = trie
    for food in food_chain:
        if food not in current_node:
            current_node[food] = {}
        current_node = current_node[food]

def dfs(trie, depth):
    for food in sorted(trie):
        print("--" * depth + food)
        dfs(trie[food], depth + 1)

def main():
    N = int(input())
    trie = {}
    for _ in range(N):
        food_chain = input().split()[1:] 
        insert(trie, food_chain)
    
    dfs(trie, 0)

if __name__ == "__main__":
    main()
