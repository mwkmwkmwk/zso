#ifndef HASHDEV_H
#define HASHDEV_H

#define HASHDEV_VENDOR_ID		0x1af4
#define HASHDEV_DEVICE_ID		0x10ff

#define HASHDEV_ENABLE			0x000
#define HASHDEV_ENABLE_FETCH_DATA	0x00000001
#define HASHDEV_ENABLE_FETCH_CMD		0x00000002
#define HASHDEV_STATUS			0x004
#define HASHDEV_STATUS_FETCH_DATA	0x00000001
#define HASHDEV_STATUS_FETCH_CMD		0x00000002
#define HASHDEV_INTR			0x008
#define HASHDEV_INTR_USER(i)		(0x00000001 << (i))
#define HASHDEV_INTR_FETCH_DATA_COMPLETE	0x00010000
#define HASHDEV_INTR_INVALID_COMMAND	0x00020000
#define HASHDEV_INTR_ENABLE		0x00c

#define HASHDEV_SHA1_H(i)		(0x020 + (i)*0x4)
#define HASHDEV_SHA1_DATA(i)		(0x040 + (i)*0x4)

#define HASHDEV_SHA1_DATA_PTR		0x010
#define HASHDEV_SHA1_DATA_COUNT		0x014

#define HASHDEV_SHA1_CMD_PTR		0x018
#define HASHDEV_SHA1_CMD_END		0x01c

#define HASHDEV_CMD_SHA1_JUMP(addr)	(0x00 | (addr))
#define HASHDEV_CMD_SHA1_H_SAVE(addr)	(0x01 | (addr))
#define HASHDEV_CMD_SHA1_H_LOAD(addr)	(0x02 | (addr))
#define HASHDEV_CMD_SHA1_DATA_PTR(addr)	(0x03 | (addr))
#define HASHDEV_CMD_SHA1_DATA_COUNT(cnt)	(0x07 | (cnt))
#define HASHDEV_CMD_SHA1_INTR(idx)	(0x07 | (idx) << 6)

#define HASHDEV_SHA1_BLOCK_SIZE		0x40

#endif