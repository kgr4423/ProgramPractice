# Rubyがミニツク・Ruby入門コース
# 5章

num = 1
until num > 5
  puts("#{num}回目の繰り返し")
  num += 1
end

puts "\n"

["Ruby", "HTML", "JavaScript", "Rails"].each do |output|
  p output.downcase
  p output
end

puts "\n"

sum = 0
10.times { sum += 1  }
p sum

puts "\n"

ary = [1, 2, 3]
for i in ary
  p i
end