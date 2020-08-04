import cv2
import numpy as np

original = cv2.imread("daisy_flower.jpg")
r = cv2.resize(original, (480, 500))

# kernel
kernel = np.array(([3, 2, 6], [5, 6, 7], [2, 4, 8]), np.uint8)
kernel1 = np.array(([0, 0, 0], [0, 2, 0], [0, 0, 0]), np.uint8)

# 5 tech of Blurring image original
blur = cv2.filter2D(r, -1, kernel1)
avg = cv2.blur(r, (7, 7))
gaussian = cv2.GaussianBlur(r, (7, 7), 0)
med = cv2.medianBlur(r, 7)
bilateral = cv2.bilateralFilter(r, 5, 115, 115)


# cv2.imwrite("E:\Saved\Bilateral.jpg", bilateral)
# cv2.imwrite("E:\Saved\Median.jpg", med)
# cv2.imwrite("E:\Saved\Gaussian Blur.jpg", gaussian)
# cv2.imwrite("E:\Saved\Average.jpg", avg)
# cv2.imwrite("E:\Saved\Blurred.jpg", blur)


# displaying images
cv2.imshow("Bilateral Blur", bilateral)
cv2.imshow("Median Blur", med)
cv2.imshow("Gaussian Blur", gaussian)
cv2.imshow("Average Blur", avg)
cv2.imshow("Filter2D", blur)
cv2.imshow("Original_Flower", r)
cv2.waitKey(0)
cv2.destroyAllWindows()