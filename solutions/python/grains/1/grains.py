def square(number):
    if number > 64 or number < 1:
        raise ValueError("square must be between 1 and 64")

    CurrentGrains = (2 ** (number - 1))
    return CurrentGrains 


def total():
    CurrentGrains = (2 ** 64) - 1 
    return CurrentGrains 
