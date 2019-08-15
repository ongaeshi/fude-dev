include Raylib

v = Vector2.new
p v
v.x = 1.5
v.y = 2.1
p v.x, v.y

p Vector3.new
p Camera.new
p 1, 2, 3

init_window(800, 450, "Hello, mruby raylib!")

while !window_should_close do
end

close_window