
def factorial(n) -> int:
        if n == 0:
                return 1;
        return (n * factorial(n - 1));

def factorial_for(n) -> int:
        if n == 0:
                return 1;
        factorial = n;
        for i in range(1, n):
                factorial = factorial * i;
        return factorial;


if __name__ == '__main__':
        
        value = int(input('Write a number for calcute factorial: '));

        if type(value) == int:
            print(f"Recursive {factorial(value)}");
            print(f"For {factorial_for(value)}");   
        else:
            print("This is not a number");