include Raylib

module Raylib
  def make_color(r, g, b, a)
    c = Color.new

	c.r = r
	c.g = g
	c.b = b
	c.a = a

	c
  end

  RAYWHITE  = make_color 245, 245, 245, 255
  LIGHTGRAY = make_color 200, 200, 200, 255

  def window(x, y, title)
    init_window(x, y, title)
    yield
    close_window
  end

  def draw
    begin_drawing
	yield
	end_drawing
  end
end

