import cv2
image=cv2.imread(r"C:\Users\suyash  gandhi\Desktop\task.jpg")
gray=cv2.cvtColor(image,cv2.COLOR_BGR2GRAY)
hsv=cv2.cvtColor(image,cv2.COLOR_BGR2HSV)
resize=cv2.resize(image,(100,100))
print("shape of old image")
print(image.shape)
print("size of old image")
print(image.size)
print("shape of resized image")
print(resize.shape)
print("size of resized image")
print(resize.size)

ret,binary=cv2.threshold(image,150,255,cv2.THRESH_BINARY)
ret,otsu=cv2.threshold(gray,150,255,cv2.THRESH_OTSU)
ret,binary_inv=cv2.threshold(image,150,255,cv2.THRESH_BINARY_INV)
ret,trunc=cv2.threshold(image,150,255,cv2.THRESH_TRUNC)
gaus=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_GAUSSIAN_C,cv2.THRESH_BINARY,115,1)
mean=cv2.adaptiveThreshold(gray,255,cv2.ADAPTIVE_THRESH_MEAN_C,cv2.THRESH_BINARY,115,1)




cv2.imshow("Original",image)
cv2.imshow("Resized",resize)
cv2.imshow("Gray",gray)
cv2.imshow("Hsv",hsv)
cv2.imshow("Binary",binary)
cv2.imshow("Otsu",otsu)
cv2.imshow("Binary_inverse",binary_inv)
cv2.imshow("Trunc",trunc)
cv2.imshow("adap_gaus",gaus)
cv2.imshow("adap_mean",mean)

cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\gray.jpg",gray)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\hsv.jpg",hsv)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\binary.jpg",binary)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\otsu.jpg",otsu)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\binary_inv.jpg",binary_inv)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\trunc.jpg",trunc)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\adap_gaus.jpg",gaus)
cv2.imwrite(r"C:\Users\suyash  gandhi\Desktop\adap_mean.jpg",mean)

cv2.waitKey(0)
cv2.destroyAllWindows()

