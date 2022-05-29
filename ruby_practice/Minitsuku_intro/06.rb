# Rubyがミニツク・Ruby入門コース
# 6章

def show
  puts "Enjoy!"
end
show { puts "Programming!" }

def show
  puts "Enjoy"
  yield
end
show { puts "Programming" }

def double
  yield
  yield
end
double { puts "Two" }

def foo 
  yield "Hello!"
end
foo {|x| puts x}

def foo
  yield "Hello !", "Enjoy!", 42 + 23
end
foo {|x, y, z| puts x, y, z}

def hello
  puts("Hello!")
end
alias original_hello hello
def hello
  puts("Hello!")
  original_hello
  puts("World!")
end
hello