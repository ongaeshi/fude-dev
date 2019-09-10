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

class Color
  def inspect
    "r: #{r}, g: #{g}, b: #{b}, a: #{a}"
  end
end

class Vector2
  def self.new_a(a)
    v = Vector2.new
	v.x, v.y = a
	v
  end
end

class Color
  def self.new_a(a)
    v = Color.new
	v.r, v.g, v.b, v.a = a
	v
  end
end

def draw_line_bezier2(start_pos, end_pos, thick, color)
  draw_line_bezier(Vector2.new_a(start_pos), Vector2.new_a(end_pos), thick, Color.new_a(color))
end

def draw_circle_sector2(center, radius, start_angle, end_angle, segments, color)
  draw_circle_sector(Vector2.new_a(center), radius, start_angle, end_angle, segments, color)
end

p get_color 0x111
# p get_color 0xffffffff

window(800, 450, "Hello, raylib on mruby!") do
  set_target_fps(60)

  x, y, font_size = 190, 200, 20

  while !window_should_close do
    x -= 1 if is_mouse_button_down(0)
	x += 1 if is_mouse_button_down(1)
	open_url("https://github.com/raysan5/raylib") if is_mouse_button_pressed(2)

	font_size += get_mouse_wheel_move

	v = get_mouse_position

    draw do
	  clear_background(RAYWHITE)

	  (0..100).each do |e|
  	    draw_pixel(e * 10, 100, LIGHTGRAY)
  	    draw_line(e * 10, 110, e * 10 + 5, 110, LIGHTGRAY)
  	    draw_line_bezier2([e * 10, 120], [e * 10 + 30, 150], 1, [200, 200, 200, 255])
  	    draw_circle(e * 10, 160, 4, LIGHTGRAY)
  	    draw_circle_sector2([e * 10, 170], 4, 0, e * 4, 10, LIGHTGRAY)
  	    draw_rectangle(e * 10 - 4, 180, 8, 8, LIGHTGRAY)
	  end
	  draw_text("FPS: #{get_fps}", 0, 0, font_size, LIGHTGRAY)
	  draw_text("Congrats! You created your first window!\n(x: #{x}, y: #{y}, font_size: #{font_size})", x, y, font_size, LIGHTGRAY)
	  draw_text("Mouse #{v.x}, #{v.y}", x, y +100, font_size, LIGHTGRAY)
	end
  end
end
