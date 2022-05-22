# Rubyがミニツク・Ruby入門コース
# 2章

p 10 + 2  #=> 12
p 10 - 2  #=> 8
p 10 * 2  #=> 20
p 10 / 2  #=> 5

puts "\n"

p 2 + 4 * 2    #=> 10
p (2 + 6) * 2  #=> 16
p 2 + 4 / 2    #=> 4
p (2 + 4) / 2  #=> 3

puts "\n"

greeting = "Hello, Ruby!"
print("greeting Hello, Ruby!\n")     #=> greeting Hello, Ruby!
print("#{greeting} Hello, Ruby!\n")  #=> Hello, Ruby! Hello, Ruby!

puts "\n"

flag = true
if flag == true then
    p "true"
end

puts "\n"

val = 23
if val == 50 then
  puts ("同じ")
elsif val < 20 then
  puts("２０より小さい")
elsif val < 30 then
  puts("３０より小さい")
else
  puts("それ以外")
end

puts "\n"

val = 1
while val < 5 do
  p val
  val += 1
end

puts "\n"

def greet
  puts("Hello, Ruby")
end

greet

puts "\n"

def example(arg1, arg2)
  arg1 + arg2
end

p(example(100, 100))

puts "\n"

i = 1
sum = 0
while i <=100
  sum += i
  i += 1;
end
p sum


