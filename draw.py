import turtle

my_turtle = turtle.Turtle()
my_screen = turtle.Screen()


def draw(my_turtle, length):
    if length > 0:
        my_turtle.forward(length)
        my_turtle.left(90)
        draw(my_turtle, length - 10)


draw(my_turtle, 100)
my_screen.exitonclick()
