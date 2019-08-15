# module Raylib
#   RAYWHITE  = Color.new 245, 245, 245, 255
#   LIGHTGRAY = Color.new 200, 200, 200, 255
# end

include Raylib

def window(x, y, title)
  init_window(x, y, title)
  yield
  close_window
end
