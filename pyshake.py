import Serial
while 1:
cereal = serial.Serial('yourport',9600,timeout=1)
cereal.write("mystring")