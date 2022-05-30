# Rubyがミニツク・Ruby入門コース
# 7章

ary = Array.new
p ary
str = String.new
p str 
p str.class

class HelloRuby
  def hello 
    puts("Hello, Ruby!")
  end
end
greeting = HelloRuby.new
greeting.hello

class Person
  def initialize(name="Bob")
    @name = name
  end
  def name
    puts(@name)
  end
end
bob = Person.new
bob.name
john = Person.new("John")
john.name

class Foo
  def initialize(arg)
    @foo = arg
  end
  def foo
    puts @foo
  end
  def bar
    puts @foo
  end
end
foo = Foo.new("foo")
foo.foo
foo.bar
bar = Foo.new("bar")
bar.foo
foo.bar
foo.foo

class Person
  def name
    return @name
  end
  def name=(value)
    @name = value
  end
end
john = Person.new
john.name = "John"
p john.name  #=> John
bob = Person.new
bob.name = "Bob"
p bob.name   #=> Bob

class HelloRuby
  def HelloRuby.greeting
    puts("Hello! Ruby!")
  end
end
HelloRuby.greeting  #=> Hello! Ruby!
