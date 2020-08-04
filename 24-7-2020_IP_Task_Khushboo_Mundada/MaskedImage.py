import cv2
import numpy as np

m_ori = cv2.imread("yellow_flower.jpg")
mask_res = cv2.resize(m_ori, (500, 500))

def fun(x):
    pass


def imgmask():
    cv2.namedWindow("masking")
    bh = 'blue high'
    bl = 'blue low'
    gh = 'green high'
    gl = 'green low'
    rh = 'red high'
    rl = 'red low'

    cv2.createTrackbar(bl, 'masking', 0, 255, fun)
    cv2.createTrackbar(gl, 'masking', 0, 255, fun)
    cv2.createTrackbar(rl, 'masking', 0, 255, fun)
    cv2.createTrackbar(bh, 'masking', 0, 255, fun)
    cv2.createTrackbar(gh, 'masking', 0, 255, fun)
    cv2.createTrackbar(rh, 'masking', 0, 255, fun)

    while True:
        hsv = cv2.cvtColor(mask_res, cv2.COLOR_BGR2HSV)

        btl = cv2.getTrackbarPos(bl, 'masking')
        gtl = cv2.getTrackbarPos(gl, 'masking')
        rtl = cv2.getTrackbarPos(rl, 'masking')
        bth = cv2.getTrackbarPos(bh, 'masking')
        gth = cv2.getTrackbarPos(gh, 'masking')
        rth = cv2.getTrackbarPos(rh, 'masking')

        rgbl = np.array([btl, gtl, rtl], np.uint8)
        rgbh = np.array([bth, gth, rth], np.uint8)

        mask = cv2.inRange(hsv, rgbl, rgbh)

        cv2.imshow('Original', mask_res)
        cv2.imshow('Masked', mask)

        k = cv2.waitKey(1)
        if k == 32:
            break

imgmask()
cv2.destroyAllWindows()
# for yellow colour : [19, 100, 100], [30, 255, 255]
