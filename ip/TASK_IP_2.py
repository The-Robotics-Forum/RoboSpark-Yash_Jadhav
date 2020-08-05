import cv2
import numpy as np
image=cv2.imread(r"C:\Users\suyash  gandhi\Desktop\daisy_flower.jpg")
flower=cv2.resize(image,(512,512))
dst=cv2.imread(r"C:\Users\suyash  gandhi\Desktop\gaus.jpg")
bgrl=np.array([90,0,120],np.uint8)
bgrh=np.array([215,255,255],np.uint8)
daisy=cv2.resize(image,(480,500))

mask=cv2.inRange(flower,bgrl,bgrh)

kernel=np.array(([1,2,3],[4,5,6],[7,8,9]),np.uint8)
filter2d=cv2.filter2D(mask,-1,kernel)
Average=cv2.blur(mask,(5,5))
median=cv2.medianBlur(mask,5)
gaus=cv2.GaussianBlur(mask,(5,5),10)
bilateral=cv2.bilateralFilter(mask,5,111,111)
image=cv2.rectangle(daisy,(5,340),(160,510),(0,0,0),-1)
image=cv2.putText(daisy,"Daisy",(0,450),cv2.FONT_HERSHEY_DUPLEX,2,(255,255,255),1,cv2.LINE_AA)
cv2.imshow("Flower_POT",daisy)
cv2.imshow("Original",image)
cv2.imshow("Masked",mask)
cv2.imshow("Average",Average)
cv2.imshow("Filter-2d",filter2d)
cv2.imshow("Median",median)
cv2.imshow("Gausian",gaus)
cv2.imshow("Bilateral",bilateral)



Average=cv2.rectangle(Average,(384,0),(510,128),(0,0,255),-1) #topleft and bottom left
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\Average.jpg",Average)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\filter2d.jpg",filter2d)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\Median.jpg",median)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\Gausian.jpg",gaus)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\Bilateral.jpg",bilateral)

cv2.waitKey(0)
cv2.destroyAllWindows()