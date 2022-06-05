# Rubyがミニツク・Ruby入門コース
# 10章

class Apple
  attr_accessor :color, :price
  def initialize(color="red", price=150)
    @color = color
    @price = price
  end
  def talking
    puts("りんごです")
  end
end
apple = Apple.new
apple.talking