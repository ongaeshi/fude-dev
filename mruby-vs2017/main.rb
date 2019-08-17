require './raylib'

c = Color.new 1, 2, 3, 4

v = Vector2.new
p v
v.x = 1.5
v.y = 2.1
p v.x, v.y

p Vector3.new
p Camera.new
p 1, 2, 3

window(800, 450, "Hello, raylib on mruby!") do
  # set_target_fps(60)

  while !window_should_close do
    # draw do
	#   clear_background(RAYWHITE)
	#   draw_text("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY)
	# end
  end
end
