# Rubyがミニツク・Ruby入門コース
# 9章

# module Foo
#   def foo
#     puts("module foo")
#   end
# end

module Greeting
  def hello
    puts("Hello, Ruby!")
  end
end
class Foo
  include Greeting
end
class Bar
  include Greeting
end
Foo.hello  #=> Hello, Ruby!
Bar.hello  #=> Hello, Ruby!

