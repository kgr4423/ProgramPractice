def test_duck(it):
    it.sound()
    it.walk()

class Duck:
    def sound(self):
        print("ガァガァ")
    def walk(self):
        print("アヒルが歩く")

class Dog:
    def sound(self):
        print("ワンワン")
    def walk(self):
        print("犬が歩く")

class Cat:
    def sound(self):
        print("にゃー")
    def walk(self):
        print("猫が歩く")

ahiru = Duck()
test_duck(ahiru)

inu = Dog()
test_duck(inu)

neko = Cat()
test_duck(neko)
