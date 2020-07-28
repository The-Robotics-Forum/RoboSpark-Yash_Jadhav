import cv2
import numpy as np

original = cv2.imread("rose_flower.jpg")
r = cv2.resize(original, (480, 500))

img = cv2.rectangle(r, (10, 350), (250,310), (0,0, 0), -1)
img = cv2.rectangle(r, (30, 500), (230,350), (0,192, 192), -1)


cv2.putText(r, 'ROSE', (300, 320), cv2.QT_FONT_NORMAL, 2, (50, 101, 255), 10, cv2.LINE_AA)      # puts the text on image
cv2.imshow("Flower", r)
cv2.waitKey(0)
cv2.destroyAllWindows()