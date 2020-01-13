require "./raylib"

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
  def self.init(x, y)
    o = Vector2.new
    o.x = x
    o.y = y
    o
  end

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

class Vector3
  def self.init(x, y, z)
    v = Vector3.new
    v.x = x
    v.y = y
    v.z = z
    v
  end
end

class Camera3D
  def self.init(position, target, up, fovy, type)
    o = Camera3D.new
    o.position = position
    o.target = target
    o.up = up
    o.fovy = fovy
    o.type = type
    o
  end
end

p get_color 0x111
# p get_color 0xffffffff

get_directory_files(".").each do |e|
  p e
end

window(800, 450, "Hello, raylib on mruby!") do
  set_target_fps(60)

  x, y, font_size = 190, 200, 20

  texture = load_texture("ruby-logo.png")

	pixels = []
	(0..255).each do |x|
		(0..255).each do |y|
			pixels.push(make_color(x, y, 64, 255))
		end
	end
	image = load_image_ex(pixels, 256, 256)
	generated_texture = load_texture_from_image(image)
	unload_image(image)

  until window_should_close
    if is_file_dropped
      dropped = get_dropped_files

      dropped.each do |e|
        p e
      end

      clear_dropped_files
    end

    x -= 1 if is_mouse_button_down(0)
    x += 1 if is_mouse_button_down(1)
    open_url("https://github.com/raysan5/raylib") if is_mouse_button_pressed(2)

    font_size += get_mouse_wheel_move

    v = get_mouse_position

    draw do
      clear_background(RAYWHITE)

      draw_texture(texture, 0, 300, WHITE)
      draw_texture_ex(texture, Vector2.new_a([0, 100]), 0, 0.5, WHITE)
			draw_texture(generated_texture, 200, 100, WHITE)

      (0..100).each do |e|
        draw_pixel(e * 10, 100, LIGHTGRAY)
        draw_line(e * 10, 110, e * 10 + 5, 110, LIGHTGRAY)
        draw_line_bezier2([e * 10, 120], [e * 10 + 30, 150], 1, [200, 200, 200, 255])
        draw_circle(e * 10, 160, 4, LIGHTGRAY)
        draw_circle_sector2([e * 10, 170], 4, 0, e * 4, 10, LIGHTGRAY)
        draw_rectangle(e * 10 - 4, 180, 8, 8, LIGHTGRAY)
      end

      draw_line_strip([Vector2.init(100, 100), Vector2.init(200, 100), Vector2.init(300, 200), Vector2.init(100, 150), Vector2.init(50, 200), Vector2.init(100, 100)], LIGHTGRAY)

      draw_text("FPS: #{get_fps}", 0, 0, font_size, LIGHTGRAY)
      draw_text("Congrats! You created your first window!\n(x: #{x}, y: #{y}, font_size: #{font_size})", x, y, font_size, LIGHTGRAY)
      draw_text("Mouse #{v.x}, #{v.y}", x, y + 100, font_size, LIGHTGRAY)

      cx = (190 - x) * 0.05
      camera = Camera3D.init(
        Vector3.init(cx, 30 - font_size, 30 - font_size), # position
        Vector3.init(cx, 0, 0),   # target
        Vector3.init(0, 1, 0),   # up
        45,                      # fovy
        0,                       # type(CAMERA_PERSPECTIVE)
      )

      mode3d(camera) do
        pos = Vector3.new
        pos.x, pos.y, pos.z = 0, 0, 0

        draw_cube(pos, 2, 2, 2, RED)

        draw_cube_wires(pos, 2, 2, 2, MAROON)

        pos.x, pos.y, pos.z = 4, 4, 4
        draw_cube_texture(texture, pos, 2, 2, 2, WHITE)

        draw_grid(10, 1)
      end

      draw_text("Welcome to the third dimension!", 10, 40, 20, DARKGRAY)
      draw_fps(10, 10)
    end
  end

  unload_texture(texture)
end
