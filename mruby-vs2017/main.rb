require './raylib'

c = make_color 128, 128, 128, 255

v = Vector2.new
p v
v.x = 1.5
v.y = 2.1
p v.x, v.y

p c
p Vector3.new
# p Camera.new
p 1, 2, 3

window(800, 450, "Hello, raylib on mruby!") do
  set_target_fps(60)

  x, y, font_size = 190, 200, 20

  while !window_should_close do
    x -= 1 if is_mouse_button_down(0)
	x += 1 if is_mouse_button_down(1)
	open_url("https://github.com/raysan5/raylib") if is_mouse_button_pressed(2)

	font_size += get_mouse_wheel_move

    draw do
	  clear_background(RAYWHITE)
	  draw_text("Congrats! You created your first window!\n(x: #{x}, y: #{y}, font_size: #{font_size})", x, y, font_size, LIGHTGRAY)
	end
  end
end
