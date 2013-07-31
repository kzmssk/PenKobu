from Tkinter import *

class PenKobuGui(Frame):
	cX=0
	cY=0
	cP=0
	def __init__(self, width=500, height=600, master=None):
		Frame.__init__(self, master)
		self.pack()
		self.cX=0
		self.cY=0
		self.cP=0
		print "create canvas"
		self.c0=Canvas(self, width='500', height='600')
		#self.id=self.c0.create_oval(10,10,15,15, fill="#000000")
		self.c0.pack()
		
	def set_pos(self, x, y, p):
		self.cX = x
		self.cY = y
		self.cP = p
		
		self.delete()
		self.draw()
		
#		self.point_list.append(x, y, p)
#		self.c0.delete(self.line_id)

	def delete(self):
		self.c0.delete(self.id)
		
	def draw(self):
		self.c0.create_oval(cX, cY, cX+20, cY+20)

	def get_on_update(self, pos):
		print "get_on_update"
		self.cX=pos[0]
		self.cY=pos[1]
		self.cP=pos[2]
		self.self_update()

	def self_update(self):
		print "self update"
		#self.c0.delete(self.id)
		print "create oval"
		print self.cX, self.cY, self.cX+150, self.cY+150
		#self.id=self.c0.create_oval(self.cX, self.cY, self.cX+150, self.cY+150, fill="#000000")
		print "oval created"