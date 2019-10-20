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

  WHITE     = make_color 255, 255, 255, 255
  RAYWHITE  = make_color 245, 245, 245, 255
  LIGHTGRAY = make_color 200, 200, 200, 255
  DARKGRAY  = make_color 80, 80, 80, 255
  RED       = make_color 230, 41, 55, 255
  MAROON    = make_color 190, 33, 55, 255

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

  def mode3d(camera)
    begin_mode3d(camera)
	  yield
	end_mode3d
  end
end

