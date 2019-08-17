include Raylib

# module Raylib
#   RAYWHITE  = Color.new 245, 245, 245, 255
#   LIGHTGRAY = Color.new 200, 200, 200, 255
# end

module Raylib
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

