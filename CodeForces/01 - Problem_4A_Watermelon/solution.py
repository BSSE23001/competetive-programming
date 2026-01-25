import sys

def main():
    line = sys.stdin.readline()
    if not line:
        return
    
    num = int(line.strip())
    if(num&1) or num <=2:
        print("NO")
    else:
        print("YES")

if __name__ == "__main__":
    main()