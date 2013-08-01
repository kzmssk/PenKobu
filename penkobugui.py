from Tkinter import *

class PenKobuGui(Frame):
	cX=0
	cY=0
	cP=0
	tmpX=0
	tmpY=0
	onPaint=False
	onPaintTmp=False
	
	def __init__(self, width=500, height=600, master=None):
		Frame.__init__(self, master)
#		self.pack()
#		self.cX=0
#		self.cY=0
#		self.cP=0
		
		print "create canvas"
		#paint area
		self.c0=Canvas(self, width='500', height='600')
		self.c0.grid(row=0, column=0, rowspan=4)
		
				
		self.id=self.c0.create_oval(10,10,15,15, fill="#000000")

		
		#run button
		self.run_button=Button(self, text='RUN', command=self.on_run_button)
		self.run_button.grid(row=0, column=1)
		
		#clear button
		self.clear_button=Button(self, text='CLEAR', command=self.on_clear_button)
		self.clear_button.grid(row=1, column=1)
		
		#label
		self.la_x=Label(self, text="position X", bd=2)
		self.la_x.grid(row=2, column=1)
		
		self.la_y=Label(self, text="position Y", bd=2)
		self.la_y.grid(row=3, column=1)
		
		self.grid()
				
	def set_pos(self, x, y, p):
	#update func
#		print "set_pos"
		self.cX = x
		self.cY = y
		self.cP = p
		if  self.cP>0:
			if self.onPaintTmp==False:
				self.startPaint()
				self.onPaint=True
				self.onPaintTmp=True
			self.onPaint=True
		else:
			self.onPaint=False
			if self.onPaintTmp==True:
				self.endPaint()
		self.delete()
		self.draw()
		if self.onPaint==True:
			self.draw_line()
		self.draw_line_test()
		
#		self.point_list.append(x, y, p)
#		self.c0.delete(self.line_id)
	def draw_line_test(self):
		self.line_id=self.c0.create_line(self.tmpX, self.tmpY, self.cX, self.cY)
		self.tmpX=self.cX
		self.tmpY=self.cY
	def on_run_button(self):
		print 'pressed run button'
		#self.svc_port. ****
		
	def on_clear_button(self):
		print 'pressed clear button'
	def delete(self):
		self.c0.delete(self.id)
		
	def draw(self):
		#draw carsor
		self.id=self.c0.create_oval(self.cX, self.cY, self.cX+self.cP/10+10, self.cY+self.cP/10+10)
		#draw positionx, positiony
		self.la_x.configure(text="position x: %d" % self.cX)
		self.la_y.configure(text="position y: %d" % self.cY)
		
	def endPaint(self):
		print "offPaint"

	def startPaint(self):
		print "startPaint"
		self.tmpX=self.cX
		self.tmpY=self.cY
		
	def draw_line(self):
		print "draw_line"
		self.line_id=self.c0.create_line(self.tmpX, self.tmpY, self.cX, self.cY, width=2)
		self.tmpX=self.cX
		self.tmpY=self.cY

	def get_on_update(self, pos):
		print "get_on_update"
		self.cX=pos[0]
		self.cY=pos[1]
		self.cP=pos[2]
		self.self_update()
		
	def set_comp(self, comp):
		print "set_comp"
#		self.svcPort = comp.get_service_port()