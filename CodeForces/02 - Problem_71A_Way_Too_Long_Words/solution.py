import sys

def main():
    line = sys.stdin.readline()
    if not line:
        return
    
    try:
        n = int(line.strip())
    except ValueError:
        return

    for _ in range(n):
        word = sys.stdin.readline().strip()
        if not word:
            break
            
        length = len(word)
        if length > 10:
            print(f"{word[0]}{length - 2}{word[-1]}")
        else:
            print(word)

if __name__ == "__main__":
    main()