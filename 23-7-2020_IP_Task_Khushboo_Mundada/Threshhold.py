import cv2
import numpy as np

original_image = cv2.imread("text.jpg")
image = cv2.resize(original_image, (400, 400))
gray = cv2.cvtColor(image , cv2.COLOR_BGR2GRAY)
hsv = cv2.cvtColor(image, cv2.COLOR_BGR2HSV)

print("Original Image Shape", original_image.shape)
print("Resize Image Shape", image.shape)
print("Original Image Size", original_image.size)
print("Resize Image Size", image.size)

ret, Bin = cv2.threshold(gray, 150, 255, cv2.THRESH_BINARY)
ret, InBin = cv2.threshold(gray, 150, 255, cv2.THRESH_BINARY_INV)
mean = cv2.adaptiveThreshold(gray, 255, cv2.ADAPTIVE_THRESH_GAUSSIAN_C, cv2.THRESH_BINARY, 5, 2)
gaussian = cv2.adaptiveThreshold(gray, 255, cv2.ADAPTIVE_THRESH_MEAN_C, cv2.THRESH_BINARY_INV, 5, 2)


cv2.imwrite("E:\Saved\gray.jpg", gray)
cv2.imwrite("E:\Saved\hsv.jpg", hsv)
cv2.imwrite("E:\Saved\h_Binary.jpg", Bin)
cv2.imwrite("E:\Saved\h_Inbin.jpg", InBin)
cv2.imwrite("E:\Saved\h_Mean.jpg", mean)
cv2.imwrite("E:\Saved\h_Gauss.jpg", gaussian)

save_gray = cv2.imread("E:\Saved\gray.jpg",cv2.IMREAD_COLOR)
save_hsv = cv2.imread("E:\Saved\hsv.jpg",cv2.IMREAD_COLOR)
save_bin = cv2.imread("E:\Saved\h_Binary.jpg",cv2.IMREAD_COLOR)
save_inbin = cv2.imread("E:\Saved\h_Inbin.jpg",cv2.IMREAD_COLOR)
save_mean = cv2.imread("E:\Saved\h_Mean.jpg",cv2.IMREAD_COLOR)
save_gauss = cv2.imread("E:\Saved\h_Gauss.jpg",cv2.IMREAD_COLOR)

cv2.imshow("saved gray", save_gray)
cv2.imshow("saved hsv", save_hsv)
cv2.imshow("saved binary", save_bin)
cv2.imshow("saved in_binary", save_inbin)
cv2.imshow("saved mean", save_mean)
cv2.imshow("saved gaussian", save_gauss)


# cv2.imshow('Gaussian on Inverse', gaussian)
# cv2.imshow('Mean on binary', mean)
# cv2.imshow('Binary Inverse', InBin)
# cv2.imshow('Binary', Bin)
# cv2.imshow('HSV', hsv)
# cv2.imshow('GrayScale', gray)
cv2.imshow('Image', image)
cv2.waitKey(0)
cv2.destroyAllWindows()