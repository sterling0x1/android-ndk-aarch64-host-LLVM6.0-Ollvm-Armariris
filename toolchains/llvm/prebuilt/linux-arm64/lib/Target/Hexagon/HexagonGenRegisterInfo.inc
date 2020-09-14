/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register Enum Values                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM

namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass HexagonMCRegisterClasses[];

namespace Hexagon {
enum {
  NoRegister,
  CS = 1,
  FRAMEKEY = 2,
  FRAMELIMIT = 3,
  GP = 4,
  PC = 5,
  PKTCOUNT = 6,
  PKTCOUNTHI = 7,
  PKTCOUNTLO = 8,
  UGP = 9,
  UPCYCLE = 10,
  UPCYCLEHI = 11,
  UPCYCLELO = 12,
  USR = 13,
  USR_OVF = 14,
  UTIMER = 15,
  UTIMERHI = 16,
  UTIMERLO = 17,
  VTMP = 18,
  C5 = 19,
  C8 = 20,
  CS0 = 21,
  CS1 = 22,
  D0 = 23,
  D1 = 24,
  D2 = 25,
  D3 = 26,
  D4 = 27,
  D5 = 28,
  D6 = 29,
  D7 = 30,
  D8 = 31,
  D9 = 32,
  D10 = 33,
  D11 = 34,
  D12 = 35,
  D13 = 36,
  D14 = 37,
  D15 = 38,
  LC0 = 39,
  LC1 = 40,
  M0 = 41,
  M1 = 42,
  P0 = 43,
  P1 = 44,
  P2 = 45,
  P3 = 46,
  Q0 = 47,
  Q1 = 48,
  Q2 = 49,
  Q3 = 50,
  R0 = 51,
  R1 = 52,
  R2 = 53,
  R3 = 54,
  R4 = 55,
  R5 = 56,
  R6 = 57,
  R7 = 58,
  R8 = 59,
  R9 = 60,
  R10 = 61,
  R11 = 62,
  R12 = 63,
  R13 = 64,
  R14 = 65,
  R15 = 66,
  R16 = 67,
  R17 = 68,
  R18 = 69,
  R19 = 70,
  R20 = 71,
  R21 = 72,
  R22 = 73,
  R23 = 74,
  R24 = 75,
  R25 = 76,
  R26 = 77,
  R27 = 78,
  R28 = 79,
  R29 = 80,
  R30 = 81,
  R31 = 82,
  SA0 = 83,
  SA1 = 84,
  V0 = 85,
  V1 = 86,
  V2 = 87,
  V3 = 88,
  V4 = 89,
  V5 = 90,
  V6 = 91,
  V7 = 92,
  V8 = 93,
  V9 = 94,
  V10 = 95,
  V11 = 96,
  V12 = 97,
  V13 = 98,
  V14 = 99,
  V15 = 100,
  V16 = 101,
  V17 = 102,
  V18 = 103,
  V19 = 104,
  V20 = 105,
  V21 = 106,
  V22 = 107,
  V23 = 108,
  V24 = 109,
  V25 = 110,
  V26 = 111,
  V27 = 112,
  V28 = 113,
  V29 = 114,
  V30 = 115,
  V31 = 116,
  W0 = 117,
  W1 = 118,
  W2 = 119,
  W3 = 120,
  W4 = 121,
  W5 = 122,
  W6 = 123,
  W7 = 124,
  W8 = 125,
  W9 = 126,
  W10 = 127,
  W11 = 128,
  W12 = 129,
  W13 = 130,
  W14 = 131,
  W15 = 132,
  C1_0 = 133,
  C3_2 = 134,
  C5_4 = 135,
  C7_6 = 136,
  C9_8 = 137,
  C11_10 = 138,
  C17_16 = 139,
  P3_0 = 140,
  NUM_TARGET_REGS 	// 141
};
} // end namespace Hexagon

// Register classes

namespace Hexagon {
enum {
  UsrBitsRegClassID = 0,
  IntRegsRegClassID = 1,
  CtrRegsRegClassID = 2,
  GeneralSubRegsRegClassID = 3,
  V62RegsRegClassID = 4,
  IntRegsLow8RegClassID = 5,
  CtrRegs_and_V62RegsRegClassID = 6,
  PredRegsRegClassID = 7,
  V62Regs_with_isub_hiRegClassID = 8,
  ModRegsRegClassID = 9,
  CtrRegs_with_subreg_overflowRegClassID = 10,
  V65RegsRegClassID = 11,
  DoubleRegsRegClassID = 12,
  CtrRegs64RegClassID = 13,
  GeneralDoubleLow8RegsRegClassID = 14,
  DoubleRegs_with_isub_hi_in_IntRegsLow8RegClassID = 15,
  CtrRegs64_and_V62RegsRegClassID = 16,
  CtrRegs64_with_isub_hi_in_ModRegsRegClassID = 17,
  HvxVRRegClassID = 18,
  HvxQRRegClassID = 19,
  HvxVR_and_V65RegsRegClassID = 20,
  HvxWRRegClassID = 21,

  };
} // end namespace Hexagon


// Subregister indices

namespace Hexagon {
enum {
  NoSubRegister,
  isub_hi,	// 1
  isub_lo,	// 2
  subreg_overflow,	// 3
  vsub_hi,	// 4
  vsub_lo,	// 5
  NUM_TARGET_SUBREGS
};
} // end namespace Hexagon

} // end namespace llvm

#endif // GET_REGINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* MC Register Information                                                    *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC

namespace llvm {

extern const MCPhysReg HexagonRegDiffLists[] = {
  /* 0 */ 0, 0,
  /* 2 */ 0, 1, 0,
  /* 5 */ 16, 37, 1, 1, 1, 0,
  /* 11 */ 53, 1, 1, 1, 0,
  /* 16 */ 2, 1, 0,
  /* 19 */ 6, 1, 0,
  /* 22 */ 9, 1, 0,
  /* 25 */ 11, 1, 0,
  /* 28 */ 13, 1, 0,
  /* 31 */ 20, 1, 0,
  /* 34 */ 28, 1, 0,
  /* 37 */ 29, 1, 0,
  /* 40 */ 30, 1, 0,
  /* 43 */ 31, 1, 0,
  /* 46 */ 32, 1, 0,
  /* 49 */ 33, 1, 0,
  /* 52 */ 34, 1, 0,
  /* 55 */ 35, 1, 0,
  /* 58 */ 36, 1, 0,
  /* 61 */ 37, 1, 0,
  /* 64 */ 38, 1, 0,
  /* 67 */ 39, 1, 0,
  /* 70 */ 40, 1, 0,
  /* 73 */ 41, 1, 0,
  /* 76 */ 42, 1, 0,
  /* 79 */ 43, 1, 0,
  /* 82 */ 51, 1, 0,
  /* 85 */ 65365, 1, 0,
  /* 88 */ 65441, 1, 0,
  /* 91 */ 65504, 1, 0,
  /* 94 */ 65505, 1, 0,
  /* 97 */ 65506, 1, 0,
  /* 100 */ 65507, 1, 0,
  /* 103 */ 65508, 1, 0,
  /* 106 */ 65509, 1, 0,
  /* 109 */ 65510, 1, 0,
  /* 112 */ 65511, 1, 0,
  /* 115 */ 65512, 1, 0,
  /* 118 */ 65513, 1, 0,
  /* 121 */ 65514, 1, 0,
  /* 124 */ 65515, 1, 0,
  /* 127 */ 65516, 1, 0,
  /* 130 */ 65517, 1, 0,
  /* 133 */ 65518, 1, 0,
  /* 136 */ 65519, 1, 0,
  /* 139 */ 4, 4, 0,
  /* 142 */ 5, 7, 0,
  /* 145 */ 9, 0,
  /* 147 */ 10, 0,
  /* 149 */ 11, 0,
  /* 151 */ 65452, 12, 0,
  /* 154 */ 14, 0,
  /* 156 */ 16, 0,
  /* 158 */ 17, 0,
  /* 160 */ 18, 0,
  /* 162 */ 19, 0,
  /* 164 */ 20, 0,
  /* 166 */ 21, 0,
  /* 168 */ 22, 0,
  /* 170 */ 23, 0,
  /* 172 */ 24, 0,
  /* 174 */ 25, 0,
  /* 176 */ 26, 0,
  /* 178 */ 27, 0,
  /* 180 */ 28, 0,
  /* 182 */ 29, 0,
  /* 184 */ 30, 0,
  /* 186 */ 31, 0,
  /* 188 */ 32, 0,
  /* 190 */ 50, 0,
  /* 192 */ 94, 0,
  /* 194 */ 95, 0,
  /* 196 */ 116, 0,
  /* 198 */ 117, 0,
  /* 200 */ 129, 0,
  /* 202 */ 132, 0,
  /* 204 */ 134, 0,
  /* 206 */ 136, 0,
  /* 208 */ 137, 0,
  /* 210 */ 5, 65415, 0,
  /* 213 */ 65486, 65492, 0,
  /* 216 */ 65493, 0,
  /* 218 */ 65494, 0,
  /* 220 */ 65495, 0,
  /* 222 */ 65496, 0,
  /* 224 */ 65497, 0,
  /* 226 */ 65498, 0,
  /* 228 */ 65499, 0,
  /* 230 */ 65500, 0,
  /* 232 */ 65501, 0,
  /* 234 */ 65502, 0,
  /* 236 */ 65503, 0,
  /* 238 */ 65504, 0,
  /* 240 */ 65505, 0,
  /* 242 */ 65506, 0,
  /* 244 */ 65507, 0,
  /* 246 */ 65508, 0,
  /* 248 */ 65514, 0,
  /* 250 */ 65515, 0,
  /* 252 */ 65516, 0,
  /* 254 */ 65419, 65521, 0,
  /* 257 */ 65526, 0,
  /* 259 */ 65407, 65531, 0,
  /* 262 */ 65533, 0,
  /* 264 */ 65534, 0,
  /* 266 */ 2, 65535, 0,
  /* 269 */ 65400, 65535, 0,
};

extern const LaneBitmask HexagonLaneMaskLists[] = {
  /* 0 */ LaneBitmask(0x00000000), LaneBitmask(0x00000000), LaneBitmask(0x00000000), LaneBitmask(0x00000000), LaneBitmask::getAll(),
  /* 5 */ LaneBitmask(0x00000004), LaneBitmask(0x00000000), LaneBitmask::getAll(),
  /* 8 */ LaneBitmask(0x00000002), LaneBitmask(0x00000001), LaneBitmask::getAll(),
  /* 11 */ LaneBitmask(0x00000001), LaneBitmask(0x00000002), LaneBitmask::getAll(),
  /* 14 */ LaneBitmask(0x00000001), LaneBitmask(0x00000002), LaneBitmask(0x00000002), LaneBitmask(0x00000002), LaneBitmask(0x00000002), LaneBitmask::getAll(),
  /* 20 */ LaneBitmask(0x00000010), LaneBitmask(0x00000008), LaneBitmask::getAll(),
};

extern const uint16_t HexagonSubRegIdxLists[] = {
  /* 0 */ 2, 1, 0,
  /* 3 */ 3, 0,
  /* 5 */ 5, 4, 0,
};

extern const MCRegisterInfo::SubRegCoveredBits HexagonSubRegIdxRanges[] = {
  { 65535, 65535 },
  { 32, 32 },	// isub_hi
  { 0, 32 },	// isub_lo
  { 0, 1 },	// subreg_overflow
  { 512, 512 },	// vsub_hi
  { 0, 512 },	// vsub_lo
};

extern const char HexagonRegStrings[] = {
  /* 0 */ 'D', '1', '0', 0,
  /* 4 */ 'R', '1', '0', 0,
  /* 8 */ 'V', '1', '0', 0,
  /* 12 */ 'W', '1', '0', 0,
  /* 16 */ 'C', '1', '1', '_', '1', '0', 0,
  /* 23 */ 'R', '2', '0', 0,
  /* 27 */ 'V', '2', '0', 0,
  /* 31 */ 'R', '3', '0', 0,
  /* 35 */ 'V', '3', '0', 0,
  /* 39 */ 'S', 'A', '0', 0,
  /* 43 */ 'L', 'C', '0', 0,
  /* 47 */ 'D', '0', 0,
  /* 50 */ 'M', '0', 0,
  /* 53 */ 'P', '0', 0,
  /* 56 */ 'Q', '0', 0,
  /* 59 */ 'R', '0', 0,
  /* 62 */ 'C', 'S', '0', 0,
  /* 66 */ 'V', '0', 0,
  /* 69 */ 'W', '0', 0,
  /* 72 */ 'C', '1', '_', '0', 0,
  /* 77 */ 'P', '3', '_', '0', 0,
  /* 82 */ 'D', '1', '1', 0,
  /* 86 */ 'R', '1', '1', 0,
  /* 90 */ 'V', '1', '1', 0,
  /* 94 */ 'W', '1', '1', 0,
  /* 98 */ 'R', '2', '1', 0,
  /* 102 */ 'V', '2', '1', 0,
  /* 106 */ 'R', '3', '1', 0,
  /* 110 */ 'V', '3', '1', 0,
  /* 114 */ 'S', 'A', '1', 0,
  /* 118 */ 'L', 'C', '1', 0,
  /* 122 */ 'D', '1', 0,
  /* 125 */ 'M', '1', 0,
  /* 128 */ 'P', '1', 0,
  /* 131 */ 'Q', '1', 0,
  /* 134 */ 'R', '1', 0,
  /* 137 */ 'C', 'S', '1', 0,
  /* 141 */ 'V', '1', 0,
  /* 144 */ 'W', '1', 0,
  /* 147 */ 'D', '1', '2', 0,
  /* 151 */ 'R', '1', '2', 0,
  /* 155 */ 'V', '1', '2', 0,
  /* 159 */ 'W', '1', '2', 0,
  /* 163 */ 'R', '2', '2', 0,
  /* 167 */ 'V', '2', '2', 0,
  /* 171 */ 'D', '2', 0,
  /* 174 */ 'P', '2', 0,
  /* 177 */ 'Q', '2', 0,
  /* 180 */ 'R', '2', 0,
  /* 183 */ 'V', '2', 0,
  /* 186 */ 'W', '2', 0,
  /* 189 */ 'C', '3', '_', '2', 0,
  /* 194 */ 'D', '1', '3', 0,
  /* 198 */ 'R', '1', '3', 0,
  /* 202 */ 'V', '1', '3', 0,
  /* 206 */ 'W', '1', '3', 0,
  /* 210 */ 'R', '2', '3', 0,
  /* 214 */ 'V', '2', '3', 0,
  /* 218 */ 'D', '3', 0,
  /* 221 */ 'P', '3', 0,
  /* 224 */ 'Q', '3', 0,
  /* 227 */ 'R', '3', 0,
  /* 230 */ 'V', '3', 0,
  /* 233 */ 'W', '3', 0,
  /* 236 */ 'D', '1', '4', 0,
  /* 240 */ 'R', '1', '4', 0,
  /* 244 */ 'V', '1', '4', 0,
  /* 248 */ 'W', '1', '4', 0,
  /* 252 */ 'R', '2', '4', 0,
  /* 256 */ 'V', '2', '4', 0,
  /* 260 */ 'D', '4', 0,
  /* 263 */ 'R', '4', 0,
  /* 266 */ 'V', '4', 0,
  /* 269 */ 'W', '4', 0,
  /* 272 */ 'C', '5', '_', '4', 0,
  /* 277 */ 'D', '1', '5', 0,
  /* 281 */ 'R', '1', '5', 0,
  /* 285 */ 'V', '1', '5', 0,
  /* 289 */ 'W', '1', '5', 0,
  /* 293 */ 'R', '2', '5', 0,
  /* 297 */ 'V', '2', '5', 0,
  /* 301 */ 'C', '5', 0,
  /* 304 */ 'D', '5', 0,
  /* 307 */ 'R', '5', 0,
  /* 310 */ 'V', '5', 0,
  /* 313 */ 'W', '5', 0,
  /* 316 */ 'R', '1', '6', 0,
  /* 320 */ 'V', '1', '6', 0,
  /* 324 */ 'C', '1', '7', '_', '1', '6', 0,
  /* 331 */ 'R', '2', '6', 0,
  /* 335 */ 'V', '2', '6', 0,
  /* 339 */ 'D', '6', 0,
  /* 342 */ 'R', '6', 0,
  /* 345 */ 'V', '6', 0,
  /* 348 */ 'W', '6', 0,
  /* 351 */ 'C', '7', '_', '6', 0,
  /* 356 */ 'R', '1', '7', 0,
  /* 360 */ 'V', '1', '7', 0,
  /* 364 */ 'R', '2', '7', 0,
  /* 368 */ 'V', '2', '7', 0,
  /* 372 */ 'D', '7', 0,
  /* 375 */ 'R', '7', 0,
  /* 378 */ 'V', '7', 0,
  /* 381 */ 'W', '7', 0,
  /* 384 */ 'R', '1', '8', 0,
  /* 388 */ 'V', '1', '8', 0,
  /* 392 */ 'R', '2', '8', 0,
  /* 396 */ 'V', '2', '8', 0,
  /* 400 */ 'C', '8', 0,
  /* 403 */ 'D', '8', 0,
  /* 406 */ 'R', '8', 0,
  /* 409 */ 'V', '8', 0,
  /* 412 */ 'W', '8', 0,
  /* 415 */ 'C', '9', '_', '8', 0,
  /* 420 */ 'R', '1', '9', 0,
  /* 424 */ 'V', '1', '9', 0,
  /* 428 */ 'R', '2', '9', 0,
  /* 432 */ 'V', '2', '9', 0,
  /* 436 */ 'D', '9', 0,
  /* 439 */ 'R', '9', 0,
  /* 442 */ 'V', '9', 0,
  /* 445 */ 'W', '9', 0,
  /* 448 */ 'P', 'C', 0,
  /* 451 */ 'U', 'P', 'C', 'Y', 'C', 'L', 'E', 0,
  /* 459 */ 'U', 'S', 'R', '_', 'O', 'V', 'F', 0,
  /* 467 */ 'U', 'P', 'C', 'Y', 'C', 'L', 'E', 'H', 'I', 0,
  /* 477 */ 'U', 'T', 'I', 'M', 'E', 'R', 'H', 'I', 0,
  /* 486 */ 'P', 'K', 'T', 'C', 'O', 'U', 'N', 'T', 'H', 'I', 0,
  /* 497 */ 'U', 'P', 'C', 'Y', 'C', 'L', 'E', 'L', 'O', 0,
  /* 507 */ 'U', 'T', 'I', 'M', 'E', 'R', 'L', 'O', 0,
  /* 516 */ 'P', 'K', 'T', 'C', 'O', 'U', 'N', 'T', 'L', 'O', 0,
  /* 527 */ 'U', 'G', 'P', 0,
  /* 531 */ 'V', 'T', 'M', 'P', 0,
  /* 536 */ 'U', 'T', 'I', 'M', 'E', 'R', 0,
  /* 543 */ 'U', 'S', 'R', 0,
  /* 547 */ 'C', 'S', 0,
  /* 550 */ 'F', 'R', 'A', 'M', 'E', 'L', 'I', 'M', 'I', 'T', 0,
  /* 561 */ 'P', 'K', 'T', 'C', 'O', 'U', 'N', 'T', 0,
  /* 570 */ 'F', 'R', 'A', 'M', 'E', 'K', 'E', 'Y', 0,
};

extern const MCRegisterDesc HexagonRegDesc[] = { // Descriptors
  { 3, 0, 0, 0, 0, 0 },
  { 547, 31, 1, 0, 32, 8 },
  { 570, 1, 208, 2, 1, 3 },
  { 550, 1, 206, 2, 1, 3 },
  { 528, 1, 204, 2, 1, 3 },
  { 448, 1, 202, 2, 1, 3 },
  { 561, 266, 1, 0, 304, 8 },
  { 486, 1, 267, 2, 2288, 3 },
  { 516, 1, 264, 2, 4114, 3 },
  { 527, 1, 200, 2, 4114, 3 },
  { 451, 266, 1, 0, 352, 8 },
  { 467, 1, 267, 2, 2352, 3 },
  { 497, 1, 264, 2, 2320, 3 },
  { 543, 3, 1, 3, 400, 5 },
  { 459, 1, 267, 2, 2384, 3 },
  { 536, 266, 1, 0, 448, 8 },
  { 477, 1, 267, 2, 2464, 3 },
  { 507, 1, 264, 2, 4002, 3 },
  { 531, 1, 1, 2, 4193, 3 },
  { 301, 1, 196, 2, 4193, 3 },
  { 400, 1, 198, 2, 2432, 3 },
  { 62, 1, 252, 2, 4001, 3 },
  { 137, 1, 250, 2, 4001, 3 },
  { 47, 34, 1, 0, 1602, 8 },
  { 122, 37, 1, 0, 1602, 8 },
  { 171, 40, 1, 0, 1602, 8 },
  { 218, 43, 1, 0, 1602, 8 },
  { 260, 46, 1, 0, 1602, 8 },
  { 304, 49, 1, 0, 1602, 8 },
  { 339, 52, 1, 0, 1602, 8 },
  { 372, 55, 1, 0, 1602, 8 },
  { 403, 58, 1, 0, 1602, 8 },
  { 436, 61, 1, 0, 1602, 8 },
  { 0, 64, 1, 0, 1602, 8 },
  { 82, 67, 1, 0, 1602, 8 },
  { 147, 70, 1, 0, 1602, 8 },
  { 194, 73, 1, 0, 1602, 8 },
  { 236, 76, 1, 0, 1602, 8 },
  { 277, 79, 1, 0, 1602, 8 },
  { 43, 1, 192, 2, 2353, 3 },
  { 118, 1, 192, 2, 2353, 3 },
  { 50, 1, 194, 2, 2353, 3 },
  { 125, 1, 192, 2, 2353, 3 },
  { 53, 1, 1, 2, 2353, 3 },
  { 128, 1, 1, 2, 2353, 3 },
  { 174, 1, 1, 2, 2353, 3 },
  { 221, 1, 1, 2, 2353, 3 },
  { 56, 1, 1, 2, 2353, 3 },
  { 131, 1, 1, 2, 2353, 3 },
  { 177, 1, 1, 2, 2353, 3 },
  { 224, 1, 1, 2, 2353, 3 },
  { 59, 1, 246, 2, 3745, 3 },
  { 134, 1, 244, 2, 3745, 3 },
  { 180, 1, 244, 2, 3745, 3 },
  { 227, 1, 242, 2, 3745, 3 },
  { 263, 1, 242, 2, 3745, 3 },
  { 307, 1, 240, 2, 3745, 3 },
  { 342, 1, 240, 2, 3745, 3 },
  { 375, 1, 238, 2, 3745, 3 },
  { 406, 1, 238, 2, 3745, 3 },
  { 439, 1, 236, 2, 3745, 3 },
  { 4, 1, 236, 2, 3745, 3 },
  { 86, 1, 234, 2, 3745, 3 },
  { 151, 1, 234, 2, 3745, 3 },
  { 198, 1, 232, 2, 3745, 3 },
  { 240, 1, 232, 2, 3745, 3 },
  { 281, 1, 230, 2, 3745, 3 },
  { 316, 1, 230, 2, 3745, 3 },
  { 356, 1, 228, 2, 3745, 3 },
  { 384, 1, 228, 2, 3745, 3 },
  { 420, 1, 226, 2, 3745, 3 },
  { 23, 1, 226, 2, 3745, 3 },
  { 98, 1, 224, 2, 3745, 3 },
  { 163, 1, 224, 2, 3745, 3 },
  { 210, 1, 222, 2, 3745, 3 },
  { 252, 1, 222, 2, 3745, 3 },
  { 293, 1, 220, 2, 3745, 3 },
  { 331, 1, 220, 2, 3745, 3 },
  { 364, 1, 218, 2, 3745, 3 },
  { 392, 1, 218, 2, 3745, 3 },
  { 428, 1, 216, 2, 3745, 3 },
  { 31, 1, 216, 2, 3745, 3 },
  { 106, 1, 214, 2, 3745, 3 },
  { 39, 1, 190, 2, 3969, 3 },
  { 114, 1, 190, 2, 3969, 3 },
  { 66, 1, 188, 2, 3969, 3 },
  { 141, 1, 186, 2, 3969, 3 },
  { 183, 1, 186, 2, 3969, 3 },
  { 230, 1, 184, 2, 3969, 3 },
  { 266, 1, 184, 2, 3969, 3 },
  { 310, 1, 182, 2, 3969, 3 },
  { 345, 1, 182, 2, 3969, 3 },
  { 378, 1, 180, 2, 3969, 3 },
  { 409, 1, 180, 2, 3969, 3 },
  { 442, 1, 178, 2, 3969, 3 },
  { 8, 1, 178, 2, 3969, 3 },
  { 90, 1, 176, 2, 3969, 3 },
  { 155, 1, 176, 2, 3969, 3 },
  { 202, 1, 174, 2, 3969, 3 },
  { 244, 1, 174, 2, 3969, 3 },
  { 285, 1, 172, 2, 3969, 3 },
  { 320, 1, 172, 2, 3969, 3 },
  { 360, 1, 170, 2, 3969, 3 },
  { 388, 1, 170, 2, 3969, 3 },
  { 424, 1, 168, 2, 3969, 3 },
  { 27, 1, 168, 2, 3969, 3 },
  { 102, 1, 166, 2, 3969, 3 },
  { 167, 1, 166, 2, 3969, 3 },
  { 214, 1, 164, 2, 3969, 3 },
  { 256, 1, 164, 2, 3969, 3 },
  { 297, 1, 162, 2, 3969, 3 },
  { 335, 1, 162, 2, 3969, 3 },
  { 368, 1, 160, 2, 3969, 3 },
  { 396, 1, 160, 2, 3969, 3 },
  { 432, 1, 158, 2, 3969, 3 },
  { 35, 1, 158, 2, 3969, 3 },
  { 110, 1, 156, 2, 3969, 3 },
  { 69, 91, 1, 5, 1362, 20 },
  { 144, 94, 1, 5, 1362, 20 },
  { 186, 97, 1, 5, 1362, 20 },
  { 233, 100, 1, 5, 1362, 20 },
  { 269, 103, 1, 5, 1362, 20 },
  { 313, 106, 1, 5, 1362, 20 },
  { 348, 109, 1, 5, 1362, 20 },
  { 381, 112, 1, 5, 1362, 20 },
  { 412, 115, 1, 5, 1362, 20 },
  { 445, 118, 1, 5, 1362, 20 },
  { 12, 121, 1, 5, 1362, 20 },
  { 94, 124, 1, 5, 1362, 20 },
  { 159, 127, 1, 5, 1362, 20 },
  { 206, 130, 1, 5, 1362, 20 },
  { 248, 133, 1, 5, 1362, 20 },
  { 289, 136, 1, 5, 1362, 20 },
  { 72, 213, 1, 0, 2417, 11 },
  { 189, 213, 1, 0, 2417, 11 },
  { 272, 210, 1, 0, 80, 14 },
  { 351, 88, 1, 0, 1312, 8 },
  { 415, 254, 1, 0, 2272, 11 },
  { 16, 259, 1, 0, 2224, 11 },
  { 324, 269, 1, 0, 256, 11 },
  { 77, 1, 260, 2, 176, 0 },
};

extern const MCPhysReg HexagonRegUnitRoots[][2] = {
  { Hexagon::CS0 },
  { Hexagon::CS1 },
  { Hexagon::FRAMEKEY },
  { Hexagon::FRAMELIMIT },
  { Hexagon::GP },
  { Hexagon::PC },
  { Hexagon::PKTCOUNTLO },
  { Hexagon::PKTCOUNTHI },
  { Hexagon::UGP },
  { Hexagon::UPCYCLELO },
  { Hexagon::UPCYCLEHI },
  { Hexagon::USR_OVF },
  { Hexagon::USR, Hexagon::C8 },
  { Hexagon::UTIMERLO },
  { Hexagon::UTIMERHI },
  { Hexagon::VTMP },
  { Hexagon::C5 },
  { Hexagon::R0 },
  { Hexagon::R1 },
  { Hexagon::R2 },
  { Hexagon::R3 },
  { Hexagon::R4 },
  { Hexagon::R5 },
  { Hexagon::R6 },
  { Hexagon::R7 },
  { Hexagon::R8 },
  { Hexagon::R9 },
  { Hexagon::R10 },
  { Hexagon::R11 },
  { Hexagon::R12 },
  { Hexagon::R13 },
  { Hexagon::R14 },
  { Hexagon::R15 },
  { Hexagon::R16 },
  { Hexagon::R17 },
  { Hexagon::R18 },
  { Hexagon::R19 },
  { Hexagon::R20 },
  { Hexagon::R21 },
  { Hexagon::R22 },
  { Hexagon::R23 },
  { Hexagon::R24 },
  { Hexagon::R25 },
  { Hexagon::R26 },
  { Hexagon::R27 },
  { Hexagon::R28 },
  { Hexagon::R29 },
  { Hexagon::R30 },
  { Hexagon::R31 },
  { Hexagon::LC0 },
  { Hexagon::LC1 },
  { Hexagon::M0 },
  { Hexagon::M1 },
  { Hexagon::P0, Hexagon::P3_0 },
  { Hexagon::P1, Hexagon::P3_0 },
  { Hexagon::P2, Hexagon::P3_0 },
  { Hexagon::P3, Hexagon::P3_0 },
  { Hexagon::Q0 },
  { Hexagon::Q1 },
  { Hexagon::Q2 },
  { Hexagon::Q3 },
  { Hexagon::SA0 },
  { Hexagon::SA1 },
  { Hexagon::V0 },
  { Hexagon::V1 },
  { Hexagon::V2 },
  { Hexagon::V3 },
  { Hexagon::V4 },
  { Hexagon::V5 },
  { Hexagon::V6 },
  { Hexagon::V7 },
  { Hexagon::V8 },
  { Hexagon::V9 },
  { Hexagon::V10 },
  { Hexagon::V11 },
  { Hexagon::V12 },
  { Hexagon::V13 },
  { Hexagon::V14 },
  { Hexagon::V15 },
  { Hexagon::V16 },
  { Hexagon::V17 },
  { Hexagon::V18 },
  { Hexagon::V19 },
  { Hexagon::V20 },
  { Hexagon::V21 },
  { Hexagon::V22 },
  { Hexagon::V23 },
  { Hexagon::V24 },
  { Hexagon::V25 },
  { Hexagon::V26 },
  { Hexagon::V27 },
  { Hexagon::V28 },
  { Hexagon::V29 },
  { Hexagon::V30 },
  { Hexagon::V31 },
};

namespace {     // Register classes...
  // UsrBits Register Class...
  const MCPhysReg UsrBits[] = {
    Hexagon::USR_OVF, 
  };

  // UsrBits Bit set.
  const uint8_t UsrBitsBits[] = {
    0x00, 0x40, 
  };

  // IntRegs Register Class...
  const MCPhysReg IntRegs[] = {
    Hexagon::R0, Hexagon::R1, Hexagon::R2, Hexagon::R3, Hexagon::R4, Hexagon::R5, Hexagon::R6, Hexagon::R7, Hexagon::R8, Hexagon::R9, Hexagon::R12, Hexagon::R13, Hexagon::R14, Hexagon::R15, Hexagon::R16, Hexagon::R17, Hexagon::R18, Hexagon::R19, Hexagon::R20, Hexagon::R21, Hexagon::R22, Hexagon::R23, Hexagon::R24, Hexagon::R25, Hexagon::R26, Hexagon::R27, Hexagon::R28, Hexagon::R10, Hexagon::R11, Hexagon::R29, Hexagon::R30, Hexagon::R31, 
  };

  // IntRegs Bit set.
  const uint8_t IntRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0x07, 
  };

  // CtrRegs Register Class...
  const MCPhysReg CtrRegs[] = {
    Hexagon::LC0, Hexagon::SA0, Hexagon::LC1, Hexagon::SA1, Hexagon::P3_0, Hexagon::C5, Hexagon::C8, Hexagon::PC, Hexagon::UGP, Hexagon::GP, Hexagon::CS0, Hexagon::CS1, Hexagon::UPCYCLELO, Hexagon::UPCYCLEHI, Hexagon::FRAMELIMIT, Hexagon::FRAMEKEY, Hexagon::PKTCOUNTLO, Hexagon::PKTCOUNTHI, Hexagon::UTIMERLO, Hexagon::UTIMERHI, Hexagon::M0, Hexagon::M1, Hexagon::USR, 
  };

  // CtrRegs Bit set.
  const uint8_t CtrRegsBits[] = {
    0xbc, 0x3b, 0x7b, 0x00, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
  };

  // GeneralSubRegs Register Class...
  const MCPhysReg GeneralSubRegs[] = {
    Hexagon::R23, Hexagon::R22, Hexagon::R21, Hexagon::R20, Hexagon::R19, Hexagon::R18, Hexagon::R17, Hexagon::R16, Hexagon::R7, Hexagon::R6, Hexagon::R5, Hexagon::R4, Hexagon::R3, Hexagon::R2, Hexagon::R1, Hexagon::R0, 
  };

  // GeneralSubRegs Bit set.
  const uint8_t GeneralSubRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 0xf8, 0x07, 
  };

  // V62Regs Register Class...
  const MCPhysReg V62Regs[] = {
    Hexagon::FRAMELIMIT, Hexagon::FRAMEKEY, Hexagon::C17_16, Hexagon::PKTCOUNTLO, Hexagon::PKTCOUNTHI, Hexagon::PKTCOUNT, Hexagon::UTIMERLO, Hexagon::UTIMERHI, Hexagon::UTIMER, 
  };

  // V62Regs Bit set.
  const uint8_t V62RegsBits[] = {
    0xcc, 0x81, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // IntRegsLow8 Register Class...
  const MCPhysReg IntRegsLow8[] = {
    Hexagon::R7, Hexagon::R6, Hexagon::R5, Hexagon::R4, Hexagon::R3, Hexagon::R2, Hexagon::R1, Hexagon::R0, 
  };

  // IntRegsLow8 Bit set.
  const uint8_t IntRegsLow8Bits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x07, 
  };

  // CtrRegs_and_V62Regs Register Class...
  const MCPhysReg CtrRegs_and_V62Regs[] = {
    Hexagon::FRAMELIMIT, Hexagon::FRAMEKEY, Hexagon::PKTCOUNTLO, Hexagon::PKTCOUNTHI, Hexagon::UTIMERLO, Hexagon::UTIMERHI, 
  };

  // CtrRegs_and_V62Regs Bit set.
  const uint8_t CtrRegs_and_V62RegsBits[] = {
    0x8c, 0x01, 0x03, 
  };

  // PredRegs Register Class...
  const MCPhysReg PredRegs[] = {
    Hexagon::P0, Hexagon::P1, Hexagon::P2, Hexagon::P3, 
  };

  // PredRegs Bit set.
  const uint8_t PredRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 
  };

  // V62Regs_with_isub_hi Register Class...
  const MCPhysReg V62Regs_with_isub_hi[] = {
    Hexagon::C17_16, Hexagon::PKTCOUNT, Hexagon::UTIMER, 
  };

  // V62Regs_with_isub_hi Bit set.
  const uint8_t V62Regs_with_isub_hiBits[] = {
    0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // ModRegs Register Class...
  const MCPhysReg ModRegs[] = {
    Hexagon::M0, Hexagon::M1, 
  };

  // ModRegs Bit set.
  const uint8_t ModRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  };

  // CtrRegs_with_subreg_overflow Register Class...
  const MCPhysReg CtrRegs_with_subreg_overflow[] = {
    Hexagon::USR, 
  };

  // CtrRegs_with_subreg_overflow Bit set.
  const uint8_t CtrRegs_with_subreg_overflowBits[] = {
    0x00, 0x20, 
  };

  // V65Regs Register Class...
  const MCPhysReg V65Regs[] = {
    Hexagon::VTMP, 
  };

  // V65Regs Bit set.
  const uint8_t V65RegsBits[] = {
    0x00, 0x00, 0x04, 
  };

  // DoubleRegs Register Class...
  const MCPhysReg DoubleRegs[] = {
    Hexagon::D0, Hexagon::D1, Hexagon::D2, Hexagon::D3, Hexagon::D4, Hexagon::D6, Hexagon::D7, Hexagon::D8, Hexagon::D9, Hexagon::D10, Hexagon::D11, Hexagon::D12, Hexagon::D13, Hexagon::D5, Hexagon::D14, Hexagon::D15, 
  };

  // DoubleRegs Bit set.
  const uint8_t DoubleRegsBits[] = {
    0x00, 0x00, 0x80, 0xff, 0x7f, 
  };

  // CtrRegs64 Register Class...
  const MCPhysReg CtrRegs64[] = {
    Hexagon::C1_0, Hexagon::C3_2, Hexagon::C5_4, Hexagon::C7_6, Hexagon::C9_8, Hexagon::C11_10, Hexagon::CS, Hexagon::UPCYCLE, Hexagon::C17_16, Hexagon::PKTCOUNT, Hexagon::UTIMER, 
  };

  // CtrRegs64 Bit set.
  const uint8_t CtrRegs64Bits[] = {
    0x42, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x0f, 
  };

  // GeneralDoubleLow8Regs Register Class...
  const MCPhysReg GeneralDoubleLow8Regs[] = {
    Hexagon::D11, Hexagon::D10, Hexagon::D9, Hexagon::D8, Hexagon::D3, Hexagon::D2, Hexagon::D1, Hexagon::D0, 
  };

  // GeneralDoubleLow8Regs Bit set.
  const uint8_t GeneralDoubleLow8RegsBits[] = {
    0x00, 0x00, 0x80, 0x87, 0x07, 
  };

  // DoubleRegs_with_isub_hi_in_IntRegsLow8 Register Class...
  const MCPhysReg DoubleRegs_with_isub_hi_in_IntRegsLow8[] = {
    Hexagon::D3, Hexagon::D2, Hexagon::D1, Hexagon::D0, 
  };

  // DoubleRegs_with_isub_hi_in_IntRegsLow8 Bit set.
  const uint8_t DoubleRegs_with_isub_hi_in_IntRegsLow8Bits[] = {
    0x00, 0x00, 0x80, 0x07, 
  };

  // CtrRegs64_and_V62Regs Register Class...
  const MCPhysReg CtrRegs64_and_V62Regs[] = {
    Hexagon::C17_16, Hexagon::PKTCOUNT, Hexagon::UTIMER, 
  };

  // CtrRegs64_and_V62Regs Bit set.
  const uint8_t CtrRegs64_and_V62RegsBits[] = {
    0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 
  };

  // CtrRegs64_with_isub_hi_in_ModRegs Register Class...
  const MCPhysReg CtrRegs64_with_isub_hi_in_ModRegs[] = {
    Hexagon::C7_6, 
  };

  // CtrRegs64_with_isub_hi_in_ModRegs Bit set.
  const uint8_t CtrRegs64_with_isub_hi_in_ModRegsBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  };

  // HvxVR Register Class...
  const MCPhysReg HvxVR[] = {
    Hexagon::V0, Hexagon::V1, Hexagon::V2, Hexagon::V3, Hexagon::V4, Hexagon::V5, Hexagon::V6, Hexagon::V7, Hexagon::V8, Hexagon::V9, Hexagon::V10, Hexagon::V11, Hexagon::V12, Hexagon::V13, Hexagon::V14, Hexagon::V15, Hexagon::V16, Hexagon::V17, Hexagon::V18, Hexagon::V19, Hexagon::V20, Hexagon::V21, Hexagon::V22, Hexagon::V23, Hexagon::V24, Hexagon::V25, Hexagon::V26, Hexagon::V27, Hexagon::V28, Hexagon::V29, Hexagon::V30, Hexagon::V31, Hexagon::VTMP, 
  };

  // HvxVR Bit set.
  const uint8_t HvxVRBits[] = {
    0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0xff, 0xff, 0x1f, 
  };

  // HvxQR Register Class...
  const MCPhysReg HvxQR[] = {
    Hexagon::Q0, Hexagon::Q1, Hexagon::Q2, Hexagon::Q3, 
  };

  // HvxQR Bit set.
  const uint8_t HvxQRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 
  };

  // HvxVR_and_V65Regs Register Class...
  const MCPhysReg HvxVR_and_V65Regs[] = {
    Hexagon::VTMP, 
  };

  // HvxVR_and_V65Regs Bit set.
  const uint8_t HvxVR_and_V65RegsBits[] = {
    0x00, 0x00, 0x04, 
  };

  // HvxWR Register Class...
  const MCPhysReg HvxWR[] = {
    Hexagon::W0, Hexagon::W1, Hexagon::W2, Hexagon::W3, Hexagon::W4, Hexagon::W5, Hexagon::W6, Hexagon::W7, Hexagon::W8, Hexagon::W9, Hexagon::W10, Hexagon::W11, Hexagon::W12, Hexagon::W13, Hexagon::W14, Hexagon::W15, 
  };

  // HvxWR Bit set.
  const uint8_t HvxWRBits[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x1f, 
  };

} // end anonymous namespace

extern const char HexagonRegClassStrings[] = {
  /* 0 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '6', '4', 0,
  /* 10 */ 'D', 'o', 'u', 'b', 'l', 'e', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 'i', 's', 'u', 'b', '_', 'h', 'i', '_', 'i', 'n', '_', 'I', 'n', 't', 'R', 'e', 'g', 's', 'L', 'o', 'w', '8', 0,
  /* 49 */ 'H', 'v', 'x', 'Q', 'R', 0,
  /* 55 */ 'H', 'v', 'x', 'V', 'R', 0,
  /* 61 */ 'H', 'v', 'x', 'W', 'R', 0,
  /* 67 */ 'V', '6', '2', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 'i', 's', 'u', 'b', '_', 'h', 'i', 0,
  /* 88 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '6', '4', '_', 'a', 'n', 'd', '_', 'V', '6', '2', 'R', 'e', 'g', 's', 0,
  /* 110 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '_', 'a', 'n', 'd', '_', 'V', '6', '2', 'R', 'e', 'g', 's', 0,
  /* 130 */ 'H', 'v', 'x', 'V', 'R', '_', 'a', 'n', 'd', '_', 'V', '6', '5', 'R', 'e', 'g', 's', 0,
  /* 148 */ 'G', 'e', 'n', 'e', 'r', 'a', 'l', 'D', 'o', 'u', 'b', 'l', 'e', 'L', 'o', 'w', '8', 'R', 'e', 'g', 's', 0,
  /* 170 */ 'G', 'e', 'n', 'e', 'r', 'a', 'l', 'S', 'u', 'b', 'R', 'e', 'g', 's', 0,
  /* 185 */ 'P', 'r', 'e', 'd', 'R', 'e', 'g', 's', 0,
  /* 194 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '6', '4', '_', 'w', 'i', 't', 'h', '_', 'i', 's', 'u', 'b', '_', 'h', 'i', '_', 'i', 'n', '_', 'M', 'o', 'd', 'R', 'e', 'g', 's', 0,
  /* 228 */ 'D', 'o', 'u', 'b', 'l', 'e', 'R', 'e', 'g', 's', 0,
  /* 239 */ 'C', 't', 'r', 'R', 'e', 'g', 's', 0,
  /* 247 */ 'I', 'n', 't', 'R', 'e', 'g', 's', 0,
  /* 255 */ 'U', 's', 'r', 'B', 'i', 't', 's', 0,
  /* 263 */ 'C', 't', 'r', 'R', 'e', 'g', 's', '_', 'w', 'i', 't', 'h', '_', 's', 'u', 'b', 'r', 'e', 'g', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w', 0,
};

extern const MCRegisterClass HexagonMCRegisterClasses[] = {
  { UsrBits, UsrBitsBits, 255, 1, sizeof(UsrBitsBits), Hexagon::UsrBitsRegClassID, 0, 1, false },
  { IntRegs, IntRegsBits, 247, 32, sizeof(IntRegsBits), Hexagon::IntRegsRegClassID, 4, 1, true },
  { CtrRegs, CtrRegsBits, 239, 23, sizeof(CtrRegsBits), Hexagon::CtrRegsRegClassID, 4, 1, false },
  { GeneralSubRegs, GeneralSubRegsBits, 170, 16, sizeof(GeneralSubRegsBits), Hexagon::GeneralSubRegsRegClassID, 4, 1, true },
  { V62Regs, V62RegsBits, 102, 9, sizeof(V62RegsBits), Hexagon::V62RegsRegClassID, 4, 1, false },
  { IntRegsLow8, IntRegsLow8Bits, 37, 8, sizeof(IntRegsLow8Bits), Hexagon::IntRegsLow8RegClassID, 4, 1, true },
  { CtrRegs_and_V62Regs, CtrRegs_and_V62RegsBits, 110, 6, sizeof(CtrRegs_and_V62RegsBits), Hexagon::CtrRegs_and_V62RegsRegClassID, 4, 1, false },
  { PredRegs, PredRegsBits, 185, 4, sizeof(PredRegsBits), Hexagon::PredRegsRegClassID, 4, 1, true },
  { V62Regs_with_isub_hi, V62Regs_with_isub_hiBits, 67, 3, sizeof(V62Regs_with_isub_hiBits), Hexagon::V62Regs_with_isub_hiRegClassID, 4, 1, false },
  { ModRegs, ModRegsBits, 220, 2, sizeof(ModRegsBits), Hexagon::ModRegsRegClassID, 4, 1, true },
  { CtrRegs_with_subreg_overflow, CtrRegs_with_subreg_overflowBits, 263, 1, sizeof(CtrRegs_with_subreg_overflowBits), Hexagon::CtrRegs_with_subreg_overflowRegClassID, 4, 1, false },
  { V65Regs, V65RegsBits, 140, 1, sizeof(V65RegsBits), Hexagon::V65RegsRegClassID, 4, 1, false },
  { DoubleRegs, DoubleRegsBits, 228, 16, sizeof(DoubleRegsBits), Hexagon::DoubleRegsRegClassID, 8, 1, true },
  { CtrRegs64, CtrRegs64Bits, 0, 11, sizeof(CtrRegs64Bits), Hexagon::CtrRegs64RegClassID, 8, 1, false },
  { GeneralDoubleLow8Regs, GeneralDoubleLow8RegsBits, 148, 8, sizeof(GeneralDoubleLow8RegsBits), Hexagon::GeneralDoubleLow8RegsRegClassID, 8, 1, true },
  { DoubleRegs_with_isub_hi_in_IntRegsLow8, DoubleRegs_with_isub_hi_in_IntRegsLow8Bits, 10, 4, sizeof(DoubleRegs_with_isub_hi_in_IntRegsLow8Bits), Hexagon::DoubleRegs_with_isub_hi_in_IntRegsLow8RegClassID, 8, 1, true },
  { CtrRegs64_and_V62Regs, CtrRegs64_and_V62RegsBits, 88, 3, sizeof(CtrRegs64_and_V62RegsBits), Hexagon::CtrRegs64_and_V62RegsRegClassID, 8, 1, false },
  { CtrRegs64_with_isub_hi_in_ModRegs, CtrRegs64_with_isub_hi_in_ModRegsBits, 194, 1, sizeof(CtrRegs64_with_isub_hi_in_ModRegsBits), Hexagon::CtrRegs64_with_isub_hi_in_ModRegsRegClassID, 8, 1, false },
  { HvxVR, HvxVRBits, 55, 33, sizeof(HvxVRBits), Hexagon::HvxVRRegClassID, 0, 1, true },
  { HvxQR, HvxQRBits, 49, 4, sizeof(HvxQRBits), Hexagon::HvxQRRegClassID, 0, 1, true },
  { HvxVR_and_V65Regs, HvxVR_and_V65RegsBits, 130, 1, sizeof(HvxVR_and_V65RegsBits), Hexagon::HvxVR_and_V65RegsRegClassID, 0, 1, true },
  { HvxWR, HvxWRBits, 61, 16, sizeof(HvxWRBits), Hexagon::HvxWRRegClassID, 0, 1, true },
};

// Hexagon Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0Dwarf2L[] = {
  { 0U, Hexagon::R0 },
  { 1U, Hexagon::R1 },
  { 2U, Hexagon::R2 },
  { 3U, Hexagon::R3 },
  { 4U, Hexagon::R4 },
  { 5U, Hexagon::R5 },
  { 6U, Hexagon::R6 },
  { 7U, Hexagon::R7 },
  { 8U, Hexagon::R8 },
  { 9U, Hexagon::R9 },
  { 10U, Hexagon::R10 },
  { 11U, Hexagon::R11 },
  { 12U, Hexagon::R12 },
  { 13U, Hexagon::R13 },
  { 14U, Hexagon::R14 },
  { 15U, Hexagon::R15 },
  { 16U, Hexagon::R16 },
  { 17U, Hexagon::R17 },
  { 18U, Hexagon::R18 },
  { 19U, Hexagon::R19 },
  { 20U, Hexagon::R20 },
  { 21U, Hexagon::R21 },
  { 22U, Hexagon::R22 },
  { 23U, Hexagon::R23 },
  { 24U, Hexagon::R24 },
  { 25U, Hexagon::R25 },
  { 26U, Hexagon::R26 },
  { 27U, Hexagon::R27 },
  { 28U, Hexagon::R28 },
  { 29U, Hexagon::R29 },
  { 30U, Hexagon::R30 },
  { 31U, Hexagon::R31 },
  { 32U, Hexagon::D0 },
  { 34U, Hexagon::D1 },
  { 36U, Hexagon::D2 },
  { 38U, Hexagon::D3 },
  { 40U, Hexagon::D4 },
  { 42U, Hexagon::D5 },
  { 44U, Hexagon::D6 },
  { 46U, Hexagon::D7 },
  { 48U, Hexagon::D8 },
  { 50U, Hexagon::D9 },
  { 52U, Hexagon::D10 },
  { 54U, Hexagon::D11 },
  { 56U, Hexagon::D12 },
  { 58U, Hexagon::D13 },
  { 60U, Hexagon::D14 },
  { 62U, Hexagon::D15 },
  { 63U, Hexagon::P0 },
  { 64U, Hexagon::P1 },
  { 65U, Hexagon::P2 },
  { 66U, Hexagon::P3 },
  { 67U, Hexagon::C1_0 },
  { 68U, Hexagon::LC0 },
  { 69U, Hexagon::C3_2 },
  { 70U, Hexagon::LC1 },
  { 71U, Hexagon::P3_0 },
  { 72U, Hexagon::C7_6 },
  { 73U, Hexagon::M0 },
  { 74U, Hexagon::C9_8 },
  { 75U, Hexagon::C8 },
  { 76U, Hexagon::C11_10 },
  { 77U, Hexagon::UGP },
  { 78U, Hexagon::GP },
  { 79U, Hexagon::CS0 },
  { 80U, Hexagon::CS1 },
  { 81U, Hexagon::UPCYCLELO },
  { 82U, Hexagon::UPCYCLEHI },
  { 83U, Hexagon::C17_16 },
  { 84U, Hexagon::FRAMEKEY },
  { 85U, Hexagon::PKTCOUNTLO },
  { 86U, Hexagon::PKTCOUNTHI },
  { 97U, Hexagon::UTIMERLO },
  { 98U, Hexagon::UTIMERHI },
  { 99U, Hexagon::W0 },
  { 100U, Hexagon::V1 },
  { 101U, Hexagon::W1 },
  { 102U, Hexagon::V3 },
  { 103U, Hexagon::W2 },
  { 104U, Hexagon::V5 },
  { 105U, Hexagon::W3 },
  { 106U, Hexagon::V7 },
  { 107U, Hexagon::W4 },
  { 108U, Hexagon::V9 },
  { 109U, Hexagon::W5 },
  { 110U, Hexagon::V11 },
  { 111U, Hexagon::W6 },
  { 112U, Hexagon::V13 },
  { 113U, Hexagon::W7 },
  { 114U, Hexagon::V15 },
  { 115U, Hexagon::W8 },
  { 116U, Hexagon::V17 },
  { 117U, Hexagon::W9 },
  { 118U, Hexagon::V19 },
  { 119U, Hexagon::W10 },
  { 120U, Hexagon::V21 },
  { 121U, Hexagon::W11 },
  { 122U, Hexagon::V23 },
  { 123U, Hexagon::W12 },
  { 124U, Hexagon::V25 },
  { 125U, Hexagon::W13 },
  { 126U, Hexagon::V27 },
  { 127U, Hexagon::W14 },
  { 128U, Hexagon::V29 },
  { 129U, Hexagon::W15 },
  { 130U, Hexagon::V31 },
  { 131U, Hexagon::Q0 },
  { 132U, Hexagon::Q1 },
  { 133U, Hexagon::Q2 },
  { 134U, Hexagon::Q3 },
};
extern const unsigned HexagonDwarfFlavour0Dwarf2LSize = array_lengthof(HexagonDwarfFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0Dwarf2L[] = {
  { 0U, Hexagon::R0 },
  { 1U, Hexagon::R1 },
  { 2U, Hexagon::R2 },
  { 3U, Hexagon::R3 },
  { 4U, Hexagon::R4 },
  { 5U, Hexagon::R5 },
  { 6U, Hexagon::R6 },
  { 7U, Hexagon::R7 },
  { 8U, Hexagon::R8 },
  { 9U, Hexagon::R9 },
  { 10U, Hexagon::R10 },
  { 11U, Hexagon::R11 },
  { 12U, Hexagon::R12 },
  { 13U, Hexagon::R13 },
  { 14U, Hexagon::R14 },
  { 15U, Hexagon::R15 },
  { 16U, Hexagon::R16 },
  { 17U, Hexagon::R17 },
  { 18U, Hexagon::R18 },
  { 19U, Hexagon::R19 },
  { 20U, Hexagon::R20 },
  { 21U, Hexagon::R21 },
  { 22U, Hexagon::R22 },
  { 23U, Hexagon::R23 },
  { 24U, Hexagon::R24 },
  { 25U, Hexagon::R25 },
  { 26U, Hexagon::R26 },
  { 27U, Hexagon::R27 },
  { 28U, Hexagon::R28 },
  { 29U, Hexagon::R29 },
  { 30U, Hexagon::R30 },
  { 31U, Hexagon::R31 },
  { 32U, Hexagon::D0 },
  { 34U, Hexagon::D1 },
  { 36U, Hexagon::D2 },
  { 38U, Hexagon::D3 },
  { 40U, Hexagon::D4 },
  { 42U, Hexagon::D5 },
  { 44U, Hexagon::D6 },
  { 46U, Hexagon::D7 },
  { 48U, Hexagon::D8 },
  { 50U, Hexagon::D9 },
  { 52U, Hexagon::D10 },
  { 54U, Hexagon::D11 },
  { 56U, Hexagon::D12 },
  { 58U, Hexagon::D13 },
  { 60U, Hexagon::D14 },
  { 62U, Hexagon::D15 },
  { 63U, Hexagon::P0 },
  { 64U, Hexagon::P1 },
  { 65U, Hexagon::P2 },
  { 66U, Hexagon::P3 },
  { 67U, Hexagon::C1_0 },
  { 68U, Hexagon::LC0 },
  { 69U, Hexagon::C3_2 },
  { 70U, Hexagon::LC1 },
  { 71U, Hexagon::P3_0 },
  { 72U, Hexagon::C7_6 },
  { 73U, Hexagon::M0 },
  { 74U, Hexagon::C9_8 },
  { 75U, Hexagon::C8 },
  { 76U, Hexagon::C11_10 },
  { 77U, Hexagon::UGP },
  { 78U, Hexagon::GP },
  { 79U, Hexagon::CS0 },
  { 80U, Hexagon::CS1 },
  { 81U, Hexagon::UPCYCLELO },
  { 82U, Hexagon::UPCYCLEHI },
  { 83U, Hexagon::C17_16 },
  { 84U, Hexagon::FRAMEKEY },
  { 85U, Hexagon::PKTCOUNTLO },
  { 86U, Hexagon::PKTCOUNTHI },
  { 97U, Hexagon::UTIMERLO },
  { 98U, Hexagon::UTIMERHI },
  { 99U, Hexagon::W0 },
  { 100U, Hexagon::V1 },
  { 101U, Hexagon::W1 },
  { 102U, Hexagon::V3 },
  { 103U, Hexagon::W2 },
  { 104U, Hexagon::V5 },
  { 105U, Hexagon::W3 },
  { 106U, Hexagon::V7 },
  { 107U, Hexagon::W4 },
  { 108U, Hexagon::V9 },
  { 109U, Hexagon::W5 },
  { 110U, Hexagon::V11 },
  { 111U, Hexagon::W6 },
  { 112U, Hexagon::V13 },
  { 113U, Hexagon::W7 },
  { 114U, Hexagon::V15 },
  { 115U, Hexagon::W8 },
  { 116U, Hexagon::V17 },
  { 117U, Hexagon::W9 },
  { 118U, Hexagon::V19 },
  { 119U, Hexagon::W10 },
  { 120U, Hexagon::V21 },
  { 121U, Hexagon::W11 },
  { 122U, Hexagon::V23 },
  { 123U, Hexagon::W12 },
  { 124U, Hexagon::V25 },
  { 125U, Hexagon::W13 },
  { 126U, Hexagon::V27 },
  { 127U, Hexagon::W14 },
  { 128U, Hexagon::V29 },
  { 129U, Hexagon::W15 },
  { 130U, Hexagon::V31 },
  { 131U, Hexagon::Q0 },
  { 132U, Hexagon::Q1 },
  { 133U, Hexagon::Q2 },
  { 134U, Hexagon::Q3 },
};
extern const unsigned HexagonEHFlavour0Dwarf2LSize = array_lengthof(HexagonEHFlavour0Dwarf2L);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0L2Dwarf[] = {
  { Hexagon::CS, 78U },
  { Hexagon::FRAMEKEY, 84U },
  { Hexagon::FRAMELIMIT, 83U },
  { Hexagon::GP, 78U },
  { Hexagon::PC, 76U },
  { Hexagon::PKTCOUNT, 85U },
  { Hexagon::PKTCOUNTHI, 86U },
  { Hexagon::PKTCOUNTLO, 85U },
  { Hexagon::UGP, 77U },
  { Hexagon::UPCYCLE, 80U },
  { Hexagon::UPCYCLEHI, 82U },
  { Hexagon::UPCYCLELO, 81U },
  { Hexagon::USR, 75U },
  { Hexagon::UTIMER, 97U },
  { Hexagon::UTIMERHI, 98U },
  { Hexagon::UTIMERLO, 97U },
  { Hexagon::VTMP, 131U },
  { Hexagon::C5, 72U },
  { Hexagon::C8, 75U },
  { Hexagon::CS0, 79U },
  { Hexagon::CS1, 80U },
  { Hexagon::D0, 32U },
  { Hexagon::D1, 34U },
  { Hexagon::D2, 36U },
  { Hexagon::D3, 38U },
  { Hexagon::D4, 40U },
  { Hexagon::D5, 42U },
  { Hexagon::D6, 44U },
  { Hexagon::D7, 46U },
  { Hexagon::D8, 48U },
  { Hexagon::D9, 50U },
  { Hexagon::D10, 52U },
  { Hexagon::D11, 54U },
  { Hexagon::D12, 56U },
  { Hexagon::D13, 58U },
  { Hexagon::D14, 60U },
  { Hexagon::D15, 62U },
  { Hexagon::LC0, 68U },
  { Hexagon::LC1, 70U },
  { Hexagon::M0, 73U },
  { Hexagon::M1, 74U },
  { Hexagon::P0, 63U },
  { Hexagon::P1, 64U },
  { Hexagon::P2, 65U },
  { Hexagon::P3, 66U },
  { Hexagon::Q0, 131U },
  { Hexagon::Q1, 132U },
  { Hexagon::Q2, 133U },
  { Hexagon::Q3, 134U },
  { Hexagon::R0, 0U },
  { Hexagon::R1, 1U },
  { Hexagon::R2, 2U },
  { Hexagon::R3, 3U },
  { Hexagon::R4, 4U },
  { Hexagon::R5, 5U },
  { Hexagon::R6, 6U },
  { Hexagon::R7, 7U },
  { Hexagon::R8, 8U },
  { Hexagon::R9, 9U },
  { Hexagon::R10, 10U },
  { Hexagon::R11, 11U },
  { Hexagon::R12, 12U },
  { Hexagon::R13, 13U },
  { Hexagon::R14, 14U },
  { Hexagon::R15, 15U },
  { Hexagon::R16, 16U },
  { Hexagon::R17, 17U },
  { Hexagon::R18, 18U },
  { Hexagon::R19, 19U },
  { Hexagon::R20, 20U },
  { Hexagon::R21, 21U },
  { Hexagon::R22, 22U },
  { Hexagon::R23, 23U },
  { Hexagon::R24, 24U },
  { Hexagon::R25, 25U },
  { Hexagon::R26, 26U },
  { Hexagon::R27, 27U },
  { Hexagon::R28, 28U },
  { Hexagon::R29, 29U },
  { Hexagon::R30, 30U },
  { Hexagon::R31, 31U },
  { Hexagon::SA0, 67U },
  { Hexagon::SA1, 69U },
  { Hexagon::V0, 99U },
  { Hexagon::V1, 100U },
  { Hexagon::V2, 101U },
  { Hexagon::V3, 102U },
  { Hexagon::V4, 103U },
  { Hexagon::V5, 104U },
  { Hexagon::V6, 105U },
  { Hexagon::V7, 106U },
  { Hexagon::V8, 107U },
  { Hexagon::V9, 108U },
  { Hexagon::V10, 109U },
  { Hexagon::V11, 110U },
  { Hexagon::V12, 111U },
  { Hexagon::V13, 112U },
  { Hexagon::V14, 113U },
  { Hexagon::V15, 114U },
  { Hexagon::V16, 115U },
  { Hexagon::V17, 116U },
  { Hexagon::V18, 117U },
  { Hexagon::V19, 118U },
  { Hexagon::V20, 119U },
  { Hexagon::V21, 120U },
  { Hexagon::V22, 121U },
  { Hexagon::V23, 122U },
  { Hexagon::V24, 123U },
  { Hexagon::V25, 124U },
  { Hexagon::V26, 125U },
  { Hexagon::V27, 126U },
  { Hexagon::V28, 127U },
  { Hexagon::V29, 128U },
  { Hexagon::V30, 129U },
  { Hexagon::V31, 130U },
  { Hexagon::W0, 99U },
  { Hexagon::W1, 101U },
  { Hexagon::W2, 103U },
  { Hexagon::W3, 105U },
  { Hexagon::W4, 107U },
  { Hexagon::W5, 109U },
  { Hexagon::W6, 111U },
  { Hexagon::W7, 113U },
  { Hexagon::W8, 115U },
  { Hexagon::W9, 117U },
  { Hexagon::W10, 119U },
  { Hexagon::W11, 121U },
  { Hexagon::W12, 123U },
  { Hexagon::W13, 125U },
  { Hexagon::W14, 127U },
  { Hexagon::W15, 129U },
  { Hexagon::C1_0, 67U },
  { Hexagon::C3_2, 69U },
  { Hexagon::C5_4, 71U },
  { Hexagon::C7_6, 72U },
  { Hexagon::C9_8, 74U },
  { Hexagon::C11_10, 76U },
  { Hexagon::C17_16, 83U },
  { Hexagon::P3_0, 71U },
};
extern const unsigned HexagonDwarfFlavour0L2DwarfSize = array_lengthof(HexagonDwarfFlavour0L2Dwarf);

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0L2Dwarf[] = {
  { Hexagon::CS, 78U },
  { Hexagon::FRAMEKEY, 84U },
  { Hexagon::FRAMELIMIT, 83U },
  { Hexagon::GP, 78U },
  { Hexagon::PC, 76U },
  { Hexagon::PKTCOUNT, 85U },
  { Hexagon::PKTCOUNTHI, 86U },
  { Hexagon::PKTCOUNTLO, 85U },
  { Hexagon::UGP, 77U },
  { Hexagon::UPCYCLE, 80U },
  { Hexagon::UPCYCLEHI, 82U },
  { Hexagon::UPCYCLELO, 81U },
  { Hexagon::USR, 75U },
  { Hexagon::UTIMER, 97U },
  { Hexagon::UTIMERHI, 98U },
  { Hexagon::UTIMERLO, 97U },
  { Hexagon::VTMP, 131U },
  { Hexagon::C5, 72U },
  { Hexagon::C8, 75U },
  { Hexagon::CS0, 79U },
  { Hexagon::CS1, 80U },
  { Hexagon::D0, 32U },
  { Hexagon::D1, 34U },
  { Hexagon::D2, 36U },
  { Hexagon::D3, 38U },
  { Hexagon::D4, 40U },
  { Hexagon::D5, 42U },
  { Hexagon::D6, 44U },
  { Hexagon::D7, 46U },
  { Hexagon::D8, 48U },
  { Hexagon::D9, 50U },
  { Hexagon::D10, 52U },
  { Hexagon::D11, 54U },
  { Hexagon::D12, 56U },
  { Hexagon::D13, 58U },
  { Hexagon::D14, 60U },
  { Hexagon::D15, 62U },
  { Hexagon::LC0, 68U },
  { Hexagon::LC1, 70U },
  { Hexagon::M0, 73U },
  { Hexagon::M1, 74U },
  { Hexagon::P0, 63U },
  { Hexagon::P1, 64U },
  { Hexagon::P2, 65U },
  { Hexagon::P3, 66U },
  { Hexagon::Q0, 131U },
  { Hexagon::Q1, 132U },
  { Hexagon::Q2, 133U },
  { Hexagon::Q3, 134U },
  { Hexagon::R0, 0U },
  { Hexagon::R1, 1U },
  { Hexagon::R2, 2U },
  { Hexagon::R3, 3U },
  { Hexagon::R4, 4U },
  { Hexagon::R5, 5U },
  { Hexagon::R6, 6U },
  { Hexagon::R7, 7U },
  { Hexagon::R8, 8U },
  { Hexagon::R9, 9U },
  { Hexagon::R10, 10U },
  { Hexagon::R11, 11U },
  { Hexagon::R12, 12U },
  { Hexagon::R13, 13U },
  { Hexagon::R14, 14U },
  { Hexagon::R15, 15U },
  { Hexagon::R16, 16U },
  { Hexagon::R17, 17U },
  { Hexagon::R18, 18U },
  { Hexagon::R19, 19U },
  { Hexagon::R20, 20U },
  { Hexagon::R21, 21U },
  { Hexagon::R22, 22U },
  { Hexagon::R23, 23U },
  { Hexagon::R24, 24U },
  { Hexagon::R25, 25U },
  { Hexagon::R26, 26U },
  { Hexagon::R27, 27U },
  { Hexagon::R28, 28U },
  { Hexagon::R29, 29U },
  { Hexagon::R30, 30U },
  { Hexagon::R31, 31U },
  { Hexagon::SA0, 67U },
  { Hexagon::SA1, 69U },
  { Hexagon::V0, 99U },
  { Hexagon::V1, 100U },
  { Hexagon::V2, 101U },
  { Hexagon::V3, 102U },
  { Hexagon::V4, 103U },
  { Hexagon::V5, 104U },
  { Hexagon::V6, 105U },
  { Hexagon::V7, 106U },
  { Hexagon::V8, 107U },
  { Hexagon::V9, 108U },
  { Hexagon::V10, 109U },
  { Hexagon::V11, 110U },
  { Hexagon::V12, 111U },
  { Hexagon::V13, 112U },
  { Hexagon::V14, 113U },
  { Hexagon::V15, 114U },
  { Hexagon::V16, 115U },
  { Hexagon::V17, 116U },
  { Hexagon::V18, 117U },
  { Hexagon::V19, 118U },
  { Hexagon::V20, 119U },
  { Hexagon::V21, 120U },
  { Hexagon::V22, 121U },
  { Hexagon::V23, 122U },
  { Hexagon::V24, 123U },
  { Hexagon::V25, 124U },
  { Hexagon::V26, 125U },
  { Hexagon::V27, 126U },
  { Hexagon::V28, 127U },
  { Hexagon::V29, 128U },
  { Hexagon::V30, 129U },
  { Hexagon::V31, 130U },
  { Hexagon::W0, 99U },
  { Hexagon::W1, 101U },
  { Hexagon::W2, 103U },
  { Hexagon::W3, 105U },
  { Hexagon::W4, 107U },
  { Hexagon::W5, 109U },
  { Hexagon::W6, 111U },
  { Hexagon::W7, 113U },
  { Hexagon::W8, 115U },
  { Hexagon::W9, 117U },
  { Hexagon::W10, 119U },
  { Hexagon::W11, 121U },
  { Hexagon::W12, 123U },
  { Hexagon::W13, 125U },
  { Hexagon::W14, 127U },
  { Hexagon::W15, 129U },
  { Hexagon::C1_0, 67U },
  { Hexagon::C3_2, 69U },
  { Hexagon::C5_4, 71U },
  { Hexagon::C7_6, 72U },
  { Hexagon::C9_8, 74U },
  { Hexagon::C11_10, 76U },
  { Hexagon::C17_16, 83U },
  { Hexagon::P3_0, 71U },
};
extern const unsigned HexagonEHFlavour0L2DwarfSize = array_lengthof(HexagonEHFlavour0L2Dwarf);

extern const uint16_t HexagonRegEncodingTable[] = {
  0,
  12,
  17,
  16,
  11,
  9,
  18,
  19,
  18,
  10,
  14,
  15,
  14,
  8,
  0,
  30,
  31,
  30,
  0,
  5,
  8,
  12,
  13,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  1,
  3,
  6,
  7,
  0,
  1,
  2,
  3,
  0,
  1,
  2,
  3,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  2,
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
  15,
  16,
  17,
  18,
  19,
  20,
  21,
  22,
  23,
  24,
  25,
  26,
  27,
  28,
  29,
  30,
  31,
  0,
  2,
  4,
  6,
  8,
  10,
  12,
  14,
  16,
  18,
  20,
  22,
  24,
  26,
  28,
  30,
  0,
  2,
  4,
  6,
  8,
  10,
  16,
  4,
};
static inline void InitHexagonMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0, unsigned PC = 0) {
  RI->InitMCRegisterInfo(HexagonRegDesc, 141, RA, PC, HexagonMCRegisterClasses, 22, HexagonRegUnitRoots, 95, HexagonRegDiffLists, HexagonLaneMaskLists, HexagonRegStrings, HexagonRegClassStrings, HexagonSubRegIdxLists, 6,
HexagonSubRegIdxRanges, HexagonRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(HexagonDwarfFlavour0Dwarf2L, HexagonDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(HexagonEHFlavour0Dwarf2L, HexagonEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(HexagonDwarfFlavour0L2Dwarf, HexagonDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(HexagonEHFlavour0L2Dwarf, HexagonEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // end namespace llvm

#endif // GET_REGINFO_MC_DESC

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Register Information Header Fragment                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER

#include "llvm/CodeGen/TargetRegisterInfo.h"

namespace llvm {

class HexagonFrameLowering;

struct HexagonGenRegisterInfo : public TargetRegisterInfo {
  explicit HexagonGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0,
      unsigned PC = 0, unsigned HwMode = 0);
  unsigned composeSubRegIndicesImpl(unsigned, unsigned) const override;
  LaneBitmask composeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  LaneBitmask reverseComposeSubRegIndexLaneMaskImpl(unsigned, LaneBitmask) const override;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const override;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const override;
  unsigned getRegUnitWeight(unsigned RegUnit) const override;
  unsigned getNumRegPressureSets() const override;
  const char *getRegPressureSetName(unsigned Idx) const override;
  unsigned getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const override;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const override;
  const int *getRegUnitPressureSets(unsigned RegUnit) const override;
  ArrayRef<const char *> getRegMaskNames() const override;
  ArrayRef<const uint32_t *> getRegMasks() const override;
  /// Devirtualized TargetFrameLowering.
  static const HexagonFrameLowering *getFrameLowering(
      const MachineFunction &MF);
};

namespace Hexagon { // Register classes
  extern const TargetRegisterClass UsrBitsRegClass;
  extern const TargetRegisterClass IntRegsRegClass;
  extern const TargetRegisterClass CtrRegsRegClass;
  extern const TargetRegisterClass GeneralSubRegsRegClass;
  extern const TargetRegisterClass V62RegsRegClass;
  extern const TargetRegisterClass IntRegsLow8RegClass;
  extern const TargetRegisterClass CtrRegs_and_V62RegsRegClass;
  extern const TargetRegisterClass PredRegsRegClass;
  extern const TargetRegisterClass V62Regs_with_isub_hiRegClass;
  extern const TargetRegisterClass ModRegsRegClass;
  extern const TargetRegisterClass CtrRegs_with_subreg_overflowRegClass;
  extern const TargetRegisterClass V65RegsRegClass;
  extern const TargetRegisterClass DoubleRegsRegClass;
  extern const TargetRegisterClass CtrRegs64RegClass;
  extern const TargetRegisterClass GeneralDoubleLow8RegsRegClass;
  extern const TargetRegisterClass DoubleRegs_with_isub_hi_in_IntRegsLow8RegClass;
  extern const TargetRegisterClass CtrRegs64_and_V62RegsRegClass;
  extern const TargetRegisterClass CtrRegs64_with_isub_hi_in_ModRegsRegClass;
  extern const TargetRegisterClass HvxVRRegClass;
  extern const TargetRegisterClass HvxQRRegClass;
  extern const TargetRegisterClass HvxVR_and_V65RegsRegClass;
  extern const TargetRegisterClass HvxWRRegClass;
} // end namespace Hexagon

} // end namespace llvm

#endif // GET_REGINFO_HEADER

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Register and Register Classes Information                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC

namespace llvm {

extern const MCRegisterClass HexagonMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i1, MVT::Other,
  /* 2 */ MVT::i1, MVT::v2i1, MVT::v4i1, MVT::v8i1, MVT::v4i8, MVT::v2i16, MVT::i32, MVT::Other,
  /* 10 */ MVT::i64, MVT::Other,
  /* 12 */ MVT::v512i1, MVT::v64i1, MVT::v32i1, MVT::v16i1, MVT::Other,
  /* 17 */ MVT::v1024i1, MVT::v128i1, MVT::v64i1, MVT::v32i1, MVT::Other,
  /* 22 */ MVT::i32, MVT::f32, MVT::v32i1, MVT::v4i8, MVT::v2i16, MVT::Other,
  /* 28 */ MVT::i64, MVT::f64, MVT::v64i1, MVT::v8i8, MVT::v4i16, MVT::v2i32, MVT::Other,
  /* 35 */ MVT::v64i8, MVT::v32i16, MVT::v16i32, MVT::Other,
  /* 39 */ MVT::v128i8, MVT::v64i16, MVT::v32i32, MVT::Other,
  /* 43 */ MVT::v256i8, MVT::v128i16, MVT::v64i32, MVT::Other,
};

static const char *const SubRegIndexNameTable[] = { "isub_hi", "isub_lo", "subreg_overflow", "vsub_hi", "vsub_lo", "" };


static const LaneBitmask SubRegIndexLaneMaskTable[] = {
  LaneBitmask::getAll(),
  LaneBitmask(0x00000001), // isub_hi
  LaneBitmask(0x00000002), // isub_lo
  LaneBitmask(0x00000004), // subreg_overflow
  LaneBitmask(0x00000008), // vsub_hi
  LaneBitmask(0x00000010), // vsub_lo
 };



static const TargetRegisterInfo::RegClassInfo RegClassInfos[] = {
  // Mode = 0 (Default)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+28 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 512, 512, 512, VTLists+35 },    // HvxVR
  { 512, 512, 512, VTLists+12 },    // HvxQR
  { 512, 512, 512, VTLists+35 },    // HvxVR_and_V65Regs
  { 1024, 1024, 1024, VTLists+39 },    // HvxWR
  // Mode = 1 (Hvx128)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+28 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 1024, 1024, 1024, VTLists+39 },    // HvxVR
  { 1024, 1024, 1024, VTLists+17 },    // HvxQR
  { 1024, 1024, 1024, VTLists+39 },    // HvxVR_and_V65Regs
  { 2048, 2048, 2048, VTLists+43 },    // HvxWR
  // Mode = 2 (Hvx128old)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+28 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 512, 512, 512, VTLists+39 },    // HvxVR
  { 512, 512, 512, VTLists+17 },    // HvxQR
  { 512, 512, 512, VTLists+39 },    // HvxVR_and_V65Regs
  { 1024, 1024, 1024, VTLists+43 },    // HvxWR
  // Mode = 3 (Hvx64)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+28 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 512, 512, 512, VTLists+35 },    // HvxVR
  { 512, 512, 512, VTLists+12 },    // HvxQR
  { 512, 512, 512, VTLists+35 },    // HvxVR_and_V65Regs
  { 1024, 1024, 1024, VTLists+39 },    // HvxWR
  // Mode = 4 (Hvx64old)
  { 1, 1, 0, VTLists+0 },    // UsrBits
  { 32, 32, 32, VTLists+22 },    // IntRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs
  { 32, 32, 32, VTLists+8 },    // GeneralSubRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs
  { 32, 32, 32, VTLists+8 },    // IntRegsLow8
  { 32, 32, 32, VTLists+8 },    // CtrRegs_and_V62Regs
  { 32, 32, 32, VTLists+2 },    // PredRegs
  { 32, 32, 32, VTLists+8 },    // V62Regs_with_isub_hi
  { 32, 32, 32, VTLists+8 },    // ModRegs
  { 32, 32, 32, VTLists+8 },    // CtrRegs_with_subreg_overflow
  { 32, 32, 32, VTLists+8 },    // V65Regs
  { 64, 64, 64, VTLists+28 },    // DoubleRegs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64
  { 64, 64, 64, VTLists+10 },    // GeneralDoubleLow8Regs
  { 64, 64, 64, VTLists+10 },    // DoubleRegs_with_isub_hi_in_IntRegsLow8
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_and_V62Regs
  { 64, 64, 64, VTLists+10 },    // CtrRegs64_with_isub_hi_in_ModRegs
  { 512, 512, 512, VTLists+35 },    // HvxVR
  { 512, 512, 512, VTLists+12 },    // HvxQR
  { 512, 512, 512, VTLists+35 },    // HvxVR_and_V65Regs
  { 1024, 1024, 1024, VTLists+39 },    // HvxWR
};

static const TargetRegisterClass *const NullRegClasses[] = { nullptr };

static const uint32_t UsrBitsSubClassMask[] = {
  0x00000001, 
  0x00000400, // subreg_overflow
};

static const uint32_t IntRegsSubClassMask[] = {
  0x0000002a, 
  0x0000d000, // isub_hi
  0x0000d000, // isub_lo
};

static const uint32_t CtrRegsSubClassMask[] = {
  0x00000644, 
  0x00032100, // isub_hi
  0x00032100, // isub_lo
};

static const uint32_t GeneralSubRegsSubClassMask[] = {
  0x00000028, 
  0x0000c000, // isub_hi
  0x0000c000, // isub_lo
};

static const uint32_t V62RegsSubClassMask[] = {
  0x00010150, 
  0x00010100, // isub_hi
  0x00010100, // isub_lo
};

static const uint32_t IntRegsLow8SubClassMask[] = {
  0x00000020, 
  0x00008000, // isub_hi
  0x00008000, // isub_lo
};

static const uint32_t CtrRegs_and_V62RegsSubClassMask[] = {
  0x00000040, 
  0x00010100, // isub_hi
  0x00010100, // isub_lo
};

static const uint32_t PredRegsSubClassMask[] = {
  0x00000080, 
};

static const uint32_t V62Regs_with_isub_hiSubClassMask[] = {
  0x00010100, 
};

static const uint32_t ModRegsSubClassMask[] = {
  0x00000200, 
  0x00020000, // isub_hi
  0x00020000, // isub_lo
};

static const uint32_t CtrRegs_with_subreg_overflowSubClassMask[] = {
  0x00000400, 
};

static const uint32_t V65RegsSubClassMask[] = {
  0x00100800, 
};

static const uint32_t DoubleRegsSubClassMask[] = {
  0x0000d000, 
};

static const uint32_t CtrRegs64SubClassMask[] = {
  0x00032000, 
};

static const uint32_t GeneralDoubleLow8RegsSubClassMask[] = {
  0x0000c000, 
};

static const uint32_t DoubleRegs_with_isub_hi_in_IntRegsLow8SubClassMask[] = {
  0x00008000, 
};

static const uint32_t CtrRegs64_and_V62RegsSubClassMask[] = {
  0x00010000, 
};

static const uint32_t CtrRegs64_with_isub_hi_in_ModRegsSubClassMask[] = {
  0x00020000, 
};

static const uint32_t HvxVRSubClassMask[] = {
  0x00140000, 
  0x00200000, // vsub_hi
  0x00200000, // vsub_lo
};

static const uint32_t HvxQRSubClassMask[] = {
  0x00080000, 
};

static const uint32_t HvxVR_and_V65RegsSubClassMask[] = {
  0x00100000, 
};

static const uint32_t HvxWRSubClassMask[] = {
  0x00200000, 
};

static const uint16_t SuperRegIdxSeqs[] = {
  /* 0 */ 1, 2, 0,
  /* 3 */ 3, 0,
  /* 5 */ 4, 5, 0,
};

static const TargetRegisterClass *const GeneralSubRegsSuperclasses[] = {
  &Hexagon::IntRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const IntRegsLow8Superclasses[] = {
  &Hexagon::IntRegsRegClass,
  &Hexagon::GeneralSubRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs_and_V62RegsSuperclasses[] = {
  &Hexagon::CtrRegsRegClass,
  &Hexagon::V62RegsRegClass,
  nullptr
};

static const TargetRegisterClass *const V62Regs_with_isub_hiSuperclasses[] = {
  &Hexagon::V62RegsRegClass,
  nullptr
};

static const TargetRegisterClass *const ModRegsSuperclasses[] = {
  &Hexagon::CtrRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs_with_subreg_overflowSuperclasses[] = {
  &Hexagon::CtrRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const GeneralDoubleLow8RegsSuperclasses[] = {
  &Hexagon::DoubleRegsRegClass,
  nullptr
};

static const TargetRegisterClass *const DoubleRegs_with_isub_hi_in_IntRegsLow8Superclasses[] = {
  &Hexagon::DoubleRegsRegClass,
  &Hexagon::GeneralDoubleLow8RegsRegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs64_and_V62RegsSuperclasses[] = {
  &Hexagon::V62RegsRegClass,
  &Hexagon::V62Regs_with_isub_hiRegClass,
  &Hexagon::CtrRegs64RegClass,
  nullptr
};

static const TargetRegisterClass *const CtrRegs64_with_isub_hi_in_ModRegsSuperclasses[] = {
  &Hexagon::CtrRegs64RegClass,
  nullptr
};

static const TargetRegisterClass *const HvxVR_and_V65RegsSuperclasses[] = {
  &Hexagon::V65RegsRegClass,
  &Hexagon::HvxVRRegClass,
  nullptr
};


namespace Hexagon {   // Register class instances
  extern const TargetRegisterClass UsrBitsRegClass = {
    &HexagonMCRegisterClasses[UsrBitsRegClassID],
    UsrBitsSubClassMask,
    SuperRegIdxSeqs + 3,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass IntRegsRegClass = {
    &HexagonMCRegisterClasses[IntRegsRegClassID],
    IntRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegsRegClassID],
    CtrRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000004),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GeneralSubRegsRegClass = {
    &HexagonMCRegisterClasses[GeneralSubRegsRegClassID],
    GeneralSubRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    GeneralSubRegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass V62RegsRegClass = {
    &HexagonMCRegisterClasses[V62RegsRegClassID],
    V62RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass IntRegsLow8RegClass = {
    &HexagonMCRegisterClasses[IntRegsLow8RegClassID],
    IntRegsLow8SubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    IntRegsLow8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs_and_V62RegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegs_and_V62RegsRegClassID],
    CtrRegs_and_V62RegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    CtrRegs_and_V62RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass PredRegsRegClass = {
    &HexagonMCRegisterClasses[PredRegsRegClassID],
    PredRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass V62Regs_with_isub_hiRegClass = {
    &HexagonMCRegisterClasses[V62Regs_with_isub_hiRegClassID],
    V62Regs_with_isub_hiSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    V62Regs_with_isub_hiSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass ModRegsRegClass = {
    &HexagonMCRegisterClasses[ModRegsRegClassID],
    ModRegsSubClassMask,
    SuperRegIdxSeqs + 0,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    ModRegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs_with_subreg_overflowRegClass = {
    &HexagonMCRegisterClasses[CtrRegs_with_subreg_overflowRegClassID],
    CtrRegs_with_subreg_overflowSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000004),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    CtrRegs_with_subreg_overflowSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass V65RegsRegClass = {
    &HexagonMCRegisterClasses[V65RegsRegClassID],
    V65RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass DoubleRegsRegClass = {
    &HexagonMCRegisterClasses[DoubleRegsRegClassID],
    DoubleRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs64RegClass = {
    &HexagonMCRegisterClasses[CtrRegs64RegClassID],
    CtrRegs64SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass GeneralDoubleLow8RegsRegClass = {
    &HexagonMCRegisterClasses[GeneralDoubleLow8RegsRegClassID],
    GeneralDoubleLow8RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    GeneralDoubleLow8RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass DoubleRegs_with_isub_hi_in_IntRegsLow8RegClass = {
    &HexagonMCRegisterClasses[DoubleRegs_with_isub_hi_in_IntRegsLow8RegClassID],
    DoubleRegs_with_isub_hi_in_IntRegsLow8SubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    DoubleRegs_with_isub_hi_in_IntRegsLow8Superclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs64_and_V62RegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegs64_and_V62RegsRegClassID],
    CtrRegs64_and_V62RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    CtrRegs64_and_V62RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass CtrRegs64_with_isub_hi_in_ModRegsRegClass = {
    &HexagonMCRegisterClasses[CtrRegs64_with_isub_hi_in_ModRegsRegClassID],
    CtrRegs64_with_isub_hi_in_ModRegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000003),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    CtrRegs64_with_isub_hi_in_ModRegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass HvxVRRegClass = {
    &HexagonMCRegisterClasses[HvxVRRegClassID],
    HvxVRSubClassMask,
    SuperRegIdxSeqs + 5,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass HvxQRRegClass = {
    &HexagonMCRegisterClasses[HvxQRRegClassID],
    HvxQRSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

  extern const TargetRegisterClass HvxVR_and_V65RegsRegClass = {
    &HexagonMCRegisterClasses[HvxVR_and_V65RegsRegClassID],
    HvxVR_and_V65RegsSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000001),
    0,
    false, /* HasDisjunctSubRegs */
    false, /* CoveredBySubRegs */
    HvxVR_and_V65RegsSuperclasses,
    nullptr
  };

  extern const TargetRegisterClass HvxWRRegClass = {
    &HexagonMCRegisterClasses[HvxWRRegClassID],
    HvxWRSubClassMask,
    SuperRegIdxSeqs + 2,
    LaneBitmask(0x00000018),
    0,
    true, /* HasDisjunctSubRegs */
    true, /* CoveredBySubRegs */
    NullRegClasses,
    nullptr
  };

} // end namespace Hexagon

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Hexagon::UsrBitsRegClass,
    &Hexagon::IntRegsRegClass,
    &Hexagon::CtrRegsRegClass,
    &Hexagon::GeneralSubRegsRegClass,
    &Hexagon::V62RegsRegClass,
    &Hexagon::IntRegsLow8RegClass,
    &Hexagon::CtrRegs_and_V62RegsRegClass,
    &Hexagon::PredRegsRegClass,
    &Hexagon::V62Regs_with_isub_hiRegClass,
    &Hexagon::ModRegsRegClass,
    &Hexagon::CtrRegs_with_subreg_overflowRegClass,
    &Hexagon::V65RegsRegClass,
    &Hexagon::DoubleRegsRegClass,
    &Hexagon::CtrRegs64RegClass,
    &Hexagon::GeneralDoubleLow8RegsRegClass,
    &Hexagon::DoubleRegs_with_isub_hi_in_IntRegsLow8RegClass,
    &Hexagon::CtrRegs64_and_V62RegsRegClass,
    &Hexagon::CtrRegs64_with_isub_hi_in_ModRegsRegClass,
    &Hexagon::HvxVRRegClass,
    &Hexagon::HvxQRRegClass,
    &Hexagon::HvxVR_and_V65RegsRegClass,
    &Hexagon::HvxWRRegClass,
  };
} // end anonymous namespace

static const TargetRegisterInfoDesc HexagonRegInfoDesc[] = { // Extra Descriptors
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, false },
  { 0, false },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, true },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
  { 0, false },
};
unsigned HexagonGenRegisterInfo::composeSubRegIndicesImpl(unsigned IdxA, unsigned IdxB) const {
  static const uint8_t Rows[1][5] = {
    { 0, 0, 0, 0, 0, },
  };

  --IdxA; assert(IdxA < 5);
  --IdxB; assert(IdxB < 5);
  return Rows[0][IdxB];
}

  struct MaskRolOp {
    LaneBitmask Mask;
    uint8_t  RotateLeft;
  };
  static const MaskRolOp LaneMaskComposeSequences[] = {
    { LaneBitmask(0xFFFFFFFF),  0 }, { LaneBitmask::getNone(), 0 },   // Sequence 0
    { LaneBitmask(0xFFFFFFFF),  1 }, { LaneBitmask::getNone(), 0 },   // Sequence 2
    { LaneBitmask(0xFFFFFFFF),  2 }, { LaneBitmask::getNone(), 0 },   // Sequence 4
    { LaneBitmask(0xFFFFFFFF),  3 }, { LaneBitmask::getNone(), 0 },   // Sequence 6
    { LaneBitmask(0xFFFFFFFF),  4 }, { LaneBitmask::getNone(), 0 }  // Sequence 8
  };
  static const MaskRolOp *const CompositeSequences[] = {
    &LaneMaskComposeSequences[0], // to isub_hi
    &LaneMaskComposeSequences[2], // to isub_lo
    &LaneMaskComposeSequences[4], // to subreg_overflow
    &LaneMaskComposeSequences[6], // to vsub_hi
    &LaneMaskComposeSequences[8] // to vsub_lo
  };

LaneBitmask HexagonGenRegisterInfo::composeSubRegIndexLaneMaskImpl(unsigned IdxA, LaneBitmask LaneMask) const {
  --IdxA; assert(IdxA < 5 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger() & Ops->Mask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M << S) | (M >> (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

LaneBitmask HexagonGenRegisterInfo::reverseComposeSubRegIndexLaneMaskImpl(unsigned IdxA,  LaneBitmask LaneMask) const {
  LaneMask &= getSubRegIndexLaneMask(IdxA);
  --IdxA; assert(IdxA < 5 && "Subregister index out of bounds");
  LaneBitmask Result;
  for (const MaskRolOp *Ops = CompositeSequences[IdxA]; Ops->Mask.any(); ++Ops) {
    LaneBitmask::Type M = LaneMask.getAsInteger();
    if (unsigned S = Ops->RotateLeft)
      Result |= LaneBitmask((M >> S) | (M << (LaneBitmask::BitWidth - S)));
    else
      Result |= LaneBitmask(M);
  }
  return Result;
}

const TargetRegisterClass *HexagonGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  static const uint8_t Table[22][5] = {
    {	// UsrBits
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// IntRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// CtrRegs
      0,	// isub_hi
      0,	// isub_lo
      11,	// subreg_overflow -> CtrRegs_with_subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// GeneralSubRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// V62Regs
      9,	// isub_hi -> V62Regs_with_isub_hi
      9,	// isub_lo -> V62Regs_with_isub_hi
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// IntRegsLow8
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// CtrRegs_and_V62Regs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// PredRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// V62Regs_with_isub_hi
      9,	// isub_hi -> V62Regs_with_isub_hi
      9,	// isub_lo -> V62Regs_with_isub_hi
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// ModRegs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// CtrRegs_with_subreg_overflow
      0,	// isub_hi
      0,	// isub_lo
      11,	// subreg_overflow -> CtrRegs_with_subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// V65Regs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// DoubleRegs
      13,	// isub_hi -> DoubleRegs
      13,	// isub_lo -> DoubleRegs
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// CtrRegs64
      14,	// isub_hi -> CtrRegs64
      14,	// isub_lo -> CtrRegs64
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// GeneralDoubleLow8Regs
      15,	// isub_hi -> GeneralDoubleLow8Regs
      15,	// isub_lo -> GeneralDoubleLow8Regs
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// DoubleRegs_with_isub_hi_in_IntRegsLow8
      16,	// isub_hi -> DoubleRegs_with_isub_hi_in_IntRegsLow8
      16,	// isub_lo -> DoubleRegs_with_isub_hi_in_IntRegsLow8
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// CtrRegs64_and_V62Regs
      17,	// isub_hi -> CtrRegs64_and_V62Regs
      17,	// isub_lo -> CtrRegs64_and_V62Regs
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// CtrRegs64_with_isub_hi_in_ModRegs
      18,	// isub_hi -> CtrRegs64_with_isub_hi_in_ModRegs
      18,	// isub_lo -> CtrRegs64_with_isub_hi_in_ModRegs
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// HvxVR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// HvxQR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// HvxVR_and_V65Regs
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      0,	// vsub_hi
      0,	// vsub_lo
    },
    {	// HvxWR
      0,	// isub_hi
      0,	// isub_lo
      0,	// subreg_overflow
      22,	// vsub_hi -> HvxWR
      22,	// vsub_lo -> HvxWR
    },
  };
  assert(RC && "Missing regclass");
  if (!Idx) return RC;
  --Idx;
  assert(Idx < 5 && "Bad subreg");
  unsigned TV = Table[RC->getID()][Idx];
  return TV ? getRegClass(TV - 1) : nullptr;
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &HexagonGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {0, 0},  	// UsrBits
    {1, 32},  	// IntRegs
    {0, 6},  	// CtrRegs
    {1, 16},  	// GeneralSubRegs
    {0, 0},  	// V62Regs
    {1, 8},  	// IntRegsLow8
    {0, 0},  	// CtrRegs_and_V62Regs
    {1, 4},  	// PredRegs
    {0, 0},  	// V62Regs_with_isub_hi
    {1, 2},  	// ModRegs
    {0, 0},  	// CtrRegs_with_subreg_overflow
    {1, 1},  	// V65Regs
    {2, 32},  	// DoubleRegs
    {0, 6},  	// CtrRegs64
    {2, 16},  	// GeneralDoubleLow8Regs
    {2, 8},  	// DoubleRegs_with_isub_hi_in_IntRegsLow8
    {0, 0},  	// CtrRegs64_and_V62Regs
    {2, 2},  	// CtrRegs64_with_isub_hi_in_ModRegs
    {1, 33},  	// HvxVR
    {1, 4},  	// HvxQR
    {1, 1},  	// HvxVR_and_V65Regs
    {2, 32},  	// HvxWR
  };
  return RCWeightTable[RC->getID()];
}

/// Get the weight in units of pressure for this register unit.
unsigned HexagonGenRegisterInfo::
getRegUnitWeight(unsigned RegUnit) const {
  assert(RegUnit < 95 && "invalid register unit");
  // All register units have unit weight.
  return 1;
}


// Get the number of dimensions of register pressure.
unsigned HexagonGenRegisterInfo::getNumRegPressureSets() const {
  return 8;
}

// Get the name of this register unit pressure set.
const char *HexagonGenRegisterInfo::
getRegPressureSetName(unsigned Idx) const {
  static const char *const PressureNameTable[] = {
    "HvxVR_and_V65Regs",
    "ModRegs",
    "PredRegs",
    "HvxQR",
    "IntRegsLow8",
    "GeneralSubRegs",
    "IntRegs",
    "HvxVR",
  };
  return PressureNameTable[Idx];
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned HexagonGenRegisterInfo::
getRegPressureSetLimit(const MachineFunction &MF, unsigned Idx) const {
  static const uint8_t PressureLimitTable[] = {
    1,  	// 0: HvxVR_and_V65Regs
    2,  	// 1: ModRegs
    4,  	// 2: PredRegs
    4,  	// 3: HvxQR
    8,  	// 4: IntRegsLow8
    16,  	// 5: GeneralSubRegs
    32,  	// 6: IntRegs
    33,  	// 7: HvxVR
  };
  return PressureLimitTable[Idx];
}

/// Table of pressure sets per register class or unit.
static const int RCSetsTable[] = {
  /* 0 */ 1, -1,
  /* 2 */ 2, -1,
  /* 4 */ 3, -1,
  /* 6 */ 4, 5, 6, -1,
  /* 10 */ 0, 7, -1,
};

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* HexagonGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const uint8_t RCSetStartTable[] = {
    1,8,1,7,1,6,1,2,1,0,1,1,8,1,7,6,1,1,11,4,10,11,};
  return &RCSetsTable[RCSetStartTable[RC->getID()]];
}

/// Get the dimensions of register pressure impacted by this register unit.
/// Returns a -1 terminated array of pressure set IDs
const int* HexagonGenRegisterInfo::
getRegUnitPressureSets(unsigned RegUnit) const {
  assert(RegUnit < 95 && "invalid register unit");
  static const uint8_t RUSetStartTable[] = {
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,10,1,6,6,6,6,6,6,6,6,8,8,8,8,8,8,8,8,7,7,7,7,7,7,7,7,8,8,8,8,8,8,8,8,1,1,0,0,2,2,2,2,4,4,4,4,1,1,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,};
  return &RCSetsTable[RUSetStartTable[RegUnit]];
}

extern const MCRegisterDesc HexagonRegDesc[];
extern const MCPhysReg HexagonRegDiffLists[];
extern const LaneBitmask HexagonLaneMaskLists[];
extern const char HexagonRegStrings[];
extern const char HexagonRegClassStrings[];
extern const MCPhysReg HexagonRegUnitRoots[][2];
extern const uint16_t HexagonSubRegIdxLists[];
extern const MCRegisterInfo::SubRegCoveredBits HexagonSubRegIdxRanges[];
extern const uint16_t HexagonRegEncodingTable[];
// Hexagon Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0Dwarf2L[];
extern const unsigned HexagonDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0Dwarf2L[];
extern const unsigned HexagonEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonDwarfFlavour0L2Dwarf[];
extern const unsigned HexagonDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair HexagonEHFlavour0L2Dwarf[];
extern const unsigned HexagonEHFlavour0L2DwarfSize;

HexagonGenRegisterInfo::
HexagonGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour,
      unsigned PC, unsigned HwMode)
  : TargetRegisterInfo(HexagonRegInfoDesc, RegisterClasses, RegisterClasses+22,
             SubRegIndexNameTable, SubRegIndexLaneMaskTable,
             LaneBitmask(0xFFFFFFFB), RegClassInfos, HwMode) {
  InitMCRegisterInfo(HexagonRegDesc, 141, RA, PC,
                     HexagonMCRegisterClasses, 22,
                     HexagonRegUnitRoots,
                     95,
                     HexagonRegDiffLists,
                     HexagonLaneMaskLists,
                     HexagonRegStrings,
                     HexagonRegClassStrings,
                     HexagonSubRegIdxLists,
                     6,
                     HexagonSubRegIdxRanges,
                     HexagonRegEncodingTable);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(HexagonDwarfFlavour0Dwarf2L, HexagonDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(HexagonEHFlavour0Dwarf2L, HexagonEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(HexagonDwarfFlavour0L2Dwarf, HexagonDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(HexagonEHFlavour0L2Dwarf, HexagonEHFlavour0L2DwarfSize, true);
    break;
  }
}

static const MCPhysReg HexagonCSR_SaveList[] = { Hexagon::R16, Hexagon::R17, Hexagon::R18, Hexagon::R19, Hexagon::R20, Hexagon::R21, Hexagon::R22, Hexagon::R23, Hexagon::R24, Hexagon::R25, Hexagon::R26, Hexagon::R27, 0 };
static const uint32_t HexagonCSR_RegMask[] = { 0x80000000, 0x0000001f, 0x00007ff8, 0x00000000, 0x00000000, };


ArrayRef<const uint32_t *> HexagonGenRegisterInfo::getRegMasks() const {
  static const uint32_t *const Masks[] = {
    HexagonCSR_RegMask,
  };
  return makeArrayRef(Masks);
}

ArrayRef<const char *> HexagonGenRegisterInfo::getRegMaskNames() const {
  static const char *const Names[] = {
    "HexagonCSR",
  };
  return makeArrayRef(Names);
}

const HexagonFrameLowering *
HexagonGenRegisterInfo::getFrameLowering(const MachineFunction &MF) {
  return static_cast<const HexagonFrameLowering *>(
      MF.getSubtarget().getFrameLowering());
}

} // end namespace llvm

#endif // GET_REGINFO_TARGET_DESC

