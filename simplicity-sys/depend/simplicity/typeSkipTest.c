#include "typeSkipTest.h"

/* A length-prefixed encoding of the following Simplicity program:
 *     witness (runIdentity (getValue (return True))) >>> mn >>> unit
 *      where
 *       l1 = take l0 &&& drop l0
 *       l2 = take l1 &&& drop l1
 *       l3 = take l2 &&& drop l2
 *       ltop = l3
 *       m1 = copair l3 l3
 *       m2 = take l1 &&& drop m1
 *       m3 = take m2 &&& drop l2
 *       m4 = take l3 &&& drop m3
 *       m5 = copair (injl m4) (injr ltop)
 *       m6 = take l1 &&& drop m5
 *       m7 = take m6 &&& drop l2
 *       m8 = take l3 &&& drop m7
 *       n1 = copair l3 l3
 *       n2 = take n1 &&& drop l1
 *       n3 = take l2 &&& drop n2
 *       n4 = take n3 &&& drop l3
 *       n5 = copair (injl ltop) (injr n4)
 *       n6 = take n5 &&& drop l0
 *       n7 = take l1 &&& drop n6
 *       n8 = take n7 &&& drop l2
 *       mn = copair (injl m8) (injr n8)
 */
const unsigned char typeSkipTest[] = {
  0xe3, 0x77, 0x42, 0x45, 0x0d, 0x9c, 0xc9, 0xbe, 0x0d, 0x8e, 0x69, 0x33, 0x49, 0x47, 0x84, 0x5a, 0x2e, 0xc1, 0xb9, 0x36,
  0xd8, 0x00, 0xa4, 0x61, 0x8e, 0xf9, 0x22, 0xde, 0x84, 0x3f, 0x66, 0x98, 0x5f, 0xa4, 0xd2, 0x97, 0x14, 0x83, 0x0f, 0x05,
  0x06, 0x1e, 0x0a, 0x0c, 0x36, 0x84, 0x24, 0x50, 0xc2, 0xc7, 0x6c, 0x49, 0xe7, 0xbd, 0xc3, 0x20, 0xfd, 0xb3, 0xf6, 0x6a,
  0xd2, 0x8b, 0x4f, 0x47, 0xa4, 0x4c, 0xb7, 0x7f, 0xd4, 0xd0, 0x94, 0x78, 0xc5, 0xe4, 0xf7, 0xb6, 0x22, 0xc1, 0x67, 0x76,
  0xe6, 0xcd, 0x09, 0x14, 0x35, 0x68, 0x65, 0x5e, 0x5d, 0x83, 0xcc, 0xdb, 0xec, 0x7a, 0xcd, 0x78, 0xf9, 0x54, 0xfe, 0x91,
  0xda, 0x34, 0x24, 0x4e, 0xbf, 0x30, 0xa3, 0x9f, 0xeb, 0xaf, 0xac, 0xcf, 0x02, 0x69, 0xf7, 0x25, 0x01, 0xb6, 0x1f, 0x68,
  0xa0, 0xc0, 0xe2, 0x06, 0x63, 0x0f, 0xc1, 0x85, 0x07, 0x0b, 0x78, 0xc3, 0xea, 0x14, 0x14, 0x60, 0x78, 0x30, 0x1c, 0x20,
  0x70, 0xb8, 0x68, 0xc3, 0xf1, 0x20, 0xa0, 0xe1, 0x71, 0x18, 0xa3, 0x03, 0xc5, 0xc0, 0x71, 0x81, 0x20, 0x80, 0x71, 0xb0
};

const size_t sizeof_typeSkipTest = sizeof(typeSkipTest);
const unsigned char typeSkipTest_witness[] = {
  0xe0
};

const size_t sizeof_typeSkipTest_witness = sizeof(typeSkipTest_witness);

/* The commitment Merkle root of the above typeSkipTest Simplicity expression. */
const uint32_t typeSkipTest_cmr[] = {
  0x311fb6ffu, 0x09db7cadu, 0xf80b4537u, 0xec195873u, 0x8a57c5b7u, 0xa3dc4258u, 0x63e66326u, 0xff376970u
};

/* The identity Merkle root of the above typeSkipTest Simplicity expression. */
const uint32_t typeSkipTest_imr[] = {
  0xe5e1ecb1u, 0x24f5bf62u, 0x61ed2a45u, 0xb7b25518u, 0xb99cc936u, 0x54592eb2u, 0x6d29b64du, 0xaf06352fu
};

/* The annotated Merkle root of the above typeSkipTest Simplicity expression. */
const uint32_t typeSkipTest_amr[] = {
  0x9f9548f4u, 0x97647b04u, 0x4ee0360du, 0xe3ffcdaeu, 0x6f03f41bu, 0xf0c6ec6au, 0xc3251814u, 0x16b3cc58u
};

/* The cost of the above typeSkipTest Simplicity expression in milli weight units. */
const ubounded typeSkipTest_cost = 13720;
