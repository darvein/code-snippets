class Human:
    def __init__(self, gender):
        self.gender = gender

    def what(self):
        return "I'm a {} human being!".format(self.gender)

    def say_hi(self):
        raise NotImplementedError("Oh-oh I don't know that dude...")

class SuperPerson(Human):
    name = "Superman"

    def say_hi(self):
        return "Hello, how do you do?"


class Person(Human):
    name = "Milei"
    age = 65

    def __init__(self, name, age, gender):
        super().__init__(gender)
        self.name = name
        self.age = age

    def say_hi(self):
        return "wazzup..."

    def do_something(self):
        """
        This is a dumb function
        """
        return "Soy el nuevo presidente {}, Viva la libertad caraj0!!!".format(self.name)

    def whois(self):
        """
        This returns the object props and values
        ...cheers :dog:
        """
        return "I'm {} and I'm {} years old.\n{}".format(self.name, self.age, super().what())


a = Person("Milei", 65, 'man')
b = SuperPerson('man')
c = Human('man')

print(a.say_hi())
print(b.say_hi())
print(c.say_hi())
