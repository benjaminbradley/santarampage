const uint8_t animationData[] PROGMEM = {
// Frame: 0
    3, 0x00, 0x00,
    2, 0xff, 0xe0,
    6, 0x00, 0x00,
    1, 0x14, 0x60,
    1, 0x0f, 0xe0,
    5, 0x00, 0x00,
    1, 0x14, 0x60,
    1, 0x0f, 0xe0,
    1, 0x14, 0x60,
    1, 0xf8, 0x1b,
    4, 0x00, 0x00,
    1, 0xf8, 0x41,
    1, 0x14, 0x60,
    1, 0x0f, 0xe0,
    1, 0x14, 0x60,
    3, 0x00, 0x00,
    1, 0x0f, 0xe0,
    1, 0x14, 0x60,
    1, 0x0f, 0xe0,
    1, 0x14, 0x60,
    1, 0x00, 0x1f,
    1, 0x14, 0x60,
    2, 0x00, 0x00,
    1, 0x14, 0x60,
    1, 0x0f, 0xe0,
    1, 0x14, 0x60,
    1, 0x0f, 0xe0,
    1, 0x14, 0x60,
    1, 0x0f, 0xe0,
    4, 0x00, 0x00,
    2, 0x81, 0xa0,
    6, 0x00, 0x00,
    2, 0x81, 0xa0,
    3, 0x00, 0x00,
};

MatrixAnimation xmastree_animation(1, animationData, MatrixAnimation::RGB565_RLE, 64, 100);
