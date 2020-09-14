/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Mips Disassembler                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 245, 1, // Skip to: 512
/* 11 */      MCD::OPC_Decode, 145, 4, 0, // Opcode: Bimm16
/* 15 */      MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 233, 1, // Skip to: 512
/* 23 */      MCD::OPC_Decode, 143, 4, 1, // Opcode: BeqzRxImm16
/* 27 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 221, 1, // Skip to: 512
/* 35 */      MCD::OPC_Decode, 148, 4, 1, // Opcode: BnezRxImm16
/* 39 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 209, 1, // Skip to: 512
/* 47 */      MCD::OPC_Decode, 160, 2, 2, // Opcode: AddiuRxRxImm16
/* 51 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 197, 1, // Skip to: 512
/* 59 */      MCD::OPC_Decode, 250, 18, 1, // Opcode: SltiRxImm16
/* 63 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 75
/* 67 */      MCD::OPC_CheckPredicate, 0, 185, 1, // Skip to: 512
/* 71 */      MCD::OPC_Decode, 253, 18, 1, // Opcode: SltiuRxImm16
/* 75 */      MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 142
/* 79 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 82 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 512
/* 90 */      MCD::OPC_Decode, 151, 4, 0, // Opcode: Bteqz16
/* 94 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 512
/* 102 */     MCD::OPC_Decode, 159, 4, 0, // Opcode: Btnez16
/* 106 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 512
/* 114 */     MCD::OPC_Decode, 163, 2, 0, // Opcode: AddiuSpImm16
/* 118 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 512
/* 126 */     MCD::OPC_Decode, 142, 14, 3, // Opcode: Move32R16
/* 130 */     MCD::OPC_FilterValue, 7, 122, 1, // Skip to: 512
/* 134 */     MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 512
/* 138 */     MCD::OPC_Decode, 143, 14, 4, // Opcode: MoveR3216
/* 142 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 154
/* 146 */     MCD::OPC_CheckPredicate, 0, 106, 1, // Skip to: 512
/* 150 */     MCD::OPC_Decode, 195, 11, 1, // Opcode: LiRxImm16
/* 154 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 166
/* 158 */     MCD::OPC_CheckPredicate, 0, 94, 1, // Skip to: 512
/* 162 */     MCD::OPC_Decode, 224, 6, 1, // Opcode: CmpiRxImm16
/* 166 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 512
/* 174 */     MCD::OPC_Decode, 210, 11, 1, // Opcode: LwRxPcTcp16
/* 178 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 209
/* 182 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 185 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 197
/* 189 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 512
/* 193 */     MCD::OPC_Decode, 165, 2, 5, // Opcode: AdduRxRyRz16
/* 197 */     MCD::OPC_FilterValue, 3, 55, 1, // Skip to: 512
/* 201 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 512
/* 205 */     MCD::OPC_Decode, 134, 19, 5, // Opcode: SubuRxRyRz16
/* 209 */     MCD::OPC_FilterValue, 29, 43, 1, // Skip to: 512
/* 213 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 216 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 283
/* 220 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 223 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 235
/* 227 */     MCD::OPC_CheckPredicate, 0, 25, 1, // Skip to: 512
/* 231 */     MCD::OPC_Decode, 188, 10, 0, // Opcode: JumpLinkReg16
/* 235 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 0, 13, 1, // Skip to: 512
/* 243 */     MCD::OPC_CheckField, 8, 3, 0, 7, 1, // Skip to: 512
/* 249 */     MCD::OPC_Decode, 185, 10, 0, // Opcode: JrRa16
/* 253 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 265
/* 257 */     MCD::OPC_CheckPredicate, 0, 251, 0, // Skip to: 512
/* 261 */     MCD::OPC_Decode, 187, 10, 1, // Opcode: JrcRx16
/* 265 */     MCD::OPC_FilterValue, 7, 243, 0, // Skip to: 512
/* 269 */     MCD::OPC_CheckPredicate, 0, 239, 0, // Skip to: 512
/* 273 */     MCD::OPC_CheckField, 8, 3, 0, 233, 0, // Skip to: 512
/* 279 */     MCD::OPC_Decode, 186, 10, 0, // Opcode: JrcRa16
/* 283 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 295
/* 287 */     MCD::OPC_CheckPredicate, 0, 221, 0, // Skip to: 512
/* 291 */     MCD::OPC_Decode, 248, 18, 6, // Opcode: SltRxRy16
/* 295 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 307
/* 299 */     MCD::OPC_CheckPredicate, 0, 209, 0, // Skip to: 512
/* 303 */     MCD::OPC_Decode, 128, 19, 6, // Opcode: SltuRxRy16
/* 307 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 0, 197, 0, // Skip to: 512
/* 315 */     MCD::OPC_Decode, 246, 18, 7, // Opcode: SllvRxRy16
/* 319 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 0, 185, 0, // Skip to: 512
/* 327 */     MCD::OPC_CheckField, 5, 6, 0, 179, 0, // Skip to: 512
/* 333 */     MCD::OPC_Decode, 150, 4, 0, // Opcode: Break16
/* 337 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 167, 0, // Skip to: 512
/* 345 */     MCD::OPC_Decode, 133, 19, 7, // Opcode: SrlvRxRy16
/* 349 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 155, 0, // Skip to: 512
/* 357 */     MCD::OPC_Decode, 131, 19, 7, // Opcode: SravRxRy16
/* 361 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 143, 0, // Skip to: 512
/* 369 */     MCD::OPC_Decode, 223, 6, 6, // Opcode: CmpRxRy16
/* 373 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 131, 0, // Skip to: 512
/* 381 */     MCD::OPC_Decode, 166, 2, 7, // Opcode: AndRxRxRy16
/* 385 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 119, 0, // Skip to: 512
/* 393 */     MCD::OPC_Decode, 197, 14, 7, // Opcode: OrRxRxRy16
/* 397 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 107, 0, // Skip to: 512
/* 405 */     MCD::OPC_Decode, 231, 19, 7, // Opcode: XorRxRxRy16
/* 409 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 95, 0, // Skip to: 512
/* 417 */     MCD::OPC_Decode, 181, 14, 6, // Opcode: NotRxRy16
/* 421 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 512
/* 429 */     MCD::OPC_Decode, 140, 14, 1, // Opcode: Mfhi16
/* 433 */     MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 464
/* 437 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 440 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 512
/* 448 */     MCD::OPC_Decode, 228, 18, 2, // Opcode: SebRx16
/* 452 */     MCD::OPC_FilterValue, 5, 56, 0, // Skip to: 512
/* 456 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 512
/* 460 */     MCD::OPC_Decode, 229, 18, 2, // Opcode: SehRx16
/* 464 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 512
/* 472 */     MCD::OPC_Decode, 141, 14, 1, // Opcode: Mflo16
/* 476 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 512
/* 484 */     MCD::OPC_Decode, 244, 7, 6, // Opcode: DivRxRy16
/* 488 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 512
/* 496 */     MCD::OPC_Decode, 245, 7, 6, // Opcode: DivuRxRy16
/* 500 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 180, 14, 6, // Opcode: NegRxRy16
/* 512 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 453
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 180, 1, // Skip to: 453
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 174, 1, // Skip to: 453
/* 23 */      MCD::OPC_Decode, 159, 2, 1, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 162, 1, // Skip to: 453
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 156, 1, // Skip to: 453
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 150, 1, // Skip to: 453
/* 47 */      MCD::OPC_Decode, 146, 4, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 138, 1, // Skip to: 453
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 132, 1, // Skip to: 453
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 126, 1, // Skip to: 453
/* 71 */      MCD::OPC_Decode, 144, 4, 1, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 114, 1, // Skip to: 453
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 108, 1, // Skip to: 453
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 102, 1, // Skip to: 453
/* 95 */      MCD::OPC_Decode, 149, 4, 1, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 87, 1, // Skip to: 453
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 245, 18, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 132, 19, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 130, 19, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 453
/* 167 */     MCD::OPC_Decode, 158, 4, 0, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 453
/* 179 */     MCD::OPC_Decode, 166, 4, 0, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 10, 1, // Skip to: 453
/* 187 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 453
/* 191 */     MCD::OPC_Decode, 164, 2, 0, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 250, 0, // Skip to: 453
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 244, 0, // Skip to: 453
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 238, 0, // Skip to: 453
/* 215 */     MCD::OPC_Decode, 162, 2, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 226, 0, // Skip to: 453
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 220, 0, // Skip to: 453
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 214, 0, // Skip to: 453
/* 239 */     MCD::OPC_Decode, 158, 2, 1, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 202, 0, // Skip to: 453
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 196, 0, // Skip to: 453
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 190, 0, // Skip to: 453
/* 263 */     MCD::OPC_Decode, 251, 18, 1, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 178, 0, // Skip to: 453
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 172, 0, // Skip to: 453
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 166, 0, // Skip to: 453
/* 287 */     MCD::OPC_Decode, 254, 18, 1, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 154, 0, // Skip to: 453
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 148, 0, // Skip to: 453
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 142, 0, // Skip to: 453
/* 311 */     MCD::OPC_Decode, 197, 11, 1, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 130, 0, // Skip to: 453
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 124, 0, // Skip to: 453
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 118, 0, // Skip to: 453
/* 335 */     MCD::OPC_Decode, 225, 6, 1, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 357
/* 343 */     MCD::OPC_CheckPredicate, 0, 106, 0, // Skip to: 453
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 100, 0, // Skip to: 453
/* 353 */     MCD::OPC_Decode, 213, 11, 9, // Opcode: LwRxSpImmX16
/* 357 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 381
/* 361 */     MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 453
/* 365 */     MCD::OPC_CheckField, 27, 5, 30, 82, 0, // Skip to: 453
/* 371 */     MCD::OPC_CheckField, 5, 3, 0, 76, 0, // Skip to: 453
/* 377 */     MCD::OPC_Decode, 211, 11, 1, // Opcode: LwRxPcTcpX16
/* 381 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 399
/* 385 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 453
/* 389 */     MCD::OPC_CheckField, 27, 5, 30, 58, 0, // Skip to: 453
/* 395 */     MCD::OPC_Decode, 227, 18, 9, // Opcode: SbRxRyOffMemX16
/* 399 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 417
/* 403 */     MCD::OPC_CheckPredicate, 0, 46, 0, // Skip to: 453
/* 407 */     MCD::OPC_CheckField, 27, 5, 30, 40, 0, // Skip to: 453
/* 413 */     MCD::OPC_Decode, 244, 18, 9, // Opcode: ShRxRyOffMemX16
/* 417 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 435
/* 421 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 453
/* 425 */     MCD::OPC_CheckField, 27, 5, 30, 22, 0, // Skip to: 453
/* 431 */     MCD::OPC_Decode, 136, 19, 9, // Opcode: SwRxSpImmX16
/* 435 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 453
/* 439 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 453
/* 443 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 453
/* 449 */     MCD::OPC_Decode, 135, 19, 9, // Opcode: SwRxRyOffMemX16
/* 453 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCOP3_32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 51
/* 11 */      MCD::OPC_Decode, 155, 11, 10, // Opcode: LWC3
/* 15 */      MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 51
/* 23 */      MCD::OPC_Decode, 214, 10, 10, // Opcode: LDC3
/* 27 */      MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 51
/* 35 */      MCD::OPC_Decode, 184, 18, 10, // Opcode: SWC3
/* 39 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 159, 16, 10, // Opcode: SDC3
/* 51 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCnMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 18, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 3, 169, 1, // Skip to: 443
/* 18 */      MCD::OPC_Decode, 144, 7, 11, // Opcode: DMFC2_OCTEON
/* 22 */      MCD::OPC_FilterValue, 5, 161, 1, // Skip to: 443
/* 26 */      MCD::OPC_CheckPredicate, 3, 157, 1, // Skip to: 443
/* 30 */      MCD::OPC_Decode, 151, 7, 11, // Opcode: DMTC2_OCTEON
/* 34 */      MCD::OPC_FilterValue, 28, 101, 1, // Skip to: 395
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 59
/* 45 */      MCD::OPC_CheckPredicate, 3, 138, 1, // Skip to: 443
/* 49 */      MCD::OPC_CheckField, 6, 5, 0, 132, 1, // Skip to: 443
/* 55 */      MCD::OPC_Decode, 154, 7, 12, // Opcode: DMUL
/* 59 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 3, 120, 1, // Skip to: 443
/* 67 */      MCD::OPC_CheckField, 6, 15, 0, 114, 1, // Skip to: 443
/* 73 */      MCD::OPC_Decode, 200, 13, 13, // Opcode: MTM0
/* 77 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 3, 102, 1, // Skip to: 443
/* 85 */      MCD::OPC_CheckField, 6, 15, 0, 96, 1, // Skip to: 443
/* 91 */      MCD::OPC_Decode, 203, 13, 13, // Opcode: MTP0
/* 95 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 3, 84, 1, // Skip to: 443
/* 103 */     MCD::OPC_CheckField, 6, 15, 0, 78, 1, // Skip to: 443
/* 109 */     MCD::OPC_Decode, 204, 13, 13, // Opcode: MTP1
/* 113 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 3, 66, 1, // Skip to: 443
/* 121 */     MCD::OPC_CheckField, 6, 15, 0, 60, 1, // Skip to: 443
/* 127 */     MCD::OPC_Decode, 205, 13, 13, // Opcode: MTP2
/* 131 */     MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 3, 48, 1, // Skip to: 443
/* 139 */     MCD::OPC_CheckField, 6, 15, 0, 42, 1, // Skip to: 443
/* 145 */     MCD::OPC_Decode, 201, 13, 13, // Opcode: MTM1
/* 149 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 3, 30, 1, // Skip to: 443
/* 157 */     MCD::OPC_CheckField, 6, 15, 0, 24, 1, // Skip to: 443
/* 163 */     MCD::OPC_Decode, 202, 13, 13, // Opcode: MTM2
/* 167 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 3, 12, 1, // Skip to: 443
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 6, 1, // Skip to: 443
/* 181 */     MCD::OPC_Decode, 202, 19, 12, // Opcode: VMULU
/* 185 */     MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 3, 250, 0, // Skip to: 443
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 244, 0, // Skip to: 443
/* 199 */     MCD::OPC_Decode, 201, 19, 12, // Opcode: VMM0
/* 203 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 3, 232, 0, // Skip to: 443
/* 211 */     MCD::OPC_CheckField, 6, 5, 0, 226, 0, // Skip to: 443
/* 217 */     MCD::OPC_Decode, 200, 19, 12, // Opcode: V3MULU
/* 221 */     MCD::OPC_FilterValue, 40, 14, 0, // Skip to: 239
/* 225 */     MCD::OPC_CheckPredicate, 3, 214, 0, // Skip to: 443
/* 229 */     MCD::OPC_CheckField, 6, 5, 0, 208, 0, // Skip to: 443
/* 235 */     MCD::OPC_Decode, 169, 2, 12, // Opcode: BADDu
/* 239 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 257
/* 243 */     MCD::OPC_CheckPredicate, 3, 196, 0, // Skip to: 443
/* 247 */     MCD::OPC_CheckField, 6, 5, 0, 190, 0, // Skip to: 443
/* 253 */     MCD::OPC_Decode, 196, 16, 12, // Opcode: SEQ
/* 257 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 275
/* 261 */     MCD::OPC_CheckPredicate, 3, 178, 0, // Skip to: 443
/* 265 */     MCD::OPC_CheckField, 6, 5, 0, 172, 0, // Skip to: 443
/* 271 */     MCD::OPC_Decode, 171, 17, 12, // Opcode: SNE
/* 275 */     MCD::OPC_FilterValue, 44, 20, 0, // Skip to: 299
/* 279 */     MCD::OPC_CheckPredicate, 3, 160, 0, // Skip to: 443
/* 283 */     MCD::OPC_CheckField, 16, 5, 0, 154, 0, // Skip to: 443
/* 289 */     MCD::OPC_CheckField, 6, 5, 0, 148, 0, // Skip to: 443
/* 295 */     MCD::OPC_Decode, 219, 14, 14, // Opcode: POP
/* 299 */     MCD::OPC_FilterValue, 45, 20, 0, // Skip to: 323
/* 303 */     MCD::OPC_CheckPredicate, 3, 136, 0, // Skip to: 443
/* 307 */     MCD::OPC_CheckField, 16, 5, 0, 130, 0, // Skip to: 443
/* 313 */     MCD::OPC_CheckField, 6, 5, 0, 124, 0, // Skip to: 443
/* 319 */     MCD::OPC_Decode, 191, 7, 15, // Opcode: DPOP
/* 323 */     MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 335
/* 327 */     MCD::OPC_CheckPredicate, 3, 112, 0, // Skip to: 443
/* 331 */     MCD::OPC_Decode, 199, 16, 16, // Opcode: SEQi
/* 335 */     MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 347
/* 339 */     MCD::OPC_CheckPredicate, 3, 100, 0, // Skip to: 443
/* 343 */     MCD::OPC_Decode, 172, 17, 16, // Opcode: SNEi
/* 347 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 359
/* 351 */     MCD::OPC_CheckPredicate, 4, 88, 0, // Skip to: 443
/* 355 */     MCD::OPC_Decode, 200, 4, 17, // Opcode: CINS
/* 359 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 371
/* 363 */     MCD::OPC_CheckPredicate, 4, 76, 0, // Skip to: 443
/* 367 */     MCD::OPC_Decode, 201, 4, 17, // Opcode: CINS32
/* 371 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 383
/* 375 */     MCD::OPC_CheckPredicate, 4, 64, 0, // Skip to: 443
/* 379 */     MCD::OPC_Decode, 159, 8, 17, // Opcode: EXTS
/* 383 */     MCD::OPC_FilterValue, 59, 56, 0, // Skip to: 443
/* 387 */     MCD::OPC_CheckPredicate, 4, 52, 0, // Skip to: 443
/* 391 */     MCD::OPC_Decode, 160, 8, 17, // Opcode: EXTS32
/* 395 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 407
/* 399 */     MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 443
/* 403 */     MCD::OPC_Decode, 176, 2, 18, // Opcode: BBIT0
/* 407 */     MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 419
/* 411 */     MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 443
/* 415 */     MCD::OPC_Decode, 177, 2, 18, // Opcode: BBIT032
/* 419 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 431
/* 423 */     MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 443
/* 427 */     MCD::OPC_Decode, 178, 2, 18, // Opcode: BBIT1
/* 431 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 443
/* 435 */     MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 443
/* 439 */     MCD::OPC_Decode, 179, 2, 18, // Opcode: BBIT132
/* 443 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 5, 26, 2, // Skip to: 556
/* 18 */      MCD::OPC_Decode, 164, 1, 19, // Opcode: ADDU16_MM
/* 22 */      MCD::OPC_FilterValue, 1, 18, 2, // Skip to: 556
/* 26 */      MCD::OPC_CheckPredicate, 5, 14, 2, // Skip to: 556
/* 30 */      MCD::OPC_Decode, 145, 18, 19, // Opcode: SUBU16_MM
/* 34 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 6, 2, 2, // Skip to: 556
/* 42 */      MCD::OPC_Decode, 194, 10, 20, // Opcode: LBU16_MM
/* 46 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 58
/* 50 */      MCD::OPC_CheckPredicate, 6, 246, 1, // Skip to: 556
/* 54 */      MCD::OPC_Decode, 227, 12, 21, // Opcode: MOVE16_MM
/* 58 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 89
/* 62 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 65 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 77
/* 69 */      MCD::OPC_CheckPredicate, 5, 227, 1, // Skip to: 556
/* 73 */      MCD::OPC_Decode, 141, 17, 22, // Opcode: SLL16_MM
/* 77 */      MCD::OPC_FilterValue, 1, 219, 1, // Skip to: 556
/* 81 */      MCD::OPC_CheckPredicate, 5, 215, 1, // Skip to: 556
/* 85 */      MCD::OPC_Decode, 209, 17, 22, // Opcode: SRL16_MM
/* 89 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 101
/* 93 */      MCD::OPC_CheckPredicate, 6, 203, 1, // Skip to: 556
/* 97 */      MCD::OPC_Decode, 237, 10, 20, // Opcode: LHU16_MM
/* 101 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 113
/* 105 */     MCD::OPC_CheckPredicate, 5, 191, 1, // Skip to: 556
/* 109 */     MCD::OPC_Decode, 211, 1, 23, // Opcode: ANDI16_MM
/* 113 */     MCD::OPC_FilterValue, 17, 227, 0, // Skip to: 344
/* 117 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 5, 172, 1, // Skip to: 556
/* 128 */     MCD::OPC_Decode, 178, 14, 24, // Opcode: NOT16_MM
/* 132 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 5, 160, 1, // Skip to: 556
/* 140 */     MCD::OPC_Decode, 217, 19, 25, // Opcode: XOR16_MM
/* 144 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 5, 148, 1, // Skip to: 556
/* 152 */     MCD::OPC_Decode, 208, 1, 25, // Opcode: AND16_MM
/* 156 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 168
/* 160 */     MCD::OPC_CheckPredicate, 5, 136, 1, // Skip to: 556
/* 164 */     MCD::OPC_Decode, 183, 14, 25, // Opcode: OR16_MM
/* 168 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 180
/* 172 */     MCD::OPC_CheckPredicate, 5, 124, 1, // Skip to: 556
/* 176 */     MCD::OPC_Decode, 167, 11, 26, // Opcode: LWM16_MM
/* 180 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 192
/* 184 */     MCD::OPC_CheckPredicate, 5, 112, 1, // Skip to: 556
/* 188 */     MCD::OPC_Decode, 195, 18, 26, // Opcode: SWM16_MM
/* 192 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 223
/* 196 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 199 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 211
/* 203 */     MCD::OPC_CheckPredicate, 6, 93, 1, // Skip to: 556
/* 207 */     MCD::OPC_Decode, 171, 10, 27, // Opcode: JR16_MM
/* 211 */     MCD::OPC_FilterValue, 1, 85, 1, // Skip to: 556
/* 215 */     MCD::OPC_CheckPredicate, 6, 81, 1, // Skip to: 556
/* 219 */     MCD::OPC_Decode, 174, 10, 27, // Opcode: JRC16_MM
/* 223 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 254
/* 227 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 230 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 242
/* 234 */     MCD::OPC_CheckPredicate, 5, 62, 1, // Skip to: 556
/* 238 */     MCD::OPC_Decode, 149, 10, 27, // Opcode: JALR16_MM
/* 242 */     MCD::OPC_FilterValue, 1, 54, 1, // Skip to: 556
/* 246 */     MCD::OPC_CheckPredicate, 6, 50, 1, // Skip to: 556
/* 250 */     MCD::OPC_Decode, 156, 10, 27, // Opcode: JALRS16_MM
/* 254 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 272
/* 258 */     MCD::OPC_CheckPredicate, 6, 38, 1, // Skip to: 556
/* 262 */     MCD::OPC_CheckField, 5, 1, 0, 32, 1, // Skip to: 556
/* 268 */     MCD::OPC_Decode, 163, 12, 27, // Opcode: MFHI16_MM
/* 272 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 290
/* 276 */     MCD::OPC_CheckPredicate, 6, 20, 1, // Skip to: 556
/* 280 */     MCD::OPC_CheckField, 5, 1, 0, 14, 1, // Skip to: 556
/* 286 */     MCD::OPC_Decode, 169, 12, 27, // Opcode: MFLO16_MM
/* 290 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 308
/* 294 */     MCD::OPC_CheckPredicate, 5, 2, 1, // Skip to: 556
/* 298 */     MCD::OPC_CheckField, 4, 2, 0, 252, 0, // Skip to: 556
/* 304 */     MCD::OPC_Decode, 243, 3, 28, // Opcode: BREAK16_MM
/* 308 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 326
/* 312 */     MCD::OPC_CheckPredicate, 5, 240, 0, // Skip to: 556
/* 316 */     MCD::OPC_CheckField, 4, 2, 0, 234, 0, // Skip to: 556
/* 322 */     MCD::OPC_Decode, 147, 16, 28, // Opcode: SDBBP16_MM
/* 326 */     MCD::OPC_FilterValue, 12, 226, 0, // Skip to: 556
/* 330 */     MCD::OPC_CheckPredicate, 6, 222, 0, // Skip to: 556
/* 334 */     MCD::OPC_CheckField, 5, 1, 0, 216, 0, // Skip to: 556
/* 340 */     MCD::OPC_Decode, 173, 10, 29, // Opcode: JRADDIUSP
/* 344 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 356
/* 348 */     MCD::OPC_CheckPredicate, 6, 204, 0, // Skip to: 556
/* 352 */     MCD::OPC_Decode, 180, 11, 30, // Opcode: LWSP_MM
/* 356 */     MCD::OPC_FilterValue, 19, 27, 0, // Skip to: 387
/* 360 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 363 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 375
/* 367 */     MCD::OPC_CheckPredicate, 6, 185, 0, // Skip to: 556
/* 371 */     MCD::OPC_Decode, 133, 1, 31, // Opcode: ADDIUS5_MM
/* 375 */     MCD::OPC_FilterValue, 1, 177, 0, // Skip to: 556
/* 379 */     MCD::OPC_CheckPredicate, 6, 173, 0, // Skip to: 556
/* 383 */     MCD::OPC_Decode, 134, 1, 32, // Opcode: ADDIUSP_MM
/* 387 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 399
/* 391 */     MCD::OPC_CheckPredicate, 6, 161, 0, // Skip to: 556
/* 395 */     MCD::OPC_Decode, 161, 11, 33, // Opcode: LWGP_MM
/* 399 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 411
/* 403 */     MCD::OPC_CheckPredicate, 6, 149, 0, // Skip to: 556
/* 407 */     MCD::OPC_Decode, 148, 11, 20, // Opcode: LW16_MM
/* 411 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 442
/* 415 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 418 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 430
/* 422 */     MCD::OPC_CheckPredicate, 6, 130, 0, // Skip to: 556
/* 426 */     MCD::OPC_Decode, 132, 1, 34, // Opcode: ADDIUR2_MM
/* 430 */     MCD::OPC_FilterValue, 1, 122, 0, // Skip to: 556
/* 434 */     MCD::OPC_CheckPredicate, 6, 118, 0, // Skip to: 556
/* 438 */     MCD::OPC_Decode, 131, 1, 35, // Opcode: ADDIUR1SP_MM
/* 442 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 460
/* 446 */     MCD::OPC_CheckPredicate, 5, 106, 0, // Skip to: 556
/* 450 */     MCD::OPC_CheckField, 0, 1, 0, 100, 0, // Skip to: 556
/* 456 */     MCD::OPC_Decode, 229, 12, 36, // Opcode: MOVEP_MM
/* 460 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 472
/* 464 */     MCD::OPC_CheckPredicate, 6, 88, 0, // Skip to: 556
/* 468 */     MCD::OPC_Decode, 255, 15, 20, // Opcode: SB16_MM
/* 472 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 484
/* 476 */     MCD::OPC_CheckPredicate, 6, 76, 0, // Skip to: 556
/* 480 */     MCD::OPC_Decode, 212, 2, 37, // Opcode: BEQZ16_MM
/* 484 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 496
/* 488 */     MCD::OPC_CheckPredicate, 6, 64, 0, // Skip to: 556
/* 492 */     MCD::OPC_Decode, 201, 16, 20, // Opcode: SH16_MM
/* 496 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 508
/* 500 */     MCD::OPC_CheckPredicate, 6, 52, 0, // Skip to: 556
/* 504 */     MCD::OPC_Decode, 220, 3, 37, // Opcode: BNEZ16_MM
/* 508 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 520
/* 512 */     MCD::OPC_CheckPredicate, 6, 40, 0, // Skip to: 556
/* 516 */     MCD::OPC_Decode, 206, 18, 30, // Opcode: SWSP_MM
/* 520 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 532
/* 524 */     MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 556
/* 528 */     MCD::OPC_Decode, 168, 2, 38, // Opcode: B16_MM
/* 532 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 544
/* 536 */     MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 556
/* 540 */     MCD::OPC_Decode, 176, 18, 20, // Opcode: SW16_MM
/* 544 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 556
/* 548 */     MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 556
/* 552 */     MCD::OPC_Decode, 246, 10, 39, // Opcode: LI16_MM
/* 556 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 59, 12, // Skip to: 3138
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 104
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 231, 17, 0, // Opcode: SSNOP_MM
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 247, 7, 0, // Opcode: EHB_MM
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 201, 14, 0, // Opcode: PAUSE_MM
/* 60 */      MCD::OPC_CheckPredicate, 6, 178, 16, // Skip to: 4338
/* 64 */      MCD::OPC_Decode, 154, 17, 40, // Opcode: SLL_MM
/* 68 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 6, 166, 16, // Skip to: 4338
/* 76 */      MCD::OPC_Decode, 228, 17, 40, // Opcode: SRL_MM
/* 80 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 6, 154, 16, // Skip to: 4338
/* 88 */      MCD::OPC_Decode, 206, 17, 40, // Opcode: SRA_MM
/* 92 */      MCD::OPC_FilterValue, 3, 146, 16, // Skip to: 4338
/* 96 */      MCD::OPC_CheckPredicate, 6, 142, 16, // Skip to: 4338
/* 100 */     MCD::OPC_Decode, 224, 15, 40, // Opcode: ROTR_MM
/* 104 */     MCD::OPC_FilterValue, 5, 195, 0, // Skip to: 303
/* 108 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 111 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 129
/* 115 */     MCD::OPC_CheckPredicate, 7, 123, 16, // Skip to: 4338
/* 119 */     MCD::OPC_CheckField, 11, 5, 0, 117, 16, // Skip to: 4338
/* 125 */     MCD::OPC_Decode, 143, 5, 41, // Opcode: CMP_EQ_PH_MM
/* 129 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 147
/* 133 */     MCD::OPC_CheckPredicate, 7, 105, 16, // Skip to: 4338
/* 137 */     MCD::OPC_CheckField, 11, 5, 0, 99, 16, // Skip to: 4338
/* 143 */     MCD::OPC_Decode, 157, 5, 41, // Opcode: CMP_LT_PH_MM
/* 147 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 165
/* 151 */     MCD::OPC_CheckPredicate, 7, 87, 16, // Skip to: 4338
/* 155 */     MCD::OPC_CheckField, 11, 5, 0, 81, 16, // Skip to: 4338
/* 161 */     MCD::OPC_Decode, 151, 5, 41, // Opcode: CMP_LE_PH_MM
/* 165 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 177
/* 169 */     MCD::OPC_CheckPredicate, 8, 69, 16, // Skip to: 4338
/* 173 */     MCD::OPC_Decode, 249, 4, 42, // Opcode: CMPGDU_EQ_QB_MMR2
/* 177 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 8, 57, 16, // Skip to: 4338
/* 185 */     MCD::OPC_Decode, 253, 4, 42, // Opcode: CMPGDU_LT_QB_MMR2
/* 189 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 201
/* 193 */     MCD::OPC_CheckPredicate, 8, 45, 16, // Skip to: 4338
/* 197 */     MCD::OPC_Decode, 251, 4, 42, // Opcode: CMPGDU_LE_QB_MMR2
/* 201 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 219
/* 205 */     MCD::OPC_CheckPredicate, 7, 33, 16, // Skip to: 4338
/* 209 */     MCD::OPC_CheckField, 11, 5, 0, 27, 16, // Skip to: 4338
/* 215 */     MCD::OPC_Decode, 133, 5, 41, // Opcode: CMPU_EQ_QB_MM
/* 219 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 237
/* 223 */     MCD::OPC_CheckPredicate, 7, 15, 16, // Skip to: 4338
/* 227 */     MCD::OPC_CheckField, 11, 5, 0, 9, 16, // Skip to: 4338
/* 233 */     MCD::OPC_Decode, 137, 5, 41, // Opcode: CMPU_LT_QB_MM
/* 237 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 255
/* 241 */     MCD::OPC_CheckPredicate, 7, 253, 15, // Skip to: 4338
/* 245 */     MCD::OPC_CheckField, 11, 5, 0, 247, 15, // Skip to: 4338
/* 251 */     MCD::OPC_Decode, 135, 5, 41, // Opcode: CMPU_LE_QB_MM
/* 255 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 267
/* 259 */     MCD::OPC_CheckPredicate, 7, 235, 15, // Skip to: 4338
/* 263 */     MCD::OPC_Decode, 149, 1, 43, // Opcode: ADDQ_S_W_MM
/* 267 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 279
/* 271 */     MCD::OPC_CheckPredicate, 7, 223, 15, // Skip to: 4338
/* 275 */     MCD::OPC_Decode, 128, 18, 43, // Opcode: SUBQ_S_W_MM
/* 279 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 291
/* 283 */     MCD::OPC_CheckPredicate, 7, 211, 15, // Skip to: 4338
/* 287 */     MCD::OPC_Decode, 151, 1, 43, // Opcode: ADDSC_MM
/* 291 */     MCD::OPC_FilterValue, 15, 203, 15, // Skip to: 4338
/* 295 */     MCD::OPC_CheckPredicate, 7, 199, 15, // Skip to: 4338
/* 299 */     MCD::OPC_Decode, 188, 1, 43, // Opcode: ADDWC_MM
/* 303 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 315
/* 307 */     MCD::OPC_CheckPredicate, 6, 187, 15, // Skip to: 4338
/* 311 */     MCD::OPC_Decode, 245, 3, 44, // Opcode: BREAK_MM
/* 315 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 327
/* 319 */     MCD::OPC_CheckPredicate, 6, 175, 15, // Skip to: 4338
/* 323 */     MCD::OPC_Decode, 144, 10, 45, // Opcode: INS_MM
/* 327 */     MCD::OPC_FilterValue, 13, 107, 1, // Skip to: 694
/* 331 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 334 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 346
/* 338 */     MCD::OPC_CheckPredicate, 7, 156, 15, // Skip to: 4338
/* 342 */     MCD::OPC_Decode, 145, 1, 46, // Opcode: ADDQ_PH_MM
/* 346 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 358
/* 350 */     MCD::OPC_CheckPredicate, 8, 144, 15, // Skip to: 4338
/* 354 */     MCD::OPC_Decode, 137, 1, 46, // Opcode: ADDQH_PH_MMR2
/* 358 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 370
/* 362 */     MCD::OPC_CheckPredicate, 8, 132, 15, // Skip to: 4338
/* 366 */     MCD::OPC_Decode, 143, 1, 43, // Opcode: ADDQH_W_MMR2
/* 370 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 382
/* 374 */     MCD::OPC_CheckPredicate, 7, 120, 15, // Skip to: 4338
/* 378 */     MCD::OPC_Decode, 174, 1, 46, // Opcode: ADDU_QB_MM
/* 382 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 394
/* 386 */     MCD::OPC_CheckPredicate, 8, 108, 15, // Skip to: 4338
/* 390 */     MCD::OPC_Decode, 172, 1, 46, // Opcode: ADDU_PH_MMR2
/* 394 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 8, 96, 15, // Skip to: 4338
/* 402 */     MCD::OPC_Decode, 167, 1, 46, // Opcode: ADDUH_QB_MMR2
/* 406 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 418
/* 410 */     MCD::OPC_CheckPredicate, 7, 84, 15, // Skip to: 4338
/* 414 */     MCD::OPC_Decode, 231, 16, 47, // Opcode: SHRAV_PH_MM
/* 418 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 430
/* 422 */     MCD::OPC_CheckPredicate, 8, 72, 15, // Skip to: 4338
/* 426 */     MCD::OPC_Decode, 233, 16, 47, // Opcode: SHRAV_QB_MMR2
/* 430 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 442
/* 434 */     MCD::OPC_CheckPredicate, 7, 60, 15, // Skip to: 4338
/* 438 */     MCD::OPC_Decode, 252, 17, 46, // Opcode: SUBQ_PH_MM
/* 442 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 454
/* 446 */     MCD::OPC_CheckPredicate, 8, 48, 15, // Skip to: 4338
/* 450 */     MCD::OPC_Decode, 244, 17, 46, // Opcode: SUBQH_PH_MMR2
/* 454 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 466
/* 458 */     MCD::OPC_CheckPredicate, 8, 36, 15, // Skip to: 4338
/* 462 */     MCD::OPC_Decode, 250, 17, 43, // Opcode: SUBQH_W_MMR2
/* 466 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 478
/* 470 */     MCD::OPC_CheckPredicate, 7, 24, 15, // Skip to: 4338
/* 474 */     MCD::OPC_Decode, 155, 18, 46, // Opcode: SUBU_QB_MM
/* 478 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 490
/* 482 */     MCD::OPC_CheckPredicate, 8, 12, 15, // Skip to: 4338
/* 486 */     MCD::OPC_Decode, 153, 18, 46, // Opcode: SUBU_PH_MMR2
/* 490 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 502
/* 494 */     MCD::OPC_CheckPredicate, 8, 0, 15, // Skip to: 4338
/* 498 */     MCD::OPC_Decode, 148, 18, 46, // Opcode: SUBUH_QB_MMR2
/* 502 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 514
/* 506 */     MCD::OPC_CheckPredicate, 8, 244, 14, // Skip to: 4338
/* 510 */     MCD::OPC_Decode, 251, 14, 48, // Opcode: PRECR_SRA_PH_W_MMR2
/* 514 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 526
/* 518 */     MCD::OPC_CheckPredicate, 7, 232, 14, // Skip to: 4338
/* 522 */     MCD::OPC_Decode, 147, 1, 46, // Opcode: ADDQ_S_PH_MM
/* 526 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 538
/* 530 */     MCD::OPC_CheckPredicate, 8, 220, 14, // Skip to: 4338
/* 534 */     MCD::OPC_Decode, 139, 1, 46, // Opcode: ADDQH_R_PH_MMR2
/* 538 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 550
/* 542 */     MCD::OPC_CheckPredicate, 8, 208, 14, // Skip to: 4338
/* 546 */     MCD::OPC_Decode, 141, 1, 43, // Opcode: ADDQH_R_W_MMR2
/* 550 */     MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 562
/* 554 */     MCD::OPC_CheckPredicate, 7, 196, 14, // Skip to: 4338
/* 558 */     MCD::OPC_Decode, 178, 1, 46, // Opcode: ADDU_S_QB_MM
/* 562 */     MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 574
/* 566 */     MCD::OPC_CheckPredicate, 8, 184, 14, // Skip to: 4338
/* 570 */     MCD::OPC_Decode, 176, 1, 46, // Opcode: ADDU_S_PH_MMR2
/* 574 */     MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 586
/* 578 */     MCD::OPC_CheckPredicate, 8, 172, 14, // Skip to: 4338
/* 582 */     MCD::OPC_Decode, 169, 1, 46, // Opcode: ADDUH_R_QB_MMR2
/* 586 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 598
/* 590 */     MCD::OPC_CheckPredicate, 7, 160, 14, // Skip to: 4338
/* 594 */     MCD::OPC_Decode, 235, 16, 47, // Opcode: SHRAV_R_PH_MM
/* 598 */     MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 610
/* 602 */     MCD::OPC_CheckPredicate, 8, 148, 14, // Skip to: 4338
/* 606 */     MCD::OPC_Decode, 237, 16, 47, // Opcode: SHRAV_R_QB_MMR2
/* 610 */     MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 622
/* 614 */     MCD::OPC_CheckPredicate, 7, 136, 14, // Skip to: 4338
/* 618 */     MCD::OPC_Decode, 254, 17, 46, // Opcode: SUBQ_S_PH_MM
/* 622 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 634
/* 626 */     MCD::OPC_CheckPredicate, 8, 124, 14, // Skip to: 4338
/* 630 */     MCD::OPC_Decode, 246, 17, 46, // Opcode: SUBQH_R_PH_MMR2
/* 634 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 646
/* 638 */     MCD::OPC_CheckPredicate, 8, 112, 14, // Skip to: 4338
/* 642 */     MCD::OPC_Decode, 248, 17, 43, // Opcode: SUBQH_R_W_MMR2
/* 646 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 658
/* 650 */     MCD::OPC_CheckPredicate, 7, 100, 14, // Skip to: 4338
/* 654 */     MCD::OPC_Decode, 159, 18, 46, // Opcode: SUBU_S_QB_MM
/* 658 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 670
/* 662 */     MCD::OPC_CheckPredicate, 8, 88, 14, // Skip to: 4338
/* 666 */     MCD::OPC_Decode, 157, 18, 46, // Opcode: SUBU_S_PH_MMR2
/* 670 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 682
/* 674 */     MCD::OPC_CheckPredicate, 8, 76, 14, // Skip to: 4338
/* 678 */     MCD::OPC_Decode, 150, 18, 46, // Opcode: SUBUH_R_QB_MMR2
/* 682 */     MCD::OPC_FilterValue, 31, 68, 14, // Skip to: 4338
/* 686 */     MCD::OPC_CheckPredicate, 8, 64, 14, // Skip to: 4338
/* 690 */     MCD::OPC_Decode, 253, 14, 48, // Opcode: PRECR_SRA_R_PH_W_MMR2
/* 694 */     MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 725
/* 698 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 701 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 713
/* 705 */     MCD::OPC_CheckPredicate, 7, 45, 14, // Skip to: 4338
/* 709 */     MCD::OPC_Decode, 215, 16, 47, // Opcode: SHLLV_PH_MM
/* 713 */     MCD::OPC_FilterValue, 16, 37, 14, // Skip to: 4338
/* 717 */     MCD::OPC_CheckPredicate, 7, 33, 14, // Skip to: 4338
/* 721 */     MCD::OPC_Decode, 219, 16, 47, // Opcode: SHLLV_S_PH_MM
/* 725 */     MCD::OPC_FilterValue, 16, 183, 0, // Skip to: 912
/* 729 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 732 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 744
/* 736 */     MCD::OPC_CheckPredicate, 6, 14, 14, // Skip to: 4338
/* 740 */     MCD::OPC_Decode, 150, 17, 49, // Opcode: SLLV_MM
/* 744 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 756
/* 748 */     MCD::OPC_CheckPredicate, 6, 2, 14, // Skip to: 4338
/* 752 */     MCD::OPC_Decode, 224, 17, 49, // Opcode: SRLV_MM
/* 756 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 768
/* 760 */     MCD::OPC_CheckPredicate, 6, 246, 13, // Skip to: 4338
/* 764 */     MCD::OPC_Decode, 202, 17, 49, // Opcode: SRAV_MM
/* 768 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 780
/* 772 */     MCD::OPC_CheckPredicate, 6, 234, 13, // Skip to: 4338
/* 776 */     MCD::OPC_Decode, 223, 15, 49, // Opcode: ROTRV_MM
/* 780 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 792
/* 784 */     MCD::OPC_CheckPredicate, 6, 222, 13, // Skip to: 4338
/* 788 */     MCD::OPC_Decode, 193, 1, 43, // Opcode: ADD_MM
/* 792 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 804
/* 796 */     MCD::OPC_CheckPredicate, 6, 210, 13, // Skip to: 4338
/* 800 */     MCD::OPC_Decode, 200, 1, 43, // Opcode: ADDu_MM
/* 804 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 816
/* 808 */     MCD::OPC_CheckPredicate, 6, 198, 13, // Skip to: 4338
/* 812 */     MCD::OPC_Decode, 168, 18, 43, // Opcode: SUB_MM
/* 816 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 828
/* 820 */     MCD::OPC_CheckPredicate, 6, 186, 13, // Skip to: 4338
/* 824 */     MCD::OPC_Decode, 171, 18, 43, // Opcode: SUBu_MM
/* 828 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 840
/* 832 */     MCD::OPC_CheckPredicate, 6, 174, 13, // Skip to: 4338
/* 836 */     MCD::OPC_Decode, 131, 14, 43, // Opcode: MUL_MM
/* 840 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 852
/* 844 */     MCD::OPC_CheckPredicate, 6, 162, 13, // Skip to: 4338
/* 848 */     MCD::OPC_Decode, 215, 1, 43, // Opcode: AND_MM
/* 852 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 864
/* 856 */     MCD::OPC_CheckPredicate, 6, 150, 13, // Skip to: 4338
/* 860 */     MCD::OPC_Decode, 188, 14, 43, // Opcode: OR_MM
/* 864 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 876
/* 868 */     MCD::OPC_CheckPredicate, 6, 138, 13, // Skip to: 4338
/* 872 */     MCD::OPC_Decode, 172, 14, 43, // Opcode: NOR_MM
/* 876 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 888
/* 880 */     MCD::OPC_CheckPredicate, 6, 126, 13, // Skip to: 4338
/* 884 */     MCD::OPC_Decode, 222, 19, 43, // Opcode: XOR_MM
/* 888 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 900
/* 892 */     MCD::OPC_CheckPredicate, 6, 114, 13, // Skip to: 4338
/* 896 */     MCD::OPC_Decode, 161, 17, 43, // Opcode: SLT_MM
/* 900 */     MCD::OPC_FilterValue, 14, 106, 13, // Skip to: 4338
/* 904 */     MCD::OPC_CheckPredicate, 6, 102, 13, // Skip to: 4338
/* 908 */     MCD::OPC_Decode, 170, 17, 43, // Opcode: SLTu_MM
/* 912 */     MCD::OPC_FilterValue, 21, 171, 0, // Skip to: 1087
/* 916 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 919 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 931
/* 923 */     MCD::OPC_CheckPredicate, 7, 83, 13, // Skip to: 4338
/* 927 */     MCD::OPC_Decode, 225, 13, 46, // Opcode: MULEU_S_PH_QBL_MM
/* 931 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 943
/* 935 */     MCD::OPC_CheckPredicate, 7, 71, 13, // Skip to: 4338
/* 939 */     MCD::OPC_Decode, 227, 13, 46, // Opcode: MULEU_S_PH_QBR_MM
/* 943 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 955
/* 947 */     MCD::OPC_CheckPredicate, 7, 59, 13, // Skip to: 4338
/* 951 */     MCD::OPC_Decode, 232, 13, 46, // Opcode: MULQ_RS_PH_MM
/* 955 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 967
/* 959 */     MCD::OPC_CheckPredicate, 8, 47, 13, // Skip to: 4338
/* 963 */     MCD::OPC_Decode, 236, 13, 46, // Opcode: MULQ_S_PH_MMR2
/* 967 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 979
/* 971 */     MCD::OPC_CheckPredicate, 8, 35, 13, // Skip to: 4338
/* 975 */     MCD::OPC_Decode, 234, 13, 43, // Opcode: MULQ_RS_W_MMR2
/* 979 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 991
/* 983 */     MCD::OPC_CheckPredicate, 8, 23, 13, // Skip to: 4338
/* 987 */     MCD::OPC_Decode, 238, 13, 43, // Opcode: MULQ_S_W_MMR2
/* 991 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1003
/* 995 */     MCD::OPC_CheckPredicate, 8, 11, 13, // Skip to: 4338
/* 999 */     MCD::OPC_Decode, 225, 1, 50, // Opcode: APPEND_MMR2
/* 1003 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1015
/* 1007 */    MCD::OPC_CheckPredicate, 8, 255, 12, // Skip to: 4338
/* 1011 */    MCD::OPC_Decode, 135, 15, 50, // Opcode: PREPEND_MMR2
/* 1015 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1027
/* 1019 */    MCD::OPC_CheckPredicate, 7, 243, 12, // Skip to: 4338
/* 1023 */    MCD::OPC_Decode, 215, 12, 43, // Opcode: MODSUB_MM
/* 1027 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1039
/* 1031 */    MCD::OPC_CheckPredicate, 7, 231, 12, // Skip to: 4338
/* 1035 */    MCD::OPC_Decode, 239, 16, 49, // Opcode: SHRAV_R_W_MM
/* 1039 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1051
/* 1043 */    MCD::OPC_CheckPredicate, 8, 219, 12, // Skip to: 4338
/* 1047 */    MCD::OPC_Decode, 251, 16, 47, // Opcode: SHRLV_PH_MMR2
/* 1051 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1063
/* 1055 */    MCD::OPC_CheckPredicate, 7, 207, 12, // Skip to: 4338
/* 1059 */    MCD::OPC_Decode, 253, 16, 47, // Opcode: SHRLV_QB_MM
/* 1063 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1075
/* 1067 */    MCD::OPC_CheckPredicate, 7, 195, 12, // Skip to: 4338
/* 1071 */    MCD::OPC_Decode, 217, 16, 47, // Opcode: SHLLV_QB_MM
/* 1075 */    MCD::OPC_FilterValue, 15, 187, 12, // Skip to: 4338
/* 1079 */    MCD::OPC_CheckPredicate, 7, 183, 12, // Skip to: 4338
/* 1083 */    MCD::OPC_Decode, 221, 16, 49, // Opcode: SHLLV_S_W_MM
/* 1087 */    MCD::OPC_FilterValue, 24, 39, 0, // Skip to: 1130
/* 1091 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1094 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1106
/* 1098 */    MCD::OPC_CheckPredicate, 6, 164, 12, // Skip to: 4338
/* 1102 */    MCD::OPC_Decode, 249, 12, 51, // Opcode: MOVN_I_MM
/* 1106 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1118
/* 1110 */    MCD::OPC_CheckPredicate, 6, 152, 12, // Skip to: 4338
/* 1114 */    MCD::OPC_Decode, 141, 13, 51, // Opcode: MOVZ_I_MM
/* 1118 */    MCD::OPC_FilterValue, 4, 144, 12, // Skip to: 4338
/* 1122 */    MCD::OPC_CheckPredicate, 6, 140, 12, // Skip to: 4338
/* 1126 */    MCD::OPC_Decode, 186, 11, 52, // Opcode: LWXS_MM
/* 1130 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 1154
/* 1134 */    MCD::OPC_CheckPredicate, 7, 128, 12, // Skip to: 4338
/* 1138 */    MCD::OPC_CheckField, 22, 4, 0, 122, 12, // Skip to: 4338
/* 1144 */    MCD::OPC_CheckField, 6, 8, 0, 116, 12, // Skip to: 4338
/* 1150 */    MCD::OPC_Decode, 213, 16, 53, // Opcode: SHILO_MM
/* 1154 */    MCD::OPC_FilterValue, 37, 63, 0, // Skip to: 1221
/* 1158 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1161 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1173
/* 1165 */    MCD::OPC_CheckPredicate, 7, 97, 12, // Skip to: 4338
/* 1169 */    MCD::OPC_Decode, 221, 13, 42, // Opcode: MULEQ_S_W_PHL_MM
/* 1173 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1185
/* 1177 */    MCD::OPC_CheckPredicate, 7, 85, 12, // Skip to: 4338
/* 1181 */    MCD::OPC_Decode, 223, 13, 42, // Opcode: MULEQ_S_W_PHR_MM
/* 1185 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1197
/* 1189 */    MCD::OPC_CheckPredicate, 7, 73, 12, // Skip to: 4338
/* 1193 */    MCD::OPC_Decode, 239, 10, 52, // Opcode: LHX_MM
/* 1197 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1209
/* 1201 */    MCD::OPC_CheckPredicate, 7, 61, 12, // Skip to: 4338
/* 1205 */    MCD::OPC_Decode, 187, 11, 52, // Opcode: LWX_MM
/* 1209 */    MCD::OPC_FilterValue, 8, 53, 12, // Skip to: 4338
/* 1213 */    MCD::OPC_CheckPredicate, 7, 49, 12, // Skip to: 4338
/* 1217 */    MCD::OPC_Decode, 197, 10, 52, // Opcode: LBUX_MM
/* 1221 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1233
/* 1225 */    MCD::OPC_CheckPredicate, 6, 37, 12, // Skip to: 4338
/* 1229 */    MCD::OPC_Decode, 161, 8, 54, // Opcode: EXT_MM
/* 1233 */    MCD::OPC_FilterValue, 45, 123, 0, // Skip to: 1360
/* 1237 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1240 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1252
/* 1244 */    MCD::OPC_CheckPredicate, 8, 18, 12, // Skip to: 4338
/* 1248 */    MCD::OPC_Decode, 134, 14, 46, // Opcode: MUL_PH_MMR2
/* 1252 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1264
/* 1256 */    MCD::OPC_CheckPredicate, 8, 6, 12, // Skip to: 4338
/* 1260 */    MCD::OPC_Decode, 249, 14, 46, // Opcode: PRECR_QB_PH_MMR2
/* 1264 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1276
/* 1268 */    MCD::OPC_CheckPredicate, 7, 250, 11, // Skip to: 4338
/* 1272 */    MCD::OPC_Decode, 245, 14, 46, // Opcode: PRECRQ_QB_PH_MM
/* 1276 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1288
/* 1280 */    MCD::OPC_CheckPredicate, 7, 238, 11, // Skip to: 4338
/* 1284 */    MCD::OPC_Decode, 243, 14, 55, // Opcode: PRECRQ_PH_W_MM
/* 1288 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1300
/* 1292 */    MCD::OPC_CheckPredicate, 7, 226, 11, // Skip to: 4338
/* 1296 */    MCD::OPC_Decode, 247, 14, 55, // Opcode: PRECRQ_RS_PH_W_MM
/* 1300 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1312
/* 1304 */    MCD::OPC_CheckPredicate, 7, 214, 11, // Skip to: 4338
/* 1308 */    MCD::OPC_Decode, 241, 14, 46, // Opcode: PRECRQU_S_QB_PH_MM
/* 1312 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1324
/* 1316 */    MCD::OPC_CheckPredicate, 7, 202, 11, // Skip to: 4338
/* 1320 */    MCD::OPC_Decode, 199, 14, 46, // Opcode: PACKRL_PH_MM
/* 1324 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1336
/* 1328 */    MCD::OPC_CheckPredicate, 7, 190, 11, // Skip to: 4338
/* 1332 */    MCD::OPC_Decode, 218, 14, 46, // Opcode: PICK_QB_MM
/* 1336 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1348
/* 1340 */    MCD::OPC_CheckPredicate, 7, 178, 11, // Skip to: 4338
/* 1344 */    MCD::OPC_Decode, 216, 14, 46, // Opcode: PICK_PH_MM
/* 1348 */    MCD::OPC_FilterValue, 16, 170, 11, // Skip to: 4338
/* 1352 */    MCD::OPC_CheckPredicate, 8, 166, 11, // Skip to: 4338
/* 1356 */    MCD::OPC_Decode, 139, 14, 46, // Opcode: MUL_S_PH_MMR2
/* 1360 */    MCD::OPC_FilterValue, 53, 94, 0, // Skip to: 1458
/* 1364 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1367 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1379
/* 1371 */    MCD::OPC_CheckPredicate, 7, 147, 11, // Skip to: 4338
/* 1375 */    MCD::OPC_Decode, 249, 16, 40, // Opcode: SHRA_R_W_MM
/* 1379 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1397
/* 1383 */    MCD::OPC_CheckPredicate, 7, 135, 11, // Skip to: 4338
/* 1387 */    MCD::OPC_CheckField, 11, 1, 0, 129, 11, // Skip to: 4338
/* 1393 */    MCD::OPC_Decode, 241, 16, 56, // Opcode: SHRA_PH_MM
/* 1397 */    MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 1428
/* 1401 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 1404 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1416
/* 1408 */    MCD::OPC_CheckPredicate, 7, 110, 11, // Skip to: 4338
/* 1412 */    MCD::OPC_Decode, 223, 16, 56, // Opcode: SHLL_PH_MM
/* 1416 */    MCD::OPC_FilterValue, 1, 102, 11, // Skip to: 4338
/* 1420 */    MCD::OPC_CheckPredicate, 7, 98, 11, // Skip to: 4338
/* 1424 */    MCD::OPC_Decode, 227, 16, 56, // Opcode: SHLL_S_PH_MM
/* 1428 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1440
/* 1432 */    MCD::OPC_CheckPredicate, 7, 86, 11, // Skip to: 4338
/* 1436 */    MCD::OPC_Decode, 229, 16, 40, // Opcode: SHLL_S_W_MM
/* 1440 */    MCD::OPC_FilterValue, 28, 78, 11, // Skip to: 4338
/* 1444 */    MCD::OPC_CheckPredicate, 7, 74, 11, // Skip to: 4338
/* 1448 */    MCD::OPC_CheckField, 11, 1, 0, 68, 11, // Skip to: 4338
/* 1454 */    MCD::OPC_Decode, 245, 16, 56, // Opcode: SHRA_R_PH_MM
/* 1458 */    MCD::OPC_FilterValue, 60, 122, 6, // Skip to: 3120
/* 1462 */    MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 1465 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1477
/* 1469 */    MCD::OPC_CheckPredicate, 6, 49, 11, // Skip to: 4338
/* 1473 */    MCD::OPC_Decode, 145, 19, 57, // Opcode: TEQ_MM
/* 1477 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 1556
/* 1481 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1484 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1502
/* 1488 */    MCD::OPC_CheckPredicate, 7, 30, 11, // Skip to: 4338
/* 1492 */    MCD::OPC_CheckField, 21, 5, 0, 24, 11, // Skip to: 4338
/* 1498 */    MCD::OPC_Decode, 166, 12, 58, // Opcode: MFHI_DSP_MM
/* 1502 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1520
/* 1506 */    MCD::OPC_CheckPredicate, 7, 12, 11, // Skip to: 4338
/* 1510 */    MCD::OPC_CheckField, 21, 5, 0, 6, 11, // Skip to: 4338
/* 1516 */    MCD::OPC_Decode, 172, 12, 58, // Opcode: MFLO_DSP_MM
/* 1520 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1538
/* 1524 */    MCD::OPC_CheckPredicate, 7, 250, 10, // Skip to: 4338
/* 1528 */    MCD::OPC_CheckField, 21, 5, 0, 244, 10, // Skip to: 4338
/* 1534 */    MCD::OPC_Decode, 191, 13, 59, // Opcode: MTHI_DSP_MM
/* 1538 */    MCD::OPC_FilterValue, 3, 236, 10, // Skip to: 4338
/* 1542 */    MCD::OPC_CheckPredicate, 7, 232, 10, // Skip to: 4338
/* 1546 */    MCD::OPC_CheckField, 21, 5, 0, 226, 10, // Skip to: 4338
/* 1552 */    MCD::OPC_Decode, 198, 13, 60, // Opcode: MTLO_DSP_MM
/* 1556 */    MCD::OPC_FilterValue, 2, 51, 0, // Skip to: 1611
/* 1560 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1563 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1575
/* 1567 */    MCD::OPC_CheckPredicate, 8, 207, 10, // Skip to: 4338
/* 1571 */    MCD::OPC_Decode, 190, 7, 61, // Opcode: DPA_W_PH_MMR2
/* 1575 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1587
/* 1579 */    MCD::OPC_CheckPredicate, 8, 195, 10, // Skip to: 4338
/* 1583 */    MCD::OPC_Decode, 188, 7, 61, // Opcode: DPAX_W_PH_MMR2
/* 1587 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1599
/* 1591 */    MCD::OPC_CheckPredicate, 7, 183, 10, // Skip to: 4338
/* 1595 */    MCD::OPC_Decode, 184, 7, 61, // Opcode: DPAU_H_QBL_MM
/* 1599 */    MCD::OPC_FilterValue, 3, 175, 10, // Skip to: 4338
/* 1603 */    MCD::OPC_CheckPredicate, 7, 171, 10, // Skip to: 4338
/* 1607 */    MCD::OPC_Decode, 186, 7, 61, // Opcode: DPAU_H_QBR_MM
/* 1611 */    MCD::OPC_FilterValue, 4, 144, 0, // Skip to: 1759
/* 1615 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1618 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1629
/* 1622 */    MCD::OPC_CheckPredicate, 8, 152, 10, // Skip to: 4338
/* 1626 */    MCD::OPC_Decode, 122, 62, // Opcode: ABSQ_S_QB_MMR2
/* 1629 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 1640
/* 1633 */    MCD::OPC_CheckPredicate, 7, 141, 10, // Skip to: 4338
/* 1637 */    MCD::OPC_Decode, 120, 62, // Opcode: ABSQ_S_PH_MM
/* 1640 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 1651
/* 1644 */    MCD::OPC_CheckPredicate, 7, 130, 10, // Skip to: 4338
/* 1648 */    MCD::OPC_Decode, 124, 63, // Opcode: ABSQ_S_W_MM
/* 1651 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1663
/* 1655 */    MCD::OPC_CheckPredicate, 7, 119, 10, // Skip to: 4338
/* 1659 */    MCD::OPC_Decode, 154, 3, 63, // Opcode: BITREV_MM
/* 1663 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1675
/* 1667 */    MCD::OPC_CheckPredicate, 7, 107, 10, // Skip to: 4338
/* 1671 */    MCD::OPC_Decode, 143, 10, 64, // Opcode: INSV_MM
/* 1675 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1687
/* 1679 */    MCD::OPC_CheckPredicate, 7, 95, 10, // Skip to: 4338
/* 1683 */    MCD::OPC_Decode, 229, 14, 65, // Opcode: PRECEQ_W_PHL_MM
/* 1687 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1699
/* 1691 */    MCD::OPC_CheckPredicate, 7, 83, 10, // Skip to: 4338
/* 1695 */    MCD::OPC_Decode, 231, 14, 65, // Opcode: PRECEQ_W_PHR_MM
/* 1699 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1711
/* 1703 */    MCD::OPC_CheckPredicate, 7, 71, 10, // Skip to: 4338
/* 1707 */    MCD::OPC_Decode, 223, 14, 62, // Opcode: PRECEQU_PH_QBL_MM
/* 1711 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1723
/* 1715 */    MCD::OPC_CheckPredicate, 7, 59, 10, // Skip to: 4338
/* 1719 */    MCD::OPC_Decode, 227, 14, 62, // Opcode: PRECEQU_PH_QBR_MM
/* 1723 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1735
/* 1727 */    MCD::OPC_CheckPredicate, 7, 47, 10, // Skip to: 4338
/* 1731 */    MCD::OPC_Decode, 235, 14, 62, // Opcode: PRECEU_PH_QBL_MM
/* 1735 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1747
/* 1739 */    MCD::OPC_CheckPredicate, 7, 35, 10, // Skip to: 4338
/* 1743 */    MCD::OPC_Decode, 239, 14, 62, // Opcode: PRECEU_PH_QBR_MM
/* 1747 */    MCD::OPC_FilterValue, 15, 27, 10, // Skip to: 4338
/* 1751 */    MCD::OPC_CheckPredicate, 7, 23, 10, // Skip to: 4338
/* 1755 */    MCD::OPC_Decode, 191, 15, 65, // Opcode: RADDU_W_QB_MM
/* 1759 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 1790
/* 1763 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1766 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1778
/* 1770 */    MCD::OPC_CheckPredicate, 8, 4, 10, // Skip to: 4338
/* 1774 */    MCD::OPC_Decode, 243, 16, 66, // Opcode: SHRA_QB_MMR2
/* 1778 */    MCD::OPC_FilterValue, 1, 252, 9, // Skip to: 4338
/* 1782 */    MCD::OPC_CheckPredicate, 8, 248, 9, // Skip to: 4338
/* 1786 */    MCD::OPC_Decode, 247, 16, 66, // Opcode: SHRA_R_QB_MMR2
/* 1790 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1802
/* 1794 */    MCD::OPC_CheckPredicate, 6, 236, 9, // Skip to: 4338
/* 1798 */    MCD::OPC_Decode, 153, 19, 57, // Opcode: TGE_MM
/* 1802 */    MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 1845
/* 1806 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1809 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1827
/* 1813 */    MCD::OPC_CheckPredicate, 7, 217, 9, // Skip to: 4338
/* 1817 */    MCD::OPC_CheckField, 21, 5, 0, 211, 9, // Skip to: 4338
/* 1823 */    MCD::OPC_Decode, 194, 13, 67, // Opcode: MTHLIP_MM
/* 1827 */    MCD::OPC_FilterValue, 1, 203, 9, // Skip to: 4338
/* 1831 */    MCD::OPC_CheckPredicate, 7, 199, 9, // Skip to: 4338
/* 1835 */    MCD::OPC_CheckField, 21, 5, 0, 193, 9, // Skip to: 4338
/* 1841 */    MCD::OPC_Decode, 212, 16, 67, // Opcode: SHILOV_MM
/* 1845 */    MCD::OPC_FilterValue, 10, 51, 0, // Skip to: 1900
/* 1849 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1852 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1864
/* 1856 */    MCD::OPC_CheckPredicate, 7, 174, 9, // Skip to: 4338
/* 1860 */    MCD::OPC_Decode, 182, 7, 61, // Opcode: DPAQ_S_W_PH_MM
/* 1864 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1876
/* 1868 */    MCD::OPC_CheckPredicate, 7, 162, 9, // Skip to: 4338
/* 1872 */    MCD::OPC_Decode, 180, 7, 61, // Opcode: DPAQ_SA_L_W_MM
/* 1876 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1888
/* 1880 */    MCD::OPC_CheckPredicate, 8, 150, 9, // Skip to: 4338
/* 1884 */    MCD::OPC_Decode, 178, 7, 61, // Opcode: DPAQX_S_W_PH_MMR2
/* 1888 */    MCD::OPC_FilterValue, 3, 142, 9, // Skip to: 4338
/* 1892 */    MCD::OPC_CheckPredicate, 8, 138, 9, // Skip to: 4338
/* 1896 */    MCD::OPC_Decode, 176, 7, 61, // Opcode: DPAQX_SA_W_PH_MMR2
/* 1900 */    MCD::OPC_FilterValue, 12, 75, 0, // Skip to: 1979
/* 1904 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1907 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1919
/* 1911 */    MCD::OPC_CheckPredicate, 7, 119, 9, // Skip to: 4338
/* 1915 */    MCD::OPC_Decode, 206, 15, 68, // Opcode: REPLV_PH_MM
/* 1919 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1931
/* 1923 */    MCD::OPC_CheckPredicate, 7, 107, 9, // Skip to: 4338
/* 1927 */    MCD::OPC_Decode, 208, 15, 68, // Opcode: REPLV_QB_MM
/* 1931 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1943
/* 1935 */    MCD::OPC_CheckPredicate, 7, 95, 9, // Skip to: 4338
/* 1939 */    MCD::OPC_Decode, 222, 14, 62, // Opcode: PRECEQU_PH_QBLA_MM
/* 1943 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1955
/* 1947 */    MCD::OPC_CheckPredicate, 7, 83, 9, // Skip to: 4338
/* 1951 */    MCD::OPC_Decode, 226, 14, 62, // Opcode: PRECEQU_PH_QBRA_MM
/* 1955 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1967
/* 1959 */    MCD::OPC_CheckPredicate, 7, 71, 9, // Skip to: 4338
/* 1963 */    MCD::OPC_Decode, 234, 14, 62, // Opcode: PRECEU_PH_QBLA_MM
/* 1967 */    MCD::OPC_FilterValue, 13, 63, 9, // Skip to: 4338
/* 1971 */    MCD::OPC_CheckPredicate, 7, 59, 9, // Skip to: 4338
/* 1975 */    MCD::OPC_Decode, 238, 14, 62, // Opcode: PRECEU_PH_QBRA_MM
/* 1979 */    MCD::OPC_FilterValue, 13, 123, 0, // Skip to: 2106
/* 1983 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1986 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2004
/* 1990 */    MCD::OPC_CheckPredicate, 6, 40, 9, // Skip to: 4338
/* 1994 */    MCD::OPC_CheckField, 16, 10, 0, 34, 9, // Skip to: 4338
/* 2000 */    MCD::OPC_Decode, 159, 19, 0, // Opcode: TLBP_MM
/* 2004 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2022
/* 2008 */    MCD::OPC_CheckPredicate, 6, 22, 9, // Skip to: 4338
/* 2012 */    MCD::OPC_CheckField, 16, 10, 0, 16, 9, // Skip to: 4338
/* 2018 */    MCD::OPC_Decode, 161, 19, 0, // Opcode: TLBR_MM
/* 2022 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2040
/* 2026 */    MCD::OPC_CheckPredicate, 6, 4, 9, // Skip to: 4338
/* 2030 */    MCD::OPC_CheckField, 16, 10, 0, 254, 8, // Skip to: 4338
/* 2036 */    MCD::OPC_Decode, 163, 19, 0, // Opcode: TLBWI_MM
/* 2040 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2058
/* 2044 */    MCD::OPC_CheckPredicate, 6, 242, 8, // Skip to: 4338
/* 2048 */    MCD::OPC_CheckField, 16, 10, 0, 236, 8, // Skip to: 4338
/* 2054 */    MCD::OPC_Decode, 165, 19, 0, // Opcode: TLBWR_MM
/* 2058 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2070
/* 2062 */    MCD::OPC_CheckPredicate, 6, 224, 8, // Skip to: 4338
/* 2066 */    MCD::OPC_Decode, 208, 19, 69, // Opcode: WAIT_MM
/* 2070 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2088
/* 2074 */    MCD::OPC_CheckPredicate, 6, 212, 8, // Skip to: 4338
/* 2078 */    MCD::OPC_CheckField, 16, 10, 0, 206, 8, // Skip to: 4338
/* 2084 */    MCD::OPC_Decode, 243, 6, 0, // Opcode: DERET_MM
/* 2088 */    MCD::OPC_FilterValue, 15, 198, 8, // Skip to: 4338
/* 2092 */    MCD::OPC_CheckPredicate, 6, 194, 8, // Skip to: 4338
/* 2096 */    MCD::OPC_CheckField, 16, 10, 0, 188, 8, // Skip to: 4338
/* 2102 */    MCD::OPC_Decode, 128, 8, 0, // Opcode: ERET_MM
/* 2106 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2118
/* 2110 */    MCD::OPC_CheckPredicate, 8, 176, 8, // Skip to: 4338
/* 2114 */    MCD::OPC_Decode, 255, 16, 56, // Opcode: SHRL_PH_MMR2
/* 2118 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 2130
/* 2122 */    MCD::OPC_CheckPredicate, 6, 164, 8, // Skip to: 4338
/* 2126 */    MCD::OPC_Decode, 152, 19, 57, // Opcode: TGEU_MM
/* 2130 */    MCD::OPC_FilterValue, 18, 51, 0, // Skip to: 2185
/* 2134 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2137 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2149
/* 2141 */    MCD::OPC_CheckPredicate, 8, 145, 8, // Skip to: 4338
/* 2145 */    MCD::OPC_Decode, 213, 7, 61, // Opcode: DPS_W_PH_MMR2
/* 2149 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2161
/* 2153 */    MCD::OPC_CheckPredicate, 8, 133, 8, // Skip to: 4338
/* 2157 */    MCD::OPC_Decode, 211, 7, 61, // Opcode: DPSX_W_PH_MMR2
/* 2161 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2173
/* 2165 */    MCD::OPC_CheckPredicate, 7, 121, 8, // Skip to: 4338
/* 2169 */    MCD::OPC_Decode, 207, 7, 61, // Opcode: DPSU_H_QBL_MM
/* 2173 */    MCD::OPC_FilterValue, 3, 113, 8, // Skip to: 4338
/* 2177 */    MCD::OPC_CheckPredicate, 7, 109, 8, // Skip to: 4338
/* 2181 */    MCD::OPC_Decode, 209, 7, 61, // Opcode: DPSU_H_QBR_MM
/* 2185 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 2203
/* 2189 */    MCD::OPC_CheckPredicate, 7, 97, 8, // Skip to: 4338
/* 2193 */    MCD::OPC_CheckField, 12, 1, 0, 91, 8, // Skip to: 4338
/* 2199 */    MCD::OPC_Decode, 212, 15, 70, // Opcode: REPL_QB_MM
/* 2203 */    MCD::OPC_FilterValue, 25, 51, 0, // Skip to: 2258
/* 2207 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2210 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2222
/* 2214 */    MCD::OPC_CheckPredicate, 7, 72, 8, // Skip to: 4338
/* 2218 */    MCD::OPC_Decode, 193, 15, 71, // Opcode: RDDSP_MM
/* 2222 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2234
/* 2226 */    MCD::OPC_CheckPredicate, 7, 60, 8, // Skip to: 4338
/* 2230 */    MCD::OPC_Decode, 211, 19, 71, // Opcode: WRDSP_MM
/* 2234 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2246
/* 2238 */    MCD::OPC_CheckPredicate, 7, 48, 8, // Skip to: 4338
/* 2242 */    MCD::OPC_Decode, 142, 8, 72, // Opcode: EXTP_MM
/* 2246 */    MCD::OPC_FilterValue, 3, 40, 8, // Skip to: 4338
/* 2250 */    MCD::OPC_CheckPredicate, 7, 36, 8, // Skip to: 4338
/* 2254 */    MCD::OPC_Decode, 139, 8, 72, // Opcode: EXTPDP_MM
/* 2258 */    MCD::OPC_FilterValue, 26, 51, 0, // Skip to: 2313
/* 2262 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2265 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2277
/* 2269 */    MCD::OPC_CheckPredicate, 7, 17, 8, // Skip to: 4338
/* 2273 */    MCD::OPC_Decode, 199, 7, 61, // Opcode: DPSQ_S_W_PH_MM
/* 2277 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2289
/* 2281 */    MCD::OPC_CheckPredicate, 7, 5, 8, // Skip to: 4338
/* 2285 */    MCD::OPC_Decode, 197, 7, 61, // Opcode: DPSQ_SA_L_W_MM
/* 2289 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2301
/* 2293 */    MCD::OPC_CheckPredicate, 8, 249, 7, // Skip to: 4338
/* 2297 */    MCD::OPC_Decode, 195, 7, 61, // Opcode: DPSQX_S_W_PH_MMR2
/* 2301 */    MCD::OPC_FilterValue, 3, 241, 7, // Skip to: 4338
/* 2305 */    MCD::OPC_CheckPredicate, 8, 237, 7, // Skip to: 4338
/* 2309 */    MCD::OPC_Decode, 193, 7, 61, // Opcode: DPSQX_SA_W_PH_MMR2
/* 2313 */    MCD::OPC_FilterValue, 29, 39, 0, // Skip to: 2356
/* 2317 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2320 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2338
/* 2324 */    MCD::OPC_CheckPredicate, 6, 218, 7, // Skip to: 4338
/* 2328 */    MCD::OPC_CheckField, 21, 5, 0, 212, 7, // Skip to: 4338
/* 2334 */    MCD::OPC_Decode, 137, 7, 73, // Opcode: DI_MM
/* 2338 */    MCD::OPC_FilterValue, 5, 204, 7, // Skip to: 4338
/* 2342 */    MCD::OPC_CheckPredicate, 6, 200, 7, // Skip to: 4338
/* 2346 */    MCD::OPC_CheckField, 21, 5, 0, 194, 7, // Skip to: 4338
/* 2352 */    MCD::OPC_Decode, 250, 7, 73, // Opcode: EI_MM
/* 2356 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2368
/* 2360 */    MCD::OPC_CheckPredicate, 6, 182, 7, // Skip to: 4338
/* 2364 */    MCD::OPC_Decode, 172, 19, 57, // Opcode: TLT_MM
/* 2368 */    MCD::OPC_FilterValue, 33, 27, 0, // Skip to: 2399
/* 2372 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 2375 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2387
/* 2379 */    MCD::OPC_CheckPredicate, 7, 163, 7, // Skip to: 4338
/* 2383 */    MCD::OPC_Decode, 225, 16, 66, // Opcode: SHLL_QB_MM
/* 2387 */    MCD::OPC_FilterValue, 1, 155, 7, // Skip to: 4338
/* 2391 */    MCD::OPC_CheckPredicate, 7, 151, 7, // Skip to: 4338
/* 2395 */    MCD::OPC_Decode, 129, 17, 66, // Opcode: SHRL_QB_MM
/* 2399 */    MCD::OPC_FilterValue, 34, 39, 0, // Skip to: 2442
/* 2403 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2406 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2418
/* 2410 */    MCD::OPC_CheckPredicate, 8, 132, 7, // Skip to: 4338
/* 2414 */    MCD::OPC_Decode, 174, 2, 74, // Opcode: BALIGN_MMR2
/* 2418 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2430
/* 2422 */    MCD::OPC_CheckPredicate, 7, 120, 7, // Skip to: 4338
/* 2426 */    MCD::OPC_Decode, 141, 8, 75, // Opcode: EXTPV_MM
/* 2430 */    MCD::OPC_FilterValue, 3, 112, 7, // Skip to: 4338
/* 2434 */    MCD::OPC_CheckPredicate, 7, 108, 7, // Skip to: 4338
/* 2438 */    MCD::OPC_Decode, 138, 8, 75, // Opcode: EXTPDPV_MM
/* 2442 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2454
/* 2446 */    MCD::OPC_CheckPredicate, 6, 96, 7, // Skip to: 4338
/* 2450 */    MCD::OPC_Decode, 171, 19, 57, // Opcode: TLTU_MM
/* 2454 */    MCD::OPC_FilterValue, 41, 51, 0, // Skip to: 2509
/* 2458 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2461 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2473
/* 2465 */    MCD::OPC_CheckPredicate, 7, 77, 7, // Skip to: 4338
/* 2469 */    MCD::OPC_Decode, 246, 11, 61, // Opcode: MAQ_S_W_PHR_MM
/* 2473 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2485
/* 2477 */    MCD::OPC_CheckPredicate, 7, 65, 7, // Skip to: 4338
/* 2481 */    MCD::OPC_Decode, 244, 11, 61, // Opcode: MAQ_S_W_PHL_MM
/* 2485 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2497
/* 2489 */    MCD::OPC_CheckPredicate, 7, 53, 7, // Skip to: 4338
/* 2493 */    MCD::OPC_Decode, 242, 11, 61, // Opcode: MAQ_SA_W_PHR_MM
/* 2497 */    MCD::OPC_FilterValue, 3, 45, 7, // Skip to: 4338
/* 2501 */    MCD::OPC_CheckPredicate, 7, 41, 7, // Skip to: 4338
/* 2505 */    MCD::OPC_Decode, 240, 11, 61, // Opcode: MAQ_SA_W_PHL_MM
/* 2509 */    MCD::OPC_FilterValue, 42, 51, 0, // Skip to: 2564
/* 2513 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2516 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2528
/* 2520 */    MCD::OPC_CheckPredicate, 7, 22, 7, // Skip to: 4338
/* 2524 */    MCD::OPC_Decode, 233, 11, 61, // Opcode: MADD_DSP_MM
/* 2528 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2540
/* 2532 */    MCD::OPC_CheckPredicate, 7, 10, 7, // Skip to: 4338
/* 2536 */    MCD::OPC_Decode, 223, 11, 61, // Opcode: MADDU_DSP_MM
/* 2540 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2552
/* 2544 */    MCD::OPC_CheckPredicate, 7, 254, 6, // Skip to: 4338
/* 2548 */    MCD::OPC_Decode, 167, 13, 61, // Opcode: MSUB_DSP_MM
/* 2552 */    MCD::OPC_FilterValue, 3, 246, 6, // Skip to: 4338
/* 2556 */    MCD::OPC_CheckPredicate, 7, 242, 6, // Skip to: 4338
/* 2560 */    MCD::OPC_Decode, 157, 13, 61, // Opcode: MSUBU_DSP_MM
/* 2564 */    MCD::OPC_FilterValue, 44, 171, 0, // Skip to: 2739
/* 2568 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2571 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2583
/* 2575 */    MCD::OPC_CheckPredicate, 6, 223, 6, // Skip to: 4338
/* 2579 */    MCD::OPC_Decode, 172, 16, 63, // Opcode: SEB_MM
/* 2583 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2595
/* 2587 */    MCD::OPC_CheckPredicate, 6, 211, 6, // Skip to: 4338
/* 2591 */    MCD::OPC_Decode, 176, 16, 63, // Opcode: SEH_MM
/* 2595 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2607
/* 2599 */    MCD::OPC_CheckPredicate, 6, 199, 6, // Skip to: 4338
/* 2603 */    MCD::OPC_Decode, 225, 4, 63, // Opcode: CLO_MM
/* 2607 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2619
/* 2611 */    MCD::OPC_CheckPredicate, 6, 187, 6, // Skip to: 4338
/* 2615 */    MCD::OPC_Decode, 245, 4, 63, // Opcode: CLZ_MM
/* 2619 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2631
/* 2623 */    MCD::OPC_CheckPredicate, 9, 175, 6, // Skip to: 4338
/* 2627 */    MCD::OPC_Decode, 196, 15, 76, // Opcode: RDHWR_MM
/* 2631 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2643
/* 2635 */    MCD::OPC_CheckPredicate, 6, 163, 6, // Skip to: 4338
/* 2639 */    MCD::OPC_Decode, 214, 19, 63, // Opcode: WSBH_MM
/* 2643 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2655
/* 2647 */    MCD::OPC_CheckPredicate, 6, 151, 6, // Skip to: 4338
/* 2651 */    MCD::OPC_Decode, 250, 13, 77, // Opcode: MULT_MM
/* 2655 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2667
/* 2659 */    MCD::OPC_CheckPredicate, 6, 139, 6, // Skip to: 4338
/* 2663 */    MCD::OPC_Decode, 252, 13, 77, // Opcode: MULTu_MM
/* 2667 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2679
/* 2671 */    MCD::OPC_CheckPredicate, 6, 127, 6, // Skip to: 4338
/* 2675 */    MCD::OPC_Decode, 161, 16, 77, // Opcode: SDIV_MM
/* 2679 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2691
/* 2683 */    MCD::OPC_CheckPredicate, 6, 115, 6, // Skip to: 4338
/* 2687 */    MCD::OPC_Decode, 191, 19, 77, // Opcode: UDIV_MM
/* 2691 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2703
/* 2695 */    MCD::OPC_CheckPredicate, 6, 103, 6, // Skip to: 4338
/* 2699 */    MCD::OPC_Decode, 234, 11, 77, // Opcode: MADD_MM
/* 2703 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2715
/* 2707 */    MCD::OPC_CheckPredicate, 6, 91, 6, // Skip to: 4338
/* 2711 */    MCD::OPC_Decode, 224, 11, 77, // Opcode: MADDU_MM
/* 2715 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2727
/* 2719 */    MCD::OPC_CheckPredicate, 6, 79, 6, // Skip to: 4338
/* 2723 */    MCD::OPC_Decode, 168, 13, 77, // Opcode: MSUB_MM
/* 2727 */    MCD::OPC_FilterValue, 15, 71, 6, // Skip to: 4338
/* 2731 */    MCD::OPC_CheckPredicate, 6, 67, 6, // Skip to: 4338
/* 2735 */    MCD::OPC_Decode, 158, 13, 77, // Opcode: MSUBU_MM
/* 2739 */    MCD::OPC_FilterValue, 45, 45, 0, // Skip to: 2788
/* 2743 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2746 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2764
/* 2750 */    MCD::OPC_CheckPredicate, 6, 48, 6, // Skip to: 4338
/* 2754 */    MCD::OPC_CheckField, 21, 5, 0, 42, 6, // Skip to: 4338
/* 2760 */    MCD::OPC_Decode, 216, 18, 78, // Opcode: SYNC_MM
/* 2764 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2776
/* 2768 */    MCD::OPC_CheckPredicate, 6, 30, 6, // Skip to: 4338
/* 2772 */    MCD::OPC_Decode, 219, 18, 69, // Opcode: SYSCALL_MM
/* 2776 */    MCD::OPC_FilterValue, 13, 22, 6, // Skip to: 4338
/* 2780 */    MCD::OPC_CheckPredicate, 6, 18, 6, // Skip to: 4338
/* 2784 */    MCD::OPC_Decode, 149, 16, 69, // Opcode: SDBBP_MM
/* 2788 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2800
/* 2792 */    MCD::OPC_CheckPredicate, 6, 6, 6, // Skip to: 4338
/* 2796 */    MCD::OPC_Decode, 176, 19, 57, // Opcode: TNE_MM
/* 2800 */    MCD::OPC_FilterValue, 50, 51, 0, // Skip to: 2855
/* 2804 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2807 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2819
/* 2811 */    MCD::OPC_CheckPredicate, 7, 243, 5, // Skip to: 4338
/* 2815 */    MCD::OPC_Decode, 249, 13, 79, // Opcode: MULT_DSP_MM
/* 2819 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2831
/* 2823 */    MCD::OPC_CheckPredicate, 7, 231, 5, // Skip to: 4338
/* 2827 */    MCD::OPC_Decode, 247, 13, 79, // Opcode: MULTU_DSP_MM
/* 2831 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2843
/* 2835 */    MCD::OPC_CheckPredicate, 8, 219, 5, // Skip to: 4338
/* 2839 */    MCD::OPC_Decode, 244, 13, 61, // Opcode: MULSA_W_PH_MMR2
/* 2843 */    MCD::OPC_FilterValue, 3, 211, 5, // Skip to: 4338
/* 2847 */    MCD::OPC_CheckPredicate, 7, 207, 5, // Skip to: 4338
/* 2851 */    MCD::OPC_Decode, 242, 13, 61, // Opcode: MULSAQ_S_W_PH_MM
/* 2855 */    MCD::OPC_FilterValue, 52, 27, 0, // Skip to: 2886
/* 2859 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2862 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2874
/* 2866 */    MCD::OPC_CheckPredicate, 10, 188, 5, // Skip to: 4338
/* 2870 */    MCD::OPC_Decode, 197, 4, 80, // Opcode: CFC2_MM
/* 2874 */    MCD::OPC_FilterValue, 13, 180, 5, // Skip to: 4338
/* 2878 */    MCD::OPC_CheckPredicate, 10, 176, 5, // Skip to: 4338
/* 2882 */    MCD::OPC_Decode, 220, 5, 81, // Opcode: CTC2_MM
/* 2886 */    MCD::OPC_FilterValue, 53, 75, 0, // Skip to: 2965
/* 2890 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2893 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2911
/* 2897 */    MCD::OPC_CheckPredicate, 6, 157, 5, // Skip to: 4338
/* 2901 */    MCD::OPC_CheckField, 21, 5, 0, 151, 5, // Skip to: 4338
/* 2907 */    MCD::OPC_Decode, 167, 12, 73, // Opcode: MFHI_MM
/* 2911 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2929
/* 2915 */    MCD::OPC_CheckPredicate, 6, 139, 5, // Skip to: 4338
/* 2919 */    MCD::OPC_CheckField, 21, 5, 0, 133, 5, // Skip to: 4338
/* 2925 */    MCD::OPC_Decode, 173, 12, 73, // Opcode: MFLO_MM
/* 2929 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2947
/* 2933 */    MCD::OPC_CheckPredicate, 6, 121, 5, // Skip to: 4338
/* 2937 */    MCD::OPC_CheckField, 21, 5, 0, 115, 5, // Skip to: 4338
/* 2943 */    MCD::OPC_Decode, 192, 13, 73, // Opcode: MTHI_MM
/* 2947 */    MCD::OPC_FilterValue, 3, 107, 5, // Skip to: 4338
/* 2951 */    MCD::OPC_CheckPredicate, 6, 103, 5, // Skip to: 4338
/* 2955 */    MCD::OPC_CheckField, 21, 5, 0, 97, 5, // Skip to: 4338
/* 2961 */    MCD::OPC_Decode, 199, 13, 73, // Opcode: MTLO_MM
/* 2965 */    MCD::OPC_FilterValue, 57, 51, 0, // Skip to: 3020
/* 2969 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2972 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2984
/* 2976 */    MCD::OPC_CheckPredicate, 7, 78, 5, // Skip to: 4338
/* 2980 */    MCD::OPC_Decode, 158, 8, 72, // Opcode: EXTR_W_MM
/* 2984 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2996
/* 2988 */    MCD::OPC_CheckPredicate, 7, 66, 5, // Skip to: 4338
/* 2992 */    MCD::OPC_Decode, 154, 8, 72, // Opcode: EXTR_R_W_MM
/* 2996 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3008
/* 3000 */    MCD::OPC_CheckPredicate, 7, 54, 5, // Skip to: 4338
/* 3004 */    MCD::OPC_Decode, 152, 8, 72, // Opcode: EXTR_RS_W_MM
/* 3008 */    MCD::OPC_FilterValue, 3, 46, 5, // Skip to: 4338
/* 3012 */    MCD::OPC_CheckPredicate, 7, 42, 5, // Skip to: 4338
/* 3016 */    MCD::OPC_Decode, 156, 8, 72, // Opcode: EXTR_S_H_MM
/* 3020 */    MCD::OPC_FilterValue, 58, 51, 0, // Skip to: 3075
/* 3024 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 3027 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3039
/* 3031 */    MCD::OPC_CheckPredicate, 7, 23, 5, // Skip to: 4338
/* 3035 */    MCD::OPC_Decode, 150, 8, 75, // Opcode: EXTRV_W_MM
/* 3039 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3051
/* 3043 */    MCD::OPC_CheckPredicate, 7, 11, 5, // Skip to: 4338
/* 3047 */    MCD::OPC_Decode, 146, 8, 75, // Opcode: EXTRV_R_W_MM
/* 3051 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3063
/* 3055 */    MCD::OPC_CheckPredicate, 7, 255, 4, // Skip to: 4338
/* 3059 */    MCD::OPC_Decode, 144, 8, 75, // Opcode: EXTRV_RS_W_MM
/* 3063 */    MCD::OPC_FilterValue, 3, 247, 4, // Skip to: 4338
/* 3067 */    MCD::OPC_CheckPredicate, 7, 243, 4, // Skip to: 4338
/* 3071 */    MCD::OPC_Decode, 148, 8, 75, // Opcode: EXTRV_S_H_MM
/* 3075 */    MCD::OPC_FilterValue, 60, 235, 4, // Skip to: 4338
/* 3079 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3082 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 3108
/* 3086 */    MCD::OPC_CheckPredicate, 6, 10, 0, // Skip to: 3100
/* 3090 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3100
/* 3096 */    MCD::OPC_Decode, 179, 10, 73, // Opcode: JR_MM
/* 3100 */    MCD::OPC_CheckPredicate, 6, 210, 4, // Skip to: 4338
/* 3104 */    MCD::OPC_Decode, 159, 10, 63, // Opcode: JALR_MM
/* 3108 */    MCD::OPC_FilterValue, 4, 202, 4, // Skip to: 4338
/* 3112 */    MCD::OPC_CheckPredicate, 6, 198, 4, // Skip to: 4338
/* 3116 */    MCD::OPC_Decode, 157, 10, 63, // Opcode: JALRS_MM
/* 3120 */    MCD::OPC_FilterValue, 61, 190, 4, // Skip to: 4338
/* 3124 */    MCD::OPC_CheckPredicate, 7, 186, 4, // Skip to: 4338
/* 3128 */    MCD::OPC_CheckField, 6, 5, 0, 180, 4, // Skip to: 4338
/* 3134 */    MCD::OPC_Decode, 210, 15, 82, // Opcode: REPL_PH_MM
/* 3138 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3150
/* 3142 */    MCD::OPC_CheckPredicate, 6, 168, 4, // Skip to: 4338
/* 3146 */    MCD::OPC_Decode, 196, 1, 83, // Opcode: ADDi_MM
/* 3150 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3162
/* 3154 */    MCD::OPC_CheckPredicate, 6, 156, 4, // Skip to: 4338
/* 3158 */    MCD::OPC_Decode, 205, 10, 84, // Opcode: LBu_MM
/* 3162 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3174
/* 3166 */    MCD::OPC_CheckPredicate, 6, 144, 4, // Skip to: 4338
/* 3170 */    MCD::OPC_Decode, 133, 16, 84, // Opcode: SB_MM
/* 3174 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3186
/* 3178 */    MCD::OPC_CheckPredicate, 6, 132, 4, // Skip to: 4338
/* 3182 */    MCD::OPC_Decode, 199, 10, 84, // Opcode: LB_MM
/* 3186 */    MCD::OPC_FilterValue, 8, 63, 0, // Skip to: 3253
/* 3190 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3193 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3205
/* 3197 */    MCD::OPC_CheckPredicate, 6, 113, 4, // Skip to: 4338
/* 3201 */    MCD::OPC_Decode, 173, 11, 85, // Opcode: LWP_MM
/* 3205 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3217
/* 3209 */    MCD::OPC_CheckPredicate, 6, 101, 4, // Skip to: 4338
/* 3213 */    MCD::OPC_Decode, 169, 11, 85, // Opcode: LWM32_MM
/* 3217 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3229
/* 3221 */    MCD::OPC_CheckPredicate, 6, 89, 4, // Skip to: 4338
/* 3225 */    MCD::OPC_Decode, 173, 4, 86, // Opcode: CACHE_MM
/* 3229 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3241
/* 3233 */    MCD::OPC_CheckPredicate, 6, 77, 4, // Skip to: 4338
/* 3237 */    MCD::OPC_Decode, 199, 18, 85, // Opcode: SWP_MM
/* 3241 */    MCD::OPC_FilterValue, 13, 69, 4, // Skip to: 4338
/* 3245 */    MCD::OPC_CheckPredicate, 6, 65, 4, // Skip to: 4338
/* 3249 */    MCD::OPC_Decode, 197, 18, 85, // Opcode: SWM32_MM
/* 3253 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3265
/* 3257 */    MCD::OPC_CheckPredicate, 6, 53, 4, // Skip to: 4338
/* 3261 */    MCD::OPC_Decode, 198, 1, 83, // Opcode: ADDiu_MM
/* 3265 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3277
/* 3269 */    MCD::OPC_CheckPredicate, 6, 41, 4, // Skip to: 4338
/* 3273 */    MCD::OPC_Decode, 245, 10, 84, // Opcode: LHu_MM
/* 3277 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3289
/* 3281 */    MCD::OPC_CheckPredicate, 6, 29, 4, // Skip to: 4338
/* 3285 */    MCD::OPC_Decode, 130, 17, 84, // Opcode: SH_MM
/* 3289 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3301
/* 3293 */    MCD::OPC_CheckPredicate, 6, 17, 4, // Skip to: 4338
/* 3297 */    MCD::OPC_Decode, 240, 10, 84, // Opcode: LH_MM
/* 3301 */    MCD::OPC_FilterValue, 16, 35, 1, // Skip to: 3596
/* 3305 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3308 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3320
/* 3312 */    MCD::OPC_CheckPredicate, 6, 254, 3, // Skip to: 4338
/* 3316 */    MCD::OPC_Decode, 200, 3, 87, // Opcode: BLTZ_MM
/* 3320 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3332
/* 3324 */    MCD::OPC_CheckPredicate, 6, 242, 3, // Skip to: 4338
/* 3328 */    MCD::OPC_Decode, 195, 3, 87, // Opcode: BLTZAL_MM
/* 3332 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3344
/* 3336 */    MCD::OPC_CheckPredicate, 6, 230, 3, // Skip to: 4338
/* 3340 */    MCD::OPC_Decode, 247, 2, 87, // Opcode: BGEZ_MM
/* 3344 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3356
/* 3348 */    MCD::OPC_CheckPredicate, 6, 218, 3, // Skip to: 4338
/* 3352 */    MCD::OPC_Decode, 242, 2, 87, // Opcode: BGEZAL_MM
/* 3356 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3368
/* 3360 */    MCD::OPC_CheckPredicate, 6, 206, 3, // Skip to: 4338
/* 3364 */    MCD::OPC_Decode, 173, 3, 87, // Opcode: BLEZ_MM
/* 3368 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3380
/* 3372 */    MCD::OPC_CheckPredicate, 11, 194, 3, // Skip to: 4338
/* 3376 */    MCD::OPC_Decode, 226, 3, 87, // Opcode: BNEZC_MM
/* 3380 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3392
/* 3384 */    MCD::OPC_CheckPredicate, 6, 182, 3, // Skip to: 4338
/* 3388 */    MCD::OPC_Decode, 136, 3, 87, // Opcode: BGTZ_MM
/* 3392 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3404
/* 3396 */    MCD::OPC_CheckPredicate, 11, 170, 3, // Skip to: 4338
/* 3400 */    MCD::OPC_Decode, 218, 2, 87, // Opcode: BEQZC_MM
/* 3404 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3416
/* 3408 */    MCD::OPC_CheckPredicate, 6, 158, 3, // Skip to: 4338
/* 3412 */    MCD::OPC_Decode, 169, 19, 88, // Opcode: TLTI_MM
/* 3416 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3428
/* 3420 */    MCD::OPC_CheckPredicate, 6, 146, 3, // Skip to: 4338
/* 3424 */    MCD::OPC_Decode, 150, 19, 88, // Opcode: TGEI_MM
/* 3428 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3440
/* 3432 */    MCD::OPC_CheckPredicate, 6, 134, 3, // Skip to: 4338
/* 3436 */    MCD::OPC_Decode, 168, 19, 88, // Opcode: TLTIU_MM
/* 3440 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3452
/* 3444 */    MCD::OPC_CheckPredicate, 6, 122, 3, // Skip to: 4338
/* 3448 */    MCD::OPC_Decode, 149, 19, 88, // Opcode: TGEIU_MM
/* 3452 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3464
/* 3456 */    MCD::OPC_CheckPredicate, 6, 110, 3, // Skip to: 4338
/* 3460 */    MCD::OPC_Decode, 175, 19, 88, // Opcode: TNEI_MM
/* 3464 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3476
/* 3468 */    MCD::OPC_CheckPredicate, 6, 98, 3, // Skip to: 4338
/* 3472 */    MCD::OPC_Decode, 146, 11, 89, // Opcode: LUi_MM
/* 3476 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3488
/* 3480 */    MCD::OPC_CheckPredicate, 6, 86, 3, // Skip to: 4338
/* 3484 */    MCD::OPC_Decode, 144, 19, 88, // Opcode: TEQI_MM
/* 3488 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 3500
/* 3492 */    MCD::OPC_CheckPredicate, 6, 74, 3, // Skip to: 4338
/* 3496 */    MCD::OPC_Decode, 214, 18, 90, // Opcode: SYNCI_MM
/* 3500 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3512
/* 3504 */    MCD::OPC_CheckPredicate, 6, 62, 3, // Skip to: 4338
/* 3508 */    MCD::OPC_Decode, 194, 3, 87, // Opcode: BLTZALS_MM
/* 3512 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3524
/* 3516 */    MCD::OPC_CheckPredicate, 6, 50, 3, // Skip to: 4338
/* 3520 */    MCD::OPC_Decode, 241, 2, 87, // Opcode: BGEZALS_MM
/* 3524 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 3542
/* 3528 */    MCD::OPC_CheckPredicate, 12, 38, 3, // Skip to: 4338
/* 3532 */    MCD::OPC_CheckField, 16, 5, 0, 32, 3, // Skip to: 4338
/* 3538 */    MCD::OPC_Decode, 239, 3, 91, // Opcode: BPOSGE32C_MMR3
/* 3542 */    MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 3560
/* 3546 */    MCD::OPC_CheckPredicate, 13, 20, 3, // Skip to: 4338
/* 3550 */    MCD::OPC_CheckField, 16, 5, 0, 14, 3, // Skip to: 4338
/* 3556 */    MCD::OPC_Decode, 240, 3, 92, // Opcode: BPOSGE32_MM
/* 3560 */    MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 3578
/* 3564 */    MCD::OPC_CheckPredicate, 14, 2, 3, // Skip to: 4338
/* 3568 */    MCD::OPC_CheckField, 16, 2, 0, 252, 2, // Skip to: 4338
/* 3574 */    MCD::OPC_Decode, 186, 2, 93, // Opcode: BC1F_MM
/* 3578 */    MCD::OPC_FilterValue, 29, 244, 2, // Skip to: 4338
/* 3582 */    MCD::OPC_CheckPredicate, 14, 240, 2, // Skip to: 4338
/* 3586 */    MCD::OPC_CheckField, 16, 2, 0, 234, 2, // Skip to: 4338
/* 3592 */    MCD::OPC_Decode, 191, 2, 93, // Opcode: BC1T_MM
/* 3596 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3608
/* 3600 */    MCD::OPC_CheckPredicate, 6, 222, 2, // Skip to: 4338
/* 3604 */    MCD::OPC_Decode, 196, 14, 94, // Opcode: ORi_MM
/* 3608 */    MCD::OPC_FilterValue, 21, 167, 0, // Skip to: 3779
/* 3612 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3615 */    MCD::OPC_FilterValue, 59, 27, 0, // Skip to: 3646
/* 3619 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3622 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3634
/* 3626 */    MCD::OPC_CheckPredicate, 15, 196, 2, // Skip to: 4338
/* 3630 */    MCD::OPC_Decode, 196, 4, 95, // Opcode: CFC1_MM
/* 3634 */    MCD::OPC_FilterValue, 3, 188, 2, // Skip to: 4338
/* 3638 */    MCD::OPC_CheckPredicate, 15, 184, 2, // Skip to: 4338
/* 3642 */    MCD::OPC_Decode, 219, 5, 96, // Opcode: CTC1_MM
/* 3646 */    MCD::OPC_FilterValue, 251, 2, 27, 0, // Skip to: 3678
/* 3651 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3654 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3666
/* 3658 */    MCD::OPC_CheckPredicate, 6, 164, 2, // Skip to: 4338
/* 3662 */    MCD::OPC_Decode, 237, 12, 97, // Opcode: MOVF_I_MM
/* 3666 */    MCD::OPC_FilterValue, 1, 156, 2, // Skip to: 4338
/* 3670 */    MCD::OPC_CheckPredicate, 6, 152, 2, // Skip to: 4338
/* 3674 */    MCD::OPC_Decode, 129, 13, 97, // Opcode: MOVT_I_MM
/* 3678 */    MCD::OPC_FilterValue, 160, 3, 8, 0, // Skip to: 3691
/* 3683 */    MCD::OPC_CheckPredicate, 6, 139, 2, // Skip to: 4338
/* 3687 */    MCD::OPC_Decode, 130, 15, 98, // Opcode: PREFX_MM
/* 3691 */    MCD::OPC_FilterValue, 187, 4, 51, 0, // Skip to: 3747
/* 3696 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3699 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3711
/* 3703 */    MCD::OPC_CheckPredicate, 16, 119, 2, // Skip to: 4338
/* 3707 */    MCD::OPC_Decode, 241, 15, 99, // Opcode: RSQRT_S_MM
/* 3711 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3723
/* 3715 */    MCD::OPC_CheckPredicate, 15, 107, 2, // Skip to: 4338
/* 3719 */    MCD::OPC_Decode, 204, 15, 99, // Opcode: RECIP_S_MM
/* 3723 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3735
/* 3727 */    MCD::OPC_CheckPredicate, 17, 95, 2, // Skip to: 4338
/* 3731 */    MCD::OPC_Decode, 237, 15, 100, // Opcode: RSQRT_D32_MM
/* 3735 */    MCD::OPC_FilterValue, 10, 87, 2, // Skip to: 4338
/* 3739 */    MCD::OPC_CheckPredicate, 17, 83, 2, // Skip to: 4338
/* 3743 */    MCD::OPC_Decode, 200, 15, 100, // Opcode: RECIP_D32_MM
/* 3747 */    MCD::OPC_FilterValue, 251, 6, 74, 2, // Skip to: 4338
/* 3752 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3755 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3767
/* 3759 */    MCD::OPC_CheckPredicate, 15, 63, 2, // Skip to: 4338
/* 3763 */    MCD::OPC_Decode, 170, 8, 99, // Opcode: FABS_S_MM
/* 3767 */    MCD::OPC_FilterValue, 4, 55, 2, // Skip to: 4338
/* 3771 */    MCD::OPC_CheckPredicate, 17, 51, 2, // Skip to: 4338
/* 3775 */    MCD::OPC_Decode, 168, 8, 100, // Opcode: FABS_MM
/* 3779 */    MCD::OPC_FilterValue, 22, 42, 0, // Skip to: 3825
/* 3783 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3786 */    MCD::OPC_FilterValue, 197, 1, 8, 0, // Skip to: 3799
/* 3791 */    MCD::OPC_CheckPredicate, 7, 31, 2, // Skip to: 4338
/* 3795 */    MCD::OPC_Decode, 255, 4, 42, // Opcode: CMPGU_EQ_QB_MM
/* 3799 */    MCD::OPC_FilterValue, 133, 2, 8, 0, // Skip to: 3812
/* 3804 */    MCD::OPC_CheckPredicate, 7, 18, 2, // Skip to: 4338
/* 3808 */    MCD::OPC_Decode, 131, 5, 42, // Opcode: CMPGU_LT_QB_MM
/* 3812 */    MCD::OPC_FilterValue, 197, 2, 9, 2, // Skip to: 4338
/* 3817 */    MCD::OPC_CheckPredicate, 7, 5, 2, // Skip to: 4338
/* 3821 */    MCD::OPC_Decode, 129, 5, 42, // Opcode: CMPGU_LE_QB_MM
/* 3825 */    MCD::OPC_FilterValue, 24, 49, 1, // Skip to: 4134
/* 3829 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3832 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3844
/* 3836 */    MCD::OPC_CheckPredicate, 6, 242, 1, // Skip to: 4338
/* 3840 */    MCD::OPC_Decode, 166, 11, 85, // Opcode: LWL_MM
/* 3844 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3856
/* 3848 */    MCD::OPC_CheckPredicate, 6, 230, 1, // Skip to: 4338
/* 3852 */    MCD::OPC_Decode, 179, 11, 85, // Opcode: LWR_MM
/* 3856 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3868
/* 3860 */    MCD::OPC_CheckPredicate, 6, 218, 1, // Skip to: 4338
/* 3864 */    MCD::OPC_Decode, 131, 15, 86, // Opcode: PREF_MM
/* 3868 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3880
/* 3872 */    MCD::OPC_CheckPredicate, 6, 206, 1, // Skip to: 4338
/* 3876 */    MCD::OPC_Decode, 128, 11, 85, // Opcode: LL_MM
/* 3880 */    MCD::OPC_FilterValue, 6, 99, 0, // Skip to: 3983
/* 3884 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3887 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3899
/* 3891 */    MCD::OPC_CheckPredicate, 6, 187, 1, // Skip to: 4338
/* 3895 */    MCD::OPC_Decode, 204, 10, 101, // Opcode: LBuE_MM
/* 3899 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3911
/* 3903 */    MCD::OPC_CheckPredicate, 6, 175, 1, // Skip to: 4338
/* 3907 */    MCD::OPC_Decode, 244, 10, 101, // Opcode: LHuE_MM
/* 3911 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3923
/* 3915 */    MCD::OPC_CheckPredicate, 6, 163, 1, // Skip to: 4338
/* 3919 */    MCD::OPC_Decode, 165, 11, 101, // Opcode: LWLE_MM
/* 3923 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3935
/* 3927 */    MCD::OPC_CheckPredicate, 6, 151, 1, // Skip to: 4338
/* 3931 */    MCD::OPC_Decode, 178, 11, 101, // Opcode: LWRE_MM
/* 3935 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3947
/* 3939 */    MCD::OPC_CheckPredicate, 6, 139, 1, // Skip to: 4338
/* 3943 */    MCD::OPC_Decode, 192, 10, 101, // Opcode: LBE_MM
/* 3947 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3959
/* 3951 */    MCD::OPC_CheckPredicate, 6, 127, 1, // Skip to: 4338
/* 3955 */    MCD::OPC_Decode, 236, 10, 101, // Opcode: LHE_MM
/* 3959 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3971
/* 3963 */    MCD::OPC_CheckPredicate, 6, 115, 1, // Skip to: 4338
/* 3967 */    MCD::OPC_Decode, 254, 10, 101, // Opcode: LLE_MM
/* 3971 */    MCD::OPC_FilterValue, 7, 107, 1, // Skip to: 4338
/* 3975 */    MCD::OPC_CheckPredicate, 6, 103, 1, // Skip to: 4338
/* 3979 */    MCD::OPC_Decode, 159, 11, 101, // Opcode: LWE_MM
/* 3983 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3995
/* 3987 */    MCD::OPC_CheckPredicate, 6, 91, 1, // Skip to: 4338
/* 3991 */    MCD::OPC_Decode, 194, 18, 85, // Opcode: SWL_MM
/* 3995 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 4007
/* 3999 */    MCD::OPC_CheckPredicate, 6, 79, 1, // Skip to: 4338
/* 4003 */    MCD::OPC_Decode, 205, 18, 85, // Opcode: SWR_MM
/* 4007 */    MCD::OPC_FilterValue, 10, 99, 0, // Skip to: 4110
/* 4011 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 4014 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4026
/* 4018 */    MCD::OPC_CheckPredicate, 6, 60, 1, // Skip to: 4338
/* 4022 */    MCD::OPC_Decode, 193, 18, 101, // Opcode: SWLE_MM
/* 4026 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4038
/* 4030 */    MCD::OPC_CheckPredicate, 6, 48, 1, // Skip to: 4338
/* 4034 */    MCD::OPC_Decode, 204, 18, 101, // Opcode: SWRE_MM
/* 4038 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4050
/* 4042 */    MCD::OPC_CheckPredicate, 6, 36, 1, // Skip to: 4338
/* 4046 */    MCD::OPC_Decode, 128, 15, 102, // Opcode: PREFE_MM
/* 4050 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 4062
/* 4054 */    MCD::OPC_CheckPredicate, 6, 24, 1, // Skip to: 4338
/* 4058 */    MCD::OPC_Decode, 171, 4, 102, // Opcode: CACHEE_MM
/* 4062 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 4074
/* 4066 */    MCD::OPC_CheckPredicate, 6, 12, 1, // Skip to: 4338
/* 4070 */    MCD::OPC_Decode, 131, 16, 101, // Opcode: SBE_MM
/* 4074 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 4086
/* 4078 */    MCD::OPC_CheckPredicate, 6, 0, 1, // Skip to: 4338
/* 4082 */    MCD::OPC_Decode, 205, 16, 101, // Opcode: SHE_MM
/* 4086 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 4098
/* 4090 */    MCD::OPC_CheckPredicate, 6, 244, 0, // Skip to: 4338
/* 4094 */    MCD::OPC_Decode, 141, 16, 101, // Opcode: SCE_MM
/* 4098 */    MCD::OPC_FilterValue, 7, 236, 0, // Skip to: 4338
/* 4102 */    MCD::OPC_CheckPredicate, 6, 232, 0, // Skip to: 4338
/* 4106 */    MCD::OPC_Decode, 188, 18, 101, // Opcode: SWE_MM
/* 4110 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 4122
/* 4114 */    MCD::OPC_CheckPredicate, 6, 220, 0, // Skip to: 4338
/* 4118 */    MCD::OPC_Decode, 143, 16, 85, // Opcode: SC_MM
/* 4122 */    MCD::OPC_FilterValue, 14, 212, 0, // Skip to: 4338
/* 4126 */    MCD::OPC_CheckPredicate, 9, 208, 0, // Skip to: 4338
/* 4130 */    MCD::OPC_Decode, 182, 11, 85, // Opcode: LWU_MM
/* 4134 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 4146
/* 4138 */    MCD::OPC_CheckPredicate, 6, 196, 0, // Skip to: 4338
/* 4142 */    MCD::OPC_Decode, 230, 19, 94, // Opcode: XORi_MM
/* 4146 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 4158
/* 4150 */    MCD::OPC_CheckPredicate, 6, 184, 0, // Skip to: 4338
/* 4154 */    MCD::OPC_Decode, 160, 10, 103, // Opcode: JALS_MM
/* 4158 */    MCD::OPC_FilterValue, 30, 8, 0, // Skip to: 4170
/* 4162 */    MCD::OPC_CheckPredicate, 6, 172, 0, // Skip to: 4338
/* 4166 */    MCD::OPC_Decode, 129, 1, 104, // Opcode: ADDIUPC_MM
/* 4170 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4182
/* 4174 */    MCD::OPC_CheckPredicate, 6, 160, 0, // Skip to: 4338
/* 4178 */    MCD::OPC_Decode, 164, 17, 83, // Opcode: SLTi_MM
/* 4182 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4194
/* 4186 */    MCD::OPC_CheckPredicate, 6, 148, 0, // Skip to: 4338
/* 4190 */    MCD::OPC_Decode, 220, 2, 105, // Opcode: BEQ_MM
/* 4194 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4206
/* 4198 */    MCD::OPC_CheckPredicate, 15, 136, 0, // Skip to: 4338
/* 4202 */    MCD::OPC_Decode, 180, 18, 106, // Opcode: SWC1_MM
/* 4206 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4218
/* 4210 */    MCD::OPC_CheckPredicate, 15, 124, 0, // Skip to: 4338
/* 4214 */    MCD::OPC_Decode, 151, 11, 106, // Opcode: LWC1_MM
/* 4218 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4230
/* 4222 */    MCD::OPC_CheckPredicate, 6, 112, 0, // Skip to: 4338
/* 4226 */    MCD::OPC_Decode, 167, 17, 83, // Opcode: SLTiu_MM
/* 4230 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4242
/* 4234 */    MCD::OPC_CheckPredicate, 6, 100, 0, // Skip to: 4338
/* 4238 */    MCD::OPC_Decode, 228, 3, 105, // Opcode: BNE_MM
/* 4242 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4254
/* 4246 */    MCD::OPC_CheckPredicate, 17, 88, 0, // Skip to: 4338
/* 4250 */    MCD::OPC_Decode, 155, 16, 106, // Opcode: SDC1_MM
/* 4254 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4266
/* 4258 */    MCD::OPC_CheckPredicate, 17, 76, 0, // Skip to: 4338
/* 4262 */    MCD::OPC_Decode, 210, 10, 106, // Opcode: LDC1_MM
/* 4266 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 4278
/* 4270 */    MCD::OPC_CheckPredicate, 6, 64, 0, // Skip to: 4338
/* 4274 */    MCD::OPC_Decode, 223, 1, 94, // Opcode: ANDi_MM
/* 4278 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4290
/* 4282 */    MCD::OPC_CheckPredicate, 9, 52, 0, // Skip to: 4338
/* 4286 */    MCD::OPC_Decode, 180, 10, 103, // Opcode: J_MM
/* 4290 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 4302
/* 4294 */    MCD::OPC_CheckPredicate, 6, 40, 0, // Skip to: 4338
/* 4298 */    MCD::OPC_Decode, 162, 10, 103, // Opcode: JALX_MM
/* 4302 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 4314
/* 4306 */    MCD::OPC_CheckPredicate, 6, 28, 0, // Skip to: 4338
/* 4310 */    MCD::OPC_Decode, 163, 10, 103, // Opcode: JAL_MM
/* 4314 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4326
/* 4318 */    MCD::OPC_CheckPredicate, 6, 16, 0, // Skip to: 4338
/* 4322 */    MCD::OPC_Decode, 210, 18, 84, // Opcode: SW_MM
/* 4326 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4338
/* 4330 */    MCD::OPC_CheckPredicate, 6, 4, 0, // Skip to: 4338
/* 4334 */    MCD::OPC_Decode, 188, 11, 84, // Opcode: LW_MM
/* 4338 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsDSP32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 18, 16, 0, // Skip to: 27
/* 11 */      MCD::OPC_Decode, 186, 18, 107, // Opcode: SWDSP_MM
/* 15 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 18, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 157, 11, 107, // Opcode: LWDSP_MM
/* 27 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsFP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 21, 57, 0, // Skip to: 64
/* 7 */       MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 10 */      MCD::OPC_FilterValue, 187, 96, 8, 0, // Skip to: 23
/* 15 */      MCD::OPC_CheckPredicate, 19, 69, 0, // Skip to: 88
/* 19 */      MCD::OPC_Decode, 159, 12, 108, // Opcode: MFHC1_D64_MMR6
/* 23 */      MCD::OPC_FilterValue, 187, 112, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 19, 56, 0, // Skip to: 88
/* 32 */      MCD::OPC_Decode, 185, 13, 109, // Opcode: MTHC1_D64_MMR6
/* 36 */      MCD::OPC_FilterValue, 187, 132, 1, 8, 0, // Skip to: 50
/* 42 */      MCD::OPC_CheckPredicate, 20, 42, 0, // Skip to: 88
/* 46 */      MCD::OPC_Decode, 239, 15, 110, // Opcode: RSQRT_D64_MM
/* 50 */      MCD::OPC_FilterValue, 187, 164, 1, 32, 0, // Skip to: 88
/* 56 */      MCD::OPC_CheckPredicate, 20, 28, 0, // Skip to: 88
/* 60 */      MCD::OPC_Decode, 202, 15, 110, // Opcode: RECIP_D64_MM
/* 64 */      MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 76
/* 68 */      MCD::OPC_CheckPredicate, 19, 16, 0, // Skip to: 88
/* 72 */      MCD::OPC_Decode, 154, 16, 106, // Opcode: SDC1_D64_MMR6
/* 76 */      MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 88
/* 80 */      MCD::OPC_CheckPredicate, 19, 4, 0, // Skip to: 88
/* 84 */      MCD::OPC_Decode, 209, 10, 106, // Opcode: LDC1_D64_MMR6
/* 88 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR616[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 21, 104, 1, // Skip to: 378
/* 18 */      MCD::OPC_Decode, 165, 1, 111, // Opcode: ADDU16_MMR6
/* 22 */      MCD::OPC_FilterValue, 1, 96, 1, // Skip to: 378
/* 26 */      MCD::OPC_CheckPredicate, 21, 92, 1, // Skip to: 378
/* 30 */      MCD::OPC_Decode, 146, 18, 111, // Opcode: SUBU16_MMR6
/* 34 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 46
/* 38 */      MCD::OPC_CheckPredicate, 21, 80, 1, // Skip to: 378
/* 42 */      MCD::OPC_Decode, 228, 12, 21, // Opcode: MOVE16_MMR6
/* 46 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 77
/* 50 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 53 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 65
/* 57 */      MCD::OPC_CheckPredicate, 21, 61, 1, // Skip to: 378
/* 61 */      MCD::OPC_Decode, 142, 17, 22, // Opcode: SLL16_MMR6
/* 65 */      MCD::OPC_FilterValue, 1, 53, 1, // Skip to: 378
/* 69 */      MCD::OPC_CheckPredicate, 21, 49, 1, // Skip to: 378
/* 73 */      MCD::OPC_Decode, 210, 17, 22, // Opcode: SRL16_MMR6
/* 77 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 89
/* 81 */      MCD::OPC_CheckPredicate, 21, 37, 1, // Skip to: 378
/* 85 */      MCD::OPC_Decode, 212, 1, 23, // Opcode: ANDI16_MMR6
/* 89 */      MCD::OPC_FilterValue, 17, 189, 0, // Skip to: 282
/* 93 */      MCD::OPC_ExtractField, 2, 1,  // Inst{2} ...
/* 96 */      MCD::OPC_FilterValue, 0, 170, 0, // Skip to: 270
/* 100 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 103 */     MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 134
/* 107 */     MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 110 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 122
/* 114 */     MCD::OPC_CheckPredicate, 21, 4, 1, // Skip to: 378
/* 118 */     MCD::OPC_Decode, 179, 14, 112, // Opcode: NOT16_MMR6
/* 122 */     MCD::OPC_FilterValue, 1, 252, 0, // Skip to: 378
/* 126 */     MCD::OPC_CheckPredicate, 21, 248, 0, // Skip to: 378
/* 130 */     MCD::OPC_Decode, 218, 19, 113, // Opcode: XOR16_MMR6
/* 134 */     MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 165
/* 138 */     MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 141 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 153
/* 145 */     MCD::OPC_CheckPredicate, 21, 229, 0, // Skip to: 378
/* 149 */     MCD::OPC_Decode, 209, 1, 113, // Opcode: AND16_MMR6
/* 153 */     MCD::OPC_FilterValue, 1, 221, 0, // Skip to: 378
/* 157 */     MCD::OPC_CheckPredicate, 21, 217, 0, // Skip to: 378
/* 161 */     MCD::OPC_Decode, 184, 14, 113, // Opcode: OR16_MMR6
/* 165 */     MCD::OPC_FilterValue, 2, 27, 0, // Skip to: 196
/* 169 */     MCD::OPC_ExtractField, 3, 1,  // Inst{3} ...
/* 172 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 184
/* 176 */     MCD::OPC_CheckPredicate, 21, 198, 0, // Skip to: 378
/* 180 */     MCD::OPC_Decode, 168, 11, 26, // Opcode: LWM16_MMR6
/* 184 */     MCD::OPC_FilterValue, 1, 190, 0, // Skip to: 378
/* 188 */     MCD::OPC_CheckPredicate, 21, 186, 0, // Skip to: 378
/* 192 */     MCD::OPC_Decode, 196, 18, 26, // Opcode: SWM16_MMR6
/* 196 */     MCD::OPC_FilterValue, 3, 178, 0, // Skip to: 378
/* 200 */     MCD::OPC_ExtractField, 3, 2,  // Inst{4-3} ...
/* 203 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 215
/* 207 */     MCD::OPC_CheckPredicate, 21, 167, 0, // Skip to: 378
/* 211 */     MCD::OPC_Decode, 175, 10, 114, // Opcode: JRC16_MMR6
/* 215 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 227
/* 219 */     MCD::OPC_CheckPredicate, 21, 155, 0, // Skip to: 378
/* 223 */     MCD::OPC_Decode, 152, 10, 114, // Opcode: JALRC16_MMR6
/* 227 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 239
/* 231 */     MCD::OPC_CheckPredicate, 21, 143, 0, // Skip to: 378
/* 235 */     MCD::OPC_Decode, 176, 10, 115, // Opcode: JRCADDIUSP_MMR6
/* 239 */     MCD::OPC_FilterValue, 3, 135, 0, // Skip to: 378
/* 243 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 246 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 258
/* 250 */     MCD::OPC_CheckPredicate, 21, 124, 0, // Skip to: 378
/* 254 */     MCD::OPC_Decode, 244, 3, 116, // Opcode: BREAK16_MMR6
/* 258 */     MCD::OPC_FilterValue, 1, 116, 0, // Skip to: 378
/* 262 */     MCD::OPC_CheckPredicate, 21, 112, 0, // Skip to: 378
/* 266 */     MCD::OPC_Decode, 148, 16, 116, // Opcode: SDBBP16_MMR6
/* 270 */     MCD::OPC_FilterValue, 1, 104, 0, // Skip to: 378
/* 274 */     MCD::OPC_CheckPredicate, 21, 100, 0, // Skip to: 378
/* 278 */     MCD::OPC_Decode, 230, 12, 117, // Opcode: MOVEP_MMR6
/* 282 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 294
/* 286 */     MCD::OPC_CheckPredicate, 21, 88, 0, // Skip to: 378
/* 290 */     MCD::OPC_Decode, 128, 16, 20, // Opcode: SB16_MMR6
/* 294 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 306
/* 298 */     MCD::OPC_CheckPredicate, 21, 76, 0, // Skip to: 378
/* 302 */     MCD::OPC_Decode, 216, 2, 37, // Opcode: BEQZC16_MMR6
/* 306 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 318
/* 310 */     MCD::OPC_CheckPredicate, 21, 64, 0, // Skip to: 378
/* 314 */     MCD::OPC_Decode, 202, 16, 20, // Opcode: SH16_MMR6
/* 318 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 330
/* 322 */     MCD::OPC_CheckPredicate, 21, 52, 0, // Skip to: 378
/* 326 */     MCD::OPC_Decode, 224, 3, 37, // Opcode: BNEZC16_MMR6
/* 330 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 342
/* 334 */     MCD::OPC_CheckPredicate, 21, 40, 0, // Skip to: 378
/* 338 */     MCD::OPC_Decode, 207, 18, 30, // Opcode: SWSP_MMR6
/* 342 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 354
/* 346 */     MCD::OPC_CheckPredicate, 21, 28, 0, // Skip to: 378
/* 350 */     MCD::OPC_Decode, 181, 2, 38, // Opcode: BC16_MMR6
/* 354 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 366
/* 358 */     MCD::OPC_CheckPredicate, 21, 16, 0, // Skip to: 378
/* 362 */     MCD::OPC_Decode, 177, 18, 20, // Opcode: SW16_MMR6
/* 366 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 378
/* 370 */     MCD::OPC_CheckPredicate, 21, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 247, 10, 39, // Opcode: LI16_MMR6
/* 378 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 114, 3, // Skip to: 889
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 96, 0, // Skip to: 110
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 22, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 232, 17, 0, // Opcode: SSNOP_MMR6
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 22, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 248, 7, 0, // Opcode: EHB_MMR6
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 22, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 202, 14, 0, // Opcode: PAUSE_MMR6
/* 60 */      MCD::OPC_CheckPredicate, 22, 152, 11, // Skip to: 3032
/* 64 */      MCD::OPC_Decode, 155, 17, 40, // Opcode: SLL_MMR6
/* 68 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 22, 140, 11, // Skip to: 3032
/* 76 */      MCD::OPC_Decode, 182, 16, 43, // Opcode: SELEQZ_MMR6
/* 80 */      MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 22, 128, 11, // Skip to: 3032
/* 88 */      MCD::OPC_Decode, 189, 16, 43, // Opcode: SELNEZ_MMR6
/* 92 */      MCD::OPC_FilterValue, 7, 120, 11, // Skip to: 3032
/* 96 */      MCD::OPC_CheckPredicate, 22, 116, 11, // Skip to: 3032
/* 100 */     MCD::OPC_CheckField, 14, 2, 0, 110, 11, // Skip to: 3032
/* 106 */     MCD::OPC_Decode, 197, 15, 118, // Opcode: RDHWR_MMR6
/* 110 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 122
/* 114 */     MCD::OPC_CheckPredicate, 22, 98, 11, // Skip to: 3032
/* 118 */     MCD::OPC_Decode, 246, 3, 44, // Opcode: BREAK_MMR6
/* 122 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 134
/* 126 */     MCD::OPC_CheckPredicate, 22, 86, 11, // Skip to: 3032
/* 130 */     MCD::OPC_Decode, 145, 10, 45, // Opcode: INS_MMR6
/* 134 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 152
/* 138 */     MCD::OPC_CheckPredicate, 22, 74, 11, // Skip to: 3032
/* 142 */     MCD::OPC_CheckField, 6, 3, 0, 68, 11, // Skip to: 3032
/* 148 */     MCD::OPC_Decode, 138, 11, 119, // Opcode: LSA_MMR6
/* 152 */     MCD::OPC_FilterValue, 16, 117, 0, // Skip to: 273
/* 156 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 159 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 177
/* 163 */     MCD::OPC_CheckPredicate, 22, 49, 11, // Skip to: 3032
/* 167 */     MCD::OPC_CheckField, 16, 5, 0, 43, 11, // Skip to: 3032
/* 173 */     MCD::OPC_Decode, 246, 4, 14, // Opcode: CLZ_MMR6
/* 177 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 22, 31, 11, // Skip to: 3032
/* 185 */     MCD::OPC_Decode, 194, 1, 43, // Opcode: ADD_MMR6
/* 189 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 201
/* 193 */     MCD::OPC_CheckPredicate, 22, 19, 11, // Skip to: 3032
/* 197 */     MCD::OPC_Decode, 170, 1, 43, // Opcode: ADDU_MMR6
/* 201 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 213
/* 205 */     MCD::OPC_CheckPredicate, 22, 7, 11, // Skip to: 3032
/* 209 */     MCD::OPC_Decode, 169, 18, 43, // Opcode: SUB_MMR6
/* 213 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 225
/* 217 */     MCD::OPC_CheckPredicate, 22, 251, 10, // Skip to: 3032
/* 221 */     MCD::OPC_Decode, 151, 18, 43, // Opcode: SUBU_MMR6
/* 225 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 237
/* 229 */     MCD::OPC_CheckPredicate, 22, 239, 10, // Skip to: 3032
/* 233 */     MCD::OPC_Decode, 216, 1, 43, // Opcode: AND_MMR6
/* 237 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 249
/* 241 */     MCD::OPC_CheckPredicate, 22, 227, 10, // Skip to: 3032
/* 245 */     MCD::OPC_Decode, 189, 14, 43, // Opcode: OR_MMR6
/* 249 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 261
/* 253 */     MCD::OPC_CheckPredicate, 22, 215, 10, // Skip to: 3032
/* 257 */     MCD::OPC_Decode, 173, 14, 43, // Opcode: NOR_MMR6
/* 261 */     MCD::OPC_FilterValue, 12, 207, 10, // Skip to: 3032
/* 265 */     MCD::OPC_CheckPredicate, 22, 203, 10, // Skip to: 3032
/* 269 */     MCD::OPC_Decode, 223, 19, 43, // Opcode: XOR_MMR6
/* 273 */     MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 376
/* 277 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 280 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 292
/* 284 */     MCD::OPC_CheckPredicate, 22, 184, 10, // Skip to: 3032
/* 288 */     MCD::OPC_Decode, 132, 14, 43, // Opcode: MUL_MMR6
/* 292 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 304
/* 296 */     MCD::OPC_CheckPredicate, 22, 172, 10, // Skip to: 3032
/* 300 */     MCD::OPC_Decode, 218, 13, 43, // Opcode: MUH_MMR6
/* 304 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 316
/* 308 */     MCD::OPC_CheckPredicate, 22, 160, 10, // Skip to: 3032
/* 312 */     MCD::OPC_Decode, 254, 13, 43, // Opcode: MULU_MMR6
/* 316 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 328
/* 320 */     MCD::OPC_CheckPredicate, 22, 148, 10, // Skip to: 3032
/* 324 */     MCD::OPC_Decode, 217, 13, 43, // Opcode: MUHU_MMR6
/* 328 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 340
/* 332 */     MCD::OPC_CheckPredicate, 22, 136, 10, // Skip to: 3032
/* 336 */     MCD::OPC_Decode, 128, 7, 43, // Opcode: DIV_MMR6
/* 340 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 352
/* 344 */     MCD::OPC_CheckPredicate, 22, 124, 10, // Skip to: 3032
/* 348 */     MCD::OPC_Decode, 218, 12, 43, // Opcode: MOD_MMR6
/* 352 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 364
/* 356 */     MCD::OPC_CheckPredicate, 22, 112, 10, // Skip to: 3032
/* 360 */     MCD::OPC_Decode, 255, 6, 43, // Opcode: DIVU_MMR6
/* 364 */     MCD::OPC_FilterValue, 7, 104, 10, // Skip to: 3032
/* 368 */     MCD::OPC_CheckPredicate, 22, 100, 10, // Skip to: 3032
/* 372 */     MCD::OPC_Decode, 217, 12, 43, // Opcode: MODU_MMR6
/* 376 */     MCD::OPC_FilterValue, 31, 14, 0, // Skip to: 394
/* 380 */     MCD::OPC_CheckPredicate, 22, 88, 10, // Skip to: 3032
/* 384 */     MCD::OPC_CheckField, 6, 3, 0, 82, 10, // Skip to: 3032
/* 390 */     MCD::OPC_Decode, 204, 1, 120, // Opcode: ALIGN_MMR6
/* 394 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 22, 70, 10, // Skip to: 3032
/* 402 */     MCD::OPC_Decode, 162, 8, 54, // Opcode: EXT_MMR6
/* 406 */     MCD::OPC_FilterValue, 52, 39, 0, // Skip to: 449
/* 410 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 413 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 431
/* 417 */     MCD::OPC_CheckPredicate, 22, 51, 10, // Skip to: 3032
/* 421 */     MCD::OPC_CheckField, 14, 2, 0, 45, 10, // Skip to: 3032
/* 427 */     MCD::OPC_Decode, 155, 12, 121, // Opcode: MFHC0_MMR6
/* 431 */     MCD::OPC_FilterValue, 11, 37, 10, // Skip to: 3032
/* 435 */     MCD::OPC_CheckPredicate, 22, 33, 10, // Skip to: 3032
/* 439 */     MCD::OPC_CheckField, 14, 2, 0, 27, 10, // Skip to: 3032
/* 445 */     MCD::OPC_Decode, 181, 13, 122, // Opcode: MTHC0_MMR6
/* 449 */     MCD::OPC_FilterValue, 60, 19, 10, // Skip to: 3032
/* 453 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 456 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 474
/* 460 */     MCD::OPC_CheckPredicate, 22, 8, 10, // Skip to: 3032
/* 464 */     MCD::OPC_CheckField, 14, 2, 0, 2, 10, // Skip to: 3032
/* 470 */     MCD::OPC_Decode, 148, 12, 121, // Opcode: MFC0_MMR6
/* 474 */     MCD::OPC_FilterValue, 5, 63, 0, // Skip to: 541
/* 478 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 481 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 499
/* 485 */     MCD::OPC_CheckPredicate, 22, 239, 9, // Skip to: 3032
/* 489 */     MCD::OPC_CheckField, 21, 5, 0, 233, 9, // Skip to: 3032
/* 495 */     MCD::OPC_Decode, 243, 7, 73, // Opcode: DVP_MMR6
/* 499 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 517
/* 503 */     MCD::OPC_CheckPredicate, 22, 221, 9, // Skip to: 3032
/* 507 */     MCD::OPC_CheckField, 21, 5, 0, 215, 9, // Skip to: 3032
/* 513 */     MCD::OPC_Decode, 133, 8, 73, // Opcode: EVP_MMR6
/* 517 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 529
/* 521 */     MCD::OPC_CheckPredicate, 22, 203, 9, // Skip to: 3032
/* 525 */     MCD::OPC_Decode, 198, 15, 63, // Opcode: RDPGPR_MMR6
/* 529 */     MCD::OPC_FilterValue, 30, 195, 9, // Skip to: 3032
/* 533 */     MCD::OPC_CheckPredicate, 22, 191, 9, // Skip to: 3032
/* 537 */     MCD::OPC_Decode, 212, 19, 63, // Opcode: WRPGPR_MMR6
/* 541 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 559
/* 545 */     MCD::OPC_CheckPredicate, 22, 179, 9, // Skip to: 3032
/* 549 */     MCD::OPC_CheckField, 14, 2, 0, 173, 9, // Skip to: 3032
/* 555 */     MCD::OPC_Decode, 174, 13, 122, // Opcode: MTC0_MMR6
/* 559 */     MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 626
/* 563 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 566 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 578
/* 570 */     MCD::OPC_CheckPredicate, 22, 154, 9, // Skip to: 3032
/* 574 */     MCD::OPC_Decode, 156, 3, 77, // Opcode: BITSWAP_MMR6
/* 578 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 590
/* 582 */     MCD::OPC_CheckPredicate, 22, 142, 9, // Skip to: 3032
/* 586 */     MCD::OPC_Decode, 173, 16, 63, // Opcode: SEB_MMR6
/* 590 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 602
/* 594 */     MCD::OPC_CheckPredicate, 22, 130, 9, // Skip to: 3032
/* 598 */     MCD::OPC_Decode, 177, 16, 63, // Opcode: SEH_MMR6
/* 602 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 614
/* 606 */     MCD::OPC_CheckPredicate, 22, 118, 9, // Skip to: 3032
/* 610 */     MCD::OPC_Decode, 226, 4, 63, // Opcode: CLO_MMR6
/* 614 */     MCD::OPC_FilterValue, 15, 110, 9, // Skip to: 3032
/* 618 */     MCD::OPC_CheckPredicate, 22, 106, 9, // Skip to: 3032
/* 622 */     MCD::OPC_Decode, 215, 19, 63, // Opcode: WSBH_MMR6
/* 626 */     MCD::OPC_FilterValue, 13, 130, 0, // Skip to: 760
/* 630 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 633 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 651
/* 637 */     MCD::OPC_CheckPredicate, 22, 87, 9, // Skip to: 3032
/* 641 */     MCD::OPC_CheckField, 16, 10, 0, 81, 9, // Skip to: 3032
/* 647 */     MCD::OPC_Decode, 157, 19, 0, // Opcode: TLBINV_MMR6
/* 651 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 669
/* 655 */     MCD::OPC_CheckPredicate, 22, 69, 9, // Skip to: 3032
/* 659 */     MCD::OPC_CheckField, 16, 10, 0, 63, 9, // Skip to: 3032
/* 665 */     MCD::OPC_Decode, 156, 19, 0, // Opcode: TLBINVF_MMR6
/* 669 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 687
/* 673 */     MCD::OPC_CheckPredicate, 22, 51, 9, // Skip to: 3032
/* 677 */     MCD::OPC_CheckField, 21, 5, 0, 45, 9, // Skip to: 3032
/* 683 */     MCD::OPC_Decode, 217, 18, 78, // Opcode: SYNC_MMR6
/* 687 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 699
/* 691 */     MCD::OPC_CheckPredicate, 22, 33, 9, // Skip to: 3032
/* 695 */     MCD::OPC_Decode, 209, 19, 69, // Opcode: WAIT_MMR6
/* 699 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 711
/* 703 */     MCD::OPC_CheckPredicate, 22, 21, 9, // Skip to: 3032
/* 707 */     MCD::OPC_Decode, 150, 16, 69, // Opcode: SDBBP_MMR6
/* 711 */     MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 729
/* 715 */     MCD::OPC_CheckPredicate, 22, 9, 9, // Skip to: 3032
/* 719 */     MCD::OPC_CheckField, 16, 10, 0, 3, 9, // Skip to: 3032
/* 725 */     MCD::OPC_Decode, 244, 6, 0, // Opcode: DERET_MMR6
/* 729 */     MCD::OPC_FilterValue, 30, 251, 8, // Skip to: 3032
/* 733 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 736 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 748
/* 740 */     MCD::OPC_CheckPredicate, 22, 240, 8, // Skip to: 3032
/* 744 */     MCD::OPC_Decode, 129, 8, 0, // Opcode: ERET_MMR6
/* 748 */     MCD::OPC_FilterValue, 1, 232, 8, // Skip to: 3032
/* 752 */     MCD::OPC_CheckPredicate, 22, 228, 8, // Skip to: 3032
/* 756 */     MCD::OPC_Decode, 255, 7, 0, // Opcode: ERETNC_MMR6
/* 760 */     MCD::OPC_FilterValue, 20, 51, 0, // Skip to: 815
/* 764 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 767 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 779
/* 771 */     MCD::OPC_CheckPredicate, 22, 209, 8, // Skip to: 3032
/* 775 */     MCD::OPC_Decode, 154, 12, 80, // Opcode: MFC2_MMR6
/* 779 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 791
/* 783 */     MCD::OPC_CheckPredicate, 22, 197, 8, // Skip to: 3032
/* 787 */     MCD::OPC_Decode, 180, 13, 81, // Opcode: MTC2_MMR6
/* 791 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 803
/* 795 */     MCD::OPC_CheckPredicate, 22, 185, 8, // Skip to: 3032
/* 799 */     MCD::OPC_Decode, 161, 12, 80, // Opcode: MFHC2_MMR6
/* 803 */     MCD::OPC_FilterValue, 19, 177, 8, // Skip to: 3032
/* 807 */     MCD::OPC_CheckPredicate, 22, 173, 8, // Skip to: 3032
/* 811 */     MCD::OPC_Decode, 187, 13, 81, // Opcode: MTHC2_MMR6
/* 815 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 846
/* 819 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 822 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 834
/* 826 */     MCD::OPC_CheckPredicate, 22, 154, 8, // Skip to: 3032
/* 830 */     MCD::OPC_Decode, 154, 10, 63, // Opcode: JALRC_MMR6
/* 834 */     MCD::OPC_FilterValue, 3, 146, 8, // Skip to: 3032
/* 838 */     MCD::OPC_CheckPredicate, 22, 142, 8, // Skip to: 3032
/* 842 */     MCD::OPC_Decode, 153, 10, 63, // Opcode: JALRC_HB_MMR6
/* 846 */     MCD::OPC_FilterValue, 29, 134, 8, // Skip to: 3032
/* 850 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 853 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 871
/* 857 */     MCD::OPC_CheckPredicate, 22, 123, 8, // Skip to: 3032
/* 861 */     MCD::OPC_CheckField, 21, 5, 0, 117, 8, // Skip to: 3032
/* 867 */     MCD::OPC_Decode, 138, 7, 73, // Opcode: DI_MMR6
/* 871 */     MCD::OPC_FilterValue, 10, 109, 8, // Skip to: 3032
/* 875 */     MCD::OPC_CheckPredicate, 22, 105, 8, // Skip to: 3032
/* 879 */     MCD::OPC_CheckField, 21, 5, 0, 99, 8, // Skip to: 3032
/* 885 */     MCD::OPC_Decode, 251, 7, 73, // Opcode: EI_MMR6
/* 889 */     MCD::OPC_FilterValue, 4, 22, 0, // Skip to: 915
/* 893 */     MCD::OPC_CheckPredicate, 22, 10, 0, // Skip to: 907
/* 897 */     MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 907
/* 903 */     MCD::OPC_Decode, 140, 11, 123, // Opcode: LUI_MMR6
/* 907 */     MCD::OPC_CheckPredicate, 22, 73, 8, // Skip to: 3032
/* 911 */     MCD::OPC_Decode, 141, 2, 94, // Opcode: AUI_MMR6
/* 915 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 927
/* 919 */     MCD::OPC_CheckPredicate, 22, 61, 8, // Skip to: 3032
/* 923 */     MCD::OPC_Decode, 198, 10, 124, // Opcode: LBU_MMR6
/* 927 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 939
/* 931 */     MCD::OPC_CheckPredicate, 22, 49, 8, // Skip to: 3032
/* 935 */     MCD::OPC_Decode, 134, 16, 84, // Opcode: SB_MMR6
/* 939 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 951
/* 943 */     MCD::OPC_CheckPredicate, 22, 37, 8, // Skip to: 3032
/* 947 */     MCD::OPC_Decode, 200, 10, 124, // Opcode: LB_MMR6
/* 951 */     MCD::OPC_FilterValue, 8, 111, 0, // Skip to: 1066
/* 955 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 958 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 976
/* 962 */     MCD::OPC_CheckPredicate, 22, 18, 8, // Skip to: 3032
/* 966 */     MCD::OPC_CheckField, 11, 1, 0, 12, 8, // Skip to: 3032
/* 972 */     MCD::OPC_Decode, 153, 11, 125, // Opcode: LWC2_MMR6
/* 976 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 988
/* 980 */     MCD::OPC_CheckPredicate, 22, 0, 8, // Skip to: 3032
/* 984 */     MCD::OPC_Decode, 174, 11, 85, // Opcode: LWP_MMR6
/* 988 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1006
/* 992 */     MCD::OPC_CheckPredicate, 22, 244, 7, // Skip to: 3032
/* 996 */     MCD::OPC_CheckField, 11, 1, 0, 238, 7, // Skip to: 3032
/* 1002 */    MCD::OPC_Decode, 212, 10, 125, // Opcode: LDC2_MMR6
/* 1006 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1018
/* 1010 */    MCD::OPC_CheckPredicate, 22, 226, 7, // Skip to: 3032
/* 1014 */    MCD::OPC_Decode, 174, 4, 86, // Opcode: CACHE_MMR6
/* 1018 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 1036
/* 1022 */    MCD::OPC_CheckPredicate, 22, 214, 7, // Skip to: 3032
/* 1026 */    MCD::OPC_CheckField, 11, 1, 0, 208, 7, // Skip to: 3032
/* 1032 */    MCD::OPC_Decode, 182, 18, 125, // Opcode: SWC2_MMR6
/* 1036 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1048
/* 1040 */    MCD::OPC_CheckPredicate, 22, 196, 7, // Skip to: 3032
/* 1044 */    MCD::OPC_Decode, 200, 18, 85, // Opcode: SWP_MMR6
/* 1048 */    MCD::OPC_FilterValue, 10, 188, 7, // Skip to: 3032
/* 1052 */    MCD::OPC_CheckPredicate, 22, 184, 7, // Skip to: 3032
/* 1056 */    MCD::OPC_CheckField, 11, 1, 0, 178, 7, // Skip to: 3032
/* 1062 */    MCD::OPC_Decode, 157, 16, 125, // Opcode: SDC2_MMR6
/* 1066 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1078
/* 1070 */    MCD::OPC_CheckPredicate, 22, 166, 7, // Skip to: 3032
/* 1074 */    MCD::OPC_Decode, 135, 1, 83, // Opcode: ADDIU_MMR6
/* 1078 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1090
/* 1082 */    MCD::OPC_CheckPredicate, 22, 154, 7, // Skip to: 3032
/* 1086 */    MCD::OPC_Decode, 131, 17, 84, // Opcode: SH_MMR6
/* 1090 */    MCD::OPC_FilterValue, 16, 64, 0, // Skip to: 1158
/* 1094 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1097 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1109
/* 1101 */    MCD::OPC_CheckPredicate, 23, 135, 7, // Skip to: 3032
/* 1105 */    MCD::OPC_Decode, 183, 2, 126, // Opcode: BC1EQZC_MMR6
/* 1109 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1121
/* 1113 */    MCD::OPC_CheckPredicate, 23, 123, 7, // Skip to: 3032
/* 1117 */    MCD::OPC_Decode, 188, 2, 126, // Opcode: BC1NEZC_MMR6
/* 1121 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1133
/* 1125 */    MCD::OPC_CheckPredicate, 22, 111, 7, // Skip to: 3032
/* 1129 */    MCD::OPC_Decode, 193, 2, 127, // Opcode: BC2EQZC_MMR6
/* 1133 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1145
/* 1137 */    MCD::OPC_CheckPredicate, 22, 99, 7, // Skip to: 3032
/* 1141 */    MCD::OPC_Decode, 195, 2, 127, // Opcode: BC2NEZC_MMR6
/* 1145 */    MCD::OPC_FilterValue, 12, 91, 7, // Skip to: 3032
/* 1149 */    MCD::OPC_CheckPredicate, 22, 87, 7, // Skip to: 3032
/* 1153 */    MCD::OPC_Decode, 215, 18, 128, 1, // Opcode: SYNCI_MMR6
/* 1158 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 1170
/* 1162 */    MCD::OPC_CheckPredicate, 22, 74, 7, // Skip to: 3032
/* 1166 */    MCD::OPC_Decode, 187, 14, 94, // Opcode: ORI_MMR6
/* 1170 */    MCD::OPC_FilterValue, 21, 118, 5, // Skip to: 2572
/* 1174 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1177 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1190
/* 1181 */    MCD::OPC_CheckPredicate, 23, 55, 7, // Skip to: 3032
/* 1185 */    MCD::OPC_Decode, 205, 12, 129, 1, // Opcode: MIN_S_MMR6
/* 1190 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1203
/* 1194 */    MCD::OPC_CheckPredicate, 23, 42, 7, // Skip to: 3032
/* 1198 */    MCD::OPC_Decode, 139, 5, 130, 1, // Opcode: CMP_AF_S_MMR6
/* 1203 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1216
/* 1207 */    MCD::OPC_CheckPredicate, 23, 29, 7, // Skip to: 3032
/* 1211 */    MCD::OPC_Decode, 141, 12, 129, 1, // Opcode: MAX_S_MMR6
/* 1216 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 1229
/* 1220 */    MCD::OPC_CheckPredicate, 23, 16, 7, // Skip to: 3032
/* 1224 */    MCD::OPC_Decode, 138, 5, 131, 1, // Opcode: CMP_AF_D_MMR6
/* 1229 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 1248
/* 1233 */    MCD::OPC_CheckPredicate, 22, 3, 7, // Skip to: 3032
/* 1237 */    MCD::OPC_CheckField, 11, 5, 0, 253, 6, // Skip to: 3032
/* 1243 */    MCD::OPC_Decode, 216, 15, 132, 1, // Opcode: RINT_S_MMR6
/* 1248 */    MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 1261
/* 1252 */    MCD::OPC_CheckPredicate, 23, 240, 6, // Skip to: 3032
/* 1256 */    MCD::OPC_Decode, 186, 12, 129, 1, // Opcode: MINA_S_MMR6
/* 1261 */    MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 1274
/* 1265 */    MCD::OPC_CheckPredicate, 23, 227, 6, // Skip to: 3032
/* 1269 */    MCD::OPC_Decode, 250, 11, 129, 1, // Opcode: MAXA_S_MMR6
/* 1274 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 1287
/* 1278 */    MCD::OPC_CheckPredicate, 23, 214, 6, // Skip to: 3032
/* 1282 */    MCD::OPC_Decode, 179, 8, 133, 1, // Opcode: FADD_S_MMR6
/* 1287 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 1300
/* 1291 */    MCD::OPC_CheckPredicate, 22, 201, 6, // Skip to: 3032
/* 1295 */    MCD::OPC_Decode, 184, 16, 129, 1, // Opcode: SELEQZ_S_MMR6
/* 1300 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 1359
/* 1304 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1307 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1320
/* 1311 */    MCD::OPC_CheckPredicate, 23, 181, 6, // Skip to: 3032
/* 1315 */    MCD::OPC_Decode, 152, 12, 134, 1, // Opcode: MFC1_MMR6
/* 1320 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1333
/* 1324 */    MCD::OPC_CheckPredicate, 23, 168, 6, // Skip to: 3032
/* 1328 */    MCD::OPC_Decode, 178, 13, 135, 1, // Opcode: MTC1_MMR6
/* 1333 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1346
/* 1337 */    MCD::OPC_CheckPredicate, 24, 155, 6, // Skip to: 3032
/* 1341 */    MCD::OPC_Decode, 157, 12, 136, 1, // Opcode: MFHC1_D32_MMR6
/* 1346 */    MCD::OPC_FilterValue, 7, 146, 6, // Skip to: 3032
/* 1350 */    MCD::OPC_CheckPredicate, 24, 142, 6, // Skip to: 3032
/* 1354 */    MCD::OPC_Decode, 183, 13, 137, 1, // Opcode: MTHC1_D32_MMR6
/* 1359 */    MCD::OPC_FilterValue, 69, 9, 0, // Skip to: 1372
/* 1363 */    MCD::OPC_CheckPredicate, 23, 129, 6, // Skip to: 3032
/* 1367 */    MCD::OPC_Decode, 207, 5, 130, 1, // Opcode: CMP_UN_S_MMR6
/* 1372 */    MCD::OPC_FilterValue, 85, 9, 0, // Skip to: 1385
/* 1376 */    MCD::OPC_CheckPredicate, 23, 116, 6, // Skip to: 3032
/* 1380 */    MCD::OPC_Decode, 205, 5, 131, 1, // Opcode: CMP_UN_D_MMR6
/* 1385 */    MCD::OPC_FilterValue, 96, 15, 0, // Skip to: 1404
/* 1389 */    MCD::OPC_CheckPredicate, 22, 103, 6, // Skip to: 3032
/* 1393 */    MCD::OPC_CheckField, 11, 5, 0, 97, 6, // Skip to: 3032
/* 1399 */    MCD::OPC_Decode, 207, 4, 132, 1, // Opcode: CLASS_S_MMR6
/* 1404 */    MCD::OPC_FilterValue, 112, 9, 0, // Skip to: 1417
/* 1408 */    MCD::OPC_CheckPredicate, 23, 84, 6, // Skip to: 3032
/* 1412 */    MCD::OPC_Decode, 196, 9, 133, 1, // Opcode: FSUB_S_MMR6
/* 1417 */    MCD::OPC_FilterValue, 120, 9, 0, // Skip to: 1430
/* 1421 */    MCD::OPC_CheckPredicate, 22, 71, 6, // Skip to: 3032
/* 1425 */    MCD::OPC_Decode, 191, 16, 129, 1, // Opcode: SELNEZ_S_MMR6
/* 1430 */    MCD::OPC_FilterValue, 123, 27, 0, // Skip to: 1461
/* 1434 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1437 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1449
/* 1441 */    MCD::OPC_CheckPredicate, 23, 51, 6, // Skip to: 3032
/* 1445 */    MCD::OPC_Decode, 144, 9, 99, // Opcode: FMOV_S_MMR6
/* 1449 */    MCD::OPC_FilterValue, 4, 43, 6, // Skip to: 3032
/* 1453 */    MCD::OPC_CheckPredicate, 23, 39, 6, // Skip to: 3032
/* 1457 */    MCD::OPC_Decode, 141, 9, 100, // Opcode: FMOV_D_MMR6
/* 1461 */    MCD::OPC_FilterValue, 133, 1, 9, 0, // Skip to: 1475
/* 1466 */    MCD::OPC_CheckPredicate, 23, 26, 6, // Skip to: 3032
/* 1470 */    MCD::OPC_Decode, 145, 5, 130, 1, // Opcode: CMP_EQ_S_MMR6
/* 1475 */    MCD::OPC_FilterValue, 149, 1, 9, 0, // Skip to: 1489
/* 1480 */    MCD::OPC_CheckPredicate, 23, 12, 6, // Skip to: 3032
/* 1484 */    MCD::OPC_Decode, 141, 5, 131, 1, // Opcode: CMP_EQ_D_MMR6
/* 1489 */    MCD::OPC_FilterValue, 176, 1, 9, 0, // Skip to: 1503
/* 1494 */    MCD::OPC_CheckPredicate, 23, 254, 5, // Skip to: 3032
/* 1498 */    MCD::OPC_Decode, 154, 9, 133, 1, // Opcode: FMUL_S_MMR6
/* 1503 */    MCD::OPC_FilterValue, 184, 1, 9, 0, // Skip to: 1517
/* 1508 */    MCD::OPC_CheckPredicate, 22, 240, 5, // Skip to: 3032
/* 1512 */    MCD::OPC_Decode, 195, 16, 138, 1, // Opcode: SEL_S_MMR6
/* 1517 */    MCD::OPC_FilterValue, 197, 1, 9, 0, // Skip to: 1531
/* 1522 */    MCD::OPC_CheckPredicate, 23, 226, 5, // Skip to: 3032
/* 1526 */    MCD::OPC_Decode, 195, 5, 130, 1, // Opcode: CMP_UEQ_S_MMR6
/* 1531 */    MCD::OPC_FilterValue, 213, 1, 9, 0, // Skip to: 1545
/* 1536 */    MCD::OPC_CheckPredicate, 23, 212, 5, // Skip to: 3032
/* 1540 */    MCD::OPC_Decode, 193, 5, 131, 1, // Opcode: CMP_UEQ_D_MMR6
/* 1545 */    MCD::OPC_FilterValue, 240, 1, 9, 0, // Skip to: 1559
/* 1550 */    MCD::OPC_CheckPredicate, 23, 198, 5, // Skip to: 3032
/* 1554 */    MCD::OPC_Decode, 217, 8, 133, 1, // Opcode: FDIV_S_MMR6
/* 1559 */    MCD::OPC_FilterValue, 133, 2, 9, 0, // Skip to: 1573
/* 1564 */    MCD::OPC_CheckPredicate, 23, 184, 5, // Skip to: 3032
/* 1568 */    MCD::OPC_Decode, 159, 5, 130, 1, // Opcode: CMP_LT_S_MMR6
/* 1573 */    MCD::OPC_FilterValue, 149, 2, 9, 0, // Skip to: 1587
/* 1578 */    MCD::OPC_CheckPredicate, 23, 170, 5, // Skip to: 3032
/* 1582 */    MCD::OPC_Decode, 155, 5, 131, 1, // Opcode: CMP_LT_D_MMR6
/* 1587 */    MCD::OPC_FilterValue, 176, 2, 9, 0, // Skip to: 1601
/* 1592 */    MCD::OPC_CheckPredicate, 23, 156, 5, // Skip to: 3032
/* 1596 */    MCD::OPC_Decode, 175, 8, 139, 1, // Opcode: FADD_D_MMR6
/* 1601 */    MCD::OPC_FilterValue, 187, 2, 53, 0, // Skip to: 1659
/* 1606 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1609 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1622
/* 1613 */    MCD::OPC_CheckPredicate, 23, 135, 5, // Skip to: 3032
/* 1617 */    MCD::OPC_Decode, 238, 5, 140, 1, // Opcode: CVT_L_S_MMR6
/* 1622 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1634
/* 1626 */    MCD::OPC_CheckPredicate, 23, 122, 5, // Skip to: 3032
/* 1630 */    MCD::OPC_Decode, 254, 5, 99, // Opcode: CVT_W_S_MMR6
/* 1634 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1646
/* 1638 */    MCD::OPC_CheckPredicate, 23, 110, 5, // Skip to: 3032
/* 1642 */    MCD::OPC_Decode, 235, 5, 110, // Opcode: CVT_L_D_MMR6
/* 1646 */    MCD::OPC_FilterValue, 9, 102, 5, // Skip to: 3032
/* 1650 */    MCD::OPC_CheckPredicate, 23, 98, 5, // Skip to: 3032
/* 1654 */    MCD::OPC_Decode, 250, 5, 141, 1, // Opcode: CVT_W_D_MMR6
/* 1659 */    MCD::OPC_FilterValue, 197, 2, 9, 0, // Skip to: 1673
/* 1664 */    MCD::OPC_CheckPredicate, 23, 84, 5, // Skip to: 3032
/* 1668 */    MCD::OPC_Decode, 203, 5, 130, 1, // Opcode: CMP_ULT_S_MMR6
/* 1673 */    MCD::OPC_FilterValue, 213, 2, 9, 0, // Skip to: 1687
/* 1678 */    MCD::OPC_CheckPredicate, 23, 70, 5, // Skip to: 3032
/* 1682 */    MCD::OPC_Decode, 201, 5, 131, 1, // Opcode: CMP_ULT_D_MMR6
/* 1687 */    MCD::OPC_FilterValue, 240, 2, 9, 0, // Skip to: 1701
/* 1692 */    MCD::OPC_CheckPredicate, 23, 56, 5, // Skip to: 3032
/* 1696 */    MCD::OPC_Decode, 192, 9, 139, 1, // Opcode: FSUB_D_MMR6
/* 1701 */    MCD::OPC_FilterValue, 133, 3, 9, 0, // Skip to: 1715
/* 1706 */    MCD::OPC_CheckPredicate, 23, 42, 5, // Skip to: 3032
/* 1710 */    MCD::OPC_Decode, 153, 5, 130, 1, // Opcode: CMP_LE_S_MMR6
/* 1715 */    MCD::OPC_FilterValue, 149, 3, 9, 0, // Skip to: 1729
/* 1720 */    MCD::OPC_CheckPredicate, 23, 28, 5, // Skip to: 3032
/* 1724 */    MCD::OPC_Decode, 149, 5, 131, 1, // Opcode: CMP_LE_D_MMR6
/* 1729 */    MCD::OPC_FilterValue, 176, 3, 9, 0, // Skip to: 1743
/* 1734 */    MCD::OPC_CheckPredicate, 23, 14, 5, // Skip to: 3032
/* 1738 */    MCD::OPC_Decode, 150, 9, 139, 1, // Opcode: FMUL_D_MMR6
/* 1743 */    MCD::OPC_FilterValue, 184, 3, 9, 0, // Skip to: 1757
/* 1748 */    MCD::OPC_CheckPredicate, 23, 0, 5, // Skip to: 3032
/* 1752 */    MCD::OPC_Decode, 218, 11, 142, 1, // Opcode: MADDF_S_MMR6
/* 1757 */    MCD::OPC_FilterValue, 197, 3, 9, 0, // Skip to: 1771
/* 1762 */    MCD::OPC_CheckPredicate, 23, 242, 4, // Skip to: 3032
/* 1766 */    MCD::OPC_Decode, 199, 5, 130, 1, // Opcode: CMP_ULE_S_MMR6
/* 1771 */    MCD::OPC_FilterValue, 213, 3, 9, 0, // Skip to: 1785
/* 1776 */    MCD::OPC_CheckPredicate, 23, 228, 4, // Skip to: 3032
/* 1780 */    MCD::OPC_Decode, 197, 5, 131, 1, // Opcode: CMP_ULE_D_MMR6
/* 1785 */    MCD::OPC_FilterValue, 240, 3, 9, 0, // Skip to: 1799
/* 1790 */    MCD::OPC_CheckPredicate, 23, 214, 4, // Skip to: 3032
/* 1794 */    MCD::OPC_Decode, 213, 8, 139, 1, // Opcode: FDIV_D_MMR6
/* 1799 */    MCD::OPC_FilterValue, 248, 3, 9, 0, // Skip to: 1813
/* 1804 */    MCD::OPC_CheckPredicate, 23, 200, 4, // Skip to: 3032
/* 1808 */    MCD::OPC_Decode, 152, 13, 142, 1, // Opcode: MSUBF_S_MMR6
/* 1813 */    MCD::OPC_FilterValue, 131, 4, 9, 0, // Skip to: 1827
/* 1818 */    MCD::OPC_CheckPredicate, 23, 186, 4, // Skip to: 3032
/* 1822 */    MCD::OPC_Decode, 200, 12, 143, 1, // Opcode: MIN_D_MMR6
/* 1827 */    MCD::OPC_FilterValue, 133, 4, 9, 0, // Skip to: 1841
/* 1832 */    MCD::OPC_CheckPredicate, 23, 172, 4, // Skip to: 3032
/* 1836 */    MCD::OPC_Decode, 163, 5, 130, 1, // Opcode: CMP_SAF_S_MMR6
/* 1841 */    MCD::OPC_FilterValue, 139, 4, 9, 0, // Skip to: 1855
/* 1846 */    MCD::OPC_CheckPredicate, 23, 158, 4, // Skip to: 3032
/* 1850 */    MCD::OPC_Decode, 136, 12, 143, 1, // Opcode: MAX_D_MMR6
/* 1855 */    MCD::OPC_FilterValue, 149, 4, 9, 0, // Skip to: 1869
/* 1860 */    MCD::OPC_CheckPredicate, 23, 144, 4, // Skip to: 3032
/* 1864 */    MCD::OPC_Decode, 161, 5, 131, 1, // Opcode: CMP_SAF_D_MMR6
/* 1869 */    MCD::OPC_FilterValue, 160, 4, 15, 0, // Skip to: 1889
/* 1874 */    MCD::OPC_CheckPredicate, 22, 130, 4, // Skip to: 3032
/* 1878 */    MCD::OPC_CheckField, 11, 5, 0, 124, 4, // Skip to: 3032
/* 1884 */    MCD::OPC_Decode, 214, 15, 144, 1, // Opcode: RINT_D_MMR6
/* 1889 */    MCD::OPC_FilterValue, 163, 4, 9, 0, // Skip to: 1903
/* 1894 */    MCD::OPC_CheckPredicate, 23, 110, 4, // Skip to: 3032
/* 1898 */    MCD::OPC_Decode, 184, 12, 143, 1, // Opcode: MINA_D_MMR6
/* 1903 */    MCD::OPC_FilterValue, 171, 4, 9, 0, // Skip to: 1917
/* 1908 */    MCD::OPC_CheckPredicate, 23, 96, 4, // Skip to: 3032
/* 1912 */    MCD::OPC_Decode, 248, 11, 143, 1, // Opcode: MAXA_D_MMR6
/* 1917 */    MCD::OPC_FilterValue, 184, 4, 9, 0, // Skip to: 1931
/* 1922 */    MCD::OPC_CheckPredicate, 22, 82, 4, // Skip to: 3032
/* 1926 */    MCD::OPC_Decode, 181, 16, 143, 1, // Opcode: SELEQZ_D_MMR6
/* 1931 */    MCD::OPC_FilterValue, 187, 4, 27, 0, // Skip to: 1963
/* 1936 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1939 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1951
/* 1943 */    MCD::OPC_CheckPredicate, 23, 61, 4, // Skip to: 3032
/* 1947 */    MCD::OPC_Decode, 187, 17, 99, // Opcode: SQRT_S_MMR6
/* 1951 */    MCD::OPC_FilterValue, 9, 53, 4, // Skip to: 3032
/* 1955 */    MCD::OPC_CheckPredicate, 23, 49, 4, // Skip to: 3032
/* 1959 */    MCD::OPC_Decode, 186, 17, 100, // Opcode: SQRT_D_MMR6
/* 1963 */    MCD::OPC_FilterValue, 197, 4, 9, 0, // Skip to: 1977
/* 1968 */    MCD::OPC_CheckPredicate, 23, 36, 4, // Skip to: 3032
/* 1972 */    MCD::OPC_Decode, 191, 5, 130, 1, // Opcode: CMP_SUN_S_MMR6
/* 1977 */    MCD::OPC_FilterValue, 213, 4, 9, 0, // Skip to: 1991
/* 1982 */    MCD::OPC_CheckPredicate, 23, 22, 4, // Skip to: 3032
/* 1986 */    MCD::OPC_Decode, 189, 5, 131, 1, // Opcode: CMP_SUN_D_MMR6
/* 1991 */    MCD::OPC_FilterValue, 224, 4, 15, 0, // Skip to: 2011
/* 1996 */    MCD::OPC_CheckPredicate, 22, 8, 4, // Skip to: 3032
/* 2000 */    MCD::OPC_CheckField, 11, 5, 0, 2, 4, // Skip to: 3032
/* 2006 */    MCD::OPC_Decode, 205, 4, 144, 1, // Opcode: CLASS_D_MMR6
/* 2011 */    MCD::OPC_FilterValue, 248, 4, 9, 0, // Skip to: 2025
/* 2016 */    MCD::OPC_CheckPredicate, 22, 244, 3, // Skip to: 3032
/* 2020 */    MCD::OPC_Decode, 188, 16, 143, 1, // Opcode: SELNEZ_D_MMR6
/* 2025 */    MCD::OPC_FilterValue, 133, 5, 9, 0, // Skip to: 2039
/* 2030 */    MCD::OPC_CheckPredicate, 23, 230, 3, // Skip to: 3032
/* 2034 */    MCD::OPC_Decode, 167, 5, 130, 1, // Opcode: CMP_SEQ_S_MMR6
/* 2039 */    MCD::OPC_FilterValue, 149, 5, 9, 0, // Skip to: 2053
/* 2044 */    MCD::OPC_CheckPredicate, 23, 216, 3, // Skip to: 3032
/* 2048 */    MCD::OPC_Decode, 165, 5, 131, 1, // Opcode: CMP_SEQ_D_MMR6
/* 2053 */    MCD::OPC_FilterValue, 184, 5, 9, 0, // Skip to: 2067
/* 2058 */    MCD::OPC_CheckPredicate, 22, 202, 3, // Skip to: 3032
/* 2062 */    MCD::OPC_Decode, 193, 16, 145, 1, // Opcode: SEL_D_MMR6
/* 2067 */    MCD::OPC_FilterValue, 197, 5, 9, 0, // Skip to: 2081
/* 2072 */    MCD::OPC_CheckPredicate, 23, 188, 3, // Skip to: 3032
/* 2076 */    MCD::OPC_Decode, 179, 5, 130, 1, // Opcode: CMP_SUEQ_S_MMR6
/* 2081 */    MCD::OPC_FilterValue, 213, 5, 9, 0, // Skip to: 2095
/* 2086 */    MCD::OPC_CheckPredicate, 23, 174, 3, // Skip to: 3032
/* 2090 */    MCD::OPC_Decode, 177, 5, 131, 1, // Opcode: CMP_SUEQ_D_MMR6
/* 2095 */    MCD::OPC_FilterValue, 133, 6, 9, 0, // Skip to: 2109
/* 2100 */    MCD::OPC_CheckPredicate, 23, 160, 3, // Skip to: 3032
/* 2104 */    MCD::OPC_Decode, 175, 5, 130, 1, // Opcode: CMP_SLT_S_MMR6
/* 2109 */    MCD::OPC_FilterValue, 149, 6, 9, 0, // Skip to: 2123
/* 2114 */    MCD::OPC_CheckPredicate, 23, 146, 3, // Skip to: 3032
/* 2118 */    MCD::OPC_Decode, 173, 5, 131, 1, // Opcode: CMP_SLT_D_MMR6
/* 2123 */    MCD::OPC_FilterValue, 187, 6, 202, 0, // Skip to: 2330
/* 2128 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2131 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2144
/* 2135 */    MCD::OPC_CheckPredicate, 23, 125, 3, // Skip to: 3032
/* 2139 */    MCD::OPC_Decode, 248, 8, 140, 1, // Opcode: FLOOR_L_S_MMR6
/* 2144 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2156
/* 2148 */    MCD::OPC_CheckPredicate, 23, 112, 3, // Skip to: 3032
/* 2152 */    MCD::OPC_Decode, 255, 8, 99, // Opcode: FLOOR_W_S_MMR6
/* 2156 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2169
/* 2160 */    MCD::OPC_CheckPredicate, 23, 100, 3, // Skip to: 3032
/* 2164 */    MCD::OPC_Decode, 179, 4, 140, 1, // Opcode: CEIL_L_S_MMR6
/* 2169 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2181
/* 2173 */    MCD::OPC_CheckPredicate, 23, 87, 3, // Skip to: 3032
/* 2177 */    MCD::OPC_Decode, 186, 4, 99, // Opcode: CEIL_W_S_MMR6
/* 2181 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2194
/* 2185 */    MCD::OPC_CheckPredicate, 23, 75, 3, // Skip to: 3032
/* 2189 */    MCD::OPC_Decode, 181, 19, 140, 1, // Opcode: TRUNC_L_S_MMR6
/* 2194 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2206
/* 2198 */    MCD::OPC_CheckPredicate, 23, 62, 3, // Skip to: 3032
/* 2202 */    MCD::OPC_Decode, 188, 19, 99, // Opcode: TRUNC_W_S_MMR6
/* 2206 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2219
/* 2210 */    MCD::OPC_CheckPredicate, 23, 50, 3, // Skip to: 3032
/* 2214 */    MCD::OPC_Decode, 228, 15, 140, 1, // Opcode: ROUND_L_S_MMR6
/* 2219 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2231
/* 2223 */    MCD::OPC_CheckPredicate, 23, 37, 3, // Skip to: 3032
/* 2227 */    MCD::OPC_Decode, 235, 15, 99, // Opcode: ROUND_W_S_MMR6
/* 2231 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2243
/* 2235 */    MCD::OPC_CheckPredicate, 23, 25, 3, // Skip to: 3032
/* 2239 */    MCD::OPC_Decode, 246, 8, 110, // Opcode: FLOOR_L_D_MMR6
/* 2243 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 2256
/* 2247 */    MCD::OPC_CheckPredicate, 23, 13, 3, // Skip to: 3032
/* 2251 */    MCD::OPC_Decode, 251, 8, 141, 1, // Opcode: FLOOR_W_D_MMR6
/* 2256 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2268
/* 2260 */    MCD::OPC_CheckPredicate, 23, 0, 3, // Skip to: 3032
/* 2264 */    MCD::OPC_Decode, 177, 4, 110, // Opcode: CEIL_L_D_MMR6
/* 2268 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 2281
/* 2272 */    MCD::OPC_CheckPredicate, 23, 244, 2, // Skip to: 3032
/* 2276 */    MCD::OPC_Decode, 182, 4, 141, 1, // Opcode: CEIL_W_D_MMR6
/* 2281 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2293
/* 2285 */    MCD::OPC_CheckPredicate, 23, 231, 2, // Skip to: 3032
/* 2289 */    MCD::OPC_Decode, 179, 19, 110, // Opcode: TRUNC_L_D_MMR6
/* 2293 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 2306
/* 2297 */    MCD::OPC_CheckPredicate, 23, 219, 2, // Skip to: 3032
/* 2301 */    MCD::OPC_Decode, 184, 19, 141, 1, // Opcode: TRUNC_W_D_MMR6
/* 2306 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2318
/* 2310 */    MCD::OPC_CheckPredicate, 23, 206, 2, // Skip to: 3032
/* 2314 */    MCD::OPC_Decode, 226, 15, 110, // Opcode: ROUND_L_D_MMR6
/* 2318 */    MCD::OPC_FilterValue, 15, 198, 2, // Skip to: 3032
/* 2322 */    MCD::OPC_CheckPredicate, 23, 194, 2, // Skip to: 3032
/* 2326 */    MCD::OPC_Decode, 231, 15, 110, // Opcode: ROUND_W_D_MMR6
/* 2330 */    MCD::OPC_FilterValue, 197, 6, 9, 0, // Skip to: 2344
/* 2335 */    MCD::OPC_CheckPredicate, 23, 181, 2, // Skip to: 3032
/* 2339 */    MCD::OPC_Decode, 187, 5, 130, 1, // Opcode: CMP_SULT_S_MMR6
/* 2344 */    MCD::OPC_FilterValue, 213, 6, 9, 0, // Skip to: 2358
/* 2349 */    MCD::OPC_CheckPredicate, 23, 167, 2, // Skip to: 3032
/* 2353 */    MCD::OPC_Decode, 185, 5, 131, 1, // Opcode: CMP_SULT_D_MMR6
/* 2358 */    MCD::OPC_FilterValue, 251, 6, 125, 0, // Skip to: 2488
/* 2363 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2366 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 2377
/* 2370 */    MCD::OPC_CheckPredicate, 23, 146, 2, // Skip to: 3032
/* 2374 */    MCD::OPC_Decode, 126, 99, // Opcode: ABS_S_MMR6
/* 2377 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2389
/* 2381 */    MCD::OPC_CheckPredicate, 23, 135, 2, // Skip to: 3032
/* 2385 */    MCD::OPC_Decode, 162, 9, 99, // Opcode: FNEG_S_MMR6
/* 2389 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2402
/* 2393 */    MCD::OPC_CheckPredicate, 23, 123, 2, // Skip to: 3032
/* 2397 */    MCD::OPC_Decode, 231, 5, 141, 1, // Opcode: CVT_D_S_MMR6
/* 2402 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2415
/* 2406 */    MCD::OPC_CheckPredicate, 23, 110, 2, // Skip to: 3032
/* 2410 */    MCD::OPC_Decode, 242, 5, 146, 1, // Opcode: CVT_S_D_MMR6
/* 2415 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 2426
/* 2419 */    MCD::OPC_CheckPredicate, 23, 97, 2, // Skip to: 3032
/* 2423 */    MCD::OPC_Decode, 125, 100, // Opcode: ABS_D_MMR6
/* 2426 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2438
/* 2430 */    MCD::OPC_CheckPredicate, 23, 86, 2, // Skip to: 3032
/* 2434 */    MCD::OPC_Decode, 158, 9, 100, // Opcode: FNEG_D_MMR6
/* 2438 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2451
/* 2442 */    MCD::OPC_CheckPredicate, 23, 74, 2, // Skip to: 3032
/* 2446 */    MCD::OPC_Decode, 232, 5, 141, 1, // Opcode: CVT_D_W_MMR6
/* 2451 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2463
/* 2455 */    MCD::OPC_CheckPredicate, 23, 61, 2, // Skip to: 3032
/* 2459 */    MCD::OPC_Decode, 247, 5, 99, // Opcode: CVT_S_W_MMR6
/* 2463 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2475
/* 2467 */    MCD::OPC_CheckPredicate, 19, 49, 2, // Skip to: 3032
/* 2471 */    MCD::OPC_Decode, 229, 5, 110, // Opcode: CVT_D_L_MMR6
/* 2475 */    MCD::OPC_FilterValue, 11, 41, 2, // Skip to: 3032
/* 2479 */    MCD::OPC_CheckPredicate, 19, 37, 2, // Skip to: 3032
/* 2483 */    MCD::OPC_Decode, 244, 5, 140, 1, // Opcode: CVT_S_L_MMR6
/* 2488 */    MCD::OPC_FilterValue, 133, 7, 9, 0, // Skip to: 2502
/* 2493 */    MCD::OPC_CheckPredicate, 23, 23, 2, // Skip to: 3032
/* 2497 */    MCD::OPC_Decode, 171, 5, 130, 1, // Opcode: CMP_SLE_S_MMR6
/* 2502 */    MCD::OPC_FilterValue, 149, 7, 9, 0, // Skip to: 2516
/* 2507 */    MCD::OPC_CheckPredicate, 23, 9, 2, // Skip to: 3032
/* 2511 */    MCD::OPC_Decode, 169, 5, 131, 1, // Opcode: CMP_SLE_D_MMR6
/* 2516 */    MCD::OPC_FilterValue, 184, 7, 9, 0, // Skip to: 2530
/* 2521 */    MCD::OPC_CheckPredicate, 23, 251, 1, // Skip to: 3032
/* 2525 */    MCD::OPC_Decode, 216, 11, 145, 1, // Opcode: MADDF_D_MMR6
/* 2530 */    MCD::OPC_FilterValue, 197, 7, 9, 0, // Skip to: 2544
/* 2535 */    MCD::OPC_CheckPredicate, 23, 237, 1, // Skip to: 3032
/* 2539 */    MCD::OPC_Decode, 183, 5, 130, 1, // Opcode: CMP_SULE_S_MMR6
/* 2544 */    MCD::OPC_FilterValue, 213, 7, 9, 0, // Skip to: 2558
/* 2549 */    MCD::OPC_CheckPredicate, 23, 223, 1, // Skip to: 3032
/* 2553 */    MCD::OPC_Decode, 181, 5, 131, 1, // Opcode: CMP_SULE_D_MMR6
/* 2558 */    MCD::OPC_FilterValue, 248, 7, 213, 1, // Skip to: 3032
/* 2563 */    MCD::OPC_CheckPredicate, 23, 209, 1, // Skip to: 3032
/* 2567 */    MCD::OPC_Decode, 150, 13, 145, 1, // Opcode: MSUBF_D_MMR6
/* 2572 */    MCD::OPC_FilterValue, 24, 154, 0, // Skip to: 2730
/* 2576 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2579 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2591
/* 2583 */    MCD::OPC_CheckPredicate, 22, 189, 1, // Skip to: 3032
/* 2587 */    MCD::OPC_Decode, 132, 15, 86, // Opcode: PREF_MMR6
/* 2591 */    MCD::OPC_FilterValue, 6, 53, 0, // Skip to: 2648
/* 2595 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 2598 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2611
/* 2602 */    MCD::OPC_CheckPredicate, 22, 170, 1, // Skip to: 3032
/* 2606 */    MCD::OPC_Decode, 195, 10, 147, 1, // Opcode: LBUE_MMR6
/* 2611 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2624
/* 2615 */    MCD::OPC_CheckPredicate, 22, 157, 1, // Skip to: 3032
/* 2619 */    MCD::OPC_Decode, 193, 10, 147, 1, // Opcode: LBE_MMR6
/* 2624 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2636
/* 2628 */    MCD::OPC_CheckPredicate, 22, 144, 1, // Skip to: 3032
/* 2632 */    MCD::OPC_Decode, 255, 10, 101, // Opcode: LLE_MMR6
/* 2636 */    MCD::OPC_FilterValue, 7, 136, 1, // Skip to: 3032
/* 2640 */    MCD::OPC_CheckPredicate, 22, 132, 1, // Skip to: 3032
/* 2644 */    MCD::OPC_Decode, 160, 11, 101, // Opcode: LWE_MMR6
/* 2648 */    MCD::OPC_FilterValue, 10, 124, 1, // Skip to: 3032
/* 2652 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 2655 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2667
/* 2659 */    MCD::OPC_CheckPredicate, 22, 113, 1, // Skip to: 3032
/* 2663 */    MCD::OPC_Decode, 129, 15, 102, // Opcode: PREFE_MMR6
/* 2667 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2679
/* 2671 */    MCD::OPC_CheckPredicate, 22, 101, 1, // Skip to: 3032
/* 2675 */    MCD::OPC_Decode, 172, 4, 102, // Opcode: CACHEE_MMR6
/* 2679 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2692
/* 2683 */    MCD::OPC_CheckPredicate, 22, 89, 1, // Skip to: 3032
/* 2687 */    MCD::OPC_Decode, 132, 16, 148, 1, // Opcode: SBE_MMR6
/* 2692 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2705
/* 2696 */    MCD::OPC_CheckPredicate, 22, 76, 1, // Skip to: 3032
/* 2700 */    MCD::OPC_Decode, 206, 16, 148, 1, // Opcode: SHE_MMR6
/* 2705 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2718
/* 2709 */    MCD::OPC_CheckPredicate, 22, 63, 1, // Skip to: 3032
/* 2713 */    MCD::OPC_Decode, 142, 16, 148, 1, // Opcode: SCE_MMR6
/* 2718 */    MCD::OPC_FilterValue, 7, 54, 1, // Skip to: 3032
/* 2722 */    MCD::OPC_CheckPredicate, 22, 50, 1, // Skip to: 3032
/* 2726 */    MCD::OPC_Decode, 189, 18, 101, // Opcode: SWE_MMR6
/* 2730 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 2742
/* 2734 */    MCD::OPC_CheckPredicate, 22, 38, 1, // Skip to: 3032
/* 2738 */    MCD::OPC_Decode, 221, 19, 94, // Opcode: XORI_MMR6
/* 2742 */    MCD::OPC_FilterValue, 29, 24, 0, // Skip to: 2770
/* 2746 */    MCD::OPC_CheckPredicate, 22, 11, 0, // Skip to: 2761
/* 2750 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 2761
/* 2756 */    MCD::OPC_Decode, 214, 2, 149, 1, // Opcode: BEQZALC_MMR6
/* 2761 */    MCD::OPC_CheckPredicate, 22, 11, 1, // Skip to: 3032
/* 2765 */    MCD::OPC_Decode, 209, 2, 149, 1, // Opcode: BEQC_MMR6
/* 2770 */    MCD::OPC_FilterValue, 30, 62, 0, // Skip to: 2836
/* 2774 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 2777 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2790
/* 2781 */    MCD::OPC_CheckPredicate, 22, 247, 0, // Skip to: 3032
/* 2785 */    MCD::OPC_Decode, 130, 1, 150, 1, // Opcode: ADDIUPC_MMR6
/* 2790 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2803
/* 2794 */    MCD::OPC_CheckPredicate, 22, 234, 0, // Skip to: 3032
/* 2798 */    MCD::OPC_Decode, 172, 11, 150, 1, // Opcode: LWPC_MMR6
/* 2803 */    MCD::OPC_FilterValue, 3, 225, 0, // Skip to: 3032
/* 2807 */    MCD::OPC_ExtractField, 16, 3,  // Inst{18-16} ...
/* 2810 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2823
/* 2814 */    MCD::OPC_CheckPredicate, 22, 214, 0, // Skip to: 3032
/* 2818 */    MCD::OPC_Decode, 140, 2, 151, 1, // Opcode: AUIPC_MMR6
/* 2823 */    MCD::OPC_FilterValue, 7, 205, 0, // Skip to: 3032
/* 2827 */    MCD::OPC_CheckPredicate, 22, 201, 0, // Skip to: 3032
/* 2831 */    MCD::OPC_Decode, 206, 1, 151, 1, // Opcode: ALUIPC_MMR6
/* 2836 */    MCD::OPC_FilterValue, 31, 24, 0, // Skip to: 2864
/* 2840 */    MCD::OPC_CheckPredicate, 22, 11, 0, // Skip to: 2855
/* 2844 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 2855
/* 2850 */    MCD::OPC_Decode, 222, 3, 152, 1, // Opcode: BNEZALC_MMR6
/* 2855 */    MCD::OPC_CheckPredicate, 22, 173, 0, // Skip to: 3032
/* 2859 */    MCD::OPC_Decode, 209, 3, 152, 1, // Opcode: BNEC_MMR6
/* 2864 */    MCD::OPC_FilterValue, 32, 23, 0, // Skip to: 2891
/* 2868 */    MCD::OPC_CheckPredicate, 22, 10, 0, // Skip to: 2882
/* 2872 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 2882
/* 2878 */    MCD::OPC_Decode, 166, 10, 89, // Opcode: JIALC_MMR6
/* 2882 */    MCD::OPC_CheckPredicate, 22, 146, 0, // Skip to: 3032
/* 2886 */    MCD::OPC_Decode, 219, 2, 153, 1, // Opcode: BEQZC_MMR6
/* 2891 */    MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 2904
/* 2895 */    MCD::OPC_CheckPredicate, 22, 133, 0, // Skip to: 3032
/* 2899 */    MCD::OPC_Decode, 204, 2, 154, 1, // Opcode: BC_MMR6
/* 2904 */    MCD::OPC_FilterValue, 40, 23, 0, // Skip to: 2931
/* 2908 */    MCD::OPC_CheckPredicate, 22, 10, 0, // Skip to: 2922
/* 2912 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 2922
/* 2918 */    MCD::OPC_Decode, 169, 10, 89, // Opcode: JIC_MMR6
/* 2922 */    MCD::OPC_CheckPredicate, 22, 106, 0, // Skip to: 3032
/* 2926 */    MCD::OPC_Decode, 227, 3, 153, 1, // Opcode: BNEZC_MMR6
/* 2931 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 2944
/* 2935 */    MCD::OPC_CheckPredicate, 22, 93, 0, // Skip to: 3032
/* 2939 */    MCD::OPC_Decode, 172, 2, 154, 1, // Opcode: BALC_MMR6
/* 2944 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 2957
/* 2948 */    MCD::OPC_CheckPredicate, 22, 80, 0, // Skip to: 3032
/* 2952 */    MCD::OPC_Decode, 231, 2, 155, 1, // Opcode: BGEUC_MMR6
/* 2957 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 2969
/* 2961 */    MCD::OPC_CheckPredicate, 22, 67, 0, // Skip to: 3032
/* 2965 */    MCD::OPC_Decode, 214, 1, 94, // Opcode: ANDI_MMR6
/* 2969 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 2982
/* 2973 */    MCD::OPC_CheckPredicate, 22, 55, 0, // Skip to: 3032
/* 2977 */    MCD::OPC_Decode, 177, 3, 156, 1, // Opcode: BLTC_MMR6
/* 2982 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 2995
/* 2986 */    MCD::OPC_CheckPredicate, 22, 42, 0, // Skip to: 3032
/* 2990 */    MCD::OPC_Decode, 184, 3, 157, 1, // Opcode: BLTUC_MMR6
/* 2995 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 3008
/* 2999 */    MCD::OPC_CheckPredicate, 22, 29, 0, // Skip to: 3032
/* 3003 */    MCD::OPC_Decode, 224, 2, 158, 1, // Opcode: BGEC_MMR6
/* 3008 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 3020
/* 3012 */    MCD::OPC_CheckPredicate, 22, 16, 0, // Skip to: 3032
/* 3016 */    MCD::OPC_Decode, 211, 18, 84, // Opcode: SW_MMR6
/* 3020 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 3032
/* 3024 */    MCD::OPC_CheckPredicate, 22, 4, 0, // Skip to: 3032
/* 3028 */    MCD::OPC_Decode, 189, 11, 84, // Opcode: LW_MMR6
/* 3032 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 22, 74, 0, // Skip to: 85
/* 11 */      MCD::OPC_Decode, 237, 3, 149, 1, // Opcode: BOVC_MMR6
/* 16 */      MCD::OPC_FilterValue, 31, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 22, 61, 0, // Skip to: 85
/* 24 */      MCD::OPC_Decode, 230, 3, 152, 1, // Opcode: BNVC_MMR6
/* 29 */      MCD::OPC_FilterValue, 48, 24, 0, // Skip to: 57
/* 33 */      MCD::OPC_CheckPredicate, 22, 11, 0, // Skip to: 48
/* 37 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 48
/* 43 */      MCD::OPC_Decode, 168, 3, 155, 1, // Opcode: BLEZALC_MMR6
/* 48 */      MCD::OPC_CheckPredicate, 22, 33, 0, // Skip to: 85
/* 52 */      MCD::OPC_Decode, 239, 2, 155, 1, // Opcode: BGEZALC_MMR6
/* 57 */      MCD::OPC_FilterValue, 56, 24, 0, // Skip to: 85
/* 61 */      MCD::OPC_CheckPredicate, 22, 11, 0, // Skip to: 76
/* 65 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 76
/* 71 */      MCD::OPC_Decode, 131, 3, 157, 1, // Opcode: BGTZALC_MMR6
/* 76 */      MCD::OPC_CheckPredicate, 22, 5, 0, // Skip to: 85
/* 80 */      MCD::OPC_Decode, 192, 3, 157, 1, // Opcode: BLTZALC_MMR6
/* 85 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 205, 3, // Skip to: 980
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 69
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 64, 58, // Skip to: 14933
/* 21 */      MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 25, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 230, 17, 0, // Opcode: SSNOP
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 25, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 246, 7, 0, // Opcode: EHB
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 26, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 200, 14, 0, // Opcode: PAUSE
/* 60 */      MCD::OPC_CheckPredicate, 1, 21, 58, // Skip to: 14933
/* 64 */      MCD::OPC_Decode, 140, 17, 159, 1, // Opcode: SLL
/* 69 */      MCD::OPC_FilterValue, 1, 41, 0, // Skip to: 114
/* 73 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 76 */      MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 95
/* 80 */      MCD::OPC_CheckPredicate, 27, 1, 58, // Skip to: 14933
/* 84 */      MCD::OPC_CheckField, 6, 5, 0, 251, 57, // Skip to: 14933
/* 90 */      MCD::OPC_Decode, 235, 12, 160, 1, // Opcode: MOVF_I
/* 95 */      MCD::OPC_FilterValue, 1, 242, 57, // Skip to: 14933
/* 99 */      MCD::OPC_CheckPredicate, 27, 238, 57, // Skip to: 14933
/* 103 */     MCD::OPC_CheckField, 6, 5, 0, 232, 57, // Skip to: 14933
/* 109 */     MCD::OPC_Decode, 255, 12, 160, 1, // Opcode: MOVT_I
/* 114 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 147
/* 118 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 121 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 134
/* 125 */     MCD::OPC_CheckPredicate, 1, 212, 57, // Skip to: 14933
/* 129 */     MCD::OPC_Decode, 208, 17, 159, 1, // Opcode: SRL
/* 134 */     MCD::OPC_FilterValue, 1, 203, 57, // Skip to: 14933
/* 138 */     MCD::OPC_CheckPredicate, 28, 199, 57, // Skip to: 14933
/* 142 */     MCD::OPC_Decode, 221, 15, 159, 1, // Opcode: ROTR
/* 147 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 166
/* 151 */     MCD::OPC_CheckPredicate, 1, 186, 57, // Skip to: 14933
/* 155 */     MCD::OPC_CheckField, 21, 5, 0, 180, 57, // Skip to: 14933
/* 161 */     MCD::OPC_Decode, 188, 17, 159, 1, // Opcode: SRA
/* 166 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 184
/* 170 */     MCD::OPC_CheckPredicate, 1, 167, 57, // Skip to: 14933
/* 174 */     MCD::OPC_CheckField, 6, 5, 0, 161, 57, // Skip to: 14933
/* 180 */     MCD::OPC_Decode, 149, 17, 43, // Opcode: SLLV
/* 184 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 203
/* 188 */     MCD::OPC_CheckPredicate, 29, 149, 57, // Skip to: 14933
/* 192 */     MCD::OPC_CheckField, 8, 3, 0, 143, 57, // Skip to: 14933
/* 198 */     MCD::OPC_Decode, 137, 11, 161, 1, // Opcode: LSA
/* 203 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 234
/* 207 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 210 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 222
/* 214 */     MCD::OPC_CheckPredicate, 1, 123, 57, // Skip to: 14933
/* 218 */     MCD::OPC_Decode, 223, 17, 43, // Opcode: SRLV
/* 222 */     MCD::OPC_FilterValue, 1, 115, 57, // Skip to: 14933
/* 226 */     MCD::OPC_CheckPredicate, 28, 111, 57, // Skip to: 14933
/* 230 */     MCD::OPC_Decode, 222, 15, 43, // Opcode: ROTRV
/* 234 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 252
/* 238 */     MCD::OPC_CheckPredicate, 1, 99, 57, // Skip to: 14933
/* 242 */     MCD::OPC_CheckField, 6, 5, 0, 93, 57, // Skip to: 14933
/* 248 */     MCD::OPC_Decode, 201, 17, 43, // Opcode: SRAV
/* 252 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 285
/* 256 */     MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 259 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 272
/* 263 */     MCD::OPC_CheckPredicate, 30, 74, 57, // Skip to: 14933
/* 267 */     MCD::OPC_Decode, 170, 10, 162, 1, // Opcode: JR
/* 272 */     MCD::OPC_FilterValue, 16, 65, 57, // Skip to: 14933
/* 276 */     MCD::OPC_CheckPredicate, 31, 61, 57, // Skip to: 14933
/* 280 */     MCD::OPC_Decode, 177, 10, 162, 1, // Opcode: JR_HB
/* 285 */     MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 328
/* 289 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 292 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 310
/* 296 */     MCD::OPC_CheckPredicate, 1, 41, 57, // Skip to: 14933
/* 300 */     MCD::OPC_CheckField, 16, 5, 0, 35, 57, // Skip to: 14933
/* 306 */     MCD::OPC_Decode, 148, 10, 14, // Opcode: JALR
/* 310 */     MCD::OPC_FilterValue, 16, 27, 57, // Skip to: 14933
/* 314 */     MCD::OPC_CheckPredicate, 32, 23, 57, // Skip to: 14933
/* 318 */     MCD::OPC_CheckField, 16, 5, 0, 17, 57, // Skip to: 14933
/* 324 */     MCD::OPC_Decode, 158, 10, 14, // Opcode: JALR_HB
/* 328 */     MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 347
/* 332 */     MCD::OPC_CheckPredicate, 33, 5, 57, // Skip to: 14933
/* 336 */     MCD::OPC_CheckField, 6, 5, 0, 255, 56, // Skip to: 14933
/* 342 */     MCD::OPC_Decode, 139, 13, 163, 1, // Opcode: MOVZ_I_I
/* 347 */     MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 366
/* 351 */     MCD::OPC_CheckPredicate, 33, 242, 56, // Skip to: 14933
/* 355 */     MCD::OPC_CheckField, 6, 5, 0, 236, 56, // Skip to: 14933
/* 361 */     MCD::OPC_Decode, 247, 12, 163, 1, // Opcode: MOVN_I_I
/* 366 */     MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 379
/* 370 */     MCD::OPC_CheckPredicate, 1, 223, 56, // Skip to: 14933
/* 374 */     MCD::OPC_Decode, 218, 18, 164, 1, // Opcode: SYSCALL
/* 379 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 1, 210, 56, // Skip to: 14933
/* 387 */     MCD::OPC_Decode, 242, 3, 44, // Opcode: BREAK
/* 391 */     MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 404
/* 395 */     MCD::OPC_CheckPredicate, 2, 198, 56, // Skip to: 14933
/* 399 */     MCD::OPC_Decode, 212, 18, 165, 1, // Opcode: SYNC
/* 404 */     MCD::OPC_FilterValue, 16, 45, 0, // Skip to: 453
/* 408 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 411 */     MCD::OPC_FilterValue, 0, 182, 56, // Skip to: 14933
/* 415 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 418 */     MCD::OPC_FilterValue, 0, 175, 56, // Skip to: 14933
/* 422 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 425 */     MCD::OPC_FilterValue, 0, 168, 56, // Skip to: 14933
/* 429 */     MCD::OPC_CheckPredicate, 34, 11, 0, // Skip to: 444
/* 433 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 444
/* 439 */     MCD::OPC_Decode, 162, 12, 166, 1, // Opcode: MFHI
/* 444 */     MCD::OPC_CheckPredicate, 35, 149, 56, // Skip to: 14933
/* 448 */     MCD::OPC_Decode, 165, 12, 167, 1, // Opcode: MFHI_DSP
/* 453 */     MCD::OPC_FilterValue, 17, 38, 0, // Skip to: 495
/* 457 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 460 */     MCD::OPC_FilterValue, 0, 133, 56, // Skip to: 14933
/* 464 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 467 */     MCD::OPC_FilterValue, 0, 126, 56, // Skip to: 14933
/* 471 */     MCD::OPC_CheckPredicate, 30, 11, 0, // Skip to: 486
/* 475 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 486
/* 481 */     MCD::OPC_Decode, 188, 13, 162, 1, // Opcode: MTHI
/* 486 */     MCD::OPC_CheckPredicate, 35, 107, 56, // Skip to: 14933
/* 490 */     MCD::OPC_Decode, 190, 13, 168, 1, // Opcode: MTHI_DSP
/* 495 */     MCD::OPC_FilterValue, 18, 45, 0, // Skip to: 544
/* 499 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 502 */     MCD::OPC_FilterValue, 0, 91, 56, // Skip to: 14933
/* 506 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 509 */     MCD::OPC_FilterValue, 0, 84, 56, // Skip to: 14933
/* 513 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 516 */     MCD::OPC_FilterValue, 0, 77, 56, // Skip to: 14933
/* 520 */     MCD::OPC_CheckPredicate, 34, 11, 0, // Skip to: 535
/* 524 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 535
/* 530 */     MCD::OPC_Decode, 168, 12, 166, 1, // Opcode: MFLO
/* 535 */     MCD::OPC_CheckPredicate, 35, 58, 56, // Skip to: 14933
/* 539 */     MCD::OPC_Decode, 171, 12, 167, 1, // Opcode: MFLO_DSP
/* 544 */     MCD::OPC_FilterValue, 19, 38, 0, // Skip to: 586
/* 548 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 551 */     MCD::OPC_FilterValue, 0, 42, 56, // Skip to: 14933
/* 555 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 558 */     MCD::OPC_FilterValue, 0, 35, 56, // Skip to: 14933
/* 562 */     MCD::OPC_CheckPredicate, 30, 11, 0, // Skip to: 577
/* 566 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 577
/* 572 */     MCD::OPC_Decode, 195, 13, 162, 1, // Opcode: MTLO
/* 577 */     MCD::OPC_CheckPredicate, 35, 16, 56, // Skip to: 14933
/* 581 */     MCD::OPC_Decode, 197, 13, 169, 1, // Opcode: MTLO_DSP
/* 586 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 605
/* 590 */     MCD::OPC_CheckPredicate, 36, 3, 56, // Skip to: 14933
/* 594 */     MCD::OPC_CheckField, 8, 3, 0, 253, 55, // Skip to: 14933
/* 600 */     MCD::OPC_Decode, 139, 7, 170, 1, // Opcode: DLSA
/* 605 */     MCD::OPC_FilterValue, 24, 37, 0, // Skip to: 646
/* 609 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 612 */     MCD::OPC_FilterValue, 0, 237, 55, // Skip to: 14933
/* 616 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 619 */     MCD::OPC_FilterValue, 0, 230, 55, // Skip to: 14933
/* 623 */     MCD::OPC_CheckPredicate, 30, 10, 0, // Skip to: 637
/* 627 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 637
/* 633 */     MCD::OPC_Decode, 245, 13, 63, // Opcode: MULT
/* 637 */     MCD::OPC_CheckPredicate, 35, 212, 55, // Skip to: 14933
/* 641 */     MCD::OPC_Decode, 248, 13, 171, 1, // Opcode: MULT_DSP
/* 646 */     MCD::OPC_FilterValue, 25, 37, 0, // Skip to: 687
/* 650 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 653 */     MCD::OPC_FilterValue, 0, 196, 55, // Skip to: 14933
/* 657 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 660 */     MCD::OPC_FilterValue, 0, 189, 55, // Skip to: 14933
/* 664 */     MCD::OPC_CheckPredicate, 30, 10, 0, // Skip to: 678
/* 668 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 678
/* 674 */     MCD::OPC_Decode, 251, 13, 63, // Opcode: MULTu
/* 678 */     MCD::OPC_CheckPredicate, 35, 171, 55, // Skip to: 14933
/* 682 */     MCD::OPC_Decode, 246, 13, 171, 1, // Opcode: MULTU_DSP
/* 687 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 705
/* 691 */     MCD::OPC_CheckPredicate, 37, 158, 55, // Skip to: 14933
/* 695 */     MCD::OPC_CheckField, 6, 10, 0, 152, 55, // Skip to: 14933
/* 701 */     MCD::OPC_Decode, 160, 16, 63, // Opcode: SDIV
/* 705 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 723
/* 709 */     MCD::OPC_CheckPredicate, 37, 140, 55, // Skip to: 14933
/* 713 */     MCD::OPC_CheckField, 6, 10, 0, 134, 55, // Skip to: 14933
/* 719 */     MCD::OPC_Decode, 190, 19, 63, // Opcode: UDIV
/* 723 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 740
/* 727 */     MCD::OPC_CheckPredicate, 25, 122, 55, // Skip to: 14933
/* 731 */     MCD::OPC_CheckField, 6, 5, 0, 116, 55, // Skip to: 14933
/* 737 */     MCD::OPC_Decode, 127, 49, // Opcode: ADD
/* 740 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 758
/* 744 */     MCD::OPC_CheckPredicate, 1, 105, 55, // Skip to: 14933
/* 748 */     MCD::OPC_CheckField, 6, 5, 0, 99, 55, // Skip to: 14933
/* 754 */     MCD::OPC_Decode, 199, 1, 49, // Opcode: ADDu
/* 758 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 776
/* 762 */     MCD::OPC_CheckPredicate, 25, 87, 55, // Skip to: 14933
/* 766 */     MCD::OPC_CheckField, 6, 5, 0, 81, 55, // Skip to: 14933
/* 772 */     MCD::OPC_Decode, 242, 17, 49, // Opcode: SUB
/* 776 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 794
/* 780 */     MCD::OPC_CheckPredicate, 1, 69, 55, // Skip to: 14933
/* 784 */     MCD::OPC_CheckField, 6, 5, 0, 63, 55, // Skip to: 14933
/* 790 */     MCD::OPC_Decode, 170, 18, 49, // Opcode: SUBu
/* 794 */     MCD::OPC_FilterValue, 36, 14, 0, // Skip to: 812
/* 798 */     MCD::OPC_CheckPredicate, 1, 51, 55, // Skip to: 14933
/* 802 */     MCD::OPC_CheckField, 6, 5, 0, 45, 55, // Skip to: 14933
/* 808 */     MCD::OPC_Decode, 207, 1, 49, // Opcode: AND
/* 812 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 830
/* 816 */     MCD::OPC_CheckPredicate, 1, 33, 55, // Skip to: 14933
/* 820 */     MCD::OPC_CheckField, 6, 5, 0, 27, 55, // Skip to: 14933
/* 826 */     MCD::OPC_Decode, 182, 14, 49, // Opcode: OR
/* 830 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 848
/* 834 */     MCD::OPC_CheckPredicate, 1, 15, 55, // Skip to: 14933
/* 838 */     MCD::OPC_CheckField, 6, 5, 0, 9, 55, // Skip to: 14933
/* 844 */     MCD::OPC_Decode, 216, 19, 49, // Opcode: XOR
/* 848 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 866
/* 852 */     MCD::OPC_CheckPredicate, 1, 253, 54, // Skip to: 14933
/* 856 */     MCD::OPC_CheckField, 6, 5, 0, 247, 54, // Skip to: 14933
/* 862 */     MCD::OPC_Decode, 167, 14, 49, // Opcode: NOR
/* 866 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 884
/* 870 */     MCD::OPC_CheckPredicate, 1, 235, 54, // Skip to: 14933
/* 874 */     MCD::OPC_CheckField, 6, 5, 0, 229, 54, // Skip to: 14933
/* 880 */     MCD::OPC_Decode, 157, 17, 49, // Opcode: SLT
/* 884 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 902
/* 888 */     MCD::OPC_CheckPredicate, 1, 217, 54, // Skip to: 14933
/* 892 */     MCD::OPC_CheckField, 6, 5, 0, 211, 54, // Skip to: 14933
/* 898 */     MCD::OPC_Decode, 168, 17, 49, // Opcode: SLTu
/* 902 */     MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 915
/* 906 */     MCD::OPC_CheckPredicate, 2, 199, 54, // Skip to: 14933
/* 910 */     MCD::OPC_Decode, 146, 19, 172, 1, // Opcode: TGE
/* 915 */     MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 928
/* 919 */     MCD::OPC_CheckPredicate, 2, 186, 54, // Skip to: 14933
/* 923 */     MCD::OPC_Decode, 151, 19, 172, 1, // Opcode: TGEU
/* 928 */     MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 941
/* 932 */     MCD::OPC_CheckPredicate, 2, 173, 54, // Skip to: 14933
/* 936 */     MCD::OPC_Decode, 166, 19, 172, 1, // Opcode: TLT
/* 941 */     MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 954
/* 945 */     MCD::OPC_CheckPredicate, 2, 160, 54, // Skip to: 14933
/* 949 */     MCD::OPC_Decode, 170, 19, 172, 1, // Opcode: TLTU
/* 954 */     MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 967
/* 958 */     MCD::OPC_CheckPredicate, 2, 147, 54, // Skip to: 14933
/* 962 */     MCD::OPC_Decode, 142, 19, 172, 1, // Opcode: TEQ
/* 967 */     MCD::OPC_FilterValue, 54, 138, 54, // Skip to: 14933
/* 971 */     MCD::OPC_CheckPredicate, 2, 134, 54, // Skip to: 14933
/* 975 */     MCD::OPC_Decode, 173, 19, 172, 1, // Opcode: TNE
/* 980 */     MCD::OPC_FilterValue, 1, 216, 0, // Skip to: 1200
/* 984 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 987 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1000
/* 991 */     MCD::OPC_CheckPredicate, 25, 114, 54, // Skip to: 14933
/* 995 */     MCD::OPC_Decode, 188, 3, 173, 1, // Opcode: BLTZ
/* 1000 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1013
/* 1004 */    MCD::OPC_CheckPredicate, 25, 101, 54, // Skip to: 14933
/* 1008 */    MCD::OPC_Decode, 235, 2, 173, 1, // Opcode: BGEZ
/* 1013 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1026
/* 1017 */    MCD::OPC_CheckPredicate, 38, 88, 54, // Skip to: 14933
/* 1021 */    MCD::OPC_Decode, 199, 3, 173, 1, // Opcode: BLTZL
/* 1026 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1039
/* 1030 */    MCD::OPC_CheckPredicate, 38, 75, 54, // Skip to: 14933
/* 1034 */    MCD::OPC_Decode, 246, 2, 173, 1, // Opcode: BGEZL
/* 1039 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1052
/* 1043 */    MCD::OPC_CheckPredicate, 38, 62, 54, // Skip to: 14933
/* 1047 */    MCD::OPC_Decode, 147, 19, 151, 1, // Opcode: TGEI
/* 1052 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1065
/* 1056 */    MCD::OPC_CheckPredicate, 38, 49, 54, // Skip to: 14933
/* 1060 */    MCD::OPC_Decode, 148, 19, 151, 1, // Opcode: TGEIU
/* 1065 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1078
/* 1069 */    MCD::OPC_CheckPredicate, 38, 36, 54, // Skip to: 14933
/* 1073 */    MCD::OPC_Decode, 167, 19, 151, 1, // Opcode: TLTI
/* 1078 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1091
/* 1082 */    MCD::OPC_CheckPredicate, 38, 23, 54, // Skip to: 14933
/* 1086 */    MCD::OPC_Decode, 189, 19, 151, 1, // Opcode: TTLTIU
/* 1091 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1104
/* 1095 */    MCD::OPC_CheckPredicate, 38, 10, 54, // Skip to: 14933
/* 1099 */    MCD::OPC_Decode, 143, 19, 151, 1, // Opcode: TEQI
/* 1104 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1117
/* 1108 */    MCD::OPC_CheckPredicate, 38, 253, 53, // Skip to: 14933
/* 1112 */    MCD::OPC_Decode, 174, 19, 151, 1, // Opcode: TNEI
/* 1117 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 1130
/* 1121 */    MCD::OPC_CheckPredicate, 30, 240, 53, // Skip to: 14933
/* 1125 */    MCD::OPC_Decode, 190, 3, 173, 1, // Opcode: BLTZAL
/* 1130 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 1143
/* 1134 */    MCD::OPC_CheckPredicate, 30, 227, 53, // Skip to: 14933
/* 1138 */    MCD::OPC_Decode, 237, 2, 173, 1, // Opcode: BGEZAL
/* 1143 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 1156
/* 1147 */    MCD::OPC_CheckPredicate, 38, 214, 53, // Skip to: 14933
/* 1151 */    MCD::OPC_Decode, 193, 3, 173, 1, // Opcode: BLTZALL
/* 1156 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 1169
/* 1160 */    MCD::OPC_CheckPredicate, 38, 201, 53, // Skip to: 14933
/* 1164 */    MCD::OPC_Decode, 240, 2, 173, 1, // Opcode: BGEZALL
/* 1169 */    MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 1188
/* 1173 */    MCD::OPC_CheckPredicate, 39, 188, 53, // Skip to: 14933
/* 1177 */    MCD::OPC_CheckField, 21, 5, 0, 182, 53, // Skip to: 14933
/* 1183 */    MCD::OPC_Decode, 238, 3, 174, 1, // Opcode: BPOSGE32
/* 1188 */    MCD::OPC_FilterValue, 31, 173, 53, // Skip to: 14933
/* 1192 */    MCD::OPC_CheckPredicate, 28, 169, 53, // Skip to: 14933
/* 1196 */    MCD::OPC_Decode, 213, 18, 90, // Opcode: SYNCI
/* 1200 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1213
/* 1204 */    MCD::OPC_CheckPredicate, 1, 157, 53, // Skip to: 14933
/* 1208 */    MCD::OPC_Decode, 146, 10, 175, 1, // Opcode: J
/* 1213 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1226
/* 1217 */    MCD::OPC_CheckPredicate, 25, 144, 53, // Skip to: 14933
/* 1221 */    MCD::OPC_Decode, 147, 10, 175, 1, // Opcode: JAL
/* 1226 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1239
/* 1230 */    MCD::OPC_CheckPredicate, 25, 131, 53, // Skip to: 14933
/* 1234 */    MCD::OPC_Decode, 205, 2, 176, 1, // Opcode: BEQ
/* 1239 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1252
/* 1243 */    MCD::OPC_CheckPredicate, 25, 118, 53, // Skip to: 14933
/* 1247 */    MCD::OPC_Decode, 205, 3, 176, 1, // Opcode: BNE
/* 1252 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1271
/* 1256 */    MCD::OPC_CheckPredicate, 25, 105, 53, // Skip to: 14933
/* 1260 */    MCD::OPC_CheckField, 16, 5, 0, 99, 53, // Skip to: 14933
/* 1266 */    MCD::OPC_Decode, 165, 3, 173, 1, // Opcode: BLEZ
/* 1271 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1290
/* 1275 */    MCD::OPC_CheckPredicate, 25, 86, 53, // Skip to: 14933
/* 1279 */    MCD::OPC_CheckField, 16, 5, 0, 80, 53, // Skip to: 14933
/* 1285 */    MCD::OPC_Decode, 128, 3, 173, 1, // Opcode: BGTZ
/* 1290 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1303
/* 1294 */    MCD::OPC_CheckPredicate, 30, 67, 53, // Skip to: 14933
/* 1298 */    MCD::OPC_Decode, 195, 1, 177, 1, // Opcode: ADDi
/* 1303 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1316
/* 1307 */    MCD::OPC_CheckPredicate, 1, 54, 53, // Skip to: 14933
/* 1311 */    MCD::OPC_Decode, 197, 1, 177, 1, // Opcode: ADDiu
/* 1316 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1329
/* 1320 */    MCD::OPC_CheckPredicate, 1, 41, 53, // Skip to: 14933
/* 1324 */    MCD::OPC_Decode, 162, 17, 177, 1, // Opcode: SLTi
/* 1329 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1342
/* 1333 */    MCD::OPC_CheckPredicate, 1, 28, 53, // Skip to: 14933
/* 1337 */    MCD::OPC_Decode, 165, 17, 177, 1, // Opcode: SLTiu
/* 1342 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1355
/* 1346 */    MCD::OPC_CheckPredicate, 1, 15, 53, // Skip to: 14933
/* 1350 */    MCD::OPC_Decode, 221, 1, 178, 1, // Opcode: ANDi
/* 1355 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1368
/* 1359 */    MCD::OPC_CheckPredicate, 1, 2, 53, // Skip to: 14933
/* 1363 */    MCD::OPC_Decode, 194, 14, 178, 1, // Opcode: ORi
/* 1368 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1381
/* 1372 */    MCD::OPC_CheckPredicate, 1, 245, 52, // Skip to: 14933
/* 1376 */    MCD::OPC_Decode, 228, 19, 178, 1, // Opcode: XORi
/* 1381 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1399
/* 1385 */    MCD::OPC_CheckPredicate, 25, 232, 52, // Skip to: 14933
/* 1389 */    MCD::OPC_CheckField, 21, 5, 0, 226, 52, // Skip to: 14933
/* 1395 */    MCD::OPC_Decode, 144, 11, 89, // Opcode: LUi
/* 1399 */    MCD::OPC_FilterValue, 16, 47, 1, // Skip to: 1706
/* 1403 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1406 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 1425
/* 1410 */    MCD::OPC_CheckPredicate, 40, 207, 52, // Skip to: 14933
/* 1414 */    MCD::OPC_CheckField, 3, 8, 0, 201, 52, // Skip to: 14933
/* 1420 */    MCD::OPC_Decode, 147, 12, 179, 1, // Opcode: MFC0
/* 1425 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 1444
/* 1429 */    MCD::OPC_CheckPredicate, 40, 188, 52, // Skip to: 14933
/* 1433 */    MCD::OPC_CheckField, 3, 8, 0, 182, 52, // Skip to: 14933
/* 1439 */    MCD::OPC_Decode, 173, 13, 180, 1, // Opcode: MTC0
/* 1444 */    MCD::OPC_FilterValue, 8, 21, 0, // Skip to: 1469
/* 1448 */    MCD::OPC_CheckPredicate, 41, 169, 52, // Skip to: 14933
/* 1452 */    MCD::OPC_CheckField, 6, 5, 0, 163, 52, // Skip to: 14933
/* 1458 */    MCD::OPC_CheckField, 3, 1, 0, 157, 52, // Skip to: 14933
/* 1464 */    MCD::OPC_Decode, 182, 12, 181, 1, // Opcode: MFTR
/* 1469 */    MCD::OPC_FilterValue, 11, 81, 0, // Skip to: 1554
/* 1473 */    MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 1476 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1488
/* 1480 */    MCD::OPC_CheckPredicate, 41, 137, 52, // Skip to: 14933
/* 1484 */    MCD::OPC_Decode, 242, 7, 73, // Opcode: DVPE
/* 1488 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 1500
/* 1492 */    MCD::OPC_CheckPredicate, 41, 125, 52, // Skip to: 14933
/* 1496 */    MCD::OPC_Decode, 132, 8, 73, // Opcode: EVPE
/* 1500 */    MCD::OPC_FilterValue, 193, 23, 8, 0, // Skip to: 1513
/* 1505 */    MCD::OPC_CheckPredicate, 41, 112, 52, // Skip to: 14933
/* 1509 */    MCD::OPC_Decode, 147, 7, 73, // Opcode: DMT
/* 1513 */    MCD::OPC_FilterValue, 225, 23, 8, 0, // Skip to: 1526
/* 1518 */    MCD::OPC_CheckPredicate, 41, 99, 52, // Skip to: 14933
/* 1522 */    MCD::OPC_Decode, 252, 7, 73, // Opcode: EMT
/* 1526 */    MCD::OPC_FilterValue, 128, 192, 1, 8, 0, // Skip to: 1540
/* 1532 */    MCD::OPC_CheckPredicate, 28, 85, 52, // Skip to: 14933
/* 1536 */    MCD::OPC_Decode, 249, 6, 73, // Opcode: DI
/* 1540 */    MCD::OPC_FilterValue, 160, 192, 1, 75, 52, // Skip to: 14933
/* 1546 */    MCD::OPC_CheckPredicate, 28, 71, 52, // Skip to: 14933
/* 1550 */    MCD::OPC_Decode, 249, 7, 73, // Opcode: EI
/* 1554 */    MCD::OPC_FilterValue, 12, 21, 0, // Skip to: 1579
/* 1558 */    MCD::OPC_CheckPredicate, 41, 59, 52, // Skip to: 14933
/* 1562 */    MCD::OPC_CheckField, 6, 5, 0, 53, 52, // Skip to: 14933
/* 1568 */    MCD::OPC_CheckField, 3, 1, 0, 47, 52, // Skip to: 14933
/* 1574 */    MCD::OPC_Decode, 214, 13, 181, 1, // Opcode: MTTR
/* 1579 */    MCD::OPC_FilterValue, 16, 38, 52, // Skip to: 14933
/* 1583 */    MCD::OPC_ExtractField, 0, 21,  // Inst{20-0} ...
/* 1586 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1598
/* 1590 */    MCD::OPC_CheckPredicate, 1, 27, 52, // Skip to: 14933
/* 1594 */    MCD::OPC_Decode, 160, 19, 0, // Opcode: TLBR
/* 1598 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1610
/* 1602 */    MCD::OPC_CheckPredicate, 1, 15, 52, // Skip to: 14933
/* 1606 */    MCD::OPC_Decode, 162, 19, 0, // Opcode: TLBWI
/* 1610 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1622
/* 1614 */    MCD::OPC_CheckPredicate, 42, 3, 52, // Skip to: 14933
/* 1618 */    MCD::OPC_Decode, 154, 19, 0, // Opcode: TLBINV
/* 1622 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1634
/* 1626 */    MCD::OPC_CheckPredicate, 42, 247, 51, // Skip to: 14933
/* 1630 */    MCD::OPC_Decode, 155, 19, 0, // Opcode: TLBINVF
/* 1634 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1646
/* 1638 */    MCD::OPC_CheckPredicate, 1, 235, 51, // Skip to: 14933
/* 1642 */    MCD::OPC_Decode, 164, 19, 0, // Opcode: TLBWR
/* 1646 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1658
/* 1650 */    MCD::OPC_CheckPredicate, 1, 223, 51, // Skip to: 14933
/* 1654 */    MCD::OPC_Decode, 158, 19, 0, // Opcode: TLBP
/* 1658 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 1670
/* 1662 */    MCD::OPC_CheckPredicate, 43, 211, 51, // Skip to: 14933
/* 1666 */    MCD::OPC_Decode, 253, 7, 0, // Opcode: ERET
/* 1670 */    MCD::OPC_FilterValue, 31, 8, 0, // Skip to: 1682
/* 1674 */    MCD::OPC_CheckPredicate, 40, 199, 51, // Skip to: 14933
/* 1678 */    MCD::OPC_Decode, 242, 6, 0, // Opcode: DERET
/* 1682 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 1694
/* 1686 */    MCD::OPC_CheckPredicate, 44, 187, 51, // Skip to: 14933
/* 1690 */    MCD::OPC_Decode, 207, 19, 0, // Opcode: WAIT
/* 1694 */    MCD::OPC_FilterValue, 88, 179, 51, // Skip to: 14933
/* 1698 */    MCD::OPC_CheckPredicate, 45, 175, 51, // Skip to: 14933
/* 1702 */    MCD::OPC_Decode, 254, 7, 0, // Opcode: ERETNC
/* 1706 */    MCD::OPC_FilterValue, 17, 191, 6, // Skip to: 3437
/* 1710 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1713 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 1732
/* 1717 */    MCD::OPC_CheckPredicate, 16, 156, 51, // Skip to: 14933
/* 1721 */    MCD::OPC_CheckField, 0, 11, 0, 150, 51, // Skip to: 14933
/* 1727 */    MCD::OPC_Decode, 149, 12, 182, 1, // Opcode: MFC1
/* 1732 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1751
/* 1736 */    MCD::OPC_CheckPredicate, 46, 137, 51, // Skip to: 14933
/* 1740 */    MCD::OPC_CheckField, 0, 11, 0, 131, 51, // Skip to: 14933
/* 1746 */    MCD::OPC_Decode, 142, 7, 183, 1, // Opcode: DMFC1
/* 1751 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 1770
/* 1755 */    MCD::OPC_CheckPredicate, 47, 118, 51, // Skip to: 14933
/* 1759 */    MCD::OPC_CheckField, 0, 11, 0, 112, 51, // Skip to: 14933
/* 1765 */    MCD::OPC_Decode, 195, 4, 184, 1, // Opcode: CFC1
/* 1770 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 1789
/* 1774 */    MCD::OPC_CheckPredicate, 48, 99, 51, // Skip to: 14933
/* 1778 */    MCD::OPC_CheckField, 0, 11, 0, 93, 51, // Skip to: 14933
/* 1784 */    MCD::OPC_Decode, 156, 12, 185, 1, // Opcode: MFHC1_D32
/* 1789 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 1808
/* 1793 */    MCD::OPC_CheckPredicate, 16, 80, 51, // Skip to: 14933
/* 1797 */    MCD::OPC_CheckField, 0, 11, 0, 74, 51, // Skip to: 14933
/* 1803 */    MCD::OPC_Decode, 175, 13, 186, 1, // Opcode: MTC1
/* 1808 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1827
/* 1812 */    MCD::OPC_CheckPredicate, 46, 61, 51, // Skip to: 14933
/* 1816 */    MCD::OPC_CheckField, 0, 11, 0, 55, 51, // Skip to: 14933
/* 1822 */    MCD::OPC_Decode, 149, 7, 187, 1, // Opcode: DMTC1
/* 1827 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1846
/* 1831 */    MCD::OPC_CheckPredicate, 47, 42, 51, // Skip to: 14933
/* 1835 */    MCD::OPC_CheckField, 0, 11, 0, 36, 51, // Skip to: 14933
/* 1841 */    MCD::OPC_Decode, 218, 5, 188, 1, // Opcode: CTC1
/* 1846 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1865
/* 1850 */    MCD::OPC_CheckPredicate, 48, 23, 51, // Skip to: 14933
/* 1854 */    MCD::OPC_CheckField, 0, 11, 0, 17, 51, // Skip to: 14933
/* 1860 */    MCD::OPC_Decode, 182, 13, 189, 1, // Opcode: MTHC1_D32
/* 1865 */    MCD::OPC_FilterValue, 8, 55, 0, // Skip to: 1924
/* 1869 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1872 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1885
/* 1876 */    MCD::OPC_CheckPredicate, 49, 253, 50, // Skip to: 14933
/* 1880 */    MCD::OPC_Decode, 184, 2, 190, 1, // Opcode: BC1F
/* 1885 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1898
/* 1889 */    MCD::OPC_CheckPredicate, 49, 240, 50, // Skip to: 14933
/* 1893 */    MCD::OPC_Decode, 189, 2, 190, 1, // Opcode: BC1T
/* 1898 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1911
/* 1902 */    MCD::OPC_CheckPredicate, 50, 227, 50, // Skip to: 14933
/* 1906 */    MCD::OPC_Decode, 185, 2, 190, 1, // Opcode: BC1FL
/* 1911 */    MCD::OPC_FilterValue, 3, 218, 50, // Skip to: 14933
/* 1915 */    MCD::OPC_CheckPredicate, 50, 214, 50, // Skip to: 14933
/* 1919 */    MCD::OPC_Decode, 190, 2, 190, 1, // Opcode: BC1TL
/* 1924 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1937
/* 1928 */    MCD::OPC_CheckPredicate, 29, 201, 50, // Skip to: 14933
/* 1932 */    MCD::OPC_Decode, 137, 4, 191, 1, // Opcode: BZ_V
/* 1937 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 1950
/* 1941 */    MCD::OPC_CheckPredicate, 29, 188, 50, // Skip to: 14933
/* 1945 */    MCD::OPC_Decode, 234, 3, 191, 1, // Opcode: BNZ_V
/* 1950 */    MCD::OPC_FilterValue, 16, 153, 2, // Skip to: 2619
/* 1954 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1957 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1970
/* 1961 */    MCD::OPC_CheckPredicate, 16, 168, 50, // Skip to: 14933
/* 1965 */    MCD::OPC_Decode, 177, 8, 192, 1, // Opcode: FADD_S
/* 1970 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1983
/* 1974 */    MCD::OPC_CheckPredicate, 16, 155, 50, // Skip to: 14933
/* 1978 */    MCD::OPC_Decode, 194, 9, 192, 1, // Opcode: FSUB_S
/* 1983 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1996
/* 1987 */    MCD::OPC_CheckPredicate, 16, 142, 50, // Skip to: 14933
/* 1991 */    MCD::OPC_Decode, 152, 9, 192, 1, // Opcode: FMUL_S
/* 1996 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2009
/* 2000 */    MCD::OPC_CheckPredicate, 16, 129, 50, // Skip to: 14933
/* 2004 */    MCD::OPC_Decode, 215, 8, 192, 1, // Opcode: FDIV_S
/* 2009 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2028
/* 2013 */    MCD::OPC_CheckPredicate, 51, 116, 50, // Skip to: 14933
/* 2017 */    MCD::OPC_CheckField, 16, 5, 0, 110, 50, // Skip to: 14933
/* 2023 */    MCD::OPC_Decode, 186, 9, 193, 1, // Opcode: FSQRT_S
/* 2028 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2047
/* 2032 */    MCD::OPC_CheckPredicate, 47, 97, 50, // Skip to: 14933
/* 2036 */    MCD::OPC_CheckField, 16, 5, 0, 91, 50, // Skip to: 14933
/* 2042 */    MCD::OPC_Decode, 169, 8, 193, 1, // Opcode: FABS_S
/* 2047 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2066
/* 2051 */    MCD::OPC_CheckPredicate, 16, 78, 50, // Skip to: 14933
/* 2055 */    MCD::OPC_CheckField, 16, 5, 0, 72, 50, // Skip to: 14933
/* 2061 */    MCD::OPC_Decode, 142, 9, 193, 1, // Opcode: FMOV_S
/* 2066 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2085
/* 2070 */    MCD::OPC_CheckPredicate, 16, 59, 50, // Skip to: 14933
/* 2074 */    MCD::OPC_CheckField, 16, 5, 0, 53, 50, // Skip to: 14933
/* 2080 */    MCD::OPC_Decode, 160, 9, 193, 1, // Opcode: FNEG_S
/* 2085 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2104
/* 2089 */    MCD::OPC_CheckPredicate, 51, 40, 50, // Skip to: 14933
/* 2093 */    MCD::OPC_CheckField, 16, 5, 0, 34, 50, // Skip to: 14933
/* 2099 */    MCD::OPC_Decode, 233, 15, 193, 1, // Opcode: ROUND_W_S
/* 2104 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2123
/* 2108 */    MCD::OPC_CheckPredicate, 51, 21, 50, // Skip to: 14933
/* 2112 */    MCD::OPC_CheckField, 16, 5, 0, 15, 50, // Skip to: 14933
/* 2118 */    MCD::OPC_Decode, 186, 19, 193, 1, // Opcode: TRUNC_W_S
/* 2123 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2142
/* 2127 */    MCD::OPC_CheckPredicate, 51, 2, 50, // Skip to: 14933
/* 2131 */    MCD::OPC_CheckField, 16, 5, 0, 252, 49, // Skip to: 14933
/* 2137 */    MCD::OPC_Decode, 184, 4, 193, 1, // Opcode: CEIL_W_S
/* 2142 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2161
/* 2146 */    MCD::OPC_CheckPredicate, 51, 239, 49, // Skip to: 14933
/* 2150 */    MCD::OPC_CheckField, 16, 5, 0, 233, 49, // Skip to: 14933
/* 2156 */    MCD::OPC_Decode, 253, 8, 193, 1, // Opcode: FLOOR_W_S
/* 2161 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2194
/* 2165 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2168 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2181
/* 2172 */    MCD::OPC_CheckPredicate, 27, 213, 49, // Skip to: 14933
/* 2176 */    MCD::OPC_Decode, 238, 12, 194, 1, // Opcode: MOVF_S
/* 2181 */    MCD::OPC_FilterValue, 1, 204, 49, // Skip to: 14933
/* 2185 */    MCD::OPC_CheckPredicate, 27, 200, 49, // Skip to: 14933
/* 2189 */    MCD::OPC_Decode, 130, 13, 194, 1, // Opcode: MOVT_S
/* 2194 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2207
/* 2198 */    MCD::OPC_CheckPredicate, 27, 187, 49, // Skip to: 14933
/* 2202 */    MCD::OPC_Decode, 142, 13, 195, 1, // Opcode: MOVZ_I_S
/* 2207 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2220
/* 2211 */    MCD::OPC_CheckPredicate, 27, 174, 49, // Skip to: 14933
/* 2215 */    MCD::OPC_Decode, 250, 12, 195, 1, // Opcode: MOVN_I_S
/* 2220 */    MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 2239
/* 2224 */    MCD::OPC_CheckPredicate, 52, 161, 49, // Skip to: 14933
/* 2228 */    MCD::OPC_CheckField, 16, 5, 0, 155, 49, // Skip to: 14933
/* 2234 */    MCD::OPC_Decode, 203, 15, 193, 1, // Opcode: RECIP_S
/* 2239 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 2258
/* 2243 */    MCD::OPC_CheckPredicate, 52, 142, 49, // Skip to: 14933
/* 2247 */    MCD::OPC_CheckField, 16, 5, 0, 136, 49, // Skip to: 14933
/* 2253 */    MCD::OPC_Decode, 240, 15, 193, 1, // Opcode: RSQRT_S
/* 2258 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 2277
/* 2262 */    MCD::OPC_CheckPredicate, 53, 123, 49, // Skip to: 14933
/* 2266 */    MCD::OPC_CheckField, 16, 5, 0, 117, 49, // Skip to: 14933
/* 2272 */    MCD::OPC_Decode, 223, 5, 196, 1, // Opcode: CVT_D32_S
/* 2277 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 2296
/* 2281 */    MCD::OPC_CheckPredicate, 16, 104, 49, // Skip to: 14933
/* 2285 */    MCD::OPC_CheckField, 16, 5, 0, 98, 49, // Skip to: 14933
/* 2291 */    MCD::OPC_Decode, 252, 5, 193, 1, // Opcode: CVT_W_S
/* 2296 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 2315
/* 2300 */    MCD::OPC_CheckPredicate, 54, 85, 49, // Skip to: 14933
/* 2304 */    MCD::OPC_CheckField, 16, 5, 0, 79, 49, // Skip to: 14933
/* 2310 */    MCD::OPC_Decode, 236, 5, 197, 1, // Opcode: CVT_L_S
/* 2315 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 2334
/* 2319 */    MCD::OPC_CheckPredicate, 49, 66, 49, // Skip to: 14933
/* 2323 */    MCD::OPC_CheckField, 6, 2, 0, 60, 49, // Skip to: 14933
/* 2329 */    MCD::OPC_Decode, 137, 6, 198, 1, // Opcode: C_F_S
/* 2334 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 2353
/* 2338 */    MCD::OPC_CheckPredicate, 49, 47, 49, // Skip to: 14933
/* 2342 */    MCD::OPC_CheckField, 6, 2, 0, 41, 49, // Skip to: 14933
/* 2348 */    MCD::OPC_Decode, 221, 6, 198, 1, // Opcode: C_UN_S
/* 2353 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 2372
/* 2357 */    MCD::OPC_CheckPredicate, 49, 28, 49, // Skip to: 14933
/* 2361 */    MCD::OPC_CheckField, 6, 2, 0, 22, 49, // Skip to: 14933
/* 2367 */    MCD::OPC_Decode, 131, 6, 198, 1, // Opcode: C_EQ_S
/* 2372 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 2391
/* 2376 */    MCD::OPC_CheckPredicate, 49, 9, 49, // Skip to: 14933
/* 2380 */    MCD::OPC_CheckField, 6, 2, 0, 3, 49, // Skip to: 14933
/* 2386 */    MCD::OPC_Decode, 203, 6, 198, 1, // Opcode: C_UEQ_S
/* 2391 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 2410
/* 2395 */    MCD::OPC_CheckPredicate, 49, 246, 48, // Skip to: 14933
/* 2399 */    MCD::OPC_CheckField, 6, 2, 0, 240, 48, // Skip to: 14933
/* 2405 */    MCD::OPC_Decode, 185, 6, 198, 1, // Opcode: C_OLT_S
/* 2410 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 2429
/* 2414 */    MCD::OPC_CheckPredicate, 49, 227, 48, // Skip to: 14933
/* 2418 */    MCD::OPC_CheckField, 6, 2, 0, 221, 48, // Skip to: 14933
/* 2424 */    MCD::OPC_Decode, 215, 6, 198, 1, // Opcode: C_ULT_S
/* 2429 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 2448
/* 2433 */    MCD::OPC_CheckPredicate, 49, 208, 48, // Skip to: 14933
/* 2437 */    MCD::OPC_CheckField, 6, 2, 0, 202, 48, // Skip to: 14933
/* 2443 */    MCD::OPC_Decode, 179, 6, 198, 1, // Opcode: C_OLE_S
/* 2448 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 2467
/* 2452 */    MCD::OPC_CheckPredicate, 49, 189, 48, // Skip to: 14933
/* 2456 */    MCD::OPC_CheckField, 6, 2, 0, 183, 48, // Skip to: 14933
/* 2462 */    MCD::OPC_Decode, 209, 6, 198, 1, // Opcode: C_ULE_S
/* 2467 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 2486
/* 2471 */    MCD::OPC_CheckPredicate, 49, 170, 48, // Skip to: 14933
/* 2475 */    MCD::OPC_CheckField, 6, 2, 0, 164, 48, // Skip to: 14933
/* 2481 */    MCD::OPC_Decode, 197, 6, 198, 1, // Opcode: C_SF_S
/* 2486 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 2505
/* 2490 */    MCD::OPC_CheckPredicate, 49, 151, 48, // Skip to: 14933
/* 2494 */    MCD::OPC_CheckField, 6, 2, 0, 145, 48, // Skip to: 14933
/* 2500 */    MCD::OPC_Decode, 161, 6, 198, 1, // Opcode: C_NGLE_S
/* 2505 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 2524
/* 2509 */    MCD::OPC_CheckPredicate, 49, 132, 48, // Skip to: 14933
/* 2513 */    MCD::OPC_CheckField, 6, 2, 0, 126, 48, // Skip to: 14933
/* 2519 */    MCD::OPC_Decode, 191, 6, 198, 1, // Opcode: C_SEQ_S
/* 2524 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 2543
/* 2528 */    MCD::OPC_CheckPredicate, 49, 113, 48, // Skip to: 14933
/* 2532 */    MCD::OPC_CheckField, 6, 2, 0, 107, 48, // Skip to: 14933
/* 2538 */    MCD::OPC_Decode, 167, 6, 198, 1, // Opcode: C_NGL_S
/* 2543 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 2562
/* 2547 */    MCD::OPC_CheckPredicate, 49, 94, 48, // Skip to: 14933
/* 2551 */    MCD::OPC_CheckField, 6, 2, 0, 88, 48, // Skip to: 14933
/* 2557 */    MCD::OPC_Decode, 149, 6, 198, 1, // Opcode: C_LT_S
/* 2562 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 2581
/* 2566 */    MCD::OPC_CheckPredicate, 49, 75, 48, // Skip to: 14933
/* 2570 */    MCD::OPC_CheckField, 6, 2, 0, 69, 48, // Skip to: 14933
/* 2576 */    MCD::OPC_Decode, 155, 6, 198, 1, // Opcode: C_NGE_S
/* 2581 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 2600
/* 2585 */    MCD::OPC_CheckPredicate, 49, 56, 48, // Skip to: 14933
/* 2589 */    MCD::OPC_CheckField, 6, 2, 0, 50, 48, // Skip to: 14933
/* 2595 */    MCD::OPC_Decode, 143, 6, 198, 1, // Opcode: C_LE_S
/* 2600 */    MCD::OPC_FilterValue, 63, 41, 48, // Skip to: 14933
/* 2604 */    MCD::OPC_CheckPredicate, 49, 37, 48, // Skip to: 14933
/* 2608 */    MCD::OPC_CheckField, 6, 2, 0, 31, 48, // Skip to: 14933
/* 2614 */    MCD::OPC_Decode, 173, 6, 198, 1, // Opcode: C_NGT_S
/* 2619 */    MCD::OPC_FilterValue, 17, 153, 2, // Skip to: 3288
/* 2623 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2626 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2639
/* 2630 */    MCD::OPC_CheckPredicate, 53, 11, 48, // Skip to: 14933
/* 2634 */    MCD::OPC_Decode, 173, 8, 199, 1, // Opcode: FADD_D32
/* 2639 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2652
/* 2643 */    MCD::OPC_CheckPredicate, 53, 254, 47, // Skip to: 14933
/* 2647 */    MCD::OPC_Decode, 190, 9, 199, 1, // Opcode: FSUB_D32
/* 2652 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2665
/* 2656 */    MCD::OPC_CheckPredicate, 53, 241, 47, // Skip to: 14933
/* 2660 */    MCD::OPC_Decode, 148, 9, 199, 1, // Opcode: FMUL_D32
/* 2665 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2678
/* 2669 */    MCD::OPC_CheckPredicate, 53, 228, 47, // Skip to: 14933
/* 2673 */    MCD::OPC_Decode, 211, 8, 199, 1, // Opcode: FDIV_D32
/* 2678 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2697
/* 2682 */    MCD::OPC_CheckPredicate, 55, 215, 47, // Skip to: 14933
/* 2686 */    MCD::OPC_CheckField, 16, 5, 0, 209, 47, // Skip to: 14933
/* 2692 */    MCD::OPC_Decode, 183, 9, 200, 1, // Opcode: FSQRT_D32
/* 2697 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2716
/* 2701 */    MCD::OPC_CheckPredicate, 56, 196, 47, // Skip to: 14933
/* 2705 */    MCD::OPC_CheckField, 16, 5, 0, 190, 47, // Skip to: 14933
/* 2711 */    MCD::OPC_Decode, 166, 8, 200, 1, // Opcode: FABS_D32
/* 2716 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2735
/* 2720 */    MCD::OPC_CheckPredicate, 53, 177, 47, // Skip to: 14933
/* 2724 */    MCD::OPC_CheckField, 16, 5, 0, 171, 47, // Skip to: 14933
/* 2730 */    MCD::OPC_Decode, 138, 9, 200, 1, // Opcode: FMOV_D32
/* 2735 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2754
/* 2739 */    MCD::OPC_CheckPredicate, 53, 158, 47, // Skip to: 14933
/* 2743 */    MCD::OPC_CheckField, 16, 5, 0, 152, 47, // Skip to: 14933
/* 2749 */    MCD::OPC_Decode, 156, 9, 200, 1, // Opcode: FNEG_D32
/* 2754 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2773
/* 2758 */    MCD::OPC_CheckPredicate, 55, 139, 47, // Skip to: 14933
/* 2762 */    MCD::OPC_CheckField, 16, 5, 0, 133, 47, // Skip to: 14933
/* 2768 */    MCD::OPC_Decode, 229, 15, 201, 1, // Opcode: ROUND_W_D32
/* 2773 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2792
/* 2777 */    MCD::OPC_CheckPredicate, 55, 120, 47, // Skip to: 14933
/* 2781 */    MCD::OPC_CheckField, 16, 5, 0, 114, 47, // Skip to: 14933
/* 2787 */    MCD::OPC_Decode, 182, 19, 201, 1, // Opcode: TRUNC_W_D32
/* 2792 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2811
/* 2796 */    MCD::OPC_CheckPredicate, 55, 101, 47, // Skip to: 14933
/* 2800 */    MCD::OPC_CheckField, 16, 5, 0, 95, 47, // Skip to: 14933
/* 2806 */    MCD::OPC_Decode, 180, 4, 201, 1, // Opcode: CEIL_W_D32
/* 2811 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2830
/* 2815 */    MCD::OPC_CheckPredicate, 55, 82, 47, // Skip to: 14933
/* 2819 */    MCD::OPC_CheckField, 16, 5, 0, 76, 47, // Skip to: 14933
/* 2825 */    MCD::OPC_Decode, 249, 8, 201, 1, // Opcode: FLOOR_W_D32
/* 2830 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2863
/* 2834 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2837 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2850
/* 2841 */    MCD::OPC_CheckPredicate, 57, 56, 47, // Skip to: 14933
/* 2845 */    MCD::OPC_Decode, 232, 12, 202, 1, // Opcode: MOVF_D32
/* 2850 */    MCD::OPC_FilterValue, 1, 47, 47, // Skip to: 14933
/* 2854 */    MCD::OPC_CheckPredicate, 57, 43, 47, // Skip to: 14933
/* 2858 */    MCD::OPC_Decode, 252, 12, 202, 1, // Opcode: MOVT_D32
/* 2863 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2876
/* 2867 */    MCD::OPC_CheckPredicate, 57, 30, 47, // Skip to: 14933
/* 2871 */    MCD::OPC_Decode, 136, 13, 203, 1, // Opcode: MOVZ_I_D32
/* 2876 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2889
/* 2880 */    MCD::OPC_CheckPredicate, 57, 17, 47, // Skip to: 14933
/* 2884 */    MCD::OPC_Decode, 244, 12, 203, 1, // Opcode: MOVN_I_D32
/* 2889 */    MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 2908
/* 2893 */    MCD::OPC_CheckPredicate, 58, 4, 47, // Skip to: 14933
/* 2897 */    MCD::OPC_CheckField, 16, 5, 0, 254, 46, // Skip to: 14933
/* 2903 */    MCD::OPC_Decode, 199, 15, 200, 1, // Opcode: RECIP_D32
/* 2908 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 2927
/* 2912 */    MCD::OPC_CheckPredicate, 58, 241, 46, // Skip to: 14933
/* 2916 */    MCD::OPC_CheckField, 16, 5, 0, 235, 46, // Skip to: 14933
/* 2922 */    MCD::OPC_Decode, 236, 15, 200, 1, // Opcode: RSQRT_D32
/* 2927 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 2946
/* 2931 */    MCD::OPC_CheckPredicate, 53, 222, 46, // Skip to: 14933
/* 2935 */    MCD::OPC_CheckField, 16, 5, 0, 216, 46, // Skip to: 14933
/* 2941 */    MCD::OPC_Decode, 239, 5, 201, 1, // Opcode: CVT_S_D32
/* 2946 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 2965
/* 2950 */    MCD::OPC_CheckPredicate, 53, 203, 46, // Skip to: 14933
/* 2954 */    MCD::OPC_CheckField, 16, 5, 0, 197, 46, // Skip to: 14933
/* 2960 */    MCD::OPC_Decode, 248, 5, 201, 1, // Opcode: CVT_W_D32
/* 2965 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 2984
/* 2969 */    MCD::OPC_CheckPredicate, 54, 184, 46, // Skip to: 14933
/* 2973 */    MCD::OPC_CheckField, 16, 5, 0, 178, 46, // Skip to: 14933
/* 2979 */    MCD::OPC_Decode, 233, 5, 204, 1, // Opcode: CVT_L_D64
/* 2984 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 3003
/* 2988 */    MCD::OPC_CheckPredicate, 59, 165, 46, // Skip to: 14933
/* 2992 */    MCD::OPC_CheckField, 6, 2, 0, 159, 46, // Skip to: 14933
/* 2998 */    MCD::OPC_Decode, 133, 6, 205, 1, // Opcode: C_F_D32
/* 3003 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 3022
/* 3007 */    MCD::OPC_CheckPredicate, 59, 146, 46, // Skip to: 14933
/* 3011 */    MCD::OPC_CheckField, 6, 2, 0, 140, 46, // Skip to: 14933
/* 3017 */    MCD::OPC_Decode, 217, 6, 205, 1, // Opcode: C_UN_D32
/* 3022 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 3041
/* 3026 */    MCD::OPC_CheckPredicate, 59, 127, 46, // Skip to: 14933
/* 3030 */    MCD::OPC_CheckField, 6, 2, 0, 121, 46, // Skip to: 14933
/* 3036 */    MCD::OPC_Decode, 255, 5, 205, 1, // Opcode: C_EQ_D32
/* 3041 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 3060
/* 3045 */    MCD::OPC_CheckPredicate, 59, 108, 46, // Skip to: 14933
/* 3049 */    MCD::OPC_CheckField, 6, 2, 0, 102, 46, // Skip to: 14933
/* 3055 */    MCD::OPC_Decode, 199, 6, 205, 1, // Opcode: C_UEQ_D32
/* 3060 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 3079
/* 3064 */    MCD::OPC_CheckPredicate, 59, 89, 46, // Skip to: 14933
/* 3068 */    MCD::OPC_CheckField, 6, 2, 0, 83, 46, // Skip to: 14933
/* 3074 */    MCD::OPC_Decode, 181, 6, 205, 1, // Opcode: C_OLT_D32
/* 3079 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 3098
/* 3083 */    MCD::OPC_CheckPredicate, 59, 70, 46, // Skip to: 14933
/* 3087 */    MCD::OPC_CheckField, 6, 2, 0, 64, 46, // Skip to: 14933
/* 3093 */    MCD::OPC_Decode, 211, 6, 205, 1, // Opcode: C_ULT_D32
/* 3098 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 3117
/* 3102 */    MCD::OPC_CheckPredicate, 59, 51, 46, // Skip to: 14933
/* 3106 */    MCD::OPC_CheckField, 6, 2, 0, 45, 46, // Skip to: 14933
/* 3112 */    MCD::OPC_Decode, 175, 6, 205, 1, // Opcode: C_OLE_D32
/* 3117 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 3136
/* 3121 */    MCD::OPC_CheckPredicate, 59, 32, 46, // Skip to: 14933
/* 3125 */    MCD::OPC_CheckField, 6, 2, 0, 26, 46, // Skip to: 14933
/* 3131 */    MCD::OPC_Decode, 205, 6, 205, 1, // Opcode: C_ULE_D32
/* 3136 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 3155
/* 3140 */    MCD::OPC_CheckPredicate, 59, 13, 46, // Skip to: 14933
/* 3144 */    MCD::OPC_CheckField, 6, 2, 0, 7, 46, // Skip to: 14933
/* 3150 */    MCD::OPC_Decode, 193, 6, 205, 1, // Opcode: C_SF_D32
/* 3155 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 3174
/* 3159 */    MCD::OPC_CheckPredicate, 59, 250, 45, // Skip to: 14933
/* 3163 */    MCD::OPC_CheckField, 6, 2, 0, 244, 45, // Skip to: 14933
/* 3169 */    MCD::OPC_Decode, 157, 6, 205, 1, // Opcode: C_NGLE_D32
/* 3174 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 3193
/* 3178 */    MCD::OPC_CheckPredicate, 59, 231, 45, // Skip to: 14933
/* 3182 */    MCD::OPC_CheckField, 6, 2, 0, 225, 45, // Skip to: 14933
/* 3188 */    MCD::OPC_Decode, 187, 6, 205, 1, // Opcode: C_SEQ_D32
/* 3193 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 3212
/* 3197 */    MCD::OPC_CheckPredicate, 59, 212, 45, // Skip to: 14933
/* 3201 */    MCD::OPC_CheckField, 6, 2, 0, 206, 45, // Skip to: 14933
/* 3207 */    MCD::OPC_Decode, 163, 6, 205, 1, // Opcode: C_NGL_D32
/* 3212 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 3231
/* 3216 */    MCD::OPC_CheckPredicate, 59, 193, 45, // Skip to: 14933
/* 3220 */    MCD::OPC_CheckField, 6, 2, 0, 187, 45, // Skip to: 14933
/* 3226 */    MCD::OPC_Decode, 145, 6, 205, 1, // Opcode: C_LT_D32
/* 3231 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 3250
/* 3235 */    MCD::OPC_CheckPredicate, 59, 174, 45, // Skip to: 14933
/* 3239 */    MCD::OPC_CheckField, 6, 2, 0, 168, 45, // Skip to: 14933
/* 3245 */    MCD::OPC_Decode, 151, 6, 205, 1, // Opcode: C_NGE_D32
/* 3250 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 3269
/* 3254 */    MCD::OPC_CheckPredicate, 59, 155, 45, // Skip to: 14933
/* 3258 */    MCD::OPC_CheckField, 6, 2, 0, 149, 45, // Skip to: 14933
/* 3264 */    MCD::OPC_Decode, 139, 6, 205, 1, // Opcode: C_LE_D32
/* 3269 */    MCD::OPC_FilterValue, 63, 140, 45, // Skip to: 14933
/* 3273 */    MCD::OPC_CheckPredicate, 59, 136, 45, // Skip to: 14933
/* 3277 */    MCD::OPC_CheckField, 6, 2, 0, 130, 45, // Skip to: 14933
/* 3283 */    MCD::OPC_Decode, 169, 6, 205, 1, // Opcode: C_NGT_D32
/* 3288 */    MCD::OPC_FilterValue, 20, 41, 0, // Skip to: 3333
/* 3292 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3295 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 3314
/* 3299 */    MCD::OPC_CheckPredicate, 16, 110, 45, // Skip to: 14933
/* 3303 */    MCD::OPC_CheckField, 16, 5, 0, 104, 45, // Skip to: 14933
/* 3309 */    MCD::OPC_Decode, 245, 5, 193, 1, // Opcode: CVT_S_W
/* 3314 */    MCD::OPC_FilterValue, 33, 95, 45, // Skip to: 14933
/* 3318 */    MCD::OPC_CheckPredicate, 53, 91, 45, // Skip to: 14933
/* 3322 */    MCD::OPC_CheckField, 16, 5, 0, 85, 45, // Skip to: 14933
/* 3328 */    MCD::OPC_Decode, 224, 5, 196, 1, // Opcode: CVT_D32_W
/* 3333 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 3346
/* 3337 */    MCD::OPC_CheckPredicate, 29, 72, 45, // Skip to: 14933
/* 3341 */    MCD::OPC_Decode, 134, 4, 191, 1, // Opcode: BZ_B
/* 3346 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 3359
/* 3350 */    MCD::OPC_CheckPredicate, 29, 59, 45, // Skip to: 14933
/* 3354 */    MCD::OPC_Decode, 136, 4, 206, 1, // Opcode: BZ_H
/* 3359 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 3372
/* 3363 */    MCD::OPC_CheckPredicate, 29, 46, 45, // Skip to: 14933
/* 3367 */    MCD::OPC_Decode, 138, 4, 207, 1, // Opcode: BZ_W
/* 3372 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 3385
/* 3376 */    MCD::OPC_CheckPredicate, 29, 33, 45, // Skip to: 14933
/* 3380 */    MCD::OPC_Decode, 135, 4, 208, 1, // Opcode: BZ_D
/* 3385 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 3398
/* 3389 */    MCD::OPC_CheckPredicate, 29, 20, 45, // Skip to: 14933
/* 3393 */    MCD::OPC_Decode, 231, 3, 191, 1, // Opcode: BNZ_B
/* 3398 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 3411
/* 3402 */    MCD::OPC_CheckPredicate, 29, 7, 45, // Skip to: 14933
/* 3406 */    MCD::OPC_Decode, 233, 3, 206, 1, // Opcode: BNZ_H
/* 3411 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 3424
/* 3415 */    MCD::OPC_CheckPredicate, 29, 250, 44, // Skip to: 14933
/* 3419 */    MCD::OPC_Decode, 235, 3, 207, 1, // Opcode: BNZ_W
/* 3424 */    MCD::OPC_FilterValue, 31, 241, 44, // Skip to: 14933
/* 3428 */    MCD::OPC_CheckPredicate, 29, 237, 44, // Skip to: 14933
/* 3432 */    MCD::OPC_Decode, 232, 3, 208, 1, // Opcode: BNZ_D
/* 3437 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 3482
/* 3441 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3444 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3463
/* 3448 */    MCD::OPC_CheckPredicate, 25, 217, 44, // Skip to: 14933
/* 3452 */    MCD::OPC_CheckField, 3, 8, 0, 211, 44, // Skip to: 14933
/* 3458 */    MCD::OPC_Decode, 153, 12, 209, 1, // Opcode: MFC2
/* 3463 */    MCD::OPC_FilterValue, 4, 202, 44, // Skip to: 14933
/* 3467 */    MCD::OPC_CheckPredicate, 25, 198, 44, // Skip to: 14933
/* 3471 */    MCD::OPC_CheckField, 3, 8, 0, 192, 44, // Skip to: 14933
/* 3477 */    MCD::OPC_Decode, 179, 13, 210, 1, // Opcode: MTC2
/* 3482 */    MCD::OPC_FilterValue, 19, 221, 0, // Skip to: 3707
/* 3486 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3489 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3508
/* 3493 */    MCD::OPC_CheckPredicate, 60, 172, 44, // Skip to: 14933
/* 3497 */    MCD::OPC_CheckField, 11, 5, 0, 166, 44, // Skip to: 14933
/* 3503 */    MCD::OPC_Decode, 184, 11, 211, 1, // Opcode: LWXC1
/* 3508 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 3527
/* 3512 */    MCD::OPC_CheckPredicate, 61, 153, 44, // Skip to: 14933
/* 3516 */    MCD::OPC_CheckField, 11, 5, 0, 147, 44, // Skip to: 14933
/* 3522 */    MCD::OPC_Decode, 223, 10, 212, 1, // Opcode: LDXC1
/* 3527 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 3546
/* 3531 */    MCD::OPC_CheckPredicate, 62, 134, 44, // Skip to: 14933
/* 3535 */    MCD::OPC_CheckField, 11, 5, 0, 128, 44, // Skip to: 14933
/* 3541 */    MCD::OPC_Decode, 141, 11, 212, 1, // Opcode: LUXC1
/* 3546 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 3565
/* 3550 */    MCD::OPC_CheckPredicate, 60, 115, 44, // Skip to: 14933
/* 3554 */    MCD::OPC_CheckField, 6, 5, 0, 109, 44, // Skip to: 14933
/* 3560 */    MCD::OPC_Decode, 208, 18, 213, 1, // Opcode: SWXC1
/* 3565 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 3584
/* 3569 */    MCD::OPC_CheckPredicate, 61, 96, 44, // Skip to: 14933
/* 3573 */    MCD::OPC_CheckField, 6, 5, 0, 90, 44, // Skip to: 14933
/* 3579 */    MCD::OPC_Decode, 166, 16, 214, 1, // Opcode: SDXC1
/* 3584 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 3603
/* 3588 */    MCD::OPC_CheckPredicate, 62, 77, 44, // Skip to: 14933
/* 3592 */    MCD::OPC_CheckField, 6, 5, 0, 71, 44, // Skip to: 14933
/* 3598 */    MCD::OPC_Decode, 172, 18, 214, 1, // Opcode: SUXC1
/* 3603 */    MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 3616
/* 3607 */    MCD::OPC_CheckPredicate, 63, 58, 44, // Skip to: 14933
/* 3611 */    MCD::OPC_Decode, 237, 11, 215, 1, // Opcode: MADD_S
/* 3616 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 3629
/* 3620 */    MCD::OPC_CheckPredicate, 64, 45, 44, // Skip to: 14933
/* 3624 */    MCD::OPC_Decode, 229, 11, 216, 1, // Opcode: MADD_D32
/* 3629 */    MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 3642
/* 3633 */    MCD::OPC_CheckPredicate, 63, 32, 44, // Skip to: 14933
/* 3637 */    MCD::OPC_Decode, 171, 13, 215, 1, // Opcode: MSUB_S
/* 3642 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 3655
/* 3646 */    MCD::OPC_CheckPredicate, 64, 19, 44, // Skip to: 14933
/* 3650 */    MCD::OPC_Decode, 163, 13, 216, 1, // Opcode: MSUB_D32
/* 3655 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3668
/* 3659 */    MCD::OPC_CheckPredicate, 63, 6, 44, // Skip to: 14933
/* 3663 */    MCD::OPC_Decode, 159, 14, 215, 1, // Opcode: NMADD_S
/* 3668 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 3681
/* 3672 */    MCD::OPC_CheckPredicate, 64, 249, 43, // Skip to: 14933
/* 3676 */    MCD::OPC_Decode, 156, 14, 216, 1, // Opcode: NMADD_D32
/* 3681 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3694
/* 3685 */    MCD::OPC_CheckPredicate, 63, 236, 43, // Skip to: 14933
/* 3689 */    MCD::OPC_Decode, 164, 14, 215, 1, // Opcode: NMSUB_S
/* 3694 */    MCD::OPC_FilterValue, 57, 227, 43, // Skip to: 14933
/* 3698 */    MCD::OPC_CheckPredicate, 64, 223, 43, // Skip to: 14933
/* 3702 */    MCD::OPC_Decode, 161, 14, 216, 1, // Opcode: NMSUB_D32
/* 3707 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 3720
/* 3711 */    MCD::OPC_CheckPredicate, 38, 210, 43, // Skip to: 14933
/* 3715 */    MCD::OPC_Decode, 210, 2, 176, 1, // Opcode: BEQL
/* 3720 */    MCD::OPC_FilterValue, 21, 29, 2, // Skip to: 4265
/* 3724 */    MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 3727 */    MCD::OPC_FilterValue, 187, 20, 8, 0, // Skip to: 3740
/* 3732 */    MCD::OPC_CheckPredicate, 15, 71, 0, // Skip to: 3807
/* 3736 */    MCD::OPC_Decode, 187, 9, 99, // Opcode: FSQRT_S_MM
/* 3740 */    MCD::OPC_FilterValue, 187, 22, 8, 0, // Skip to: 3753
/* 3745 */    MCD::OPC_CheckPredicate, 15, 58, 0, // Skip to: 3807
/* 3749 */    MCD::OPC_Decode, 254, 8, 99, // Opcode: FLOOR_W_S_MM
/* 3753 */    MCD::OPC_FilterValue, 187, 54, 8, 0, // Skip to: 3766
/* 3758 */    MCD::OPC_CheckPredicate, 15, 45, 0, // Skip to: 3807
/* 3762 */    MCD::OPC_Decode, 185, 4, 99, // Opcode: CEIL_W_S_MM
/* 3766 */    MCD::OPC_FilterValue, 187, 86, 8, 0, // Skip to: 3779
/* 3771 */    MCD::OPC_CheckPredicate, 15, 32, 0, // Skip to: 3807
/* 3775 */    MCD::OPC_Decode, 187, 19, 99, // Opcode: TRUNC_W_S_MM
/* 3779 */    MCD::OPC_FilterValue, 187, 96, 9, 0, // Skip to: 3793
/* 3784 */    MCD::OPC_CheckPredicate, 17, 19, 0, // Skip to: 3807
/* 3788 */    MCD::OPC_Decode, 160, 12, 136, 1, // Opcode: MFHC1_MM
/* 3793 */    MCD::OPC_FilterValue, 187, 112, 9, 0, // Skip to: 3807
/* 3798 */    MCD::OPC_CheckPredicate, 17, 5, 0, // Skip to: 3807
/* 3802 */    MCD::OPC_Decode, 186, 13, 137, 1, // Opcode: MTHC1_MM
/* 3807 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 3810 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 3823
/* 3814 */    MCD::OPC_CheckPredicate, 14, 182, 1, // Skip to: 4256
/* 3818 */    MCD::OPC_Decode, 138, 6, 217, 1, // Opcode: C_F_S_MM
/* 3823 */    MCD::OPC_FilterValue, 124, 9, 0, // Skip to: 3836
/* 3827 */    MCD::OPC_CheckPredicate, 14, 169, 1, // Skip to: 4256
/* 3831 */    MCD::OPC_Decode, 222, 6, 217, 1, // Opcode: C_UN_S_MM
/* 3836 */    MCD::OPC_FilterValue, 188, 1, 9, 0, // Skip to: 3850
/* 3841 */    MCD::OPC_CheckPredicate, 14, 155, 1, // Skip to: 4256
/* 3845 */    MCD::OPC_Decode, 132, 6, 217, 1, // Opcode: C_EQ_S_MM
/* 3850 */    MCD::OPC_FilterValue, 252, 1, 9, 0, // Skip to: 3864
/* 3855 */    MCD::OPC_CheckPredicate, 14, 141, 1, // Skip to: 4256
/* 3859 */    MCD::OPC_Decode, 204, 6, 217, 1, // Opcode: C_UEQ_S_MM
/* 3864 */    MCD::OPC_FilterValue, 188, 2, 9, 0, // Skip to: 3878
/* 3869 */    MCD::OPC_CheckPredicate, 14, 127, 1, // Skip to: 4256
/* 3873 */    MCD::OPC_Decode, 186, 6, 217, 1, // Opcode: C_OLT_S_MM
/* 3878 */    MCD::OPC_FilterValue, 252, 2, 9, 0, // Skip to: 3892
/* 3883 */    MCD::OPC_CheckPredicate, 14, 113, 1, // Skip to: 4256
/* 3887 */    MCD::OPC_Decode, 216, 6, 217, 1, // Opcode: C_ULT_S_MM
/* 3892 */    MCD::OPC_FilterValue, 188, 3, 9, 0, // Skip to: 3906
/* 3897 */    MCD::OPC_CheckPredicate, 14, 99, 1, // Skip to: 4256
/* 3901 */    MCD::OPC_Decode, 180, 6, 217, 1, // Opcode: C_OLE_S_MM
/* 3906 */    MCD::OPC_FilterValue, 252, 3, 9, 0, // Skip to: 3920
/* 3911 */    MCD::OPC_CheckPredicate, 14, 85, 1, // Skip to: 4256
/* 3915 */    MCD::OPC_Decode, 210, 6, 217, 1, // Opcode: C_ULE_S_MM
/* 3920 */    MCD::OPC_FilterValue, 188, 4, 9, 0, // Skip to: 3934
/* 3925 */    MCD::OPC_CheckPredicate, 14, 71, 1, // Skip to: 4256
/* 3929 */    MCD::OPC_Decode, 198, 6, 217, 1, // Opcode: C_SF_S_MM
/* 3934 */    MCD::OPC_FilterValue, 252, 4, 9, 0, // Skip to: 3948
/* 3939 */    MCD::OPC_CheckPredicate, 14, 57, 1, // Skip to: 4256
/* 3943 */    MCD::OPC_Decode, 162, 6, 217, 1, // Opcode: C_NGLE_S_MM
/* 3948 */    MCD::OPC_FilterValue, 188, 5, 9, 0, // Skip to: 3962
/* 3953 */    MCD::OPC_CheckPredicate, 14, 43, 1, // Skip to: 4256
/* 3957 */    MCD::OPC_Decode, 192, 6, 217, 1, // Opcode: C_SEQ_S_MM
/* 3962 */    MCD::OPC_FilterValue, 252, 5, 9, 0, // Skip to: 3976
/* 3967 */    MCD::OPC_CheckPredicate, 14, 29, 1, // Skip to: 4256
/* 3971 */    MCD::OPC_Decode, 168, 6, 217, 1, // Opcode: C_NGL_S_MM
/* 3976 */    MCD::OPC_FilterValue, 188, 6, 9, 0, // Skip to: 3990
/* 3981 */    MCD::OPC_CheckPredicate, 14, 15, 1, // Skip to: 4256
/* 3985 */    MCD::OPC_Decode, 150, 6, 217, 1, // Opcode: C_LT_S_MM
/* 3990 */    MCD::OPC_FilterValue, 252, 6, 9, 0, // Skip to: 4004
/* 3995 */    MCD::OPC_CheckPredicate, 14, 1, 1, // Skip to: 4256
/* 3999 */    MCD::OPC_Decode, 156, 6, 217, 1, // Opcode: C_NGE_S_MM
/* 4004 */    MCD::OPC_FilterValue, 188, 7, 9, 0, // Skip to: 4018
/* 4009 */    MCD::OPC_CheckPredicate, 14, 243, 0, // Skip to: 4256
/* 4013 */    MCD::OPC_Decode, 144, 6, 217, 1, // Opcode: C_LE_S_MM
/* 4018 */    MCD::OPC_FilterValue, 252, 7, 9, 0, // Skip to: 4032
/* 4023 */    MCD::OPC_CheckPredicate, 14, 229, 0, // Skip to: 4256
/* 4027 */    MCD::OPC_Decode, 174, 6, 217, 1, // Opcode: C_NGT_S_MM
/* 4032 */    MCD::OPC_FilterValue, 188, 8, 9, 0, // Skip to: 4046
/* 4037 */    MCD::OPC_CheckPredicate, 65, 215, 0, // Skip to: 4256
/* 4041 */    MCD::OPC_Decode, 134, 6, 218, 1, // Opcode: C_F_D32_MM
/* 4046 */    MCD::OPC_FilterValue, 252, 8, 9, 0, // Skip to: 4060
/* 4051 */    MCD::OPC_CheckPredicate, 65, 201, 0, // Skip to: 4256
/* 4055 */    MCD::OPC_Decode, 218, 6, 218, 1, // Opcode: C_UN_D32_MM
/* 4060 */    MCD::OPC_FilterValue, 188, 9, 9, 0, // Skip to: 4074
/* 4065 */    MCD::OPC_CheckPredicate, 65, 187, 0, // Skip to: 4256
/* 4069 */    MCD::OPC_Decode, 128, 6, 218, 1, // Opcode: C_EQ_D32_MM
/* 4074 */    MCD::OPC_FilterValue, 252, 9, 9, 0, // Skip to: 4088
/* 4079 */    MCD::OPC_CheckPredicate, 65, 173, 0, // Skip to: 4256
/* 4083 */    MCD::OPC_Decode, 200, 6, 218, 1, // Opcode: C_UEQ_D32_MM
/* 4088 */    MCD::OPC_FilterValue, 188, 10, 9, 0, // Skip to: 4102
/* 4093 */    MCD::OPC_CheckPredicate, 65, 159, 0, // Skip to: 4256
/* 4097 */    MCD::OPC_Decode, 182, 6, 218, 1, // Opcode: C_OLT_D32_MM
/* 4102 */    MCD::OPC_FilterValue, 252, 10, 9, 0, // Skip to: 4116
/* 4107 */    MCD::OPC_CheckPredicate, 65, 145, 0, // Skip to: 4256
/* 4111 */    MCD::OPC_Decode, 212, 6, 218, 1, // Opcode: C_ULT_D32_MM
/* 4116 */    MCD::OPC_FilterValue, 188, 11, 9, 0, // Skip to: 4130
/* 4121 */    MCD::OPC_CheckPredicate, 65, 131, 0, // Skip to: 4256
/* 4125 */    MCD::OPC_Decode, 176, 6, 218, 1, // Opcode: C_OLE_D32_MM
/* 4130 */    MCD::OPC_FilterValue, 252, 11, 9, 0, // Skip to: 4144
/* 4135 */    MCD::OPC_CheckPredicate, 65, 117, 0, // Skip to: 4256
/* 4139 */    MCD::OPC_Decode, 206, 6, 218, 1, // Opcode: C_ULE_D32_MM
/* 4144 */    MCD::OPC_FilterValue, 188, 12, 9, 0, // Skip to: 4158
/* 4149 */    MCD::OPC_CheckPredicate, 65, 103, 0, // Skip to: 4256
/* 4153 */    MCD::OPC_Decode, 194, 6, 218, 1, // Opcode: C_SF_D32_MM
/* 4158 */    MCD::OPC_FilterValue, 252, 12, 9, 0, // Skip to: 4172
/* 4163 */    MCD::OPC_CheckPredicate, 65, 89, 0, // Skip to: 4256
/* 4167 */    MCD::OPC_Decode, 158, 6, 218, 1, // Opcode: C_NGLE_D32_MM
/* 4172 */    MCD::OPC_FilterValue, 188, 13, 9, 0, // Skip to: 4186
/* 4177 */    MCD::OPC_CheckPredicate, 65, 75, 0, // Skip to: 4256
/* 4181 */    MCD::OPC_Decode, 188, 6, 218, 1, // Opcode: C_SEQ_D32_MM
/* 4186 */    MCD::OPC_FilterValue, 252, 13, 9, 0, // Skip to: 4200
/* 4191 */    MCD::OPC_CheckPredicate, 65, 61, 0, // Skip to: 4256
/* 4195 */    MCD::OPC_Decode, 164, 6, 218, 1, // Opcode: C_NGL_D32_MM
/* 4200 */    MCD::OPC_FilterValue, 188, 14, 9, 0, // Skip to: 4214
/* 4205 */    MCD::OPC_CheckPredicate, 65, 47, 0, // Skip to: 4256
/* 4209 */    MCD::OPC_Decode, 146, 6, 218, 1, // Opcode: C_LT_D32_MM
/* 4214 */    MCD::OPC_FilterValue, 252, 14, 9, 0, // Skip to: 4228
/* 4219 */    MCD::OPC_CheckPredicate, 65, 33, 0, // Skip to: 4256
/* 4223 */    MCD::OPC_Decode, 152, 6, 218, 1, // Opcode: C_NGE_D32_MM
/* 4228 */    MCD::OPC_FilterValue, 188, 15, 9, 0, // Skip to: 4242
/* 4233 */    MCD::OPC_CheckPredicate, 65, 19, 0, // Skip to: 4256
/* 4237 */    MCD::OPC_Decode, 140, 6, 218, 1, // Opcode: C_LE_D32_MM
/* 4242 */    MCD::OPC_FilterValue, 252, 15, 9, 0, // Skip to: 4256
/* 4247 */    MCD::OPC_CheckPredicate, 65, 5, 0, // Skip to: 4256
/* 4251 */    MCD::OPC_Decode, 170, 6, 218, 1, // Opcode: C_NGT_D32_MM
/* 4256 */    MCD::OPC_CheckPredicate, 38, 177, 41, // Skip to: 14933
/* 4260 */    MCD::OPC_Decode, 218, 3, 176, 1, // Opcode: BNEL
/* 4265 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 4284
/* 4269 */    MCD::OPC_CheckPredicate, 38, 164, 41, // Skip to: 14933
/* 4273 */    MCD::OPC_CheckField, 16, 5, 0, 158, 41, // Skip to: 14933
/* 4279 */    MCD::OPC_Decode, 172, 3, 173, 1, // Opcode: BLEZL
/* 4284 */    MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 4303
/* 4288 */    MCD::OPC_CheckPredicate, 38, 145, 41, // Skip to: 14933
/* 4292 */    MCD::OPC_CheckField, 16, 5, 0, 139, 41, // Skip to: 14933
/* 4298 */    MCD::OPC_Decode, 135, 3, 173, 1, // Opcode: BGTZL
/* 4303 */    MCD::OPC_FilterValue, 28, 236, 0, // Skip to: 4543
/* 4307 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 4310 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 4351
/* 4314 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4317 */    MCD::OPC_FilterValue, 0, 116, 41, // Skip to: 14933
/* 4321 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4324 */    MCD::OPC_FilterValue, 0, 109, 41, // Skip to: 14933
/* 4328 */    MCD::OPC_CheckPredicate, 31, 10, 0, // Skip to: 4342
/* 4332 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4342
/* 4338 */    MCD::OPC_Decode, 214, 11, 63, // Opcode: MADD
/* 4342 */    MCD::OPC_CheckPredicate, 35, 91, 41, // Skip to: 14933
/* 4346 */    MCD::OPC_Decode, 232, 11, 219, 1, // Opcode: MADD_DSP
/* 4351 */    MCD::OPC_FilterValue, 1, 37, 0, // Skip to: 4392
/* 4355 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4358 */    MCD::OPC_FilterValue, 0, 75, 41, // Skip to: 14933
/* 4362 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4365 */    MCD::OPC_FilterValue, 0, 68, 41, // Skip to: 14933
/* 4369 */    MCD::OPC_CheckPredicate, 31, 10, 0, // Skip to: 4383
/* 4373 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4383
/* 4379 */    MCD::OPC_Decode, 221, 11, 63, // Opcode: MADDU
/* 4383 */    MCD::OPC_CheckPredicate, 35, 50, 41, // Skip to: 14933
/* 4387 */    MCD::OPC_Decode, 222, 11, 219, 1, // Opcode: MADDU_DSP
/* 4392 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 4410
/* 4396 */    MCD::OPC_CheckPredicate, 31, 37, 41, // Skip to: 14933
/* 4400 */    MCD::OPC_CheckField, 6, 5, 0, 31, 41, // Skip to: 14933
/* 4406 */    MCD::OPC_Decode, 219, 13, 49, // Opcode: MUL
/* 4410 */    MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 4451
/* 4414 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4417 */    MCD::OPC_FilterValue, 0, 16, 41, // Skip to: 14933
/* 4421 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4424 */    MCD::OPC_FilterValue, 0, 9, 41, // Skip to: 14933
/* 4428 */    MCD::OPC_CheckPredicate, 31, 10, 0, // Skip to: 4442
/* 4432 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4442
/* 4438 */    MCD::OPC_Decode, 148, 13, 63, // Opcode: MSUB
/* 4442 */    MCD::OPC_CheckPredicate, 35, 247, 40, // Skip to: 14933
/* 4446 */    MCD::OPC_Decode, 166, 13, 219, 1, // Opcode: MSUB_DSP
/* 4451 */    MCD::OPC_FilterValue, 5, 37, 0, // Skip to: 4492
/* 4455 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 4458 */    MCD::OPC_FilterValue, 0, 231, 40, // Skip to: 14933
/* 4462 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 4465 */    MCD::OPC_FilterValue, 0, 224, 40, // Skip to: 14933
/* 4469 */    MCD::OPC_CheckPredicate, 31, 10, 0, // Skip to: 4483
/* 4473 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 4483
/* 4479 */    MCD::OPC_Decode, 155, 13, 63, // Opcode: MSUBU
/* 4483 */    MCD::OPC_CheckPredicate, 35, 206, 40, // Skip to: 14933
/* 4487 */    MCD::OPC_Decode, 156, 13, 219, 1, // Opcode: MSUBU_DSP
/* 4492 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 4511
/* 4496 */    MCD::OPC_CheckPredicate, 31, 193, 40, // Skip to: 14933
/* 4500 */    MCD::OPC_CheckField, 6, 5, 0, 187, 40, // Skip to: 14933
/* 4506 */    MCD::OPC_Decode, 244, 4, 220, 1, // Opcode: CLZ
/* 4511 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 4530
/* 4515 */    MCD::OPC_CheckPredicate, 31, 174, 40, // Skip to: 14933
/* 4519 */    MCD::OPC_CheckField, 6, 5, 0, 168, 40, // Skip to: 14933
/* 4525 */    MCD::OPC_Decode, 224, 4, 220, 1, // Opcode: CLO
/* 4530 */    MCD::OPC_FilterValue, 63, 159, 40, // Skip to: 14933
/* 4534 */    MCD::OPC_CheckPredicate, 66, 155, 40, // Skip to: 14933
/* 4538 */    MCD::OPC_Decode, 146, 16, 164, 1, // Opcode: SDBBP
/* 4543 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 4556
/* 4547 */    MCD::OPC_CheckPredicate, 31, 142, 40, // Skip to: 14933
/* 4551 */    MCD::OPC_Decode, 161, 10, 175, 1, // Opcode: JALX
/* 4556 */    MCD::OPC_FilterValue, 30, 108, 28, // Skip to: 11836
/* 4560 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 4563 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 4622
/* 4567 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4570 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4583
/* 4574 */    MCD::OPC_CheckPredicate, 29, 115, 40, // Skip to: 14933
/* 4578 */    MCD::OPC_Decode, 213, 1, 221, 1, // Opcode: ANDI_B
/* 4583 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4596
/* 4587 */    MCD::OPC_CheckPredicate, 29, 102, 40, // Skip to: 14933
/* 4591 */    MCD::OPC_Decode, 186, 14, 221, 1, // Opcode: ORI_B
/* 4596 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4609
/* 4600 */    MCD::OPC_CheckPredicate, 29, 89, 40, // Skip to: 14933
/* 4604 */    MCD::OPC_Decode, 169, 14, 221, 1, // Opcode: NORI_B
/* 4609 */    MCD::OPC_FilterValue, 3, 80, 40, // Skip to: 14933
/* 4613 */    MCD::OPC_CheckPredicate, 29, 76, 40, // Skip to: 14933
/* 4617 */    MCD::OPC_Decode, 220, 19, 221, 1, // Opcode: XORI_B
/* 4622 */    MCD::OPC_FilterValue, 1, 42, 0, // Skip to: 4668
/* 4626 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4629 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4642
/* 4633 */    MCD::OPC_CheckPredicate, 29, 56, 40, // Skip to: 14933
/* 4637 */    MCD::OPC_Decode, 201, 3, 222, 1, // Opcode: BMNZI_B
/* 4642 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4655
/* 4646 */    MCD::OPC_CheckPredicate, 29, 43, 40, // Skip to: 14933
/* 4650 */    MCD::OPC_Decode, 203, 3, 222, 1, // Opcode: BMZI_B
/* 4655 */    MCD::OPC_FilterValue, 2, 34, 40, // Skip to: 14933
/* 4659 */    MCD::OPC_CheckPredicate, 29, 30, 40, // Skip to: 14933
/* 4663 */    MCD::OPC_Decode, 247, 3, 222, 1, // Opcode: BSELI_B
/* 4668 */    MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 4714
/* 4672 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4675 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4688
/* 4679 */    MCD::OPC_CheckPredicate, 29, 10, 40, // Skip to: 14933
/* 4683 */    MCD::OPC_Decode, 207, 16, 221, 1, // Opcode: SHF_B
/* 4688 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4701
/* 4692 */    MCD::OPC_CheckPredicate, 29, 253, 39, // Skip to: 14933
/* 4696 */    MCD::OPC_Decode, 208, 16, 223, 1, // Opcode: SHF_H
/* 4701 */    MCD::OPC_FilterValue, 2, 244, 39, // Skip to: 14933
/* 4705 */    MCD::OPC_CheckPredicate, 29, 240, 39, // Skip to: 14933
/* 4709 */    MCD::OPC_Decode, 209, 16, 224, 1, // Opcode: SHF_W
/* 4714 */    MCD::OPC_FilterValue, 6, 59, 1, // Skip to: 5033
/* 4718 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4721 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4734
/* 4725 */    MCD::OPC_CheckPredicate, 29, 220, 39, // Skip to: 14933
/* 4729 */    MCD::OPC_Decode, 179, 1, 225, 1, // Opcode: ADDVI_B
/* 4734 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4747
/* 4738 */    MCD::OPC_CheckPredicate, 29, 207, 39, // Skip to: 14933
/* 4742 */    MCD::OPC_Decode, 181, 1, 226, 1, // Opcode: ADDVI_H
/* 4747 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4760
/* 4751 */    MCD::OPC_CheckPredicate, 29, 194, 39, // Skip to: 14933
/* 4755 */    MCD::OPC_Decode, 182, 1, 227, 1, // Opcode: ADDVI_W
/* 4760 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 4773
/* 4764 */    MCD::OPC_CheckPredicate, 29, 181, 39, // Skip to: 14933
/* 4768 */    MCD::OPC_Decode, 180, 1, 228, 1, // Opcode: ADDVI_D
/* 4773 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 4786
/* 4777 */    MCD::OPC_CheckPredicate, 29, 168, 39, // Skip to: 14933
/* 4781 */    MCD::OPC_Decode, 160, 18, 225, 1, // Opcode: SUBVI_B
/* 4786 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 4799
/* 4790 */    MCD::OPC_CheckPredicate, 29, 155, 39, // Skip to: 14933
/* 4794 */    MCD::OPC_Decode, 162, 18, 226, 1, // Opcode: SUBVI_H
/* 4799 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 4812
/* 4803 */    MCD::OPC_CheckPredicate, 29, 142, 39, // Skip to: 14933
/* 4807 */    MCD::OPC_Decode, 163, 18, 227, 1, // Opcode: SUBVI_W
/* 4812 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 4825
/* 4816 */    MCD::OPC_CheckPredicate, 29, 129, 39, // Skip to: 14933
/* 4820 */    MCD::OPC_Decode, 161, 18, 228, 1, // Opcode: SUBVI_D
/* 4825 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4838
/* 4829 */    MCD::OPC_CheckPredicate, 29, 116, 39, // Skip to: 14933
/* 4833 */    MCD::OPC_Decode, 251, 11, 225, 1, // Opcode: MAXI_S_B
/* 4838 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4851
/* 4842 */    MCD::OPC_CheckPredicate, 29, 103, 39, // Skip to: 14933
/* 4846 */    MCD::OPC_Decode, 253, 11, 226, 1, // Opcode: MAXI_S_H
/* 4851 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4864
/* 4855 */    MCD::OPC_CheckPredicate, 29, 90, 39, // Skip to: 14933
/* 4859 */    MCD::OPC_Decode, 254, 11, 227, 1, // Opcode: MAXI_S_W
/* 4864 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4877
/* 4868 */    MCD::OPC_CheckPredicate, 29, 77, 39, // Skip to: 14933
/* 4872 */    MCD::OPC_Decode, 252, 11, 228, 1, // Opcode: MAXI_S_D
/* 4877 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4890
/* 4881 */    MCD::OPC_CheckPredicate, 29, 64, 39, // Skip to: 14933
/* 4885 */    MCD::OPC_Decode, 255, 11, 225, 1, // Opcode: MAXI_U_B
/* 4890 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 4903
/* 4894 */    MCD::OPC_CheckPredicate, 29, 51, 39, // Skip to: 14933
/* 4898 */    MCD::OPC_Decode, 129, 12, 226, 1, // Opcode: MAXI_U_H
/* 4903 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4916
/* 4907 */    MCD::OPC_CheckPredicate, 29, 38, 39, // Skip to: 14933
/* 4911 */    MCD::OPC_Decode, 130, 12, 227, 1, // Opcode: MAXI_U_W
/* 4916 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 4929
/* 4920 */    MCD::OPC_CheckPredicate, 29, 25, 39, // Skip to: 14933
/* 4924 */    MCD::OPC_Decode, 128, 12, 228, 1, // Opcode: MAXI_U_D
/* 4929 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 4942
/* 4933 */    MCD::OPC_CheckPredicate, 29, 12, 39, // Skip to: 14933
/* 4937 */    MCD::OPC_Decode, 187, 12, 225, 1, // Opcode: MINI_S_B
/* 4942 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 4955
/* 4946 */    MCD::OPC_CheckPredicate, 29, 255, 38, // Skip to: 14933
/* 4950 */    MCD::OPC_Decode, 189, 12, 226, 1, // Opcode: MINI_S_H
/* 4955 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 4968
/* 4959 */    MCD::OPC_CheckPredicate, 29, 242, 38, // Skip to: 14933
/* 4963 */    MCD::OPC_Decode, 190, 12, 227, 1, // Opcode: MINI_S_W
/* 4968 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 4981
/* 4972 */    MCD::OPC_CheckPredicate, 29, 229, 38, // Skip to: 14933
/* 4976 */    MCD::OPC_Decode, 188, 12, 228, 1, // Opcode: MINI_S_D
/* 4981 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 4994
/* 4985 */    MCD::OPC_CheckPredicate, 29, 216, 38, // Skip to: 14933
/* 4989 */    MCD::OPC_Decode, 191, 12, 225, 1, // Opcode: MINI_U_B
/* 4994 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5007
/* 4998 */    MCD::OPC_CheckPredicate, 29, 203, 38, // Skip to: 14933
/* 5002 */    MCD::OPC_Decode, 193, 12, 226, 1, // Opcode: MINI_U_H
/* 5007 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5020
/* 5011 */    MCD::OPC_CheckPredicate, 29, 190, 38, // Skip to: 14933
/* 5015 */    MCD::OPC_Decode, 194, 12, 227, 1, // Opcode: MINI_U_W
/* 5020 */    MCD::OPC_FilterValue, 23, 181, 38, // Skip to: 14933
/* 5024 */    MCD::OPC_CheckPredicate, 29, 177, 38, // Skip to: 14933
/* 5028 */    MCD::OPC_Decode, 192, 12, 228, 1, // Opcode: MINI_U_D
/* 5033 */    MCD::OPC_FilterValue, 7, 59, 1, // Skip to: 5352
/* 5037 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5040 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5053
/* 5044 */    MCD::OPC_CheckPredicate, 29, 157, 38, // Skip to: 14933
/* 5048 */    MCD::OPC_Decode, 187, 4, 225, 1, // Opcode: CEQI_B
/* 5053 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5066
/* 5057 */    MCD::OPC_CheckPredicate, 29, 144, 38, // Skip to: 14933
/* 5061 */    MCD::OPC_Decode, 189, 4, 226, 1, // Opcode: CEQI_H
/* 5066 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5079
/* 5070 */    MCD::OPC_CheckPredicate, 29, 131, 38, // Skip to: 14933
/* 5074 */    MCD::OPC_Decode, 190, 4, 227, 1, // Opcode: CEQI_W
/* 5079 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 5092
/* 5083 */    MCD::OPC_CheckPredicate, 29, 118, 38, // Skip to: 14933
/* 5087 */    MCD::OPC_Decode, 188, 4, 228, 1, // Opcode: CEQI_D
/* 5092 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5105
/* 5096 */    MCD::OPC_CheckPredicate, 29, 105, 38, // Skip to: 14933
/* 5100 */    MCD::OPC_Decode, 228, 4, 225, 1, // Opcode: CLTI_S_B
/* 5105 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5118
/* 5109 */    MCD::OPC_CheckPredicate, 29, 92, 38, // Skip to: 14933
/* 5113 */    MCD::OPC_Decode, 230, 4, 226, 1, // Opcode: CLTI_S_H
/* 5118 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5131
/* 5122 */    MCD::OPC_CheckPredicate, 29, 79, 38, // Skip to: 14933
/* 5126 */    MCD::OPC_Decode, 231, 4, 227, 1, // Opcode: CLTI_S_W
/* 5131 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5144
/* 5135 */    MCD::OPC_CheckPredicate, 29, 66, 38, // Skip to: 14933
/* 5139 */    MCD::OPC_Decode, 229, 4, 228, 1, // Opcode: CLTI_S_D
/* 5144 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5157
/* 5148 */    MCD::OPC_CheckPredicate, 29, 53, 38, // Skip to: 14933
/* 5152 */    MCD::OPC_Decode, 232, 4, 225, 1, // Opcode: CLTI_U_B
/* 5157 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5170
/* 5161 */    MCD::OPC_CheckPredicate, 29, 40, 38, // Skip to: 14933
/* 5165 */    MCD::OPC_Decode, 234, 4, 226, 1, // Opcode: CLTI_U_H
/* 5170 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5183
/* 5174 */    MCD::OPC_CheckPredicate, 29, 27, 38, // Skip to: 14933
/* 5178 */    MCD::OPC_Decode, 235, 4, 227, 1, // Opcode: CLTI_U_W
/* 5183 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5196
/* 5187 */    MCD::OPC_CheckPredicate, 29, 14, 38, // Skip to: 14933
/* 5191 */    MCD::OPC_Decode, 233, 4, 228, 1, // Opcode: CLTI_U_D
/* 5196 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5209
/* 5200 */    MCD::OPC_CheckPredicate, 29, 1, 38, // Skip to: 14933
/* 5204 */    MCD::OPC_Decode, 208, 4, 225, 1, // Opcode: CLEI_S_B
/* 5209 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5222
/* 5213 */    MCD::OPC_CheckPredicate, 29, 244, 37, // Skip to: 14933
/* 5217 */    MCD::OPC_Decode, 210, 4, 226, 1, // Opcode: CLEI_S_H
/* 5222 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5235
/* 5226 */    MCD::OPC_CheckPredicate, 29, 231, 37, // Skip to: 14933
/* 5230 */    MCD::OPC_Decode, 211, 4, 227, 1, // Opcode: CLEI_S_W
/* 5235 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5248
/* 5239 */    MCD::OPC_CheckPredicate, 29, 218, 37, // Skip to: 14933
/* 5243 */    MCD::OPC_Decode, 209, 4, 228, 1, // Opcode: CLEI_S_D
/* 5248 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5261
/* 5252 */    MCD::OPC_CheckPredicate, 29, 205, 37, // Skip to: 14933
/* 5256 */    MCD::OPC_Decode, 212, 4, 225, 1, // Opcode: CLEI_U_B
/* 5261 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 5274
/* 5265 */    MCD::OPC_CheckPredicate, 29, 192, 37, // Skip to: 14933
/* 5269 */    MCD::OPC_Decode, 214, 4, 226, 1, // Opcode: CLEI_U_H
/* 5274 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 5287
/* 5278 */    MCD::OPC_CheckPredicate, 29, 179, 37, // Skip to: 14933
/* 5282 */    MCD::OPC_Decode, 215, 4, 227, 1, // Opcode: CLEI_U_W
/* 5287 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 5300
/* 5291 */    MCD::OPC_CheckPredicate, 29, 166, 37, // Skip to: 14933
/* 5295 */    MCD::OPC_Decode, 213, 4, 228, 1, // Opcode: CLEI_U_D
/* 5300 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 5313
/* 5304 */    MCD::OPC_CheckPredicate, 29, 153, 37, // Skip to: 14933
/* 5308 */    MCD::OPC_Decode, 215, 10, 229, 1, // Opcode: LDI_B
/* 5313 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 5326
/* 5317 */    MCD::OPC_CheckPredicate, 29, 140, 37, // Skip to: 14933
/* 5321 */    MCD::OPC_Decode, 217, 10, 230, 1, // Opcode: LDI_H
/* 5326 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 5339
/* 5330 */    MCD::OPC_CheckPredicate, 29, 127, 37, // Skip to: 14933
/* 5334 */    MCD::OPC_Decode, 218, 10, 231, 1, // Opcode: LDI_W
/* 5339 */    MCD::OPC_FilterValue, 27, 118, 37, // Skip to: 14933
/* 5343 */    MCD::OPC_CheckPredicate, 29, 114, 37, // Skip to: 14933
/* 5347 */    MCD::OPC_Decode, 216, 10, 232, 1, // Opcode: LDI_D
/* 5352 */    MCD::OPC_FilterValue, 9, 67, 2, // Skip to: 5935
/* 5356 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5359 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5372
/* 5363 */    MCD::OPC_CheckPredicate, 29, 94, 37, // Skip to: 14933
/* 5367 */    MCD::OPC_Decode, 146, 17, 233, 1, // Opcode: SLLI_D
/* 5372 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 5431
/* 5376 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5379 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5392
/* 5383 */    MCD::OPC_CheckPredicate, 29, 74, 37, // Skip to: 14933
/* 5387 */    MCD::OPC_Decode, 148, 17, 227, 1, // Opcode: SLLI_W
/* 5392 */    MCD::OPC_FilterValue, 1, 65, 37, // Skip to: 14933
/* 5396 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5399 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5412
/* 5403 */    MCD::OPC_CheckPredicate, 29, 54, 37, // Skip to: 14933
/* 5407 */    MCD::OPC_Decode, 147, 17, 234, 1, // Opcode: SLLI_H
/* 5412 */    MCD::OPC_FilterValue, 1, 45, 37, // Skip to: 14933
/* 5416 */    MCD::OPC_CheckPredicate, 29, 41, 37, // Skip to: 14933
/* 5420 */    MCD::OPC_CheckField, 19, 1, 0, 35, 37, // Skip to: 14933
/* 5426 */    MCD::OPC_Decode, 145, 17, 235, 1, // Opcode: SLLI_B
/* 5431 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5444
/* 5435 */    MCD::OPC_CheckPredicate, 29, 22, 37, // Skip to: 14933
/* 5439 */    MCD::OPC_Decode, 190, 17, 233, 1, // Opcode: SRAI_D
/* 5444 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 5503
/* 5448 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5451 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5464
/* 5455 */    MCD::OPC_CheckPredicate, 29, 2, 37, // Skip to: 14933
/* 5459 */    MCD::OPC_Decode, 192, 17, 227, 1, // Opcode: SRAI_W
/* 5464 */    MCD::OPC_FilterValue, 1, 249, 36, // Skip to: 14933
/* 5468 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5471 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5484
/* 5475 */    MCD::OPC_CheckPredicate, 29, 238, 36, // Skip to: 14933
/* 5479 */    MCD::OPC_Decode, 191, 17, 234, 1, // Opcode: SRAI_H
/* 5484 */    MCD::OPC_FilterValue, 1, 229, 36, // Skip to: 14933
/* 5488 */    MCD::OPC_CheckPredicate, 29, 225, 36, // Skip to: 14933
/* 5492 */    MCD::OPC_CheckField, 19, 1, 0, 219, 36, // Skip to: 14933
/* 5498 */    MCD::OPC_Decode, 189, 17, 235, 1, // Opcode: SRAI_B
/* 5503 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5516
/* 5507 */    MCD::OPC_CheckPredicate, 29, 206, 36, // Skip to: 14933
/* 5511 */    MCD::OPC_Decode, 212, 17, 233, 1, // Opcode: SRLI_D
/* 5516 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 5575
/* 5520 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5523 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5536
/* 5527 */    MCD::OPC_CheckPredicate, 29, 186, 36, // Skip to: 14933
/* 5531 */    MCD::OPC_Decode, 214, 17, 227, 1, // Opcode: SRLI_W
/* 5536 */    MCD::OPC_FilterValue, 1, 177, 36, // Skip to: 14933
/* 5540 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5543 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5556
/* 5547 */    MCD::OPC_CheckPredicate, 29, 166, 36, // Skip to: 14933
/* 5551 */    MCD::OPC_Decode, 213, 17, 234, 1, // Opcode: SRLI_H
/* 5556 */    MCD::OPC_FilterValue, 1, 157, 36, // Skip to: 14933
/* 5560 */    MCD::OPC_CheckPredicate, 29, 153, 36, // Skip to: 14933
/* 5564 */    MCD::OPC_CheckField, 19, 1, 0, 147, 36, // Skip to: 14933
/* 5570 */    MCD::OPC_Decode, 211, 17, 235, 1, // Opcode: SRLI_B
/* 5575 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5588
/* 5579 */    MCD::OPC_CheckPredicate, 29, 134, 36, // Skip to: 14933
/* 5583 */    MCD::OPC_Decode, 197, 2, 233, 1, // Opcode: BCLRI_D
/* 5588 */    MCD::OPC_FilterValue, 7, 55, 0, // Skip to: 5647
/* 5592 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5595 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5608
/* 5599 */    MCD::OPC_CheckPredicate, 29, 114, 36, // Skip to: 14933
/* 5603 */    MCD::OPC_Decode, 199, 2, 227, 1, // Opcode: BCLRI_W
/* 5608 */    MCD::OPC_FilterValue, 1, 105, 36, // Skip to: 14933
/* 5612 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5615 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5628
/* 5619 */    MCD::OPC_CheckPredicate, 29, 94, 36, // Skip to: 14933
/* 5623 */    MCD::OPC_Decode, 198, 2, 234, 1, // Opcode: BCLRI_H
/* 5628 */    MCD::OPC_FilterValue, 1, 85, 36, // Skip to: 14933
/* 5632 */    MCD::OPC_CheckPredicate, 29, 81, 36, // Skip to: 14933
/* 5636 */    MCD::OPC_CheckField, 19, 1, 0, 75, 36, // Skip to: 14933
/* 5642 */    MCD::OPC_Decode, 196, 2, 235, 1, // Opcode: BCLRI_B
/* 5647 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5660
/* 5651 */    MCD::OPC_CheckPredicate, 29, 62, 36, // Skip to: 14933
/* 5655 */    MCD::OPC_Decode, 255, 3, 233, 1, // Opcode: BSETI_D
/* 5660 */    MCD::OPC_FilterValue, 9, 55, 0, // Skip to: 5719
/* 5664 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5667 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5680
/* 5671 */    MCD::OPC_CheckPredicate, 29, 42, 36, // Skip to: 14933
/* 5675 */    MCD::OPC_Decode, 129, 4, 227, 1, // Opcode: BSETI_W
/* 5680 */    MCD::OPC_FilterValue, 1, 33, 36, // Skip to: 14933
/* 5684 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5687 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5700
/* 5691 */    MCD::OPC_CheckPredicate, 29, 22, 36, // Skip to: 14933
/* 5695 */    MCD::OPC_Decode, 128, 4, 234, 1, // Opcode: BSETI_H
/* 5700 */    MCD::OPC_FilterValue, 1, 13, 36, // Skip to: 14933
/* 5704 */    MCD::OPC_CheckPredicate, 29, 9, 36, // Skip to: 14933
/* 5708 */    MCD::OPC_CheckField, 19, 1, 0, 3, 36, // Skip to: 14933
/* 5714 */    MCD::OPC_Decode, 254, 3, 235, 1, // Opcode: BSETI_B
/* 5719 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5732
/* 5723 */    MCD::OPC_CheckPredicate, 29, 246, 35, // Skip to: 14933
/* 5727 */    MCD::OPC_Decode, 211, 3, 233, 1, // Opcode: BNEGI_D
/* 5732 */    MCD::OPC_FilterValue, 11, 55, 0, // Skip to: 5791
/* 5736 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5739 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5752
/* 5743 */    MCD::OPC_CheckPredicate, 29, 226, 35, // Skip to: 14933
/* 5747 */    MCD::OPC_Decode, 213, 3, 227, 1, // Opcode: BNEGI_W
/* 5752 */    MCD::OPC_FilterValue, 1, 217, 35, // Skip to: 14933
/* 5756 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5759 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5772
/* 5763 */    MCD::OPC_CheckPredicate, 29, 206, 35, // Skip to: 14933
/* 5767 */    MCD::OPC_Decode, 212, 3, 234, 1, // Opcode: BNEGI_H
/* 5772 */    MCD::OPC_FilterValue, 1, 197, 35, // Skip to: 14933
/* 5776 */    MCD::OPC_CheckPredicate, 29, 193, 35, // Skip to: 14933
/* 5780 */    MCD::OPC_CheckField, 19, 1, 0, 187, 35, // Skip to: 14933
/* 5786 */    MCD::OPC_Decode, 210, 3, 235, 1, // Opcode: BNEGI_B
/* 5791 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5804
/* 5795 */    MCD::OPC_CheckPredicate, 29, 174, 35, // Skip to: 14933
/* 5799 */    MCD::OPC_Decode, 138, 3, 236, 1, // Opcode: BINSLI_D
/* 5804 */    MCD::OPC_FilterValue, 13, 55, 0, // Skip to: 5863
/* 5808 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5811 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5824
/* 5815 */    MCD::OPC_CheckPredicate, 29, 154, 35, // Skip to: 14933
/* 5819 */    MCD::OPC_Decode, 140, 3, 237, 1, // Opcode: BINSLI_W
/* 5824 */    MCD::OPC_FilterValue, 1, 145, 35, // Skip to: 14933
/* 5828 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5831 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5844
/* 5835 */    MCD::OPC_CheckPredicate, 29, 134, 35, // Skip to: 14933
/* 5839 */    MCD::OPC_Decode, 139, 3, 238, 1, // Opcode: BINSLI_H
/* 5844 */    MCD::OPC_FilterValue, 1, 125, 35, // Skip to: 14933
/* 5848 */    MCD::OPC_CheckPredicate, 29, 121, 35, // Skip to: 14933
/* 5852 */    MCD::OPC_CheckField, 19, 1, 0, 115, 35, // Skip to: 14933
/* 5858 */    MCD::OPC_Decode, 137, 3, 239, 1, // Opcode: BINSLI_B
/* 5863 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5876
/* 5867 */    MCD::OPC_CheckPredicate, 29, 102, 35, // Skip to: 14933
/* 5871 */    MCD::OPC_Decode, 146, 3, 236, 1, // Opcode: BINSRI_D
/* 5876 */    MCD::OPC_FilterValue, 15, 93, 35, // Skip to: 14933
/* 5880 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5883 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5896
/* 5887 */    MCD::OPC_CheckPredicate, 29, 82, 35, // Skip to: 14933
/* 5891 */    MCD::OPC_Decode, 148, 3, 237, 1, // Opcode: BINSRI_W
/* 5896 */    MCD::OPC_FilterValue, 1, 73, 35, // Skip to: 14933
/* 5900 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5903 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5916
/* 5907 */    MCD::OPC_CheckPredicate, 29, 62, 35, // Skip to: 14933
/* 5911 */    MCD::OPC_Decode, 147, 3, 238, 1, // Opcode: BINSRI_H
/* 5916 */    MCD::OPC_FilterValue, 1, 53, 35, // Skip to: 14933
/* 5920 */    MCD::OPC_CheckPredicate, 29, 49, 35, // Skip to: 14933
/* 5924 */    MCD::OPC_CheckField, 19, 1, 0, 43, 35, // Skip to: 14933
/* 5930 */    MCD::OPC_Decode, 145, 3, 239, 1, // Opcode: BINSRI_B
/* 5935 */    MCD::OPC_FilterValue, 10, 35, 1, // Skip to: 6230
/* 5939 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5942 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5955
/* 5946 */    MCD::OPC_CheckPredicate, 29, 23, 35, // Skip to: 14933
/* 5950 */    MCD::OPC_Decode, 247, 15, 233, 1, // Opcode: SAT_S_D
/* 5955 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 6014
/* 5959 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5962 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5975
/* 5966 */    MCD::OPC_CheckPredicate, 29, 3, 35, // Skip to: 14933
/* 5970 */    MCD::OPC_Decode, 249, 15, 227, 1, // Opcode: SAT_S_W
/* 5975 */    MCD::OPC_FilterValue, 1, 250, 34, // Skip to: 14933
/* 5979 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5982 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5995
/* 5986 */    MCD::OPC_CheckPredicate, 29, 239, 34, // Skip to: 14933
/* 5990 */    MCD::OPC_Decode, 248, 15, 234, 1, // Opcode: SAT_S_H
/* 5995 */    MCD::OPC_FilterValue, 1, 230, 34, // Skip to: 14933
/* 5999 */    MCD::OPC_CheckPredicate, 29, 226, 34, // Skip to: 14933
/* 6003 */    MCD::OPC_CheckField, 19, 1, 0, 220, 34, // Skip to: 14933
/* 6009 */    MCD::OPC_Decode, 246, 15, 235, 1, // Opcode: SAT_S_B
/* 6014 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6027
/* 6018 */    MCD::OPC_CheckPredicate, 29, 207, 34, // Skip to: 14933
/* 6022 */    MCD::OPC_Decode, 251, 15, 233, 1, // Opcode: SAT_U_D
/* 6027 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 6086
/* 6031 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6034 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6047
/* 6038 */    MCD::OPC_CheckPredicate, 29, 187, 34, // Skip to: 14933
/* 6042 */    MCD::OPC_Decode, 253, 15, 227, 1, // Opcode: SAT_U_W
/* 6047 */    MCD::OPC_FilterValue, 1, 178, 34, // Skip to: 14933
/* 6051 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6054 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6067
/* 6058 */    MCD::OPC_CheckPredicate, 29, 167, 34, // Skip to: 14933
/* 6062 */    MCD::OPC_Decode, 252, 15, 234, 1, // Opcode: SAT_U_H
/* 6067 */    MCD::OPC_FilterValue, 1, 158, 34, // Skip to: 14933
/* 6071 */    MCD::OPC_CheckPredicate, 29, 154, 34, // Skip to: 14933
/* 6075 */    MCD::OPC_CheckField, 19, 1, 0, 148, 34, // Skip to: 14933
/* 6081 */    MCD::OPC_Decode, 250, 15, 235, 1, // Opcode: SAT_U_B
/* 6086 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6099
/* 6090 */    MCD::OPC_CheckPredicate, 29, 135, 34, // Skip to: 14933
/* 6094 */    MCD::OPC_Decode, 194, 17, 233, 1, // Opcode: SRARI_D
/* 6099 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 6158
/* 6103 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6106 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6119
/* 6110 */    MCD::OPC_CheckPredicate, 29, 115, 34, // Skip to: 14933
/* 6114 */    MCD::OPC_Decode, 196, 17, 227, 1, // Opcode: SRARI_W
/* 6119 */    MCD::OPC_FilterValue, 1, 106, 34, // Skip to: 14933
/* 6123 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6126 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6139
/* 6130 */    MCD::OPC_CheckPredicate, 29, 95, 34, // Skip to: 14933
/* 6134 */    MCD::OPC_Decode, 195, 17, 234, 1, // Opcode: SRARI_H
/* 6139 */    MCD::OPC_FilterValue, 1, 86, 34, // Skip to: 14933
/* 6143 */    MCD::OPC_CheckPredicate, 29, 82, 34, // Skip to: 14933
/* 6147 */    MCD::OPC_CheckField, 19, 1, 0, 76, 34, // Skip to: 14933
/* 6153 */    MCD::OPC_Decode, 193, 17, 235, 1, // Opcode: SRARI_B
/* 6158 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6171
/* 6162 */    MCD::OPC_CheckPredicate, 29, 63, 34, // Skip to: 14933
/* 6166 */    MCD::OPC_Decode, 216, 17, 233, 1, // Opcode: SRLRI_D
/* 6171 */    MCD::OPC_FilterValue, 7, 54, 34, // Skip to: 14933
/* 6175 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 6178 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6191
/* 6182 */    MCD::OPC_CheckPredicate, 29, 43, 34, // Skip to: 14933
/* 6186 */    MCD::OPC_Decode, 218, 17, 227, 1, // Opcode: SRLRI_W
/* 6191 */    MCD::OPC_FilterValue, 1, 34, 34, // Skip to: 14933
/* 6195 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 6198 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6211
/* 6202 */    MCD::OPC_CheckPredicate, 29, 23, 34, // Skip to: 14933
/* 6206 */    MCD::OPC_Decode, 217, 17, 234, 1, // Opcode: SRLRI_H
/* 6211 */    MCD::OPC_FilterValue, 1, 14, 34, // Skip to: 14933
/* 6215 */    MCD::OPC_CheckPredicate, 29, 10, 34, // Skip to: 14933
/* 6219 */    MCD::OPC_CheckField, 19, 1, 0, 4, 34, // Skip to: 14933
/* 6225 */    MCD::OPC_Decode, 215, 17, 235, 1, // Opcode: SRLRI_B
/* 6230 */    MCD::OPC_FilterValue, 13, 163, 1, // Skip to: 6653
/* 6234 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6237 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6250
/* 6241 */    MCD::OPC_CheckPredicate, 29, 240, 33, // Skip to: 14933
/* 6245 */    MCD::OPC_Decode, 151, 17, 240, 1, // Opcode: SLL_B
/* 6250 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6263
/* 6254 */    MCD::OPC_CheckPredicate, 29, 227, 33, // Skip to: 14933
/* 6258 */    MCD::OPC_Decode, 153, 17, 241, 1, // Opcode: SLL_H
/* 6263 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6276
/* 6267 */    MCD::OPC_CheckPredicate, 29, 214, 33, // Skip to: 14933
/* 6271 */    MCD::OPC_Decode, 156, 17, 242, 1, // Opcode: SLL_W
/* 6276 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6289
/* 6280 */    MCD::OPC_CheckPredicate, 29, 201, 33, // Skip to: 14933
/* 6284 */    MCD::OPC_Decode, 152, 17, 243, 1, // Opcode: SLL_D
/* 6289 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6302
/* 6293 */    MCD::OPC_CheckPredicate, 29, 188, 33, // Skip to: 14933
/* 6297 */    MCD::OPC_Decode, 203, 17, 240, 1, // Opcode: SRA_B
/* 6302 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6315
/* 6306 */    MCD::OPC_CheckPredicate, 29, 175, 33, // Skip to: 14933
/* 6310 */    MCD::OPC_Decode, 205, 17, 241, 1, // Opcode: SRA_H
/* 6315 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6328
/* 6319 */    MCD::OPC_CheckPredicate, 29, 162, 33, // Skip to: 14933
/* 6323 */    MCD::OPC_Decode, 207, 17, 242, 1, // Opcode: SRA_W
/* 6328 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6341
/* 6332 */    MCD::OPC_CheckPredicate, 29, 149, 33, // Skip to: 14933
/* 6336 */    MCD::OPC_Decode, 204, 17, 243, 1, // Opcode: SRA_D
/* 6341 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6354
/* 6345 */    MCD::OPC_CheckPredicate, 29, 136, 33, // Skip to: 14933
/* 6349 */    MCD::OPC_Decode, 225, 17, 240, 1, // Opcode: SRL_B
/* 6354 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6367
/* 6358 */    MCD::OPC_CheckPredicate, 29, 123, 33, // Skip to: 14933
/* 6362 */    MCD::OPC_Decode, 227, 17, 241, 1, // Opcode: SRL_H
/* 6367 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6380
/* 6371 */    MCD::OPC_CheckPredicate, 29, 110, 33, // Skip to: 14933
/* 6375 */    MCD::OPC_Decode, 229, 17, 242, 1, // Opcode: SRL_W
/* 6380 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6393
/* 6384 */    MCD::OPC_CheckPredicate, 29, 97, 33, // Skip to: 14933
/* 6388 */    MCD::OPC_Decode, 226, 17, 243, 1, // Opcode: SRL_D
/* 6393 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6406
/* 6397 */    MCD::OPC_CheckPredicate, 29, 84, 33, // Skip to: 14933
/* 6401 */    MCD::OPC_Decode, 200, 2, 240, 1, // Opcode: BCLR_B
/* 6406 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6419
/* 6410 */    MCD::OPC_CheckPredicate, 29, 71, 33, // Skip to: 14933
/* 6414 */    MCD::OPC_Decode, 202, 2, 241, 1, // Opcode: BCLR_H
/* 6419 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6432
/* 6423 */    MCD::OPC_CheckPredicate, 29, 58, 33, // Skip to: 14933
/* 6427 */    MCD::OPC_Decode, 203, 2, 242, 1, // Opcode: BCLR_W
/* 6432 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6445
/* 6436 */    MCD::OPC_CheckPredicate, 29, 45, 33, // Skip to: 14933
/* 6440 */    MCD::OPC_Decode, 201, 2, 243, 1, // Opcode: BCLR_D
/* 6445 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6458
/* 6449 */    MCD::OPC_CheckPredicate, 29, 32, 33, // Skip to: 14933
/* 6453 */    MCD::OPC_Decode, 130, 4, 240, 1, // Opcode: BSET_B
/* 6458 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6471
/* 6462 */    MCD::OPC_CheckPredicate, 29, 19, 33, // Skip to: 14933
/* 6466 */    MCD::OPC_Decode, 132, 4, 241, 1, // Opcode: BSET_H
/* 6471 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6484
/* 6475 */    MCD::OPC_CheckPredicate, 29, 6, 33, // Skip to: 14933
/* 6479 */    MCD::OPC_Decode, 133, 4, 242, 1, // Opcode: BSET_W
/* 6484 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6497
/* 6488 */    MCD::OPC_CheckPredicate, 29, 249, 32, // Skip to: 14933
/* 6492 */    MCD::OPC_Decode, 131, 4, 243, 1, // Opcode: BSET_D
/* 6497 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6510
/* 6501 */    MCD::OPC_CheckPredicate, 29, 236, 32, // Skip to: 14933
/* 6505 */    MCD::OPC_Decode, 214, 3, 240, 1, // Opcode: BNEG_B
/* 6510 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6523
/* 6514 */    MCD::OPC_CheckPredicate, 29, 223, 32, // Skip to: 14933
/* 6518 */    MCD::OPC_Decode, 216, 3, 241, 1, // Opcode: BNEG_H
/* 6523 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6536
/* 6527 */    MCD::OPC_CheckPredicate, 29, 210, 32, // Skip to: 14933
/* 6531 */    MCD::OPC_Decode, 217, 3, 242, 1, // Opcode: BNEG_W
/* 6536 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6549
/* 6540 */    MCD::OPC_CheckPredicate, 29, 197, 32, // Skip to: 14933
/* 6544 */    MCD::OPC_Decode, 215, 3, 243, 1, // Opcode: BNEG_D
/* 6549 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6562
/* 6553 */    MCD::OPC_CheckPredicate, 29, 184, 32, // Skip to: 14933
/* 6557 */    MCD::OPC_Decode, 141, 3, 244, 1, // Opcode: BINSL_B
/* 6562 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6575
/* 6566 */    MCD::OPC_CheckPredicate, 29, 171, 32, // Skip to: 14933
/* 6570 */    MCD::OPC_Decode, 143, 3, 245, 1, // Opcode: BINSL_H
/* 6575 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6588
/* 6579 */    MCD::OPC_CheckPredicate, 29, 158, 32, // Skip to: 14933
/* 6583 */    MCD::OPC_Decode, 144, 3, 246, 1, // Opcode: BINSL_W
/* 6588 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6601
/* 6592 */    MCD::OPC_CheckPredicate, 29, 145, 32, // Skip to: 14933
/* 6596 */    MCD::OPC_Decode, 142, 3, 247, 1, // Opcode: BINSL_D
/* 6601 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6614
/* 6605 */    MCD::OPC_CheckPredicate, 29, 132, 32, // Skip to: 14933
/* 6609 */    MCD::OPC_Decode, 149, 3, 244, 1, // Opcode: BINSR_B
/* 6614 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6627
/* 6618 */    MCD::OPC_CheckPredicate, 29, 119, 32, // Skip to: 14933
/* 6622 */    MCD::OPC_Decode, 151, 3, 245, 1, // Opcode: BINSR_H
/* 6627 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6640
/* 6631 */    MCD::OPC_CheckPredicate, 29, 106, 32, // Skip to: 14933
/* 6635 */    MCD::OPC_Decode, 152, 3, 246, 1, // Opcode: BINSR_W
/* 6640 */    MCD::OPC_FilterValue, 31, 97, 32, // Skip to: 14933
/* 6644 */    MCD::OPC_CheckPredicate, 29, 93, 32, // Skip to: 14933
/* 6648 */    MCD::OPC_Decode, 150, 3, 247, 1, // Opcode: BINSR_D
/* 6653 */    MCD::OPC_FilterValue, 14, 163, 1, // Skip to: 7076
/* 6657 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6660 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6673
/* 6664 */    MCD::OPC_CheckPredicate, 29, 73, 32, // Skip to: 14933
/* 6668 */    MCD::OPC_Decode, 183, 1, 240, 1, // Opcode: ADDV_B
/* 6673 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6686
/* 6677 */    MCD::OPC_CheckPredicate, 29, 60, 32, // Skip to: 14933
/* 6681 */    MCD::OPC_Decode, 185, 1, 241, 1, // Opcode: ADDV_H
/* 6686 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6699
/* 6690 */    MCD::OPC_CheckPredicate, 29, 47, 32, // Skip to: 14933
/* 6694 */    MCD::OPC_Decode, 186, 1, 242, 1, // Opcode: ADDV_W
/* 6699 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6712
/* 6703 */    MCD::OPC_CheckPredicate, 29, 34, 32, // Skip to: 14933
/* 6707 */    MCD::OPC_Decode, 184, 1, 243, 1, // Opcode: ADDV_D
/* 6712 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6725
/* 6716 */    MCD::OPC_CheckPredicate, 29, 21, 32, // Skip to: 14933
/* 6720 */    MCD::OPC_Decode, 164, 18, 240, 1, // Opcode: SUBV_B
/* 6725 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6738
/* 6729 */    MCD::OPC_CheckPredicate, 29, 8, 32, // Skip to: 14933
/* 6733 */    MCD::OPC_Decode, 166, 18, 241, 1, // Opcode: SUBV_H
/* 6738 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6751
/* 6742 */    MCD::OPC_CheckPredicate, 29, 251, 31, // Skip to: 14933
/* 6746 */    MCD::OPC_Decode, 167, 18, 242, 1, // Opcode: SUBV_W
/* 6751 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6764
/* 6755 */    MCD::OPC_CheckPredicate, 29, 238, 31, // Skip to: 14933
/* 6759 */    MCD::OPC_Decode, 165, 18, 243, 1, // Opcode: SUBV_D
/* 6764 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6777
/* 6768 */    MCD::OPC_CheckPredicate, 29, 225, 31, // Skip to: 14933
/* 6772 */    MCD::OPC_Decode, 138, 12, 240, 1, // Opcode: MAX_S_B
/* 6777 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6790
/* 6781 */    MCD::OPC_CheckPredicate, 29, 212, 31, // Skip to: 14933
/* 6785 */    MCD::OPC_Decode, 140, 12, 241, 1, // Opcode: MAX_S_H
/* 6790 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6803
/* 6794 */    MCD::OPC_CheckPredicate, 29, 199, 31, // Skip to: 14933
/* 6798 */    MCD::OPC_Decode, 142, 12, 242, 1, // Opcode: MAX_S_W
/* 6803 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6816
/* 6807 */    MCD::OPC_CheckPredicate, 29, 186, 31, // Skip to: 14933
/* 6811 */    MCD::OPC_Decode, 139, 12, 243, 1, // Opcode: MAX_S_D
/* 6816 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6829
/* 6820 */    MCD::OPC_CheckPredicate, 29, 173, 31, // Skip to: 14933
/* 6824 */    MCD::OPC_Decode, 143, 12, 240, 1, // Opcode: MAX_U_B
/* 6829 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6842
/* 6833 */    MCD::OPC_CheckPredicate, 29, 160, 31, // Skip to: 14933
/* 6837 */    MCD::OPC_Decode, 145, 12, 241, 1, // Opcode: MAX_U_H
/* 6842 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6855
/* 6846 */    MCD::OPC_CheckPredicate, 29, 147, 31, // Skip to: 14933
/* 6850 */    MCD::OPC_Decode, 146, 12, 242, 1, // Opcode: MAX_U_W
/* 6855 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6868
/* 6859 */    MCD::OPC_CheckPredicate, 29, 134, 31, // Skip to: 14933
/* 6863 */    MCD::OPC_Decode, 144, 12, 243, 1, // Opcode: MAX_U_D
/* 6868 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6881
/* 6872 */    MCD::OPC_CheckPredicate, 29, 121, 31, // Skip to: 14933
/* 6876 */    MCD::OPC_Decode, 202, 12, 240, 1, // Opcode: MIN_S_B
/* 6881 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6894
/* 6885 */    MCD::OPC_CheckPredicate, 29, 108, 31, // Skip to: 14933
/* 6889 */    MCD::OPC_Decode, 204, 12, 241, 1, // Opcode: MIN_S_H
/* 6894 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6907
/* 6898 */    MCD::OPC_CheckPredicate, 29, 95, 31, // Skip to: 14933
/* 6902 */    MCD::OPC_Decode, 206, 12, 242, 1, // Opcode: MIN_S_W
/* 6907 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6920
/* 6911 */    MCD::OPC_CheckPredicate, 29, 82, 31, // Skip to: 14933
/* 6915 */    MCD::OPC_Decode, 203, 12, 243, 1, // Opcode: MIN_S_D
/* 6920 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6933
/* 6924 */    MCD::OPC_CheckPredicate, 29, 69, 31, // Skip to: 14933
/* 6928 */    MCD::OPC_Decode, 207, 12, 240, 1, // Opcode: MIN_U_B
/* 6933 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6946
/* 6937 */    MCD::OPC_CheckPredicate, 29, 56, 31, // Skip to: 14933
/* 6941 */    MCD::OPC_Decode, 209, 12, 241, 1, // Opcode: MIN_U_H
/* 6946 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6959
/* 6950 */    MCD::OPC_CheckPredicate, 29, 43, 31, // Skip to: 14933
/* 6954 */    MCD::OPC_Decode, 210, 12, 242, 1, // Opcode: MIN_U_W
/* 6959 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6972
/* 6963 */    MCD::OPC_CheckPredicate, 29, 30, 31, // Skip to: 14933
/* 6967 */    MCD::OPC_Decode, 208, 12, 243, 1, // Opcode: MIN_U_D
/* 6972 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6985
/* 6976 */    MCD::OPC_CheckPredicate, 29, 17, 31, // Skip to: 14933
/* 6980 */    MCD::OPC_Decode, 131, 12, 240, 1, // Opcode: MAX_A_B
/* 6985 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6998
/* 6989 */    MCD::OPC_CheckPredicate, 29, 4, 31, // Skip to: 14933
/* 6993 */    MCD::OPC_Decode, 133, 12, 241, 1, // Opcode: MAX_A_H
/* 6998 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7011
/* 7002 */    MCD::OPC_CheckPredicate, 29, 247, 30, // Skip to: 14933
/* 7006 */    MCD::OPC_Decode, 134, 12, 242, 1, // Opcode: MAX_A_W
/* 7011 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7024
/* 7015 */    MCD::OPC_CheckPredicate, 29, 234, 30, // Skip to: 14933
/* 7019 */    MCD::OPC_Decode, 132, 12, 243, 1, // Opcode: MAX_A_D
/* 7024 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7037
/* 7028 */    MCD::OPC_CheckPredicate, 29, 221, 30, // Skip to: 14933
/* 7032 */    MCD::OPC_Decode, 195, 12, 240, 1, // Opcode: MIN_A_B
/* 7037 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7050
/* 7041 */    MCD::OPC_CheckPredicate, 29, 208, 30, // Skip to: 14933
/* 7045 */    MCD::OPC_Decode, 197, 12, 241, 1, // Opcode: MIN_A_H
/* 7050 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7063
/* 7054 */    MCD::OPC_CheckPredicate, 29, 195, 30, // Skip to: 14933
/* 7058 */    MCD::OPC_Decode, 198, 12, 242, 1, // Opcode: MIN_A_W
/* 7063 */    MCD::OPC_FilterValue, 31, 186, 30, // Skip to: 14933
/* 7067 */    MCD::OPC_CheckPredicate, 29, 182, 30, // Skip to: 14933
/* 7071 */    MCD::OPC_Decode, 196, 12, 243, 1, // Opcode: MIN_A_D
/* 7076 */    MCD::OPC_FilterValue, 15, 7, 1, // Skip to: 7343
/* 7080 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7083 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7096
/* 7087 */    MCD::OPC_CheckPredicate, 29, 162, 30, // Skip to: 14933
/* 7091 */    MCD::OPC_Decode, 191, 4, 240, 1, // Opcode: CEQ_B
/* 7096 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7109
/* 7100 */    MCD::OPC_CheckPredicate, 29, 149, 30, // Skip to: 14933
/* 7104 */    MCD::OPC_Decode, 193, 4, 241, 1, // Opcode: CEQ_H
/* 7109 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7122
/* 7113 */    MCD::OPC_CheckPredicate, 29, 136, 30, // Skip to: 14933
/* 7117 */    MCD::OPC_Decode, 194, 4, 242, 1, // Opcode: CEQ_W
/* 7122 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7135
/* 7126 */    MCD::OPC_CheckPredicate, 29, 123, 30, // Skip to: 14933
/* 7130 */    MCD::OPC_Decode, 192, 4, 243, 1, // Opcode: CEQ_D
/* 7135 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7148
/* 7139 */    MCD::OPC_CheckPredicate, 29, 110, 30, // Skip to: 14933
/* 7143 */    MCD::OPC_Decode, 236, 4, 240, 1, // Opcode: CLT_S_B
/* 7148 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7161
/* 7152 */    MCD::OPC_CheckPredicate, 29, 97, 30, // Skip to: 14933
/* 7156 */    MCD::OPC_Decode, 238, 4, 241, 1, // Opcode: CLT_S_H
/* 7161 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7174
/* 7165 */    MCD::OPC_CheckPredicate, 29, 84, 30, // Skip to: 14933
/* 7169 */    MCD::OPC_Decode, 239, 4, 242, 1, // Opcode: CLT_S_W
/* 7174 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7187
/* 7178 */    MCD::OPC_CheckPredicate, 29, 71, 30, // Skip to: 14933
/* 7182 */    MCD::OPC_Decode, 237, 4, 243, 1, // Opcode: CLT_S_D
/* 7187 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7200
/* 7191 */    MCD::OPC_CheckPredicate, 29, 58, 30, // Skip to: 14933
/* 7195 */    MCD::OPC_Decode, 240, 4, 240, 1, // Opcode: CLT_U_B
/* 7200 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7213
/* 7204 */    MCD::OPC_CheckPredicate, 29, 45, 30, // Skip to: 14933
/* 7208 */    MCD::OPC_Decode, 242, 4, 241, 1, // Opcode: CLT_U_H
/* 7213 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7226
/* 7217 */    MCD::OPC_CheckPredicate, 29, 32, 30, // Skip to: 14933
/* 7221 */    MCD::OPC_Decode, 243, 4, 242, 1, // Opcode: CLT_U_W
/* 7226 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7239
/* 7230 */    MCD::OPC_CheckPredicate, 29, 19, 30, // Skip to: 14933
/* 7234 */    MCD::OPC_Decode, 241, 4, 243, 1, // Opcode: CLT_U_D
/* 7239 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7252
/* 7243 */    MCD::OPC_CheckPredicate, 29, 6, 30, // Skip to: 14933
/* 7247 */    MCD::OPC_Decode, 216, 4, 240, 1, // Opcode: CLE_S_B
/* 7252 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7265
/* 7256 */    MCD::OPC_CheckPredicate, 29, 249, 29, // Skip to: 14933
/* 7260 */    MCD::OPC_Decode, 218, 4, 241, 1, // Opcode: CLE_S_H
/* 7265 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7278
/* 7269 */    MCD::OPC_CheckPredicate, 29, 236, 29, // Skip to: 14933
/* 7273 */    MCD::OPC_Decode, 219, 4, 242, 1, // Opcode: CLE_S_W
/* 7278 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7291
/* 7282 */    MCD::OPC_CheckPredicate, 29, 223, 29, // Skip to: 14933
/* 7286 */    MCD::OPC_Decode, 217, 4, 243, 1, // Opcode: CLE_S_D
/* 7291 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7304
/* 7295 */    MCD::OPC_CheckPredicate, 29, 210, 29, // Skip to: 14933
/* 7299 */    MCD::OPC_Decode, 220, 4, 240, 1, // Opcode: CLE_U_B
/* 7304 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7317
/* 7308 */    MCD::OPC_CheckPredicate, 29, 197, 29, // Skip to: 14933
/* 7312 */    MCD::OPC_Decode, 222, 4, 241, 1, // Opcode: CLE_U_H
/* 7317 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7330
/* 7321 */    MCD::OPC_CheckPredicate, 29, 184, 29, // Skip to: 14933
/* 7325 */    MCD::OPC_Decode, 223, 4, 242, 1, // Opcode: CLE_U_W
/* 7330 */    MCD::OPC_FilterValue, 23, 175, 29, // Skip to: 14933
/* 7334 */    MCD::OPC_CheckPredicate, 29, 171, 29, // Skip to: 14933
/* 7338 */    MCD::OPC_Decode, 221, 4, 243, 1, // Opcode: CLE_U_D
/* 7343 */    MCD::OPC_FilterValue, 16, 163, 1, // Skip to: 7766
/* 7347 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7350 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7363
/* 7354 */    MCD::OPC_CheckPredicate, 29, 151, 29, // Skip to: 14933
/* 7358 */    MCD::OPC_Decode, 189, 1, 240, 1, // Opcode: ADD_A_B
/* 7363 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7376
/* 7367 */    MCD::OPC_CheckPredicate, 29, 138, 29, // Skip to: 14933
/* 7371 */    MCD::OPC_Decode, 191, 1, 241, 1, // Opcode: ADD_A_H
/* 7376 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7389
/* 7380 */    MCD::OPC_CheckPredicate, 29, 125, 29, // Skip to: 14933
/* 7384 */    MCD::OPC_Decode, 192, 1, 242, 1, // Opcode: ADD_A_W
/* 7389 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7402
/* 7393 */    MCD::OPC_CheckPredicate, 29, 112, 29, // Skip to: 14933
/* 7397 */    MCD::OPC_Decode, 190, 1, 243, 1, // Opcode: ADD_A_D
/* 7402 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7415
/* 7406 */    MCD::OPC_CheckPredicate, 29, 99, 29, // Skip to: 14933
/* 7410 */    MCD::OPC_Decode, 152, 1, 240, 1, // Opcode: ADDS_A_B
/* 7415 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7428
/* 7419 */    MCD::OPC_CheckPredicate, 29, 86, 29, // Skip to: 14933
/* 7423 */    MCD::OPC_Decode, 154, 1, 241, 1, // Opcode: ADDS_A_H
/* 7428 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7441
/* 7432 */    MCD::OPC_CheckPredicate, 29, 73, 29, // Skip to: 14933
/* 7436 */    MCD::OPC_Decode, 155, 1, 242, 1, // Opcode: ADDS_A_W
/* 7441 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7454
/* 7445 */    MCD::OPC_CheckPredicate, 29, 60, 29, // Skip to: 14933
/* 7449 */    MCD::OPC_Decode, 153, 1, 243, 1, // Opcode: ADDS_A_D
/* 7454 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7467
/* 7458 */    MCD::OPC_CheckPredicate, 29, 47, 29, // Skip to: 14933
/* 7462 */    MCD::OPC_Decode, 156, 1, 240, 1, // Opcode: ADDS_S_B
/* 7467 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7480
/* 7471 */    MCD::OPC_CheckPredicate, 29, 34, 29, // Skip to: 14933
/* 7475 */    MCD::OPC_Decode, 158, 1, 241, 1, // Opcode: ADDS_S_H
/* 7480 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7493
/* 7484 */    MCD::OPC_CheckPredicate, 29, 21, 29, // Skip to: 14933
/* 7488 */    MCD::OPC_Decode, 159, 1, 242, 1, // Opcode: ADDS_S_W
/* 7493 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7506
/* 7497 */    MCD::OPC_CheckPredicate, 29, 8, 29, // Skip to: 14933
/* 7501 */    MCD::OPC_Decode, 157, 1, 243, 1, // Opcode: ADDS_S_D
/* 7506 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7519
/* 7510 */    MCD::OPC_CheckPredicate, 29, 251, 28, // Skip to: 14933
/* 7514 */    MCD::OPC_Decode, 160, 1, 240, 1, // Opcode: ADDS_U_B
/* 7519 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7532
/* 7523 */    MCD::OPC_CheckPredicate, 29, 238, 28, // Skip to: 14933
/* 7527 */    MCD::OPC_Decode, 162, 1, 241, 1, // Opcode: ADDS_U_H
/* 7532 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7545
/* 7536 */    MCD::OPC_CheckPredicate, 29, 225, 28, // Skip to: 14933
/* 7540 */    MCD::OPC_Decode, 163, 1, 242, 1, // Opcode: ADDS_U_W
/* 7545 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7558
/* 7549 */    MCD::OPC_CheckPredicate, 29, 212, 28, // Skip to: 14933
/* 7553 */    MCD::OPC_Decode, 161, 1, 243, 1, // Opcode: ADDS_U_D
/* 7558 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7571
/* 7562 */    MCD::OPC_CheckPredicate, 29, 199, 28, // Skip to: 14933
/* 7566 */    MCD::OPC_Decode, 150, 2, 240, 1, // Opcode: AVE_S_B
/* 7571 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7584
/* 7575 */    MCD::OPC_CheckPredicate, 29, 186, 28, // Skip to: 14933
/* 7579 */    MCD::OPC_Decode, 152, 2, 241, 1, // Opcode: AVE_S_H
/* 7584 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7597
/* 7588 */    MCD::OPC_CheckPredicate, 29, 173, 28, // Skip to: 14933
/* 7592 */    MCD::OPC_Decode, 153, 2, 242, 1, // Opcode: AVE_S_W
/* 7597 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7610
/* 7601 */    MCD::OPC_CheckPredicate, 29, 160, 28, // Skip to: 14933
/* 7605 */    MCD::OPC_Decode, 151, 2, 243, 1, // Opcode: AVE_S_D
/* 7610 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7623
/* 7614 */    MCD::OPC_CheckPredicate, 29, 147, 28, // Skip to: 14933
/* 7618 */    MCD::OPC_Decode, 154, 2, 240, 1, // Opcode: AVE_U_B
/* 7623 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7636
/* 7627 */    MCD::OPC_CheckPredicate, 29, 134, 28, // Skip to: 14933
/* 7631 */    MCD::OPC_Decode, 156, 2, 241, 1, // Opcode: AVE_U_H
/* 7636 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7649
/* 7640 */    MCD::OPC_CheckPredicate, 29, 121, 28, // Skip to: 14933
/* 7644 */    MCD::OPC_Decode, 157, 2, 242, 1, // Opcode: AVE_U_W
/* 7649 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7662
/* 7653 */    MCD::OPC_CheckPredicate, 29, 108, 28, // Skip to: 14933
/* 7657 */    MCD::OPC_Decode, 155, 2, 243, 1, // Opcode: AVE_U_D
/* 7662 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7675
/* 7666 */    MCD::OPC_CheckPredicate, 29, 95, 28, // Skip to: 14933
/* 7670 */    MCD::OPC_Decode, 142, 2, 240, 1, // Opcode: AVER_S_B
/* 7675 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7688
/* 7679 */    MCD::OPC_CheckPredicate, 29, 82, 28, // Skip to: 14933
/* 7683 */    MCD::OPC_Decode, 144, 2, 241, 1, // Opcode: AVER_S_H
/* 7688 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7701
/* 7692 */    MCD::OPC_CheckPredicate, 29, 69, 28, // Skip to: 14933
/* 7696 */    MCD::OPC_Decode, 145, 2, 242, 1, // Opcode: AVER_S_W
/* 7701 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7714
/* 7705 */    MCD::OPC_CheckPredicate, 29, 56, 28, // Skip to: 14933
/* 7709 */    MCD::OPC_Decode, 143, 2, 243, 1, // Opcode: AVER_S_D
/* 7714 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7727
/* 7718 */    MCD::OPC_CheckPredicate, 29, 43, 28, // Skip to: 14933
/* 7722 */    MCD::OPC_Decode, 146, 2, 240, 1, // Opcode: AVER_U_B
/* 7727 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7740
/* 7731 */    MCD::OPC_CheckPredicate, 29, 30, 28, // Skip to: 14933
/* 7735 */    MCD::OPC_Decode, 148, 2, 241, 1, // Opcode: AVER_U_H
/* 7740 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7753
/* 7744 */    MCD::OPC_CheckPredicate, 29, 17, 28, // Skip to: 14933
/* 7748 */    MCD::OPC_Decode, 149, 2, 242, 1, // Opcode: AVER_U_W
/* 7753 */    MCD::OPC_FilterValue, 31, 8, 28, // Skip to: 14933
/* 7757 */    MCD::OPC_CheckPredicate, 29, 4, 28, // Skip to: 14933
/* 7761 */    MCD::OPC_Decode, 147, 2, 243, 1, // Opcode: AVER_U_D
/* 7766 */    MCD::OPC_FilterValue, 17, 59, 1, // Skip to: 8085
/* 7770 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7773 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7786
/* 7777 */    MCD::OPC_CheckPredicate, 29, 240, 27, // Skip to: 14933
/* 7781 */    MCD::OPC_Decode, 137, 18, 240, 1, // Opcode: SUBS_S_B
/* 7786 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7799
/* 7790 */    MCD::OPC_CheckPredicate, 29, 227, 27, // Skip to: 14933
/* 7794 */    MCD::OPC_Decode, 139, 18, 241, 1, // Opcode: SUBS_S_H
/* 7799 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7812
/* 7803 */    MCD::OPC_CheckPredicate, 29, 214, 27, // Skip to: 14933
/* 7807 */    MCD::OPC_Decode, 140, 18, 242, 1, // Opcode: SUBS_S_W
/* 7812 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7825
/* 7816 */    MCD::OPC_CheckPredicate, 29, 201, 27, // Skip to: 14933
/* 7820 */    MCD::OPC_Decode, 138, 18, 243, 1, // Opcode: SUBS_S_D
/* 7825 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7838
/* 7829 */    MCD::OPC_CheckPredicate, 29, 188, 27, // Skip to: 14933
/* 7833 */    MCD::OPC_Decode, 141, 18, 240, 1, // Opcode: SUBS_U_B
/* 7838 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7851
/* 7842 */    MCD::OPC_CheckPredicate, 29, 175, 27, // Skip to: 14933
/* 7846 */    MCD::OPC_Decode, 143, 18, 241, 1, // Opcode: SUBS_U_H
/* 7851 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7864
/* 7855 */    MCD::OPC_CheckPredicate, 29, 162, 27, // Skip to: 14933
/* 7859 */    MCD::OPC_Decode, 144, 18, 242, 1, // Opcode: SUBS_U_W
/* 7864 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7877
/* 7868 */    MCD::OPC_CheckPredicate, 29, 149, 27, // Skip to: 14933
/* 7872 */    MCD::OPC_Decode, 142, 18, 243, 1, // Opcode: SUBS_U_D
/* 7877 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7890
/* 7881 */    MCD::OPC_CheckPredicate, 29, 136, 27, // Skip to: 14933
/* 7885 */    MCD::OPC_Decode, 129, 18, 240, 1, // Opcode: SUBSUS_U_B
/* 7890 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7903
/* 7894 */    MCD::OPC_CheckPredicate, 29, 123, 27, // Skip to: 14933
/* 7898 */    MCD::OPC_Decode, 131, 18, 241, 1, // Opcode: SUBSUS_U_H
/* 7903 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7916
/* 7907 */    MCD::OPC_CheckPredicate, 29, 110, 27, // Skip to: 14933
/* 7911 */    MCD::OPC_Decode, 132, 18, 242, 1, // Opcode: SUBSUS_U_W
/* 7916 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7929
/* 7920 */    MCD::OPC_CheckPredicate, 29, 97, 27, // Skip to: 14933
/* 7924 */    MCD::OPC_Decode, 130, 18, 243, 1, // Opcode: SUBSUS_U_D
/* 7929 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7942
/* 7933 */    MCD::OPC_CheckPredicate, 29, 84, 27, // Skip to: 14933
/* 7937 */    MCD::OPC_Decode, 133, 18, 240, 1, // Opcode: SUBSUU_S_B
/* 7942 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7955
/* 7946 */    MCD::OPC_CheckPredicate, 29, 71, 27, // Skip to: 14933
/* 7950 */    MCD::OPC_Decode, 135, 18, 241, 1, // Opcode: SUBSUU_S_H
/* 7955 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7968
/* 7959 */    MCD::OPC_CheckPredicate, 29, 58, 27, // Skip to: 14933
/* 7963 */    MCD::OPC_Decode, 136, 18, 242, 1, // Opcode: SUBSUU_S_W
/* 7968 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7981
/* 7972 */    MCD::OPC_CheckPredicate, 29, 45, 27, // Skip to: 14933
/* 7976 */    MCD::OPC_Decode, 134, 18, 243, 1, // Opcode: SUBSUU_S_D
/* 7981 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7994
/* 7985 */    MCD::OPC_CheckPredicate, 29, 32, 27, // Skip to: 14933
/* 7989 */    MCD::OPC_Decode, 226, 1, 240, 1, // Opcode: ASUB_S_B
/* 7994 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8007
/* 7998 */    MCD::OPC_CheckPredicate, 29, 19, 27, // Skip to: 14933
/* 8002 */    MCD::OPC_Decode, 228, 1, 241, 1, // Opcode: ASUB_S_H
/* 8007 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8020
/* 8011 */    MCD::OPC_CheckPredicate, 29, 6, 27, // Skip to: 14933
/* 8015 */    MCD::OPC_Decode, 229, 1, 242, 1, // Opcode: ASUB_S_W
/* 8020 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8033
/* 8024 */    MCD::OPC_CheckPredicate, 29, 249, 26, // Skip to: 14933
/* 8028 */    MCD::OPC_Decode, 227, 1, 243, 1, // Opcode: ASUB_S_D
/* 8033 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8046
/* 8037 */    MCD::OPC_CheckPredicate, 29, 236, 26, // Skip to: 14933
/* 8041 */    MCD::OPC_Decode, 230, 1, 240, 1, // Opcode: ASUB_U_B
/* 8046 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8059
/* 8050 */    MCD::OPC_CheckPredicate, 29, 223, 26, // Skip to: 14933
/* 8054 */    MCD::OPC_Decode, 232, 1, 241, 1, // Opcode: ASUB_U_H
/* 8059 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8072
/* 8063 */    MCD::OPC_CheckPredicate, 29, 210, 26, // Skip to: 14933
/* 8067 */    MCD::OPC_Decode, 233, 1, 242, 1, // Opcode: ASUB_U_W
/* 8072 */    MCD::OPC_FilterValue, 23, 201, 26, // Skip to: 14933
/* 8076 */    MCD::OPC_CheckPredicate, 29, 197, 26, // Skip to: 14933
/* 8080 */    MCD::OPC_Decode, 231, 1, 243, 1, // Opcode: ASUB_U_D
/* 8085 */    MCD::OPC_FilterValue, 18, 111, 1, // Skip to: 8456
/* 8089 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8092 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8105
/* 8096 */    MCD::OPC_CheckPredicate, 29, 177, 26, // Skip to: 14933
/* 8100 */    MCD::OPC_Decode, 255, 13, 240, 1, // Opcode: MULV_B
/* 8105 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8118
/* 8109 */    MCD::OPC_CheckPredicate, 29, 164, 26, // Skip to: 14933
/* 8113 */    MCD::OPC_Decode, 129, 14, 241, 1, // Opcode: MULV_H
/* 8118 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8131
/* 8122 */    MCD::OPC_CheckPredicate, 29, 151, 26, // Skip to: 14933
/* 8126 */    MCD::OPC_Decode, 130, 14, 242, 1, // Opcode: MULV_W
/* 8131 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8144
/* 8135 */    MCD::OPC_CheckPredicate, 29, 138, 26, // Skip to: 14933
/* 8139 */    MCD::OPC_Decode, 128, 14, 243, 1, // Opcode: MULV_D
/* 8144 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8157
/* 8148 */    MCD::OPC_CheckPredicate, 29, 125, 26, // Skip to: 14933
/* 8152 */    MCD::OPC_Decode, 225, 11, 244, 1, // Opcode: MADDV_B
/* 8157 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8170
/* 8161 */    MCD::OPC_CheckPredicate, 29, 112, 26, // Skip to: 14933
/* 8165 */    MCD::OPC_Decode, 227, 11, 245, 1, // Opcode: MADDV_H
/* 8170 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8183
/* 8174 */    MCD::OPC_CheckPredicate, 29, 99, 26, // Skip to: 14933
/* 8178 */    MCD::OPC_Decode, 228, 11, 246, 1, // Opcode: MADDV_W
/* 8183 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8196
/* 8187 */    MCD::OPC_CheckPredicate, 29, 86, 26, // Skip to: 14933
/* 8191 */    MCD::OPC_Decode, 226, 11, 247, 1, // Opcode: MADDV_D
/* 8196 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8209
/* 8200 */    MCD::OPC_CheckPredicate, 29, 73, 26, // Skip to: 14933
/* 8204 */    MCD::OPC_Decode, 159, 13, 244, 1, // Opcode: MSUBV_B
/* 8209 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8222
/* 8213 */    MCD::OPC_CheckPredicate, 29, 60, 26, // Skip to: 14933
/* 8217 */    MCD::OPC_Decode, 161, 13, 245, 1, // Opcode: MSUBV_H
/* 8222 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8235
/* 8226 */    MCD::OPC_CheckPredicate, 29, 47, 26, // Skip to: 14933
/* 8230 */    MCD::OPC_Decode, 162, 13, 246, 1, // Opcode: MSUBV_W
/* 8235 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8248
/* 8239 */    MCD::OPC_CheckPredicate, 29, 34, 26, // Skip to: 14933
/* 8243 */    MCD::OPC_Decode, 160, 13, 247, 1, // Opcode: MSUBV_D
/* 8248 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8261
/* 8252 */    MCD::OPC_CheckPredicate, 29, 21, 26, // Skip to: 14933
/* 8256 */    MCD::OPC_Decode, 129, 7, 240, 1, // Opcode: DIV_S_B
/* 8261 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8274
/* 8265 */    MCD::OPC_CheckPredicate, 29, 8, 26, // Skip to: 14933
/* 8269 */    MCD::OPC_Decode, 131, 7, 241, 1, // Opcode: DIV_S_H
/* 8274 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8287
/* 8278 */    MCD::OPC_CheckPredicate, 29, 251, 25, // Skip to: 14933
/* 8282 */    MCD::OPC_Decode, 132, 7, 242, 1, // Opcode: DIV_S_W
/* 8287 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8300
/* 8291 */    MCD::OPC_CheckPredicate, 29, 238, 25, // Skip to: 14933
/* 8295 */    MCD::OPC_Decode, 130, 7, 243, 1, // Opcode: DIV_S_D
/* 8300 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8313
/* 8304 */    MCD::OPC_CheckPredicate, 29, 225, 25, // Skip to: 14933
/* 8308 */    MCD::OPC_Decode, 133, 7, 240, 1, // Opcode: DIV_U_B
/* 8313 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8326
/* 8317 */    MCD::OPC_CheckPredicate, 29, 212, 25, // Skip to: 14933
/* 8321 */    MCD::OPC_Decode, 135, 7, 241, 1, // Opcode: DIV_U_H
/* 8326 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8339
/* 8330 */    MCD::OPC_CheckPredicate, 29, 199, 25, // Skip to: 14933
/* 8334 */    MCD::OPC_Decode, 136, 7, 242, 1, // Opcode: DIV_U_W
/* 8339 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8352
/* 8343 */    MCD::OPC_CheckPredicate, 29, 186, 25, // Skip to: 14933
/* 8347 */    MCD::OPC_Decode, 134, 7, 243, 1, // Opcode: DIV_U_D
/* 8352 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 8365
/* 8356 */    MCD::OPC_CheckPredicate, 29, 173, 25, // Skip to: 14933
/* 8360 */    MCD::OPC_Decode, 219, 12, 240, 1, // Opcode: MOD_S_B
/* 8365 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8378
/* 8369 */    MCD::OPC_CheckPredicate, 29, 160, 25, // Skip to: 14933
/* 8373 */    MCD::OPC_Decode, 221, 12, 241, 1, // Opcode: MOD_S_H
/* 8378 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8391
/* 8382 */    MCD::OPC_CheckPredicate, 29, 147, 25, // Skip to: 14933
/* 8386 */    MCD::OPC_Decode, 222, 12, 242, 1, // Opcode: MOD_S_W
/* 8391 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8404
/* 8395 */    MCD::OPC_CheckPredicate, 29, 134, 25, // Skip to: 14933
/* 8399 */    MCD::OPC_Decode, 220, 12, 243, 1, // Opcode: MOD_S_D
/* 8404 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 8417
/* 8408 */    MCD::OPC_CheckPredicate, 29, 121, 25, // Skip to: 14933
/* 8412 */    MCD::OPC_Decode, 223, 12, 240, 1, // Opcode: MOD_U_B
/* 8417 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8430
/* 8421 */    MCD::OPC_CheckPredicate, 29, 108, 25, // Skip to: 14933
/* 8425 */    MCD::OPC_Decode, 225, 12, 241, 1, // Opcode: MOD_U_H
/* 8430 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8443
/* 8434 */    MCD::OPC_CheckPredicate, 29, 95, 25, // Skip to: 14933
/* 8438 */    MCD::OPC_Decode, 226, 12, 242, 1, // Opcode: MOD_U_W
/* 8443 */    MCD::OPC_FilterValue, 31, 86, 25, // Skip to: 14933
/* 8447 */    MCD::OPC_CheckPredicate, 29, 82, 25, // Skip to: 14933
/* 8451 */    MCD::OPC_Decode, 224, 12, 243, 1, // Opcode: MOD_U_D
/* 8456 */    MCD::OPC_FilterValue, 19, 237, 0, // Skip to: 8697
/* 8460 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8463 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8476
/* 8467 */    MCD::OPC_CheckPredicate, 29, 62, 25, // Skip to: 14933
/* 8471 */    MCD::OPC_Decode, 164, 7, 248, 1, // Opcode: DOTP_S_H
/* 8476 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8489
/* 8480 */    MCD::OPC_CheckPredicate, 29, 49, 25, // Skip to: 14933
/* 8484 */    MCD::OPC_Decode, 165, 7, 249, 1, // Opcode: DOTP_S_W
/* 8489 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8502
/* 8493 */    MCD::OPC_CheckPredicate, 29, 36, 25, // Skip to: 14933
/* 8497 */    MCD::OPC_Decode, 163, 7, 250, 1, // Opcode: DOTP_S_D
/* 8502 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8515
/* 8506 */    MCD::OPC_CheckPredicate, 29, 23, 25, // Skip to: 14933
/* 8510 */    MCD::OPC_Decode, 167, 7, 248, 1, // Opcode: DOTP_U_H
/* 8515 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8528
/* 8519 */    MCD::OPC_CheckPredicate, 29, 10, 25, // Skip to: 14933
/* 8523 */    MCD::OPC_Decode, 168, 7, 249, 1, // Opcode: DOTP_U_W
/* 8528 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8541
/* 8532 */    MCD::OPC_CheckPredicate, 29, 253, 24, // Skip to: 14933
/* 8536 */    MCD::OPC_Decode, 166, 7, 250, 1, // Opcode: DOTP_U_D
/* 8541 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8554
/* 8545 */    MCD::OPC_CheckPredicate, 29, 240, 24, // Skip to: 14933
/* 8549 */    MCD::OPC_Decode, 170, 7, 251, 1, // Opcode: DPADD_S_H
/* 8554 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8567
/* 8558 */    MCD::OPC_CheckPredicate, 29, 227, 24, // Skip to: 14933
/* 8562 */    MCD::OPC_Decode, 171, 7, 252, 1, // Opcode: DPADD_S_W
/* 8567 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8580
/* 8571 */    MCD::OPC_CheckPredicate, 29, 214, 24, // Skip to: 14933
/* 8575 */    MCD::OPC_Decode, 169, 7, 253, 1, // Opcode: DPADD_S_D
/* 8580 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8593
/* 8584 */    MCD::OPC_CheckPredicate, 29, 201, 24, // Skip to: 14933
/* 8588 */    MCD::OPC_Decode, 173, 7, 251, 1, // Opcode: DPADD_U_H
/* 8593 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8606
/* 8597 */    MCD::OPC_CheckPredicate, 29, 188, 24, // Skip to: 14933
/* 8601 */    MCD::OPC_Decode, 174, 7, 252, 1, // Opcode: DPADD_U_W
/* 8606 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8619
/* 8610 */    MCD::OPC_CheckPredicate, 29, 175, 24, // Skip to: 14933
/* 8614 */    MCD::OPC_Decode, 172, 7, 253, 1, // Opcode: DPADD_U_D
/* 8619 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8632
/* 8623 */    MCD::OPC_CheckPredicate, 29, 162, 24, // Skip to: 14933
/* 8627 */    MCD::OPC_Decode, 201, 7, 251, 1, // Opcode: DPSUB_S_H
/* 8632 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8645
/* 8636 */    MCD::OPC_CheckPredicate, 29, 149, 24, // Skip to: 14933
/* 8640 */    MCD::OPC_Decode, 202, 7, 252, 1, // Opcode: DPSUB_S_W
/* 8645 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8658
/* 8649 */    MCD::OPC_CheckPredicate, 29, 136, 24, // Skip to: 14933
/* 8653 */    MCD::OPC_Decode, 200, 7, 253, 1, // Opcode: DPSUB_S_D
/* 8658 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8671
/* 8662 */    MCD::OPC_CheckPredicate, 29, 123, 24, // Skip to: 14933
/* 8666 */    MCD::OPC_Decode, 204, 7, 251, 1, // Opcode: DPSUB_U_H
/* 8671 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8684
/* 8675 */    MCD::OPC_CheckPredicate, 29, 110, 24, // Skip to: 14933
/* 8679 */    MCD::OPC_Decode, 205, 7, 252, 1, // Opcode: DPSUB_U_W
/* 8684 */    MCD::OPC_FilterValue, 23, 101, 24, // Skip to: 14933
/* 8688 */    MCD::OPC_CheckPredicate, 29, 97, 24, // Skip to: 14933
/* 8692 */    MCD::OPC_Decode, 203, 7, 253, 1, // Opcode: DPSUB_U_D
/* 8697 */    MCD::OPC_FilterValue, 20, 163, 1, // Skip to: 9120
/* 8701 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8704 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8717
/* 8708 */    MCD::OPC_CheckPredicate, 29, 77, 24, // Skip to: 14933
/* 8712 */    MCD::OPC_Decode, 136, 17, 254, 1, // Opcode: SLD_B
/* 8717 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8730
/* 8721 */    MCD::OPC_CheckPredicate, 29, 64, 24, // Skip to: 14933
/* 8725 */    MCD::OPC_Decode, 138, 17, 255, 1, // Opcode: SLD_H
/* 8730 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8743
/* 8734 */    MCD::OPC_CheckPredicate, 29, 51, 24, // Skip to: 14933
/* 8738 */    MCD::OPC_Decode, 139, 17, 128, 2, // Opcode: SLD_W
/* 8743 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8756
/* 8747 */    MCD::OPC_CheckPredicate, 29, 38, 24, // Skip to: 14933
/* 8751 */    MCD::OPC_Decode, 137, 17, 129, 2, // Opcode: SLD_D
/* 8756 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8769
/* 8760 */    MCD::OPC_CheckPredicate, 29, 25, 24, // Skip to: 14933
/* 8764 */    MCD::OPC_Decode, 182, 17, 130, 2, // Opcode: SPLAT_B
/* 8769 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8782
/* 8773 */    MCD::OPC_CheckPredicate, 29, 12, 24, // Skip to: 14933
/* 8777 */    MCD::OPC_Decode, 184, 17, 131, 2, // Opcode: SPLAT_H
/* 8782 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8795
/* 8786 */    MCD::OPC_CheckPredicate, 29, 255, 23, // Skip to: 14933
/* 8790 */    MCD::OPC_Decode, 185, 17, 132, 2, // Opcode: SPLAT_W
/* 8795 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8808
/* 8799 */    MCD::OPC_CheckPredicate, 29, 242, 23, // Skip to: 14933
/* 8803 */    MCD::OPC_Decode, 183, 17, 133, 2, // Opcode: SPLAT_D
/* 8808 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8821
/* 8812 */    MCD::OPC_CheckPredicate, 29, 229, 23, // Skip to: 14933
/* 8816 */    MCD::OPC_Decode, 203, 14, 240, 1, // Opcode: PCKEV_B
/* 8821 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8834
/* 8825 */    MCD::OPC_CheckPredicate, 29, 216, 23, // Skip to: 14933
/* 8829 */    MCD::OPC_Decode, 205, 14, 241, 1, // Opcode: PCKEV_H
/* 8834 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8847
/* 8838 */    MCD::OPC_CheckPredicate, 29, 203, 23, // Skip to: 14933
/* 8842 */    MCD::OPC_Decode, 206, 14, 242, 1, // Opcode: PCKEV_W
/* 8847 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8860
/* 8851 */    MCD::OPC_CheckPredicate, 29, 190, 23, // Skip to: 14933
/* 8855 */    MCD::OPC_Decode, 204, 14, 243, 1, // Opcode: PCKEV_D
/* 8860 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8873
/* 8864 */    MCD::OPC_CheckPredicate, 29, 177, 23, // Skip to: 14933
/* 8868 */    MCD::OPC_Decode, 207, 14, 240, 1, // Opcode: PCKOD_B
/* 8873 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8886
/* 8877 */    MCD::OPC_CheckPredicate, 29, 164, 23, // Skip to: 14933
/* 8881 */    MCD::OPC_Decode, 209, 14, 241, 1, // Opcode: PCKOD_H
/* 8886 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8899
/* 8890 */    MCD::OPC_CheckPredicate, 29, 151, 23, // Skip to: 14933
/* 8894 */    MCD::OPC_Decode, 210, 14, 242, 1, // Opcode: PCKOD_W
/* 8899 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8912
/* 8903 */    MCD::OPC_CheckPredicate, 29, 138, 23, // Skip to: 14933
/* 8907 */    MCD::OPC_Decode, 208, 14, 243, 1, // Opcode: PCKOD_D
/* 8912 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8925
/* 8916 */    MCD::OPC_CheckPredicate, 29, 125, 23, // Skip to: 14933
/* 8920 */    MCD::OPC_Decode, 235, 9, 240, 1, // Opcode: ILVL_B
/* 8925 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8938
/* 8929 */    MCD::OPC_CheckPredicate, 29, 112, 23, // Skip to: 14933
/* 8933 */    MCD::OPC_Decode, 237, 9, 241, 1, // Opcode: ILVL_H
/* 8938 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8951
/* 8942 */    MCD::OPC_CheckPredicate, 29, 99, 23, // Skip to: 14933
/* 8946 */    MCD::OPC_Decode, 238, 9, 242, 1, // Opcode: ILVL_W
/* 8951 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8964
/* 8955 */    MCD::OPC_CheckPredicate, 29, 86, 23, // Skip to: 14933
/* 8959 */    MCD::OPC_Decode, 236, 9, 243, 1, // Opcode: ILVL_D
/* 8964 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8977
/* 8968 */    MCD::OPC_CheckPredicate, 29, 73, 23, // Skip to: 14933
/* 8972 */    MCD::OPC_Decode, 243, 9, 240, 1, // Opcode: ILVR_B
/* 8977 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8990
/* 8981 */    MCD::OPC_CheckPredicate, 29, 60, 23, // Skip to: 14933
/* 8985 */    MCD::OPC_Decode, 245, 9, 241, 1, // Opcode: ILVR_H
/* 8990 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9003
/* 8994 */    MCD::OPC_CheckPredicate, 29, 47, 23, // Skip to: 14933
/* 8998 */    MCD::OPC_Decode, 246, 9, 242, 1, // Opcode: ILVR_W
/* 9003 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9016
/* 9007 */    MCD::OPC_CheckPredicate, 29, 34, 23, // Skip to: 14933
/* 9011 */    MCD::OPC_Decode, 244, 9, 243, 1, // Opcode: ILVR_D
/* 9016 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9029
/* 9020 */    MCD::OPC_CheckPredicate, 29, 21, 23, // Skip to: 14933
/* 9024 */    MCD::OPC_Decode, 231, 9, 240, 1, // Opcode: ILVEV_B
/* 9029 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9042
/* 9033 */    MCD::OPC_CheckPredicate, 29, 8, 23, // Skip to: 14933
/* 9037 */    MCD::OPC_Decode, 233, 9, 241, 1, // Opcode: ILVEV_H
/* 9042 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9055
/* 9046 */    MCD::OPC_CheckPredicate, 29, 251, 22, // Skip to: 14933
/* 9050 */    MCD::OPC_Decode, 234, 9, 242, 1, // Opcode: ILVEV_W
/* 9055 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9068
/* 9059 */    MCD::OPC_CheckPredicate, 29, 238, 22, // Skip to: 14933
/* 9063 */    MCD::OPC_Decode, 232, 9, 243, 1, // Opcode: ILVEV_D
/* 9068 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9081
/* 9072 */    MCD::OPC_CheckPredicate, 29, 225, 22, // Skip to: 14933
/* 9076 */    MCD::OPC_Decode, 239, 9, 240, 1, // Opcode: ILVOD_B
/* 9081 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9094
/* 9085 */    MCD::OPC_CheckPredicate, 29, 212, 22, // Skip to: 14933
/* 9089 */    MCD::OPC_Decode, 241, 9, 241, 1, // Opcode: ILVOD_H
/* 9094 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9107
/* 9098 */    MCD::OPC_CheckPredicate, 29, 199, 22, // Skip to: 14933
/* 9102 */    MCD::OPC_Decode, 242, 9, 242, 1, // Opcode: ILVOD_W
/* 9107 */    MCD::OPC_FilterValue, 31, 190, 22, // Skip to: 14933
/* 9111 */    MCD::OPC_CheckPredicate, 29, 186, 22, // Skip to: 14933
/* 9115 */    MCD::OPC_Decode, 240, 9, 243, 1, // Opcode: ILVOD_D
/* 9120 */    MCD::OPC_FilterValue, 21, 59, 1, // Skip to: 9439
/* 9124 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9127 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9140
/* 9131 */    MCD::OPC_CheckPredicate, 29, 166, 22, // Skip to: 14933
/* 9135 */    MCD::OPC_Decode, 203, 19, 244, 1, // Opcode: VSHF_B
/* 9140 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9153
/* 9144 */    MCD::OPC_CheckPredicate, 29, 153, 22, // Skip to: 14933
/* 9148 */    MCD::OPC_Decode, 205, 19, 245, 1, // Opcode: VSHF_H
/* 9153 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9166
/* 9157 */    MCD::OPC_CheckPredicate, 29, 140, 22, // Skip to: 14933
/* 9161 */    MCD::OPC_Decode, 206, 19, 246, 1, // Opcode: VSHF_W
/* 9166 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9179
/* 9170 */    MCD::OPC_CheckPredicate, 29, 127, 22, // Skip to: 14933
/* 9174 */    MCD::OPC_Decode, 204, 19, 247, 1, // Opcode: VSHF_D
/* 9179 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9192
/* 9183 */    MCD::OPC_CheckPredicate, 29, 114, 22, // Skip to: 14933
/* 9187 */    MCD::OPC_Decode, 197, 17, 240, 1, // Opcode: SRAR_B
/* 9192 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9205
/* 9196 */    MCD::OPC_CheckPredicate, 29, 101, 22, // Skip to: 14933
/* 9200 */    MCD::OPC_Decode, 199, 17, 241, 1, // Opcode: SRAR_H
/* 9205 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9218
/* 9209 */    MCD::OPC_CheckPredicate, 29, 88, 22, // Skip to: 14933
/* 9213 */    MCD::OPC_Decode, 200, 17, 242, 1, // Opcode: SRAR_W
/* 9218 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9231
/* 9222 */    MCD::OPC_CheckPredicate, 29, 75, 22, // Skip to: 14933
/* 9226 */    MCD::OPC_Decode, 198, 17, 243, 1, // Opcode: SRAR_D
/* 9231 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9244
/* 9235 */    MCD::OPC_CheckPredicate, 29, 62, 22, // Skip to: 14933
/* 9239 */    MCD::OPC_Decode, 219, 17, 240, 1, // Opcode: SRLR_B
/* 9244 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9257
/* 9248 */    MCD::OPC_CheckPredicate, 29, 49, 22, // Skip to: 14933
/* 9252 */    MCD::OPC_Decode, 221, 17, 241, 1, // Opcode: SRLR_H
/* 9257 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9270
/* 9261 */    MCD::OPC_CheckPredicate, 29, 36, 22, // Skip to: 14933
/* 9265 */    MCD::OPC_Decode, 222, 17, 242, 1, // Opcode: SRLR_W
/* 9270 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9283
/* 9274 */    MCD::OPC_CheckPredicate, 29, 23, 22, // Skip to: 14933
/* 9278 */    MCD::OPC_Decode, 220, 17, 243, 1, // Opcode: SRLR_D
/* 9283 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9296
/* 9287 */    MCD::OPC_CheckPredicate, 29, 10, 22, // Skip to: 14933
/* 9291 */    MCD::OPC_Decode, 220, 9, 248, 1, // Opcode: HADD_S_H
/* 9296 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9309
/* 9300 */    MCD::OPC_CheckPredicate, 29, 253, 21, // Skip to: 14933
/* 9304 */    MCD::OPC_Decode, 221, 9, 249, 1, // Opcode: HADD_S_W
/* 9309 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9322
/* 9313 */    MCD::OPC_CheckPredicate, 29, 240, 21, // Skip to: 14933
/* 9317 */    MCD::OPC_Decode, 219, 9, 250, 1, // Opcode: HADD_S_D
/* 9322 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9335
/* 9326 */    MCD::OPC_CheckPredicate, 29, 227, 21, // Skip to: 14933
/* 9330 */    MCD::OPC_Decode, 223, 9, 248, 1, // Opcode: HADD_U_H
/* 9335 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9348
/* 9339 */    MCD::OPC_CheckPredicate, 29, 214, 21, // Skip to: 14933
/* 9343 */    MCD::OPC_Decode, 224, 9, 249, 1, // Opcode: HADD_U_W
/* 9348 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9361
/* 9352 */    MCD::OPC_CheckPredicate, 29, 201, 21, // Skip to: 14933
/* 9356 */    MCD::OPC_Decode, 222, 9, 250, 1, // Opcode: HADD_U_D
/* 9361 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9374
/* 9365 */    MCD::OPC_CheckPredicate, 29, 188, 21, // Skip to: 14933
/* 9369 */    MCD::OPC_Decode, 226, 9, 248, 1, // Opcode: HSUB_S_H
/* 9374 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9387
/* 9378 */    MCD::OPC_CheckPredicate, 29, 175, 21, // Skip to: 14933
/* 9382 */    MCD::OPC_Decode, 227, 9, 249, 1, // Opcode: HSUB_S_W
/* 9387 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9400
/* 9391 */    MCD::OPC_CheckPredicate, 29, 162, 21, // Skip to: 14933
/* 9395 */    MCD::OPC_Decode, 225, 9, 250, 1, // Opcode: HSUB_S_D
/* 9400 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9413
/* 9404 */    MCD::OPC_CheckPredicate, 29, 149, 21, // Skip to: 14933
/* 9408 */    MCD::OPC_Decode, 229, 9, 248, 1, // Opcode: HSUB_U_H
/* 9413 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9426
/* 9417 */    MCD::OPC_CheckPredicate, 29, 136, 21, // Skip to: 14933
/* 9421 */    MCD::OPC_Decode, 230, 9, 249, 1, // Opcode: HSUB_U_W
/* 9426 */    MCD::OPC_FilterValue, 31, 127, 21, // Skip to: 14933
/* 9430 */    MCD::OPC_CheckPredicate, 29, 123, 21, // Skip to: 14933
/* 9434 */    MCD::OPC_Decode, 228, 9, 250, 1, // Opcode: HSUB_U_D
/* 9439 */    MCD::OPC_FilterValue, 25, 210, 1, // Skip to: 9909
/* 9443 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 9446 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9459
/* 9450 */    MCD::OPC_CheckPredicate, 29, 103, 21, // Skip to: 14933
/* 9454 */    MCD::OPC_Decode, 132, 17, 134, 2, // Opcode: SLDI_B
/* 9459 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9478
/* 9463 */    MCD::OPC_CheckPredicate, 29, 90, 21, // Skip to: 14933
/* 9467 */    MCD::OPC_CheckField, 19, 1, 0, 84, 21, // Skip to: 14933
/* 9473 */    MCD::OPC_Decode, 134, 17, 135, 2, // Opcode: SLDI_H
/* 9478 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 9536
/* 9482 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9485 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9498
/* 9489 */    MCD::OPC_CheckPredicate, 29, 64, 21, // Skip to: 14933
/* 9493 */    MCD::OPC_Decode, 135, 17, 136, 2, // Opcode: SLDI_W
/* 9498 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9517
/* 9502 */    MCD::OPC_CheckPredicate, 29, 51, 21, // Skip to: 14933
/* 9506 */    MCD::OPC_CheckField, 17, 1, 0, 45, 21, // Skip to: 14933
/* 9512 */    MCD::OPC_Decode, 133, 17, 137, 2, // Opcode: SLDI_D
/* 9517 */    MCD::OPC_FilterValue, 3, 36, 21, // Skip to: 14933
/* 9521 */    MCD::OPC_CheckPredicate, 29, 32, 21, // Skip to: 14933
/* 9525 */    MCD::OPC_CheckField, 16, 2, 2, 26, 21, // Skip to: 14933
/* 9531 */    MCD::OPC_Decode, 221, 5, 138, 2, // Opcode: CTCMSA
/* 9536 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9549
/* 9540 */    MCD::OPC_CheckPredicate, 29, 13, 21, // Skip to: 14933
/* 9544 */    MCD::OPC_Decode, 178, 17, 139, 2, // Opcode: SPLATI_B
/* 9549 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 9568
/* 9553 */    MCD::OPC_CheckPredicate, 29, 0, 21, // Skip to: 14933
/* 9557 */    MCD::OPC_CheckField, 19, 1, 0, 250, 20, // Skip to: 14933
/* 9563 */    MCD::OPC_Decode, 180, 17, 140, 2, // Opcode: SPLATI_H
/* 9568 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 9626
/* 9572 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9575 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9588
/* 9579 */    MCD::OPC_CheckPredicate, 29, 230, 20, // Skip to: 14933
/* 9583 */    MCD::OPC_Decode, 181, 17, 141, 2, // Opcode: SPLATI_W
/* 9588 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9607
/* 9592 */    MCD::OPC_CheckPredicate, 29, 217, 20, // Skip to: 14933
/* 9596 */    MCD::OPC_CheckField, 17, 1, 0, 211, 20, // Skip to: 14933
/* 9602 */    MCD::OPC_Decode, 179, 17, 142, 2, // Opcode: SPLATI_D
/* 9607 */    MCD::OPC_FilterValue, 3, 202, 20, // Skip to: 14933
/* 9611 */    MCD::OPC_CheckPredicate, 29, 198, 20, // Skip to: 14933
/* 9615 */    MCD::OPC_CheckField, 16, 2, 2, 192, 20, // Skip to: 14933
/* 9621 */    MCD::OPC_Decode, 198, 4, 143, 2, // Opcode: CFCMSA
/* 9626 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9639
/* 9630 */    MCD::OPC_CheckPredicate, 29, 179, 20, // Skip to: 14933
/* 9634 */    MCD::OPC_Decode, 211, 5, 144, 2, // Opcode: COPY_S_B
/* 9639 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 9658
/* 9643 */    MCD::OPC_CheckPredicate, 29, 166, 20, // Skip to: 14933
/* 9647 */    MCD::OPC_CheckField, 19, 1, 0, 160, 20, // Skip to: 14933
/* 9653 */    MCD::OPC_Decode, 213, 5, 145, 2, // Opcode: COPY_S_H
/* 9658 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 9716
/* 9662 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9665 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9678
/* 9669 */    MCD::OPC_CheckPredicate, 29, 140, 20, // Skip to: 14933
/* 9673 */    MCD::OPC_Decode, 214, 5, 146, 2, // Opcode: COPY_S_W
/* 9678 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9697
/* 9682 */    MCD::OPC_CheckPredicate, 36, 127, 20, // Skip to: 14933
/* 9686 */    MCD::OPC_CheckField, 17, 1, 0, 121, 20, // Skip to: 14933
/* 9692 */    MCD::OPC_Decode, 212, 5, 147, 2, // Opcode: COPY_S_D
/* 9697 */    MCD::OPC_FilterValue, 3, 112, 20, // Skip to: 14933
/* 9701 */    MCD::OPC_CheckPredicate, 29, 108, 20, // Skip to: 14933
/* 9705 */    MCD::OPC_CheckField, 16, 2, 2, 102, 20, // Skip to: 14933
/* 9711 */    MCD::OPC_Decode, 231, 12, 148, 2, // Opcode: MOVE_V
/* 9716 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9729
/* 9720 */    MCD::OPC_CheckPredicate, 29, 89, 20, // Skip to: 14933
/* 9724 */    MCD::OPC_Decode, 215, 5, 144, 2, // Opcode: COPY_U_B
/* 9729 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 9748
/* 9733 */    MCD::OPC_CheckPredicate, 29, 76, 20, // Skip to: 14933
/* 9737 */    MCD::OPC_CheckField, 19, 1, 0, 70, 20, // Skip to: 14933
/* 9743 */    MCD::OPC_Decode, 216, 5, 145, 2, // Opcode: COPY_U_H
/* 9748 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 9767
/* 9752 */    MCD::OPC_CheckPredicate, 36, 57, 20, // Skip to: 14933
/* 9756 */    MCD::OPC_CheckField, 18, 2, 0, 51, 20, // Skip to: 14933
/* 9762 */    MCD::OPC_Decode, 217, 5, 146, 2, // Opcode: COPY_U_W
/* 9767 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9780
/* 9771 */    MCD::OPC_CheckPredicate, 29, 38, 20, // Skip to: 14933
/* 9775 */    MCD::OPC_Decode, 248, 9, 149, 2, // Opcode: INSERT_B
/* 9780 */    MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 9799
/* 9784 */    MCD::OPC_CheckPredicate, 29, 25, 20, // Skip to: 14933
/* 9788 */    MCD::OPC_CheckField, 19, 1, 0, 19, 20, // Skip to: 14933
/* 9794 */    MCD::OPC_Decode, 132, 10, 150, 2, // Opcode: INSERT_H
/* 9799 */    MCD::OPC_FilterValue, 19, 35, 0, // Skip to: 9838
/* 9803 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9806 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9819
/* 9810 */    MCD::OPC_CheckPredicate, 29, 255, 19, // Skip to: 14933
/* 9814 */    MCD::OPC_Decode, 135, 10, 151, 2, // Opcode: INSERT_W
/* 9819 */    MCD::OPC_FilterValue, 2, 246, 19, // Skip to: 14933
/* 9823 */    MCD::OPC_CheckPredicate, 36, 242, 19, // Skip to: 14933
/* 9827 */    MCD::OPC_CheckField, 17, 1, 0, 236, 19, // Skip to: 14933
/* 9833 */    MCD::OPC_Decode, 251, 9, 152, 2, // Opcode: INSERT_D
/* 9838 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9851
/* 9842 */    MCD::OPC_CheckPredicate, 29, 223, 19, // Skip to: 14933
/* 9846 */    MCD::OPC_Decode, 139, 10, 153, 2, // Opcode: INSVE_B
/* 9851 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 9870
/* 9855 */    MCD::OPC_CheckPredicate, 29, 210, 19, // Skip to: 14933
/* 9859 */    MCD::OPC_CheckField, 19, 1, 0, 204, 19, // Skip to: 14933
/* 9865 */    MCD::OPC_Decode, 141, 10, 153, 2, // Opcode: INSVE_H
/* 9870 */    MCD::OPC_FilterValue, 23, 195, 19, // Skip to: 14933
/* 9874 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9877 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9890
/* 9881 */    MCD::OPC_CheckPredicate, 29, 184, 19, // Skip to: 14933
/* 9885 */    MCD::OPC_Decode, 142, 10, 153, 2, // Opcode: INSVE_W
/* 9890 */    MCD::OPC_FilterValue, 2, 175, 19, // Skip to: 14933
/* 9894 */    MCD::OPC_CheckPredicate, 29, 171, 19, // Skip to: 14933
/* 9898 */    MCD::OPC_CheckField, 17, 1, 0, 165, 19, // Skip to: 14933
/* 9904 */    MCD::OPC_Decode, 140, 10, 153, 2, // Opcode: INSVE_D
/* 9909 */    MCD::OPC_FilterValue, 26, 163, 1, // Skip to: 10332
/* 9913 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9916 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9929
/* 9920 */    MCD::OPC_CheckPredicate, 29, 145, 19, // Skip to: 14933
/* 9924 */    MCD::OPC_Decode, 182, 8, 242, 1, // Opcode: FCAF_W
/* 9929 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9942
/* 9933 */    MCD::OPC_CheckPredicate, 29, 132, 19, // Skip to: 14933
/* 9937 */    MCD::OPC_Decode, 181, 8, 243, 1, // Opcode: FCAF_D
/* 9942 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9955
/* 9946 */    MCD::OPC_CheckPredicate, 29, 119, 19, // Skip to: 14933
/* 9950 */    MCD::OPC_Decode, 209, 8, 242, 1, // Opcode: FCUN_W
/* 9955 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9968
/* 9959 */    MCD::OPC_CheckPredicate, 29, 106, 19, // Skip to: 14933
/* 9963 */    MCD::OPC_Decode, 208, 8, 243, 1, // Opcode: FCUN_D
/* 9968 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9981
/* 9972 */    MCD::OPC_CheckPredicate, 29, 93, 19, // Skip to: 14933
/* 9976 */    MCD::OPC_Decode, 184, 8, 242, 1, // Opcode: FCEQ_W
/* 9981 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9994
/* 9985 */    MCD::OPC_CheckPredicate, 29, 80, 19, // Skip to: 14933
/* 9989 */    MCD::OPC_Decode, 183, 8, 243, 1, // Opcode: FCEQ_D
/* 9994 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10007
/* 9998 */    MCD::OPC_CheckPredicate, 29, 67, 19, // Skip to: 14933
/* 10002 */   MCD::OPC_Decode, 201, 8, 242, 1, // Opcode: FCUEQ_W
/* 10007 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10020
/* 10011 */   MCD::OPC_CheckPredicate, 29, 54, 19, // Skip to: 14933
/* 10015 */   MCD::OPC_Decode, 200, 8, 243, 1, // Opcode: FCUEQ_D
/* 10020 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10033
/* 10024 */   MCD::OPC_CheckPredicate, 29, 41, 19, // Skip to: 14933
/* 10028 */   MCD::OPC_Decode, 190, 8, 242, 1, // Opcode: FCLT_W
/* 10033 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10046
/* 10037 */   MCD::OPC_CheckPredicate, 29, 28, 19, // Skip to: 14933
/* 10041 */   MCD::OPC_Decode, 189, 8, 243, 1, // Opcode: FCLT_D
/* 10046 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10059
/* 10050 */   MCD::OPC_CheckPredicate, 29, 15, 19, // Skip to: 14933
/* 10054 */   MCD::OPC_Decode, 205, 8, 242, 1, // Opcode: FCULT_W
/* 10059 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10072
/* 10063 */   MCD::OPC_CheckPredicate, 29, 2, 19, // Skip to: 14933
/* 10067 */   MCD::OPC_Decode, 204, 8, 243, 1, // Opcode: FCULT_D
/* 10072 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10085
/* 10076 */   MCD::OPC_CheckPredicate, 29, 245, 18, // Skip to: 14933
/* 10080 */   MCD::OPC_Decode, 188, 8, 242, 1, // Opcode: FCLE_W
/* 10085 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10098
/* 10089 */   MCD::OPC_CheckPredicate, 29, 232, 18, // Skip to: 14933
/* 10093 */   MCD::OPC_Decode, 187, 8, 243, 1, // Opcode: FCLE_D
/* 10098 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10111
/* 10102 */   MCD::OPC_CheckPredicate, 29, 219, 18, // Skip to: 14933
/* 10106 */   MCD::OPC_Decode, 203, 8, 242, 1, // Opcode: FCULE_W
/* 10111 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10124
/* 10115 */   MCD::OPC_CheckPredicate, 29, 206, 18, // Skip to: 14933
/* 10119 */   MCD::OPC_Decode, 202, 8, 243, 1, // Opcode: FCULE_D
/* 10124 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10137
/* 10128 */   MCD::OPC_CheckPredicate, 29, 193, 18, // Skip to: 14933
/* 10132 */   MCD::OPC_Decode, 171, 9, 242, 1, // Opcode: FSAF_W
/* 10137 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10150
/* 10141 */   MCD::OPC_CheckPredicate, 29, 180, 18, // Skip to: 14933
/* 10145 */   MCD::OPC_Decode, 170, 9, 243, 1, // Opcode: FSAF_D
/* 10150 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10163
/* 10154 */   MCD::OPC_CheckPredicate, 29, 167, 18, // Skip to: 14933
/* 10158 */   MCD::OPC_Decode, 207, 9, 242, 1, // Opcode: FSUN_W
/* 10163 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10176
/* 10167 */   MCD::OPC_CheckPredicate, 29, 154, 18, // Skip to: 14933
/* 10171 */   MCD::OPC_Decode, 206, 9, 243, 1, // Opcode: FSUN_D
/* 10176 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10189
/* 10180 */   MCD::OPC_CheckPredicate, 29, 141, 18, // Skip to: 14933
/* 10184 */   MCD::OPC_Decode, 173, 9, 242, 1, // Opcode: FSEQ_W
/* 10189 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10202
/* 10193 */   MCD::OPC_CheckPredicate, 29, 128, 18, // Skip to: 14933
/* 10197 */   MCD::OPC_Decode, 172, 9, 243, 1, // Opcode: FSEQ_D
/* 10202 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10215
/* 10206 */   MCD::OPC_CheckPredicate, 29, 115, 18, // Skip to: 14933
/* 10210 */   MCD::OPC_Decode, 199, 9, 242, 1, // Opcode: FSUEQ_W
/* 10215 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10228
/* 10219 */   MCD::OPC_CheckPredicate, 29, 102, 18, // Skip to: 14933
/* 10223 */   MCD::OPC_Decode, 198, 9, 243, 1, // Opcode: FSUEQ_D
/* 10228 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10241
/* 10232 */   MCD::OPC_CheckPredicate, 29, 89, 18, // Skip to: 14933
/* 10236 */   MCD::OPC_Decode, 177, 9, 242, 1, // Opcode: FSLT_W
/* 10241 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10254
/* 10245 */   MCD::OPC_CheckPredicate, 29, 76, 18, // Skip to: 14933
/* 10249 */   MCD::OPC_Decode, 176, 9, 243, 1, // Opcode: FSLT_D
/* 10254 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10267
/* 10258 */   MCD::OPC_CheckPredicate, 29, 63, 18, // Skip to: 14933
/* 10262 */   MCD::OPC_Decode, 203, 9, 242, 1, // Opcode: FSULT_W
/* 10267 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10280
/* 10271 */   MCD::OPC_CheckPredicate, 29, 50, 18, // Skip to: 14933
/* 10275 */   MCD::OPC_Decode, 202, 9, 243, 1, // Opcode: FSULT_D
/* 10280 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10293
/* 10284 */   MCD::OPC_CheckPredicate, 29, 37, 18, // Skip to: 14933
/* 10288 */   MCD::OPC_Decode, 175, 9, 242, 1, // Opcode: FSLE_W
/* 10293 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10306
/* 10297 */   MCD::OPC_CheckPredicate, 29, 24, 18, // Skip to: 14933
/* 10301 */   MCD::OPC_Decode, 174, 9, 243, 1, // Opcode: FSLE_D
/* 10306 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10319
/* 10310 */   MCD::OPC_CheckPredicate, 29, 11, 18, // Skip to: 14933
/* 10314 */   MCD::OPC_Decode, 201, 9, 242, 1, // Opcode: FSULE_W
/* 10319 */   MCD::OPC_FilterValue, 31, 2, 18, // Skip to: 14933
/* 10323 */   MCD::OPC_CheckPredicate, 29, 254, 17, // Skip to: 14933
/* 10327 */   MCD::OPC_Decode, 200, 9, 243, 1, // Opcode: FSULE_D
/* 10332 */   MCD::OPC_FilterValue, 27, 85, 1, // Skip to: 10677
/* 10336 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10339 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10352
/* 10343 */   MCD::OPC_CheckPredicate, 29, 234, 17, // Skip to: 14933
/* 10347 */   MCD::OPC_Decode, 180, 8, 242, 1, // Opcode: FADD_W
/* 10352 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10365
/* 10356 */   MCD::OPC_CheckPredicate, 29, 221, 17, // Skip to: 14933
/* 10360 */   MCD::OPC_Decode, 172, 8, 243, 1, // Opcode: FADD_D
/* 10365 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10378
/* 10369 */   MCD::OPC_CheckPredicate, 29, 208, 17, // Skip to: 14933
/* 10373 */   MCD::OPC_Decode, 197, 9, 242, 1, // Opcode: FSUB_W
/* 10378 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10391
/* 10382 */   MCD::OPC_CheckPredicate, 29, 195, 17, // Skip to: 14933
/* 10386 */   MCD::OPC_Decode, 189, 9, 243, 1, // Opcode: FSUB_D
/* 10391 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10404
/* 10395 */   MCD::OPC_CheckPredicate, 29, 182, 17, // Skip to: 14933
/* 10399 */   MCD::OPC_Decode, 155, 9, 242, 1, // Opcode: FMUL_W
/* 10404 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10417
/* 10408 */   MCD::OPC_CheckPredicate, 29, 169, 17, // Skip to: 14933
/* 10412 */   MCD::OPC_Decode, 147, 9, 243, 1, // Opcode: FMUL_D
/* 10417 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10430
/* 10421 */   MCD::OPC_CheckPredicate, 29, 156, 17, // Skip to: 14933
/* 10425 */   MCD::OPC_Decode, 218, 8, 242, 1, // Opcode: FDIV_W
/* 10430 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10443
/* 10434 */   MCD::OPC_CheckPredicate, 29, 143, 17, // Skip to: 14933
/* 10438 */   MCD::OPC_Decode, 210, 8, 243, 1, // Opcode: FDIV_D
/* 10443 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10456
/* 10447 */   MCD::OPC_CheckPredicate, 29, 130, 17, // Skip to: 14933
/* 10451 */   MCD::OPC_Decode, 129, 9, 246, 1, // Opcode: FMADD_W
/* 10456 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10469
/* 10460 */   MCD::OPC_CheckPredicate, 29, 117, 17, // Skip to: 14933
/* 10464 */   MCD::OPC_Decode, 128, 9, 247, 1, // Opcode: FMADD_D
/* 10469 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10482
/* 10473 */   MCD::OPC_CheckPredicate, 29, 104, 17, // Skip to: 14933
/* 10477 */   MCD::OPC_Decode, 146, 9, 246, 1, // Opcode: FMSUB_W
/* 10482 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10495
/* 10486 */   MCD::OPC_CheckPredicate, 29, 91, 17, // Skip to: 14933
/* 10490 */   MCD::OPC_Decode, 145, 9, 247, 1, // Opcode: FMSUB_D
/* 10495 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10508
/* 10499 */   MCD::OPC_CheckPredicate, 29, 78, 17, // Skip to: 14933
/* 10503 */   MCD::OPC_Decode, 223, 8, 242, 1, // Opcode: FEXP2_W
/* 10508 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10521
/* 10512 */   MCD::OPC_CheckPredicate, 29, 65, 17, // Skip to: 14933
/* 10516 */   MCD::OPC_Decode, 221, 8, 243, 1, // Opcode: FEXP2_D
/* 10521 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10534
/* 10525 */   MCD::OPC_CheckPredicate, 29, 52, 17, // Skip to: 14933
/* 10529 */   MCD::OPC_Decode, 219, 8, 154, 2, // Opcode: FEXDO_H
/* 10534 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10547
/* 10538 */   MCD::OPC_CheckPredicate, 29, 39, 17, // Skip to: 14933
/* 10542 */   MCD::OPC_Decode, 220, 8, 155, 2, // Opcode: FEXDO_W
/* 10547 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10560
/* 10551 */   MCD::OPC_CheckPredicate, 29, 26, 17, // Skip to: 14933
/* 10555 */   MCD::OPC_Decode, 212, 9, 154, 2, // Opcode: FTQ_H
/* 10560 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10573
/* 10564 */   MCD::OPC_CheckPredicate, 29, 13, 17, // Skip to: 14933
/* 10568 */   MCD::OPC_Decode, 213, 9, 155, 2, // Opcode: FTQ_W
/* 10573 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10586
/* 10577 */   MCD::OPC_CheckPredicate, 29, 0, 17, // Skip to: 14933
/* 10581 */   MCD::OPC_Decode, 137, 9, 242, 1, // Opcode: FMIN_W
/* 10586 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10599
/* 10590 */   MCD::OPC_CheckPredicate, 29, 243, 16, // Skip to: 14933
/* 10594 */   MCD::OPC_Decode, 136, 9, 243, 1, // Opcode: FMIN_D
/* 10599 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10612
/* 10603 */   MCD::OPC_CheckPredicate, 29, 230, 16, // Skip to: 14933
/* 10607 */   MCD::OPC_Decode, 135, 9, 242, 1, // Opcode: FMIN_A_W
/* 10612 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10625
/* 10616 */   MCD::OPC_CheckPredicate, 29, 217, 16, // Skip to: 14933
/* 10620 */   MCD::OPC_Decode, 134, 9, 243, 1, // Opcode: FMIN_A_D
/* 10625 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10638
/* 10629 */   MCD::OPC_CheckPredicate, 29, 204, 16, // Skip to: 14933
/* 10633 */   MCD::OPC_Decode, 133, 9, 242, 1, // Opcode: FMAX_W
/* 10638 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10651
/* 10642 */   MCD::OPC_CheckPredicate, 29, 191, 16, // Skip to: 14933
/* 10646 */   MCD::OPC_Decode, 132, 9, 243, 1, // Opcode: FMAX_D
/* 10651 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10664
/* 10655 */   MCD::OPC_CheckPredicate, 29, 178, 16, // Skip to: 14933
/* 10659 */   MCD::OPC_Decode, 131, 9, 242, 1, // Opcode: FMAX_A_W
/* 10664 */   MCD::OPC_FilterValue, 31, 169, 16, // Skip to: 14933
/* 10668 */   MCD::OPC_CheckPredicate, 29, 165, 16, // Skip to: 14933
/* 10672 */   MCD::OPC_Decode, 130, 9, 243, 1, // Opcode: FMAX_A_D
/* 10677 */   MCD::OPC_FilterValue, 28, 59, 1, // Skip to: 10996
/* 10681 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10684 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10697
/* 10688 */   MCD::OPC_CheckPredicate, 29, 145, 16, // Skip to: 14933
/* 10692 */   MCD::OPC_Decode, 199, 8, 242, 1, // Opcode: FCOR_W
/* 10697 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10710
/* 10701 */   MCD::OPC_CheckPredicate, 29, 132, 16, // Skip to: 14933
/* 10705 */   MCD::OPC_Decode, 198, 8, 243, 1, // Opcode: FCOR_D
/* 10710 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10723
/* 10714 */   MCD::OPC_CheckPredicate, 29, 119, 16, // Skip to: 14933
/* 10718 */   MCD::OPC_Decode, 207, 8, 242, 1, // Opcode: FCUNE_W
/* 10723 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10736
/* 10727 */   MCD::OPC_CheckPredicate, 29, 106, 16, // Skip to: 14933
/* 10731 */   MCD::OPC_Decode, 206, 8, 243, 1, // Opcode: FCUNE_D
/* 10736 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10749
/* 10740 */   MCD::OPC_CheckPredicate, 29, 93, 16, // Skip to: 14933
/* 10744 */   MCD::OPC_Decode, 197, 8, 242, 1, // Opcode: FCNE_W
/* 10749 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10762
/* 10753 */   MCD::OPC_CheckPredicate, 29, 80, 16, // Skip to: 14933
/* 10757 */   MCD::OPC_Decode, 196, 8, 243, 1, // Opcode: FCNE_D
/* 10762 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10775
/* 10766 */   MCD::OPC_CheckPredicate, 29, 67, 16, // Skip to: 14933
/* 10770 */   MCD::OPC_Decode, 135, 14, 241, 1, // Opcode: MUL_Q_H
/* 10775 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10788
/* 10779 */   MCD::OPC_CheckPredicate, 29, 54, 16, // Skip to: 14933
/* 10783 */   MCD::OPC_Decode, 136, 14, 242, 1, // Opcode: MUL_Q_W
/* 10788 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10801
/* 10792 */   MCD::OPC_CheckPredicate, 29, 41, 16, // Skip to: 14933
/* 10796 */   MCD::OPC_Decode, 235, 11, 245, 1, // Opcode: MADD_Q_H
/* 10801 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10814
/* 10805 */   MCD::OPC_CheckPredicate, 29, 28, 16, // Skip to: 14933
/* 10809 */   MCD::OPC_Decode, 236, 11, 246, 1, // Opcode: MADD_Q_W
/* 10814 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10827
/* 10818 */   MCD::OPC_CheckPredicate, 29, 15, 16, // Skip to: 14933
/* 10822 */   MCD::OPC_Decode, 169, 13, 245, 1, // Opcode: MSUB_Q_H
/* 10827 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10840
/* 10831 */   MCD::OPC_CheckPredicate, 29, 2, 16, // Skip to: 14933
/* 10835 */   MCD::OPC_Decode, 170, 13, 246, 1, // Opcode: MSUB_Q_W
/* 10840 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10853
/* 10844 */   MCD::OPC_CheckPredicate, 29, 245, 15, // Skip to: 14933
/* 10848 */   MCD::OPC_Decode, 181, 9, 242, 1, // Opcode: FSOR_W
/* 10853 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10866
/* 10857 */   MCD::OPC_CheckPredicate, 29, 232, 15, // Skip to: 14933
/* 10861 */   MCD::OPC_Decode, 180, 9, 243, 1, // Opcode: FSOR_D
/* 10866 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10879
/* 10870 */   MCD::OPC_CheckPredicate, 29, 219, 15, // Skip to: 14933
/* 10874 */   MCD::OPC_Decode, 205, 9, 242, 1, // Opcode: FSUNE_W
/* 10879 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10892
/* 10883 */   MCD::OPC_CheckPredicate, 29, 206, 15, // Skip to: 14933
/* 10887 */   MCD::OPC_Decode, 204, 9, 243, 1, // Opcode: FSUNE_D
/* 10892 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10905
/* 10896 */   MCD::OPC_CheckPredicate, 29, 193, 15, // Skip to: 14933
/* 10900 */   MCD::OPC_Decode, 179, 9, 242, 1, // Opcode: FSNE_W
/* 10905 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10918
/* 10909 */   MCD::OPC_CheckPredicate, 29, 180, 15, // Skip to: 14933
/* 10913 */   MCD::OPC_Decode, 178, 9, 243, 1, // Opcode: FSNE_D
/* 10918 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10931
/* 10922 */   MCD::OPC_CheckPredicate, 29, 167, 15, // Skip to: 14933
/* 10926 */   MCD::OPC_Decode, 239, 13, 241, 1, // Opcode: MULR_Q_H
/* 10931 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10944
/* 10935 */   MCD::OPC_CheckPredicate, 29, 154, 15, // Skip to: 14933
/* 10939 */   MCD::OPC_Decode, 240, 13, 242, 1, // Opcode: MULR_Q_W
/* 10944 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10957
/* 10948 */   MCD::OPC_CheckPredicate, 29, 141, 15, // Skip to: 14933
/* 10952 */   MCD::OPC_Decode, 219, 11, 245, 1, // Opcode: MADDR_Q_H
/* 10957 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10970
/* 10961 */   MCD::OPC_CheckPredicate, 29, 128, 15, // Skip to: 14933
/* 10965 */   MCD::OPC_Decode, 220, 11, 246, 1, // Opcode: MADDR_Q_W
/* 10970 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10983
/* 10974 */   MCD::OPC_CheckPredicate, 29, 115, 15, // Skip to: 14933
/* 10978 */   MCD::OPC_Decode, 153, 13, 245, 1, // Opcode: MSUBR_Q_H
/* 10983 */   MCD::OPC_FilterValue, 29, 106, 15, // Skip to: 14933
/* 10987 */   MCD::OPC_CheckPredicate, 29, 102, 15, // Skip to: 14933
/* 10991 */   MCD::OPC_Decode, 154, 13, 246, 1, // Opcode: MSUBR_Q_W
/* 10996 */   MCD::OPC_FilterValue, 30, 220, 2, // Skip to: 11732
/* 11000 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 11003 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11016
/* 11007 */   MCD::OPC_CheckPredicate, 29, 82, 15, // Skip to: 14933
/* 11011 */   MCD::OPC_Decode, 217, 1, 240, 1, // Opcode: AND_V
/* 11016 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11029
/* 11020 */   MCD::OPC_CheckPredicate, 29, 69, 15, // Skip to: 14933
/* 11024 */   MCD::OPC_Decode, 190, 14, 240, 1, // Opcode: OR_V
/* 11029 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11042
/* 11033 */   MCD::OPC_CheckPredicate, 29, 56, 15, // Skip to: 14933
/* 11037 */   MCD::OPC_Decode, 174, 14, 240, 1, // Opcode: NOR_V
/* 11042 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11055
/* 11046 */   MCD::OPC_CheckPredicate, 29, 43, 15, // Skip to: 14933
/* 11050 */   MCD::OPC_Decode, 224, 19, 240, 1, // Opcode: XOR_V
/* 11055 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11068
/* 11059 */   MCD::OPC_CheckPredicate, 29, 30, 15, // Skip to: 14933
/* 11063 */   MCD::OPC_Decode, 202, 3, 244, 1, // Opcode: BMNZ_V
/* 11068 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11081
/* 11072 */   MCD::OPC_CheckPredicate, 29, 17, 15, // Skip to: 14933
/* 11076 */   MCD::OPC_Decode, 204, 3, 244, 1, // Opcode: BMZ_V
/* 11081 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11094
/* 11085 */   MCD::OPC_CheckPredicate, 29, 4, 15, // Skip to: 14933
/* 11089 */   MCD::OPC_Decode, 252, 3, 244, 1, // Opcode: BSEL_V
/* 11094 */   MCD::OPC_FilterValue, 24, 211, 0, // Skip to: 11309
/* 11098 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11101 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11114
/* 11105 */   MCD::OPC_CheckPredicate, 29, 240, 14, // Skip to: 14933
/* 11109 */   MCD::OPC_Decode, 237, 8, 156, 2, // Opcode: FILL_B
/* 11114 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11127
/* 11118 */   MCD::OPC_CheckPredicate, 29, 227, 14, // Skip to: 14933
/* 11122 */   MCD::OPC_Decode, 241, 8, 157, 2, // Opcode: FILL_H
/* 11127 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11140
/* 11131 */   MCD::OPC_CheckPredicate, 29, 214, 14, // Skip to: 14933
/* 11135 */   MCD::OPC_Decode, 242, 8, 158, 2, // Opcode: FILL_W
/* 11140 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11153
/* 11144 */   MCD::OPC_CheckPredicate, 36, 201, 14, // Skip to: 14933
/* 11148 */   MCD::OPC_Decode, 238, 8, 159, 2, // Opcode: FILL_D
/* 11153 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11166
/* 11157 */   MCD::OPC_CheckPredicate, 29, 188, 14, // Skip to: 14933
/* 11161 */   MCD::OPC_Decode, 211, 14, 148, 2, // Opcode: PCNT_B
/* 11166 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11179
/* 11170 */   MCD::OPC_CheckPredicate, 29, 175, 14, // Skip to: 14933
/* 11174 */   MCD::OPC_Decode, 213, 14, 160, 2, // Opcode: PCNT_H
/* 11179 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11192
/* 11183 */   MCD::OPC_CheckPredicate, 29, 162, 14, // Skip to: 14933
/* 11187 */   MCD::OPC_Decode, 214, 14, 161, 2, // Opcode: PCNT_W
/* 11192 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11205
/* 11196 */   MCD::OPC_CheckPredicate, 29, 149, 14, // Skip to: 14933
/* 11200 */   MCD::OPC_Decode, 212, 14, 162, 2, // Opcode: PCNT_D
/* 11205 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 11218
/* 11209 */   MCD::OPC_CheckPredicate, 29, 136, 14, // Skip to: 14933
/* 11213 */   MCD::OPC_Decode, 148, 14, 148, 2, // Opcode: NLOC_B
/* 11218 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11231
/* 11222 */   MCD::OPC_CheckPredicate, 29, 123, 14, // Skip to: 14933
/* 11226 */   MCD::OPC_Decode, 150, 14, 160, 2, // Opcode: NLOC_H
/* 11231 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11244
/* 11235 */   MCD::OPC_CheckPredicate, 29, 110, 14, // Skip to: 14933
/* 11239 */   MCD::OPC_Decode, 151, 14, 161, 2, // Opcode: NLOC_W
/* 11244 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11257
/* 11248 */   MCD::OPC_CheckPredicate, 29, 97, 14, // Skip to: 14933
/* 11252 */   MCD::OPC_Decode, 149, 14, 162, 2, // Opcode: NLOC_D
/* 11257 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11270
/* 11261 */   MCD::OPC_CheckPredicate, 29, 84, 14, // Skip to: 14933
/* 11265 */   MCD::OPC_Decode, 152, 14, 148, 2, // Opcode: NLZC_B
/* 11270 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11283
/* 11274 */   MCD::OPC_CheckPredicate, 29, 71, 14, // Skip to: 14933
/* 11278 */   MCD::OPC_Decode, 154, 14, 160, 2, // Opcode: NLZC_H
/* 11283 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11296
/* 11287 */   MCD::OPC_CheckPredicate, 29, 58, 14, // Skip to: 14933
/* 11291 */   MCD::OPC_Decode, 155, 14, 161, 2, // Opcode: NLZC_W
/* 11296 */   MCD::OPC_FilterValue, 15, 49, 14, // Skip to: 14933
/* 11300 */   MCD::OPC_CheckPredicate, 29, 45, 14, // Skip to: 14933
/* 11304 */   MCD::OPC_Decode, 153, 14, 162, 2, // Opcode: NLZC_D
/* 11309 */   MCD::OPC_FilterValue, 25, 36, 14, // Skip to: 14933
/* 11313 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 11316 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11329
/* 11320 */   MCD::OPC_CheckPredicate, 29, 25, 14, // Skip to: 14933
/* 11324 */   MCD::OPC_Decode, 186, 8, 161, 2, // Opcode: FCLASS_W
/* 11329 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11342
/* 11333 */   MCD::OPC_CheckPredicate, 29, 12, 14, // Skip to: 14933
/* 11337 */   MCD::OPC_Decode, 185, 8, 162, 2, // Opcode: FCLASS_D
/* 11342 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 11355
/* 11346 */   MCD::OPC_CheckPredicate, 29, 255, 13, // Skip to: 14933
/* 11350 */   MCD::OPC_Decode, 215, 9, 161, 2, // Opcode: FTRUNC_S_W
/* 11355 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11368
/* 11359 */   MCD::OPC_CheckPredicate, 29, 242, 13, // Skip to: 14933
/* 11363 */   MCD::OPC_Decode, 214, 9, 162, 2, // Opcode: FTRUNC_S_D
/* 11368 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11381
/* 11372 */   MCD::OPC_CheckPredicate, 29, 229, 13, // Skip to: 14933
/* 11376 */   MCD::OPC_Decode, 217, 9, 161, 2, // Opcode: FTRUNC_U_W
/* 11381 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11394
/* 11385 */   MCD::OPC_CheckPredicate, 29, 216, 13, // Skip to: 14933
/* 11389 */   MCD::OPC_Decode, 216, 9, 162, 2, // Opcode: FTRUNC_U_D
/* 11394 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11407
/* 11398 */   MCD::OPC_CheckPredicate, 29, 203, 13, // Skip to: 14933
/* 11402 */   MCD::OPC_Decode, 188, 9, 161, 2, // Opcode: FSQRT_W
/* 11407 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11420
/* 11411 */   MCD::OPC_CheckPredicate, 29, 190, 13, // Skip to: 14933
/* 11415 */   MCD::OPC_Decode, 182, 9, 162, 2, // Opcode: FSQRT_D
/* 11420 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 11433
/* 11424 */   MCD::OPC_CheckPredicate, 29, 177, 13, // Skip to: 14933
/* 11428 */   MCD::OPC_Decode, 169, 9, 161, 2, // Opcode: FRSQRT_W
/* 11433 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11446
/* 11437 */   MCD::OPC_CheckPredicate, 29, 164, 13, // Skip to: 14933
/* 11441 */   MCD::OPC_Decode, 168, 9, 162, 2, // Opcode: FRSQRT_D
/* 11446 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 11459
/* 11450 */   MCD::OPC_CheckPredicate, 29, 151, 13, // Skip to: 14933
/* 11454 */   MCD::OPC_Decode, 165, 9, 161, 2, // Opcode: FRCP_W
/* 11459 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11472
/* 11463 */   MCD::OPC_CheckPredicate, 29, 138, 13, // Skip to: 14933
/* 11467 */   MCD::OPC_Decode, 164, 9, 162, 2, // Opcode: FRCP_D
/* 11472 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11485
/* 11476 */   MCD::OPC_CheckPredicate, 29, 125, 13, // Skip to: 14933
/* 11480 */   MCD::OPC_Decode, 167, 9, 161, 2, // Opcode: FRINT_W
/* 11485 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11498
/* 11489 */   MCD::OPC_CheckPredicate, 29, 112, 13, // Skip to: 14933
/* 11493 */   MCD::OPC_Decode, 166, 9, 162, 2, // Opcode: FRINT_D
/* 11498 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11511
/* 11502 */   MCD::OPC_CheckPredicate, 29, 99, 13, // Skip to: 14933
/* 11506 */   MCD::OPC_Decode, 244, 8, 161, 2, // Opcode: FLOG2_W
/* 11511 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11524
/* 11515 */   MCD::OPC_CheckPredicate, 29, 86, 13, // Skip to: 14933
/* 11519 */   MCD::OPC_Decode, 243, 8, 162, 2, // Opcode: FLOG2_D
/* 11524 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 11537
/* 11528 */   MCD::OPC_CheckPredicate, 29, 73, 13, // Skip to: 14933
/* 11532 */   MCD::OPC_Decode, 226, 8, 163, 2, // Opcode: FEXUPL_W
/* 11537 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 11550
/* 11541 */   MCD::OPC_CheckPredicate, 29, 60, 13, // Skip to: 14933
/* 11545 */   MCD::OPC_Decode, 225, 8, 164, 2, // Opcode: FEXUPL_D
/* 11550 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 11563
/* 11554 */   MCD::OPC_CheckPredicate, 29, 47, 13, // Skip to: 14933
/* 11558 */   MCD::OPC_Decode, 228, 8, 163, 2, // Opcode: FEXUPR_W
/* 11563 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 11576
/* 11567 */   MCD::OPC_CheckPredicate, 29, 34, 13, // Skip to: 14933
/* 11571 */   MCD::OPC_Decode, 227, 8, 164, 2, // Opcode: FEXUPR_D
/* 11576 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11589
/* 11580 */   MCD::OPC_CheckPredicate, 29, 21, 13, // Skip to: 14933
/* 11584 */   MCD::OPC_Decode, 234, 8, 163, 2, // Opcode: FFQL_W
/* 11589 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11602
/* 11593 */   MCD::OPC_CheckPredicate, 29, 8, 13, // Skip to: 14933
/* 11597 */   MCD::OPC_Decode, 233, 8, 164, 2, // Opcode: FFQL_D
/* 11602 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 11615
/* 11606 */   MCD::OPC_CheckPredicate, 29, 251, 12, // Skip to: 14933
/* 11610 */   MCD::OPC_Decode, 236, 8, 163, 2, // Opcode: FFQR_W
/* 11615 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 11628
/* 11619 */   MCD::OPC_CheckPredicate, 29, 238, 12, // Skip to: 14933
/* 11623 */   MCD::OPC_Decode, 235, 8, 164, 2, // Opcode: FFQR_D
/* 11628 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11641
/* 11632 */   MCD::OPC_CheckPredicate, 29, 225, 12, // Skip to: 14933
/* 11636 */   MCD::OPC_Decode, 209, 9, 161, 2, // Opcode: FTINT_S_W
/* 11641 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11654
/* 11645 */   MCD::OPC_CheckPredicate, 29, 212, 12, // Skip to: 14933
/* 11649 */   MCD::OPC_Decode, 208, 9, 162, 2, // Opcode: FTINT_S_D
/* 11654 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11667
/* 11658 */   MCD::OPC_CheckPredicate, 29, 199, 12, // Skip to: 14933
/* 11662 */   MCD::OPC_Decode, 211, 9, 161, 2, // Opcode: FTINT_U_W
/* 11667 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 11680
/* 11671 */   MCD::OPC_CheckPredicate, 29, 186, 12, // Skip to: 14933
/* 11675 */   MCD::OPC_Decode, 210, 9, 162, 2, // Opcode: FTINT_U_D
/* 11680 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11693
/* 11684 */   MCD::OPC_CheckPredicate, 29, 173, 12, // Skip to: 14933
/* 11688 */   MCD::OPC_Decode, 230, 8, 161, 2, // Opcode: FFINT_S_W
/* 11693 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 11706
/* 11697 */   MCD::OPC_CheckPredicate, 29, 160, 12, // Skip to: 14933
/* 11701 */   MCD::OPC_Decode, 229, 8, 162, 2, // Opcode: FFINT_S_D
/* 11706 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11719
/* 11710 */   MCD::OPC_CheckPredicate, 29, 147, 12, // Skip to: 14933
/* 11714 */   MCD::OPC_Decode, 232, 8, 161, 2, // Opcode: FFINT_U_W
/* 11719 */   MCD::OPC_FilterValue, 31, 138, 12, // Skip to: 14933
/* 11723 */   MCD::OPC_CheckPredicate, 29, 134, 12, // Skip to: 14933
/* 11727 */   MCD::OPC_Decode, 231, 8, 162, 2, // Opcode: FFINT_U_D
/* 11732 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 11745
/* 11736 */   MCD::OPC_CheckPredicate, 29, 121, 12, // Skip to: 14933
/* 11740 */   MCD::OPC_Decode, 225, 10, 165, 2, // Opcode: LD_B
/* 11745 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 11758
/* 11749 */   MCD::OPC_CheckPredicate, 29, 108, 12, // Skip to: 14933
/* 11753 */   MCD::OPC_Decode, 228, 10, 165, 2, // Opcode: LD_H
/* 11758 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 11771
/* 11762 */   MCD::OPC_CheckPredicate, 29, 95, 12, // Skip to: 14933
/* 11766 */   MCD::OPC_Decode, 229, 10, 165, 2, // Opcode: LD_W
/* 11771 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 11784
/* 11775 */   MCD::OPC_CheckPredicate, 29, 82, 12, // Skip to: 14933
/* 11779 */   MCD::OPC_Decode, 226, 10, 165, 2, // Opcode: LD_D
/* 11784 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 11797
/* 11788 */   MCD::OPC_CheckPredicate, 29, 69, 12, // Skip to: 14933
/* 11792 */   MCD::OPC_Decode, 237, 17, 165, 2, // Opcode: ST_B
/* 11797 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 11810
/* 11801 */   MCD::OPC_CheckPredicate, 29, 56, 12, // Skip to: 14933
/* 11805 */   MCD::OPC_Decode, 240, 17, 165, 2, // Opcode: ST_H
/* 11810 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 11823
/* 11814 */   MCD::OPC_CheckPredicate, 29, 43, 12, // Skip to: 14933
/* 11818 */   MCD::OPC_Decode, 241, 17, 165, 2, // Opcode: ST_W
/* 11823 */   MCD::OPC_FilterValue, 39, 34, 12, // Skip to: 14933
/* 11827 */   MCD::OPC_CheckPredicate, 29, 30, 12, // Skip to: 14933
/* 11831 */   MCD::OPC_Decode, 238, 17, 165, 2, // Opcode: ST_D
/* 11836 */   MCD::OPC_FilterValue, 31, 235, 10, // Skip to: 14635
/* 11840 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 11843 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11856
/* 11847 */   MCD::OPC_CheckPredicate, 28, 10, 12, // Skip to: 14933
/* 11851 */   MCD::OPC_Decode, 134, 8, 166, 2, // Opcode: EXT
/* 11856 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11869
/* 11860 */   MCD::OPC_CheckPredicate, 28, 253, 11, // Skip to: 14933
/* 11864 */   MCD::OPC_Decode, 247, 9, 167, 2, // Opcode: INS
/* 11869 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 11888
/* 11873 */   MCD::OPC_CheckPredicate, 41, 240, 11, // Skip to: 14933
/* 11877 */   MCD::OPC_CheckField, 6, 5, 0, 234, 11, // Skip to: 14933
/* 11883 */   MCD::OPC_Decode, 163, 9, 168, 2, // Opcode: FORK
/* 11888 */   MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 11912
/* 11892 */   MCD::OPC_CheckPredicate, 41, 221, 11, // Skip to: 14933
/* 11896 */   MCD::OPC_CheckField, 16, 5, 0, 215, 11, // Skip to: 14933
/* 11902 */   MCD::OPC_CheckField, 6, 5, 0, 209, 11, // Skip to: 14933
/* 11908 */   MCD::OPC_Decode, 232, 19, 14, // Opcode: YIELD
/* 11912 */   MCD::OPC_FilterValue, 10, 42, 0, // Skip to: 11958
/* 11916 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11919 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11932
/* 11923 */   MCD::OPC_CheckPredicate, 35, 190, 11, // Skip to: 14933
/* 11927 */   MCD::OPC_Decode, 183, 11, 169, 2, // Opcode: LWX
/* 11932 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11945
/* 11936 */   MCD::OPC_CheckPredicate, 35, 177, 11, // Skip to: 14933
/* 11940 */   MCD::OPC_Decode, 238, 10, 169, 2, // Opcode: LHX
/* 11945 */   MCD::OPC_FilterValue, 6, 168, 11, // Skip to: 14933
/* 11949 */   MCD::OPC_CheckPredicate, 35, 164, 11, // Skip to: 14933
/* 11953 */   MCD::OPC_Decode, 196, 10, 169, 2, // Opcode: LBUX
/* 11958 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11977
/* 11962 */   MCD::OPC_CheckPredicate, 35, 151, 11, // Skip to: 14933
/* 11966 */   MCD::OPC_CheckField, 6, 10, 0, 145, 11, // Skip to: 14933
/* 11972 */   MCD::OPC_Decode, 138, 10, 170, 2, // Opcode: INSV
/* 11977 */   MCD::OPC_FilterValue, 16, 60, 1, // Skip to: 12297
/* 11981 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11984 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11997
/* 11988 */   MCD::OPC_CheckPredicate, 35, 125, 11, // Skip to: 14933
/* 11992 */   MCD::OPC_Decode, 173, 1, 171, 2, // Opcode: ADDU_QB
/* 11997 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12010
/* 12001 */   MCD::OPC_CheckPredicate, 35, 112, 11, // Skip to: 14933
/* 12005 */   MCD::OPC_Decode, 154, 18, 171, 2, // Opcode: SUBU_QB
/* 12010 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12023
/* 12014 */   MCD::OPC_CheckPredicate, 35, 99, 11, // Skip to: 14933
/* 12018 */   MCD::OPC_Decode, 177, 1, 171, 2, // Opcode: ADDU_S_QB
/* 12023 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12036
/* 12027 */   MCD::OPC_CheckPredicate, 35, 86, 11, // Skip to: 14933
/* 12031 */   MCD::OPC_Decode, 158, 18, 171, 2, // Opcode: SUBU_S_QB
/* 12036 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12049
/* 12040 */   MCD::OPC_CheckPredicate, 35, 73, 11, // Skip to: 14933
/* 12044 */   MCD::OPC_Decode, 224, 13, 171, 2, // Opcode: MULEU_S_PH_QBL
/* 12049 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 12062
/* 12053 */   MCD::OPC_CheckPredicate, 35, 60, 11, // Skip to: 14933
/* 12057 */   MCD::OPC_Decode, 226, 13, 171, 2, // Opcode: MULEU_S_PH_QBR
/* 12062 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 12075
/* 12066 */   MCD::OPC_CheckPredicate, 67, 47, 11, // Skip to: 14933
/* 12070 */   MCD::OPC_Decode, 171, 1, 171, 2, // Opcode: ADDU_PH
/* 12075 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12088
/* 12079 */   MCD::OPC_CheckPredicate, 67, 34, 11, // Skip to: 14933
/* 12083 */   MCD::OPC_Decode, 152, 18, 171, 2, // Opcode: SUBU_PH
/* 12088 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 12101
/* 12092 */   MCD::OPC_CheckPredicate, 35, 21, 11, // Skip to: 14933
/* 12096 */   MCD::OPC_Decode, 144, 1, 171, 2, // Opcode: ADDQ_PH
/* 12101 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12114
/* 12105 */   MCD::OPC_CheckPredicate, 35, 8, 11, // Skip to: 14933
/* 12109 */   MCD::OPC_Decode, 251, 17, 171, 2, // Opcode: SUBQ_PH
/* 12114 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12127
/* 12118 */   MCD::OPC_CheckPredicate, 67, 251, 10, // Skip to: 14933
/* 12122 */   MCD::OPC_Decode, 175, 1, 171, 2, // Opcode: ADDU_S_PH
/* 12127 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12140
/* 12131 */   MCD::OPC_CheckPredicate, 67, 238, 10, // Skip to: 14933
/* 12135 */   MCD::OPC_Decode, 156, 18, 171, 2, // Opcode: SUBU_S_PH
/* 12140 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12153
/* 12144 */   MCD::OPC_CheckPredicate, 35, 225, 10, // Skip to: 14933
/* 12148 */   MCD::OPC_Decode, 146, 1, 171, 2, // Opcode: ADDQ_S_PH
/* 12153 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12166
/* 12157 */   MCD::OPC_CheckPredicate, 35, 212, 10, // Skip to: 14933
/* 12161 */   MCD::OPC_Decode, 253, 17, 171, 2, // Opcode: SUBQ_S_PH
/* 12166 */   MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 12178
/* 12170 */   MCD::OPC_CheckPredicate, 35, 199, 10, // Skip to: 14933
/* 12174 */   MCD::OPC_Decode, 150, 1, 49, // Opcode: ADDSC
/* 12178 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 12190
/* 12182 */   MCD::OPC_CheckPredicate, 35, 187, 10, // Skip to: 14933
/* 12186 */   MCD::OPC_Decode, 187, 1, 49, // Opcode: ADDWC
/* 12190 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 12202
/* 12194 */   MCD::OPC_CheckPredicate, 35, 175, 10, // Skip to: 14933
/* 12198 */   MCD::OPC_Decode, 214, 12, 49, // Opcode: MODSUB
/* 12202 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 12221
/* 12206 */   MCD::OPC_CheckPredicate, 35, 163, 10, // Skip to: 14933
/* 12210 */   MCD::OPC_CheckField, 16, 5, 0, 157, 10, // Skip to: 14933
/* 12216 */   MCD::OPC_Decode, 190, 15, 172, 2, // Opcode: RADDU_W_QB
/* 12221 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12233
/* 12225 */   MCD::OPC_CheckPredicate, 35, 144, 10, // Skip to: 14933
/* 12229 */   MCD::OPC_Decode, 148, 1, 49, // Opcode: ADDQ_S_W
/* 12233 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 12245
/* 12237 */   MCD::OPC_CheckPredicate, 35, 132, 10, // Skip to: 14933
/* 12241 */   MCD::OPC_Decode, 255, 17, 49, // Opcode: SUBQ_S_W
/* 12245 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 12258
/* 12249 */   MCD::OPC_CheckPredicate, 35, 120, 10, // Skip to: 14933
/* 12253 */   MCD::OPC_Decode, 220, 13, 173, 2, // Opcode: MULEQ_S_W_PHL
/* 12258 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 12271
/* 12262 */   MCD::OPC_CheckPredicate, 35, 107, 10, // Skip to: 14933
/* 12266 */   MCD::OPC_Decode, 222, 13, 173, 2, // Opcode: MULEQ_S_W_PHR
/* 12271 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 12284
/* 12275 */   MCD::OPC_CheckPredicate, 67, 94, 10, // Skip to: 14933
/* 12279 */   MCD::OPC_Decode, 235, 13, 171, 2, // Opcode: MULQ_S_PH
/* 12284 */   MCD::OPC_FilterValue, 31, 85, 10, // Skip to: 14933
/* 12288 */   MCD::OPC_CheckPredicate, 35, 81, 10, // Skip to: 14933
/* 12292 */   MCD::OPC_Decode, 231, 13, 171, 2, // Opcode: MULQ_RS_PH
/* 12297 */   MCD::OPC_FilterValue, 17, 63, 1, // Skip to: 12620
/* 12301 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12304 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 12322
/* 12308 */   MCD::OPC_CheckPredicate, 35, 61, 10, // Skip to: 14933
/* 12312 */   MCD::OPC_CheckField, 11, 5, 0, 55, 10, // Skip to: 14933
/* 12318 */   MCD::OPC_Decode, 132, 5, 62, // Opcode: CMPU_EQ_QB
/* 12322 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12340
/* 12326 */   MCD::OPC_CheckPredicate, 35, 43, 10, // Skip to: 14933
/* 12330 */   MCD::OPC_CheckField, 11, 5, 0, 37, 10, // Skip to: 14933
/* 12336 */   MCD::OPC_Decode, 136, 5, 62, // Opcode: CMPU_LT_QB
/* 12340 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 12358
/* 12344 */   MCD::OPC_CheckPredicate, 35, 25, 10, // Skip to: 14933
/* 12348 */   MCD::OPC_CheckField, 11, 5, 0, 19, 10, // Skip to: 14933
/* 12354 */   MCD::OPC_Decode, 134, 5, 62, // Opcode: CMPU_LE_QB
/* 12358 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12371
/* 12362 */   MCD::OPC_CheckPredicate, 35, 7, 10, // Skip to: 14933
/* 12366 */   MCD::OPC_Decode, 217, 14, 171, 2, // Opcode: PICK_QB
/* 12371 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12384
/* 12375 */   MCD::OPC_CheckPredicate, 35, 250, 9, // Skip to: 14933
/* 12379 */   MCD::OPC_Decode, 254, 4, 173, 2, // Opcode: CMPGU_EQ_QB
/* 12384 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12397
/* 12388 */   MCD::OPC_CheckPredicate, 35, 237, 9, // Skip to: 14933
/* 12392 */   MCD::OPC_Decode, 130, 5, 173, 2, // Opcode: CMPGU_LT_QB
/* 12397 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12410
/* 12401 */   MCD::OPC_CheckPredicate, 35, 224, 9, // Skip to: 14933
/* 12405 */   MCD::OPC_Decode, 128, 5, 173, 2, // Opcode: CMPGU_LE_QB
/* 12410 */   MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 12428
/* 12414 */   MCD::OPC_CheckPredicate, 35, 211, 9, // Skip to: 14933
/* 12418 */   MCD::OPC_CheckField, 11, 5, 0, 205, 9, // Skip to: 14933
/* 12424 */   MCD::OPC_Decode, 142, 5, 62, // Opcode: CMP_EQ_PH
/* 12428 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12446
/* 12432 */   MCD::OPC_CheckPredicate, 35, 193, 9, // Skip to: 14933
/* 12436 */   MCD::OPC_CheckField, 11, 5, 0, 187, 9, // Skip to: 14933
/* 12442 */   MCD::OPC_Decode, 156, 5, 62, // Opcode: CMP_LT_PH
/* 12446 */   MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 12464
/* 12450 */   MCD::OPC_CheckPredicate, 35, 175, 9, // Skip to: 14933
/* 12454 */   MCD::OPC_CheckField, 11, 5, 0, 169, 9, // Skip to: 14933
/* 12460 */   MCD::OPC_Decode, 150, 5, 62, // Opcode: CMP_LE_PH
/* 12464 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12477
/* 12468 */   MCD::OPC_CheckPredicate, 35, 157, 9, // Skip to: 14933
/* 12472 */   MCD::OPC_Decode, 215, 14, 171, 2, // Opcode: PICK_PH
/* 12477 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12490
/* 12481 */   MCD::OPC_CheckPredicate, 35, 144, 9, // Skip to: 14933
/* 12485 */   MCD::OPC_Decode, 244, 14, 171, 2, // Opcode: PRECRQ_QB_PH
/* 12490 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12503
/* 12494 */   MCD::OPC_CheckPredicate, 67, 131, 9, // Skip to: 14933
/* 12498 */   MCD::OPC_Decode, 248, 14, 171, 2, // Opcode: PRECR_QB_PH
/* 12503 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12516
/* 12507 */   MCD::OPC_CheckPredicate, 35, 118, 9, // Skip to: 14933
/* 12511 */   MCD::OPC_Decode, 198, 14, 171, 2, // Opcode: PACKRL_PH
/* 12516 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12529
/* 12520 */   MCD::OPC_CheckPredicate, 35, 105, 9, // Skip to: 14933
/* 12524 */   MCD::OPC_Decode, 240, 14, 171, 2, // Opcode: PRECRQU_S_QB_PH
/* 12529 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 12542
/* 12533 */   MCD::OPC_CheckPredicate, 35, 92, 9, // Skip to: 14933
/* 12537 */   MCD::OPC_Decode, 242, 14, 174, 2, // Opcode: PRECRQ_PH_W
/* 12542 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 12555
/* 12546 */   MCD::OPC_CheckPredicate, 35, 79, 9, // Skip to: 14933
/* 12550 */   MCD::OPC_Decode, 246, 14, 174, 2, // Opcode: PRECRQ_RS_PH_W
/* 12555 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 12568
/* 12559 */   MCD::OPC_CheckPredicate, 67, 66, 9, // Skip to: 14933
/* 12563 */   MCD::OPC_Decode, 248, 4, 173, 2, // Opcode: CMPGDU_EQ_QB
/* 12568 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 12581
/* 12572 */   MCD::OPC_CheckPredicate, 67, 53, 9, // Skip to: 14933
/* 12576 */   MCD::OPC_Decode, 252, 4, 173, 2, // Opcode: CMPGDU_LT_QB
/* 12581 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 12594
/* 12585 */   MCD::OPC_CheckPredicate, 67, 40, 9, // Skip to: 14933
/* 12589 */   MCD::OPC_Decode, 250, 4, 173, 2, // Opcode: CMPGDU_LE_QB
/* 12594 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 12607
/* 12598 */   MCD::OPC_CheckPredicate, 67, 27, 9, // Skip to: 14933
/* 12602 */   MCD::OPC_Decode, 250, 14, 175, 2, // Opcode: PRECR_SRA_PH_W
/* 12607 */   MCD::OPC_FilterValue, 31, 18, 9, // Skip to: 14933
/* 12611 */   MCD::OPC_CheckPredicate, 67, 14, 9, // Skip to: 14933
/* 12615 */   MCD::OPC_Decode, 252, 14, 175, 2, // Opcode: PRECR_SRA_R_PH_W
/* 12620 */   MCD::OPC_FilterValue, 18, 73, 1, // Skip to: 12953
/* 12624 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12627 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12645
/* 12631 */   MCD::OPC_CheckPredicate, 67, 250, 8, // Skip to: 14933
/* 12635 */   MCD::OPC_CheckField, 21, 5, 0, 244, 8, // Skip to: 14933
/* 12641 */   MCD::OPC_Decode, 121, 176, 2, // Opcode: ABSQ_S_QB
/* 12645 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12658
/* 12649 */   MCD::OPC_CheckPredicate, 35, 232, 8, // Skip to: 14933
/* 12653 */   MCD::OPC_Decode, 211, 15, 177, 2, // Opcode: REPL_QB
/* 12658 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 12677
/* 12662 */   MCD::OPC_CheckPredicate, 35, 219, 8, // Skip to: 14933
/* 12666 */   MCD::OPC_CheckField, 21, 5, 0, 213, 8, // Skip to: 14933
/* 12672 */   MCD::OPC_Decode, 207, 15, 178, 2, // Opcode: REPLV_QB
/* 12677 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 12696
/* 12681 */   MCD::OPC_CheckPredicate, 35, 200, 8, // Skip to: 14933
/* 12685 */   MCD::OPC_CheckField, 21, 5, 0, 194, 8, // Skip to: 14933
/* 12691 */   MCD::OPC_Decode, 220, 14, 176, 2, // Opcode: PRECEQU_PH_QBL
/* 12696 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 12715
/* 12700 */   MCD::OPC_CheckPredicate, 35, 181, 8, // Skip to: 14933
/* 12704 */   MCD::OPC_CheckField, 21, 5, 0, 175, 8, // Skip to: 14933
/* 12710 */   MCD::OPC_Decode, 224, 14, 176, 2, // Opcode: PRECEQU_PH_QBR
/* 12715 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 12734
/* 12719 */   MCD::OPC_CheckPredicate, 35, 162, 8, // Skip to: 14933
/* 12723 */   MCD::OPC_CheckField, 21, 5, 0, 156, 8, // Skip to: 14933
/* 12729 */   MCD::OPC_Decode, 221, 14, 176, 2, // Opcode: PRECEQU_PH_QBLA
/* 12734 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 12753
/* 12738 */   MCD::OPC_CheckPredicate, 35, 143, 8, // Skip to: 14933
/* 12742 */   MCD::OPC_CheckField, 21, 5, 0, 137, 8, // Skip to: 14933
/* 12748 */   MCD::OPC_Decode, 225, 14, 176, 2, // Opcode: PRECEQU_PH_QBRA
/* 12753 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12771
/* 12757 */   MCD::OPC_CheckPredicate, 35, 124, 8, // Skip to: 14933
/* 12761 */   MCD::OPC_CheckField, 21, 5, 0, 118, 8, // Skip to: 14933
/* 12767 */   MCD::OPC_Decode, 119, 176, 2, // Opcode: ABSQ_S_PH
/* 12771 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12783
/* 12775 */   MCD::OPC_CheckPredicate, 35, 106, 8, // Skip to: 14933
/* 12779 */   MCD::OPC_Decode, 209, 15, 82, // Opcode: REPL_PH
/* 12783 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 12802
/* 12787 */   MCD::OPC_CheckPredicate, 35, 94, 8, // Skip to: 14933
/* 12791 */   MCD::OPC_CheckField, 21, 5, 0, 88, 8, // Skip to: 14933
/* 12797 */   MCD::OPC_Decode, 205, 15, 178, 2, // Opcode: REPLV_PH
/* 12802 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 12821
/* 12806 */   MCD::OPC_CheckPredicate, 35, 75, 8, // Skip to: 14933
/* 12810 */   MCD::OPC_CheckField, 21, 5, 0, 69, 8, // Skip to: 14933
/* 12816 */   MCD::OPC_Decode, 228, 14, 179, 2, // Opcode: PRECEQ_W_PHL
/* 12821 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 12840
/* 12825 */   MCD::OPC_CheckPredicate, 35, 56, 8, // Skip to: 14933
/* 12829 */   MCD::OPC_CheckField, 21, 5, 0, 50, 8, // Skip to: 14933
/* 12835 */   MCD::OPC_Decode, 230, 14, 179, 2, // Opcode: PRECEQ_W_PHR
/* 12840 */   MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 12858
/* 12844 */   MCD::OPC_CheckPredicate, 35, 37, 8, // Skip to: 14933
/* 12848 */   MCD::OPC_CheckField, 21, 5, 0, 31, 8, // Skip to: 14933
/* 12854 */   MCD::OPC_Decode, 123, 180, 2, // Opcode: ABSQ_S_W
/* 12858 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 12877
/* 12862 */   MCD::OPC_CheckPredicate, 35, 19, 8, // Skip to: 14933
/* 12866 */   MCD::OPC_CheckField, 21, 5, 0, 13, 8, // Skip to: 14933
/* 12872 */   MCD::OPC_Decode, 153, 3, 180, 2, // Opcode: BITREV
/* 12877 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 12896
/* 12881 */   MCD::OPC_CheckPredicate, 35, 0, 8, // Skip to: 14933
/* 12885 */   MCD::OPC_CheckField, 21, 5, 0, 250, 7, // Skip to: 14933
/* 12891 */   MCD::OPC_Decode, 232, 14, 176, 2, // Opcode: PRECEU_PH_QBL
/* 12896 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 12915
/* 12900 */   MCD::OPC_CheckPredicate, 35, 237, 7, // Skip to: 14933
/* 12904 */   MCD::OPC_CheckField, 21, 5, 0, 231, 7, // Skip to: 14933
/* 12910 */   MCD::OPC_Decode, 236, 14, 176, 2, // Opcode: PRECEU_PH_QBR
/* 12915 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 12934
/* 12919 */   MCD::OPC_CheckPredicate, 35, 218, 7, // Skip to: 14933
/* 12923 */   MCD::OPC_CheckField, 21, 5, 0, 212, 7, // Skip to: 14933
/* 12929 */   MCD::OPC_Decode, 233, 14, 176, 2, // Opcode: PRECEU_PH_QBLA
/* 12934 */   MCD::OPC_FilterValue, 31, 203, 7, // Skip to: 14933
/* 12938 */   MCD::OPC_CheckPredicate, 35, 199, 7, // Skip to: 14933
/* 12942 */   MCD::OPC_CheckField, 21, 5, 0, 193, 7, // Skip to: 14933
/* 12948 */   MCD::OPC_Decode, 237, 14, 176, 2, // Opcode: PRECEU_PH_QBRA
/* 12953 */   MCD::OPC_FilterValue, 19, 31, 1, // Skip to: 13244
/* 12957 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12960 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 12973
/* 12964 */   MCD::OPC_CheckPredicate, 35, 173, 7, // Skip to: 14933
/* 12968 */   MCD::OPC_Decode, 224, 16, 181, 2, // Opcode: SHLL_QB
/* 12973 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12986
/* 12977 */   MCD::OPC_CheckPredicate, 35, 160, 7, // Skip to: 14933
/* 12981 */   MCD::OPC_Decode, 128, 17, 181, 2, // Opcode: SHRL_QB
/* 12986 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12999
/* 12990 */   MCD::OPC_CheckPredicate, 35, 147, 7, // Skip to: 14933
/* 12994 */   MCD::OPC_Decode, 216, 16, 182, 2, // Opcode: SHLLV_QB
/* 12999 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 13012
/* 13003 */   MCD::OPC_CheckPredicate, 35, 134, 7, // Skip to: 14933
/* 13007 */   MCD::OPC_Decode, 252, 16, 182, 2, // Opcode: SHRLV_QB
/* 13012 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 13025
/* 13016 */   MCD::OPC_CheckPredicate, 67, 121, 7, // Skip to: 14933
/* 13020 */   MCD::OPC_Decode, 242, 16, 181, 2, // Opcode: SHRA_QB
/* 13025 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 13038
/* 13029 */   MCD::OPC_CheckPredicate, 67, 108, 7, // Skip to: 14933
/* 13033 */   MCD::OPC_Decode, 246, 16, 181, 2, // Opcode: SHRA_R_QB
/* 13038 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 13051
/* 13042 */   MCD::OPC_CheckPredicate, 67, 95, 7, // Skip to: 14933
/* 13046 */   MCD::OPC_Decode, 232, 16, 182, 2, // Opcode: SHRAV_QB
/* 13051 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 13064
/* 13055 */   MCD::OPC_CheckPredicate, 67, 82, 7, // Skip to: 14933
/* 13059 */   MCD::OPC_Decode, 236, 16, 182, 2, // Opcode: SHRAV_R_QB
/* 13064 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 13077
/* 13068 */   MCD::OPC_CheckPredicate, 35, 69, 7, // Skip to: 14933
/* 13072 */   MCD::OPC_Decode, 222, 16, 181, 2, // Opcode: SHLL_PH
/* 13077 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 13090
/* 13081 */   MCD::OPC_CheckPredicate, 35, 56, 7, // Skip to: 14933
/* 13085 */   MCD::OPC_Decode, 240, 16, 181, 2, // Opcode: SHRA_PH
/* 13090 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 13103
/* 13094 */   MCD::OPC_CheckPredicate, 35, 43, 7, // Skip to: 14933
/* 13098 */   MCD::OPC_Decode, 214, 16, 182, 2, // Opcode: SHLLV_PH
/* 13103 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 13116
/* 13107 */   MCD::OPC_CheckPredicate, 35, 30, 7, // Skip to: 14933
/* 13111 */   MCD::OPC_Decode, 230, 16, 182, 2, // Opcode: SHRAV_PH
/* 13116 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 13129
/* 13120 */   MCD::OPC_CheckPredicate, 35, 17, 7, // Skip to: 14933
/* 13124 */   MCD::OPC_Decode, 226, 16, 181, 2, // Opcode: SHLL_S_PH
/* 13129 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 13142
/* 13133 */   MCD::OPC_CheckPredicate, 35, 4, 7, // Skip to: 14933
/* 13137 */   MCD::OPC_Decode, 244, 16, 181, 2, // Opcode: SHRA_R_PH
/* 13142 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 13155
/* 13146 */   MCD::OPC_CheckPredicate, 35, 247, 6, // Skip to: 14933
/* 13150 */   MCD::OPC_Decode, 218, 16, 182, 2, // Opcode: SHLLV_S_PH
/* 13155 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 13168
/* 13159 */   MCD::OPC_CheckPredicate, 35, 234, 6, // Skip to: 14933
/* 13163 */   MCD::OPC_Decode, 234, 16, 182, 2, // Opcode: SHRAV_R_PH
/* 13168 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 13181
/* 13172 */   MCD::OPC_CheckPredicate, 35, 221, 6, // Skip to: 14933
/* 13176 */   MCD::OPC_Decode, 228, 16, 183, 2, // Opcode: SHLL_S_W
/* 13181 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 13194
/* 13185 */   MCD::OPC_CheckPredicate, 35, 208, 6, // Skip to: 14933
/* 13189 */   MCD::OPC_Decode, 248, 16, 183, 2, // Opcode: SHRA_R_W
/* 13194 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 13206
/* 13198 */   MCD::OPC_CheckPredicate, 35, 195, 6, // Skip to: 14933
/* 13202 */   MCD::OPC_Decode, 220, 16, 43, // Opcode: SHLLV_S_W
/* 13206 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 13218
/* 13210 */   MCD::OPC_CheckPredicate, 35, 183, 6, // Skip to: 14933
/* 13214 */   MCD::OPC_Decode, 238, 16, 43, // Opcode: SHRAV_R_W
/* 13218 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 13231
/* 13222 */   MCD::OPC_CheckPredicate, 67, 171, 6, // Skip to: 14933
/* 13226 */   MCD::OPC_Decode, 254, 16, 181, 2, // Opcode: SHRL_PH
/* 13231 */   MCD::OPC_FilterValue, 27, 162, 6, // Skip to: 14933
/* 13235 */   MCD::OPC_CheckPredicate, 67, 158, 6, // Skip to: 14933
/* 13239 */   MCD::OPC_Decode, 250, 16, 182, 2, // Opcode: SHRLV_PH
/* 13244 */   MCD::OPC_FilterValue, 24, 205, 0, // Skip to: 13453
/* 13248 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13251 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 13264
/* 13255 */   MCD::OPC_CheckPredicate, 67, 138, 6, // Skip to: 14933
/* 13259 */   MCD::OPC_Decode, 166, 1, 171, 2, // Opcode: ADDUH_QB
/* 13264 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 13277
/* 13268 */   MCD::OPC_CheckPredicate, 67, 125, 6, // Skip to: 14933
/* 13272 */   MCD::OPC_Decode, 147, 18, 171, 2, // Opcode: SUBUH_QB
/* 13277 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 13290
/* 13281 */   MCD::OPC_CheckPredicate, 67, 112, 6, // Skip to: 14933
/* 13285 */   MCD::OPC_Decode, 168, 1, 171, 2, // Opcode: ADDUH_R_QB
/* 13290 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 13303
/* 13294 */   MCD::OPC_CheckPredicate, 67, 99, 6, // Skip to: 14933
/* 13298 */   MCD::OPC_Decode, 149, 18, 171, 2, // Opcode: SUBUH_R_QB
/* 13303 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 13316
/* 13307 */   MCD::OPC_CheckPredicate, 67, 86, 6, // Skip to: 14933
/* 13311 */   MCD::OPC_Decode, 136, 1, 171, 2, // Opcode: ADDQH_PH
/* 13316 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 13329
/* 13320 */   MCD::OPC_CheckPredicate, 67, 73, 6, // Skip to: 14933
/* 13324 */   MCD::OPC_Decode, 243, 17, 171, 2, // Opcode: SUBQH_PH
/* 13329 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 13342
/* 13333 */   MCD::OPC_CheckPredicate, 67, 60, 6, // Skip to: 14933
/* 13337 */   MCD::OPC_Decode, 138, 1, 171, 2, // Opcode: ADDQH_R_PH
/* 13342 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 13355
/* 13346 */   MCD::OPC_CheckPredicate, 67, 47, 6, // Skip to: 14933
/* 13350 */   MCD::OPC_Decode, 245, 17, 171, 2, // Opcode: SUBQH_R_PH
/* 13355 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 13368
/* 13359 */   MCD::OPC_CheckPredicate, 67, 34, 6, // Skip to: 14933
/* 13363 */   MCD::OPC_Decode, 133, 14, 171, 2, // Opcode: MUL_PH
/* 13368 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 13381
/* 13372 */   MCD::OPC_CheckPredicate, 67, 21, 6, // Skip to: 14933
/* 13376 */   MCD::OPC_Decode, 138, 14, 171, 2, // Opcode: MUL_S_PH
/* 13381 */   MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 13393
/* 13385 */   MCD::OPC_CheckPredicate, 67, 8, 6, // Skip to: 14933
/* 13389 */   MCD::OPC_Decode, 142, 1, 49, // Opcode: ADDQH_W
/* 13393 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 13405
/* 13397 */   MCD::OPC_CheckPredicate, 67, 252, 5, // Skip to: 14933
/* 13401 */   MCD::OPC_Decode, 249, 17, 49, // Opcode: SUBQH_W
/* 13405 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 13417
/* 13409 */   MCD::OPC_CheckPredicate, 67, 240, 5, // Skip to: 14933
/* 13413 */   MCD::OPC_Decode, 140, 1, 49, // Opcode: ADDQH_R_W
/* 13417 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 13429
/* 13421 */   MCD::OPC_CheckPredicate, 67, 228, 5, // Skip to: 14933
/* 13425 */   MCD::OPC_Decode, 247, 17, 49, // Opcode: SUBQH_R_W
/* 13429 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 13441
/* 13433 */   MCD::OPC_CheckPredicate, 67, 216, 5, // Skip to: 14933
/* 13437 */   MCD::OPC_Decode, 237, 13, 49, // Opcode: MULQ_S_W
/* 13441 */   MCD::OPC_FilterValue, 23, 208, 5, // Skip to: 14933
/* 13445 */   MCD::OPC_CheckPredicate, 67, 204, 5, // Skip to: 14933
/* 13449 */   MCD::OPC_Decode, 233, 13, 49, // Opcode: MULQ_RS_W
/* 13453 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 13472
/* 13457 */   MCD::OPC_CheckPredicate, 68, 192, 5, // Skip to: 14933
/* 13461 */   MCD::OPC_CheckField, 6, 1, 0, 186, 5, // Skip to: 14933
/* 13467 */   MCD::OPC_Decode, 164, 11, 184, 2, // Opcode: LWLE
/* 13472 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13491
/* 13476 */   MCD::OPC_CheckPredicate, 68, 173, 5, // Skip to: 14933
/* 13480 */   MCD::OPC_CheckField, 6, 1, 0, 167, 5, // Skip to: 14933
/* 13486 */   MCD::OPC_Decode, 177, 11, 184, 2, // Opcode: LWRE
/* 13491 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 13510
/* 13495 */   MCD::OPC_CheckPredicate, 69, 154, 5, // Skip to: 14933
/* 13499 */   MCD::OPC_CheckField, 6, 1, 0, 148, 5, // Skip to: 14933
/* 13505 */   MCD::OPC_Decode, 170, 4, 185, 2, // Opcode: CACHEE
/* 13510 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 13529
/* 13514 */   MCD::OPC_CheckPredicate, 69, 135, 5, // Skip to: 14933
/* 13518 */   MCD::OPC_CheckField, 6, 1, 0, 129, 5, // Skip to: 14933
/* 13524 */   MCD::OPC_Decode, 130, 16, 184, 2, // Opcode: SBE
/* 13529 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 13548
/* 13533 */   MCD::OPC_CheckPredicate, 69, 116, 5, // Skip to: 14933
/* 13537 */   MCD::OPC_CheckField, 6, 1, 0, 110, 5, // Skip to: 14933
/* 13543 */   MCD::OPC_Decode, 204, 16, 184, 2, // Opcode: SHE
/* 13548 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 13567
/* 13552 */   MCD::OPC_CheckPredicate, 42, 97, 5, // Skip to: 14933
/* 13556 */   MCD::OPC_CheckField, 6, 1, 0, 91, 5, // Skip to: 14933
/* 13562 */   MCD::OPC_Decode, 140, 16, 184, 2, // Opcode: SCE
/* 13567 */   MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 13586
/* 13571 */   MCD::OPC_CheckPredicate, 42, 78, 5, // Skip to: 14933
/* 13575 */   MCD::OPC_CheckField, 6, 1, 0, 72, 5, // Skip to: 14933
/* 13581 */   MCD::OPC_Decode, 187, 18, 184, 2, // Opcode: SWE
/* 13586 */   MCD::OPC_FilterValue, 32, 60, 0, // Skip to: 13650
/* 13590 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13593 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13612
/* 13597 */   MCD::OPC_CheckPredicate, 28, 52, 5, // Skip to: 14933
/* 13601 */   MCD::OPC_CheckField, 21, 5, 0, 46, 5, // Skip to: 14933
/* 13607 */   MCD::OPC_Decode, 213, 19, 180, 2, // Opcode: WSBH
/* 13612 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 13631
/* 13616 */   MCD::OPC_CheckPredicate, 26, 33, 5, // Skip to: 14933
/* 13620 */   MCD::OPC_CheckField, 21, 5, 0, 27, 5, // Skip to: 14933
/* 13626 */   MCD::OPC_Decode, 170, 16, 180, 2, // Opcode: SEB
/* 13631 */   MCD::OPC_FilterValue, 24, 18, 5, // Skip to: 14933
/* 13635 */   MCD::OPC_CheckPredicate, 26, 14, 5, // Skip to: 14933
/* 13639 */   MCD::OPC_CheckField, 21, 5, 0, 8, 5, // Skip to: 14933
/* 13645 */   MCD::OPC_Decode, 174, 16, 180, 2, // Opcode: SEH
/* 13650 */   MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 13669
/* 13654 */   MCD::OPC_CheckPredicate, 68, 251, 4, // Skip to: 14933
/* 13658 */   MCD::OPC_CheckField, 6, 1, 0, 245, 4, // Skip to: 14933
/* 13664 */   MCD::OPC_Decode, 192, 18, 184, 2, // Opcode: SWLE
/* 13669 */   MCD::OPC_FilterValue, 34, 15, 0, // Skip to: 13688
/* 13673 */   MCD::OPC_CheckPredicate, 68, 232, 4, // Skip to: 14933
/* 13677 */   MCD::OPC_CheckField, 6, 1, 0, 226, 4, // Skip to: 14933
/* 13683 */   MCD::OPC_Decode, 203, 18, 184, 2, // Opcode: SWRE
/* 13688 */   MCD::OPC_FilterValue, 35, 15, 0, // Skip to: 13707
/* 13692 */   MCD::OPC_CheckPredicate, 69, 213, 4, // Skip to: 14933
/* 13696 */   MCD::OPC_CheckField, 6, 1, 0, 207, 4, // Skip to: 14933
/* 13702 */   MCD::OPC_Decode, 255, 14, 185, 2, // Opcode: PREFE
/* 13707 */   MCD::OPC_FilterValue, 40, 15, 0, // Skip to: 13726
/* 13711 */   MCD::OPC_CheckPredicate, 69, 194, 4, // Skip to: 14933
/* 13715 */   MCD::OPC_CheckField, 6, 1, 0, 188, 4, // Skip to: 14933
/* 13721 */   MCD::OPC_Decode, 203, 10, 184, 2, // Opcode: LBuE
/* 13726 */   MCD::OPC_FilterValue, 41, 15, 0, // Skip to: 13745
/* 13730 */   MCD::OPC_CheckPredicate, 69, 175, 4, // Skip to: 14933
/* 13734 */   MCD::OPC_CheckField, 6, 1, 0, 169, 4, // Skip to: 14933
/* 13740 */   MCD::OPC_Decode, 243, 10, 184, 2, // Opcode: LHuE
/* 13745 */   MCD::OPC_FilterValue, 44, 15, 0, // Skip to: 13764
/* 13749 */   MCD::OPC_CheckPredicate, 69, 156, 4, // Skip to: 14933
/* 13753 */   MCD::OPC_CheckField, 6, 1, 0, 150, 4, // Skip to: 14933
/* 13759 */   MCD::OPC_Decode, 191, 10, 184, 2, // Opcode: LBE
/* 13764 */   MCD::OPC_FilterValue, 45, 15, 0, // Skip to: 13783
/* 13768 */   MCD::OPC_CheckPredicate, 69, 137, 4, // Skip to: 14933
/* 13772 */   MCD::OPC_CheckField, 6, 1, 0, 131, 4, // Skip to: 14933
/* 13778 */   MCD::OPC_Decode, 235, 10, 184, 2, // Opcode: LHE
/* 13783 */   MCD::OPC_FilterValue, 46, 15, 0, // Skip to: 13802
/* 13787 */   MCD::OPC_CheckPredicate, 42, 118, 4, // Skip to: 14933
/* 13791 */   MCD::OPC_CheckField, 6, 1, 0, 112, 4, // Skip to: 14933
/* 13797 */   MCD::OPC_Decode, 253, 10, 184, 2, // Opcode: LLE
/* 13802 */   MCD::OPC_FilterValue, 47, 15, 0, // Skip to: 13821
/* 13806 */   MCD::OPC_CheckPredicate, 42, 99, 4, // Skip to: 14933
/* 13810 */   MCD::OPC_CheckField, 6, 1, 0, 93, 4, // Skip to: 14933
/* 13816 */   MCD::OPC_Decode, 158, 11, 184, 2, // Opcode: LWE
/* 13821 */   MCD::OPC_FilterValue, 48, 165, 1, // Skip to: 14246
/* 13825 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13828 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 13847
/* 13832 */   MCD::OPC_CheckPredicate, 67, 73, 4, // Skip to: 14933
/* 13836 */   MCD::OPC_CheckField, 13, 3, 0, 67, 4, // Skip to: 14933
/* 13842 */   MCD::OPC_Decode, 189, 7, 219, 1, // Opcode: DPA_W_PH
/* 13847 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 13866
/* 13851 */   MCD::OPC_CheckPredicate, 67, 54, 4, // Skip to: 14933
/* 13855 */   MCD::OPC_CheckField, 13, 3, 0, 48, 4, // Skip to: 14933
/* 13861 */   MCD::OPC_Decode, 212, 7, 219, 1, // Opcode: DPS_W_PH
/* 13866 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13885
/* 13870 */   MCD::OPC_CheckPredicate, 67, 35, 4, // Skip to: 14933
/* 13874 */   MCD::OPC_CheckField, 13, 3, 0, 29, 4, // Skip to: 14933
/* 13880 */   MCD::OPC_Decode, 243, 13, 219, 1, // Opcode: MULSA_W_PH
/* 13885 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 13904
/* 13889 */   MCD::OPC_CheckPredicate, 35, 16, 4, // Skip to: 14933
/* 13893 */   MCD::OPC_CheckField, 13, 3, 0, 10, 4, // Skip to: 14933
/* 13899 */   MCD::OPC_Decode, 183, 7, 219, 1, // Opcode: DPAU_H_QBL
/* 13904 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 13923
/* 13908 */   MCD::OPC_CheckPredicate, 35, 253, 3, // Skip to: 14933
/* 13912 */   MCD::OPC_CheckField, 13, 3, 0, 247, 3, // Skip to: 14933
/* 13918 */   MCD::OPC_Decode, 181, 7, 219, 1, // Opcode: DPAQ_S_W_PH
/* 13923 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 13942
/* 13927 */   MCD::OPC_CheckPredicate, 35, 234, 3, // Skip to: 14933
/* 13931 */   MCD::OPC_CheckField, 13, 3, 0, 228, 3, // Skip to: 14933
/* 13937 */   MCD::OPC_Decode, 198, 7, 219, 1, // Opcode: DPSQ_S_W_PH
/* 13942 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 13961
/* 13946 */   MCD::OPC_CheckPredicate, 35, 215, 3, // Skip to: 14933
/* 13950 */   MCD::OPC_CheckField, 13, 3, 0, 209, 3, // Skip to: 14933
/* 13956 */   MCD::OPC_Decode, 241, 13, 219, 1, // Opcode: MULSAQ_S_W_PH
/* 13961 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 13980
/* 13965 */   MCD::OPC_CheckPredicate, 35, 196, 3, // Skip to: 14933
/* 13969 */   MCD::OPC_CheckField, 13, 3, 0, 190, 3, // Skip to: 14933
/* 13975 */   MCD::OPC_Decode, 185, 7, 219, 1, // Opcode: DPAU_H_QBR
/* 13980 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 13999
/* 13984 */   MCD::OPC_CheckPredicate, 67, 177, 3, // Skip to: 14933
/* 13988 */   MCD::OPC_CheckField, 13, 3, 0, 171, 3, // Skip to: 14933
/* 13994 */   MCD::OPC_Decode, 187, 7, 219, 1, // Opcode: DPAX_W_PH
/* 13999 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 14018
/* 14003 */   MCD::OPC_CheckPredicate, 67, 158, 3, // Skip to: 14933
/* 14007 */   MCD::OPC_CheckField, 13, 3, 0, 152, 3, // Skip to: 14933
/* 14013 */   MCD::OPC_Decode, 210, 7, 219, 1, // Opcode: DPSX_W_PH
/* 14018 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 14037
/* 14022 */   MCD::OPC_CheckPredicate, 35, 139, 3, // Skip to: 14933
/* 14026 */   MCD::OPC_CheckField, 13, 3, 0, 133, 3, // Skip to: 14933
/* 14032 */   MCD::OPC_Decode, 206, 7, 219, 1, // Opcode: DPSU_H_QBL
/* 14037 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 14056
/* 14041 */   MCD::OPC_CheckPredicate, 35, 120, 3, // Skip to: 14933
/* 14045 */   MCD::OPC_CheckField, 13, 3, 0, 114, 3, // Skip to: 14933
/* 14051 */   MCD::OPC_Decode, 179, 7, 219, 1, // Opcode: DPAQ_SA_L_W
/* 14056 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 14075
/* 14060 */   MCD::OPC_CheckPredicate, 35, 101, 3, // Skip to: 14933
/* 14064 */   MCD::OPC_CheckField, 13, 3, 0, 95, 3, // Skip to: 14933
/* 14070 */   MCD::OPC_Decode, 196, 7, 219, 1, // Opcode: DPSQ_SA_L_W
/* 14075 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 14094
/* 14079 */   MCD::OPC_CheckPredicate, 35, 82, 3, // Skip to: 14933
/* 14083 */   MCD::OPC_CheckField, 13, 3, 0, 76, 3, // Skip to: 14933
/* 14089 */   MCD::OPC_Decode, 208, 7, 219, 1, // Opcode: DPSU_H_QBR
/* 14094 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 14113
/* 14098 */   MCD::OPC_CheckPredicate, 35, 63, 3, // Skip to: 14933
/* 14102 */   MCD::OPC_CheckField, 13, 3, 0, 57, 3, // Skip to: 14933
/* 14108 */   MCD::OPC_Decode, 239, 11, 219, 1, // Opcode: MAQ_SA_W_PHL
/* 14113 */   MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 14132
/* 14117 */   MCD::OPC_CheckPredicate, 35, 44, 3, // Skip to: 14933
/* 14121 */   MCD::OPC_CheckField, 13, 3, 0, 38, 3, // Skip to: 14933
/* 14127 */   MCD::OPC_Decode, 241, 11, 219, 1, // Opcode: MAQ_SA_W_PHR
/* 14132 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 14151
/* 14136 */   MCD::OPC_CheckPredicate, 35, 25, 3, // Skip to: 14933
/* 14140 */   MCD::OPC_CheckField, 13, 3, 0, 19, 3, // Skip to: 14933
/* 14146 */   MCD::OPC_Decode, 243, 11, 219, 1, // Opcode: MAQ_S_W_PHL
/* 14151 */   MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 14170
/* 14155 */   MCD::OPC_CheckPredicate, 35, 6, 3, // Skip to: 14933
/* 14159 */   MCD::OPC_CheckField, 13, 3, 0, 0, 3, // Skip to: 14933
/* 14165 */   MCD::OPC_Decode, 245, 11, 219, 1, // Opcode: MAQ_S_W_PHR
/* 14170 */   MCD::OPC_FilterValue, 24, 15, 0, // Skip to: 14189
/* 14174 */   MCD::OPC_CheckPredicate, 67, 243, 2, // Skip to: 14933
/* 14178 */   MCD::OPC_CheckField, 13, 3, 0, 237, 2, // Skip to: 14933
/* 14184 */   MCD::OPC_Decode, 177, 7, 219, 1, // Opcode: DPAQX_S_W_PH
/* 14189 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 14208
/* 14193 */   MCD::OPC_CheckPredicate, 67, 224, 2, // Skip to: 14933
/* 14197 */   MCD::OPC_CheckField, 13, 3, 0, 218, 2, // Skip to: 14933
/* 14203 */   MCD::OPC_Decode, 194, 7, 219, 1, // Opcode: DPSQX_S_W_PH
/* 14208 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 14227
/* 14212 */   MCD::OPC_CheckPredicate, 67, 205, 2, // Skip to: 14933
/* 14216 */   MCD::OPC_CheckField, 13, 3, 0, 199, 2, // Skip to: 14933
/* 14222 */   MCD::OPC_Decode, 175, 7, 219, 1, // Opcode: DPAQX_SA_W_PH
/* 14227 */   MCD::OPC_FilterValue, 27, 190, 2, // Skip to: 14933
/* 14231 */   MCD::OPC_CheckPredicate, 67, 186, 2, // Skip to: 14933
/* 14235 */   MCD::OPC_CheckField, 13, 3, 0, 180, 2, // Skip to: 14933
/* 14241 */   MCD::OPC_Decode, 192, 7, 219, 1, // Opcode: DPSQX_SA_W_PH
/* 14246 */   MCD::OPC_FilterValue, 49, 42, 0, // Skip to: 14292
/* 14250 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 14253 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 14266
/* 14257 */   MCD::OPC_CheckPredicate, 67, 160, 2, // Skip to: 14933
/* 14261 */   MCD::OPC_Decode, 224, 1, 186, 2, // Opcode: APPEND
/* 14266 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 14279
/* 14270 */   MCD::OPC_CheckPredicate, 67, 147, 2, // Skip to: 14933
/* 14274 */   MCD::OPC_Decode, 134, 15, 186, 2, // Opcode: PREPEND
/* 14279 */   MCD::OPC_FilterValue, 16, 138, 2, // Skip to: 14933
/* 14283 */   MCD::OPC_CheckPredicate, 67, 134, 2, // Skip to: 14933
/* 14287 */   MCD::OPC_Decode, 173, 2, 186, 2, // Opcode: BALIGN
/* 14292 */   MCD::OPC_FilterValue, 56, 58, 1, // Skip to: 14610
/* 14296 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 14299 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 14318
/* 14303 */   MCD::OPC_CheckPredicate, 35, 114, 2, // Skip to: 14933
/* 14307 */   MCD::OPC_CheckField, 13, 3, 0, 108, 2, // Skip to: 14933
/* 14313 */   MCD::OPC_Decode, 157, 8, 187, 2, // Opcode: EXTR_W
/* 14318 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 14337
/* 14322 */   MCD::OPC_CheckPredicate, 35, 95, 2, // Skip to: 14933
/* 14326 */   MCD::OPC_CheckField, 13, 3, 0, 89, 2, // Skip to: 14933
/* 14332 */   MCD::OPC_Decode, 149, 8, 188, 2, // Opcode: EXTRV_W
/* 14337 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 14356
/* 14341 */   MCD::OPC_CheckPredicate, 35, 76, 2, // Skip to: 14933
/* 14345 */   MCD::OPC_CheckField, 13, 3, 0, 70, 2, // Skip to: 14933
/* 14351 */   MCD::OPC_Decode, 135, 8, 187, 2, // Opcode: EXTP
/* 14356 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 14375
/* 14360 */   MCD::OPC_CheckPredicate, 35, 57, 2, // Skip to: 14933
/* 14364 */   MCD::OPC_CheckField, 13, 3, 0, 51, 2, // Skip to: 14933
/* 14370 */   MCD::OPC_Decode, 140, 8, 188, 2, // Opcode: EXTPV
/* 14375 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 14394
/* 14379 */   MCD::OPC_CheckPredicate, 35, 38, 2, // Skip to: 14933
/* 14383 */   MCD::OPC_CheckField, 13, 3, 0, 32, 2, // Skip to: 14933
/* 14389 */   MCD::OPC_Decode, 153, 8, 187, 2, // Opcode: EXTR_R_W
/* 14394 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 14413
/* 14398 */   MCD::OPC_CheckPredicate, 35, 19, 2, // Skip to: 14933
/* 14402 */   MCD::OPC_CheckField, 13, 3, 0, 13, 2, // Skip to: 14933
/* 14408 */   MCD::OPC_Decode, 145, 8, 188, 2, // Opcode: EXTRV_R_W
/* 14413 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 14432
/* 14417 */   MCD::OPC_CheckPredicate, 35, 0, 2, // Skip to: 14933
/* 14421 */   MCD::OPC_CheckField, 13, 3, 0, 250, 1, // Skip to: 14933
/* 14427 */   MCD::OPC_Decode, 151, 8, 187, 2, // Opcode: EXTR_RS_W
/* 14432 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 14451
/* 14436 */   MCD::OPC_CheckPredicate, 35, 237, 1, // Skip to: 14933
/* 14440 */   MCD::OPC_CheckField, 13, 3, 0, 231, 1, // Skip to: 14933
/* 14446 */   MCD::OPC_Decode, 143, 8, 188, 2, // Opcode: EXTRV_RS_W
/* 14451 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 14470
/* 14455 */   MCD::OPC_CheckPredicate, 35, 218, 1, // Skip to: 14933
/* 14459 */   MCD::OPC_CheckField, 13, 3, 0, 212, 1, // Skip to: 14933
/* 14465 */   MCD::OPC_Decode, 136, 8, 187, 2, // Opcode: EXTPDP
/* 14470 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 14489
/* 14474 */   MCD::OPC_CheckPredicate, 35, 199, 1, // Skip to: 14933
/* 14478 */   MCD::OPC_CheckField, 13, 3, 0, 193, 1, // Skip to: 14933
/* 14484 */   MCD::OPC_Decode, 137, 8, 188, 2, // Opcode: EXTPDPV
/* 14489 */   MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 14508
/* 14493 */   MCD::OPC_CheckPredicate, 35, 180, 1, // Skip to: 14933
/* 14497 */   MCD::OPC_CheckField, 13, 3, 0, 174, 1, // Skip to: 14933
/* 14503 */   MCD::OPC_Decode, 155, 8, 187, 2, // Opcode: EXTR_S_H
/* 14508 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 14527
/* 14512 */   MCD::OPC_CheckPredicate, 35, 161, 1, // Skip to: 14933
/* 14516 */   MCD::OPC_CheckField, 13, 3, 0, 155, 1, // Skip to: 14933
/* 14522 */   MCD::OPC_Decode, 147, 8, 188, 2, // Opcode: EXTRV_S_H
/* 14527 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 14540
/* 14531 */   MCD::OPC_CheckPredicate, 35, 142, 1, // Skip to: 14933
/* 14535 */   MCD::OPC_Decode, 192, 15, 189, 2, // Opcode: RDDSP
/* 14540 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 14553
/* 14544 */   MCD::OPC_CheckPredicate, 39, 129, 1, // Skip to: 14933
/* 14548 */   MCD::OPC_Decode, 210, 19, 190, 2, // Opcode: WRDSP
/* 14553 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 14572
/* 14557 */   MCD::OPC_CheckPredicate, 35, 116, 1, // Skip to: 14933
/* 14561 */   MCD::OPC_CheckField, 13, 7, 0, 110, 1, // Skip to: 14933
/* 14567 */   MCD::OPC_Decode, 210, 16, 191, 2, // Opcode: SHILO
/* 14572 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 14591
/* 14576 */   MCD::OPC_CheckPredicate, 35, 97, 1, // Skip to: 14933
/* 14580 */   MCD::OPC_CheckField, 13, 8, 0, 91, 1, // Skip to: 14933
/* 14586 */   MCD::OPC_Decode, 211, 16, 192, 2, // Opcode: SHILOV
/* 14591 */   MCD::OPC_FilterValue, 31, 82, 1, // Skip to: 14933
/* 14595 */   MCD::OPC_CheckPredicate, 35, 78, 1, // Skip to: 14933
/* 14599 */   MCD::OPC_CheckField, 13, 8, 0, 72, 1, // Skip to: 14933
/* 14605 */   MCD::OPC_Decode, 193, 13, 192, 2, // Opcode: MTHLIP
/* 14610 */   MCD::OPC_FilterValue, 59, 63, 1, // Skip to: 14933
/* 14614 */   MCD::OPC_CheckPredicate, 1, 59, 1, // Skip to: 14933
/* 14618 */   MCD::OPC_CheckField, 21, 5, 0, 53, 1, // Skip to: 14933
/* 14624 */   MCD::OPC_CheckField, 6, 5, 0, 47, 1, // Skip to: 14933
/* 14630 */   MCD::OPC_Decode, 194, 15, 193, 2, // Opcode: RDHWR
/* 14635 */   MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 14647
/* 14639 */   MCD::OPC_CheckPredicate, 25, 34, 1, // Skip to: 14933
/* 14643 */   MCD::OPC_Decode, 189, 10, 107, // Opcode: LB
/* 14647 */   MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 14659
/* 14651 */   MCD::OPC_CheckPredicate, 1, 22, 1, // Skip to: 14933
/* 14655 */   MCD::OPC_Decode, 233, 10, 107, // Opcode: LH
/* 14659 */   MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 14671
/* 14663 */   MCD::OPC_CheckPredicate, 34, 10, 1, // Skip to: 14933
/* 14667 */   MCD::OPC_Decode, 162, 11, 107, // Opcode: LWL
/* 14671 */   MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 14683
/* 14675 */   MCD::OPC_CheckPredicate, 1, 254, 0, // Skip to: 14933
/* 14679 */   MCD::OPC_Decode, 147, 11, 107, // Opcode: LW
/* 14683 */   MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 14695
/* 14687 */   MCD::OPC_CheckPredicate, 25, 242, 0, // Skip to: 14933
/* 14691 */   MCD::OPC_Decode, 201, 10, 107, // Opcode: LBu
/* 14695 */   MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 14707
/* 14699 */   MCD::OPC_CheckPredicate, 1, 230, 0, // Skip to: 14933
/* 14703 */   MCD::OPC_Decode, 241, 10, 107, // Opcode: LHu
/* 14707 */   MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 14719
/* 14711 */   MCD::OPC_CheckPredicate, 34, 218, 0, // Skip to: 14933
/* 14715 */   MCD::OPC_Decode, 175, 11, 107, // Opcode: LWR
/* 14719 */   MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 14731
/* 14723 */   MCD::OPC_CheckPredicate, 25, 206, 0, // Skip to: 14933
/* 14727 */   MCD::OPC_Decode, 254, 15, 107, // Opcode: SB
/* 14731 */   MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 14743
/* 14735 */   MCD::OPC_CheckPredicate, 25, 194, 0, // Skip to: 14933
/* 14739 */   MCD::OPC_Decode, 200, 16, 107, // Opcode: SH
/* 14743 */   MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 14755
/* 14747 */   MCD::OPC_CheckPredicate, 34, 182, 0, // Skip to: 14933
/* 14751 */   MCD::OPC_Decode, 190, 18, 107, // Opcode: SWL
/* 14755 */   MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 14767
/* 14759 */   MCD::OPC_CheckPredicate, 1, 170, 0, // Skip to: 14933
/* 14763 */   MCD::OPC_Decode, 175, 18, 107, // Opcode: SW
/* 14767 */   MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 14779
/* 14771 */   MCD::OPC_CheckPredicate, 34, 158, 0, // Skip to: 14933
/* 14775 */   MCD::OPC_Decode, 201, 18, 107, // Opcode: SWR
/* 14779 */   MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 14792
/* 14783 */   MCD::OPC_CheckPredicate, 70, 146, 0, // Skip to: 14933
/* 14787 */   MCD::OPC_Decode, 169, 4, 194, 2, // Opcode: CACHE
/* 14792 */   MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 14804
/* 14796 */   MCD::OPC_CheckPredicate, 71, 133, 0, // Skip to: 14933
/* 14800 */   MCD::OPC_Decode, 248, 10, 107, // Opcode: LL
/* 14804 */   MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 14817
/* 14808 */   MCD::OPC_CheckPredicate, 47, 121, 0, // Skip to: 14933
/* 14812 */   MCD::OPC_Decode, 150, 11, 195, 2, // Opcode: LWC1
/* 14817 */   MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 14830
/* 14821 */   MCD::OPC_CheckPredicate, 37, 108, 0, // Skip to: 14933
/* 14825 */   MCD::OPC_Decode, 152, 11, 196, 2, // Opcode: LWC2
/* 14830 */   MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 14843
/* 14834 */   MCD::OPC_CheckPredicate, 70, 95, 0, // Skip to: 14933
/* 14838 */   MCD::OPC_Decode, 254, 14, 194, 2, // Opcode: PREF
/* 14843 */   MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 14856
/* 14847 */   MCD::OPC_CheckPredicate, 72, 82, 0, // Skip to: 14933
/* 14851 */   MCD::OPC_Decode, 207, 10, 195, 2, // Opcode: LDC1
/* 14856 */   MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 14869
/* 14860 */   MCD::OPC_CheckPredicate, 73, 69, 0, // Skip to: 14933
/* 14864 */   MCD::OPC_Decode, 211, 10, 196, 2, // Opcode: LDC2
/* 14869 */   MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 14881
/* 14873 */   MCD::OPC_CheckPredicate, 71, 56, 0, // Skip to: 14933
/* 14877 */   MCD::OPC_Decode, 135, 16, 107, // Opcode: SC
/* 14881 */   MCD::OPC_FilterValue, 57, 9, 0, // Skip to: 14894
/* 14885 */   MCD::OPC_CheckPredicate, 47, 44, 0, // Skip to: 14933
/* 14889 */   MCD::OPC_Decode, 179, 18, 195, 2, // Opcode: SWC1
/* 14894 */   MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 14907
/* 14898 */   MCD::OPC_CheckPredicate, 37, 31, 0, // Skip to: 14933
/* 14902 */   MCD::OPC_Decode, 181, 18, 196, 2, // Opcode: SWC2
/* 14907 */   MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 14920
/* 14911 */   MCD::OPC_CheckPredicate, 72, 18, 0, // Skip to: 14933
/* 14915 */   MCD::OPC_Decode, 152, 16, 195, 2, // Opcode: SDC1
/* 14920 */   MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 14933
/* 14924 */   MCD::OPC_CheckPredicate, 73, 5, 0, // Skip to: 14933
/* 14928 */   MCD::OPC_Decode, 156, 16, 196, 2, // Opcode: SDC2
/* 14933 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32_64_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 21
/* 7 */       MCD::OPC_CheckPredicate, 74, 34, 0, // Skip to: 45
/* 11 */      MCD::OPC_CheckField, 0, 21, 8, 28, 0, // Skip to: 45
/* 17 */      MCD::OPC_Decode, 172, 10, 13, // Opcode: JR64
/* 21 */      MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 33
/* 25 */      MCD::OPC_CheckPredicate, 75, 16, 0, // Skip to: 45
/* 29 */      MCD::OPC_Decode, 249, 10, 107, // Opcode: LL64
/* 33 */      MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 45
/* 37 */      MCD::OPC_CheckPredicate, 75, 4, 0, // Skip to: 45
/* 41 */      MCD::OPC_Decode, 136, 16, 107, // Opcode: SC64
/* 45 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 197, 1, // Skip to: 460
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 76, 143, 7, // Skip to: 1953
/* 18 */      MCD::OPC_CheckField, 8, 3, 0, 137, 7, // Skip to: 1953
/* 24 */      MCD::OPC_Decode, 139, 11, 161, 1, // Opcode: LSA_R6
/* 29 */      MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 48
/* 33 */      MCD::OPC_CheckPredicate, 76, 124, 7, // Skip to: 1953
/* 37 */      MCD::OPC_CheckField, 6, 15, 16, 118, 7, // Skip to: 1953
/* 43 */      MCD::OPC_Decode, 178, 10, 162, 1, // Opcode: JR_HB_R6
/* 48 */      MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 61
/* 52 */      MCD::OPC_CheckPredicate, 77, 105, 7, // Skip to: 1953
/* 56 */      MCD::OPC_Decode, 151, 16, 164, 1, // Opcode: SDBBP_R6
/* 61 */      MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 85
/* 65 */      MCD::OPC_CheckPredicate, 76, 92, 7, // Skip to: 1953
/* 69 */      MCD::OPC_CheckField, 16, 5, 0, 86, 7, // Skip to: 1953
/* 75 */      MCD::OPC_CheckField, 6, 5, 1, 80, 7, // Skip to: 1953
/* 81 */      MCD::OPC_Decode, 247, 4, 14, // Opcode: CLZ_R6
/* 85 */      MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 109
/* 89 */      MCD::OPC_CheckPredicate, 76, 68, 7, // Skip to: 1953
/* 93 */      MCD::OPC_CheckField, 16, 5, 0, 62, 7, // Skip to: 1953
/* 99 */      MCD::OPC_CheckField, 6, 5, 1, 56, 7, // Skip to: 1953
/* 105 */     MCD::OPC_Decode, 227, 4, 14, // Opcode: CLO_R6
/* 109 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 133
/* 113 */     MCD::OPC_CheckPredicate, 78, 44, 7, // Skip to: 1953
/* 117 */     MCD::OPC_CheckField, 16, 5, 0, 38, 7, // Skip to: 1953
/* 123 */     MCD::OPC_CheckField, 6, 5, 1, 32, 7, // Skip to: 1953
/* 129 */     MCD::OPC_Decode, 239, 6, 15, // Opcode: DCLZ_R6
/* 133 */     MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 157
/* 137 */     MCD::OPC_CheckPredicate, 78, 20, 7, // Skip to: 1953
/* 141 */     MCD::OPC_CheckField, 16, 5, 0, 14, 7, // Skip to: 1953
/* 147 */     MCD::OPC_CheckField, 6, 5, 1, 8, 7, // Skip to: 1953
/* 153 */     MCD::OPC_Decode, 237, 6, 15, // Opcode: DCLO_R6
/* 157 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 176
/* 161 */     MCD::OPC_CheckPredicate, 78, 252, 6, // Skip to: 1953
/* 165 */     MCD::OPC_CheckField, 8, 3, 0, 246, 6, // Skip to: 1953
/* 171 */     MCD::OPC_Decode, 140, 7, 170, 1, // Opcode: DLSA_R6
/* 176 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 207
/* 180 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 183 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 195
/* 187 */     MCD::OPC_CheckPredicate, 77, 226, 6, // Skip to: 1953
/* 191 */     MCD::OPC_Decode, 137, 14, 49, // Opcode: MUL_R6
/* 195 */     MCD::OPC_FilterValue, 3, 218, 6, // Skip to: 1953
/* 199 */     MCD::OPC_CheckPredicate, 77, 214, 6, // Skip to: 1953
/* 203 */     MCD::OPC_Decode, 215, 13, 49, // Opcode: MUH
/* 207 */     MCD::OPC_FilterValue, 25, 27, 0, // Skip to: 238
/* 211 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 214 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 226
/* 218 */     MCD::OPC_CheckPredicate, 77, 195, 6, // Skip to: 1953
/* 222 */     MCD::OPC_Decode, 253, 13, 49, // Opcode: MULU
/* 226 */     MCD::OPC_FilterValue, 3, 187, 6, // Skip to: 1953
/* 230 */     MCD::OPC_CheckPredicate, 77, 183, 6, // Skip to: 1953
/* 234 */     MCD::OPC_Decode, 216, 13, 49, // Opcode: MUHU
/* 238 */     MCD::OPC_FilterValue, 26, 27, 0, // Skip to: 269
/* 242 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 245 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 257
/* 249 */     MCD::OPC_CheckPredicate, 77, 164, 6, // Skip to: 1953
/* 253 */     MCD::OPC_Decode, 253, 6, 49, // Opcode: DIV
/* 257 */     MCD::OPC_FilterValue, 3, 156, 6, // Skip to: 1953
/* 261 */     MCD::OPC_CheckPredicate, 77, 152, 6, // Skip to: 1953
/* 265 */     MCD::OPC_Decode, 213, 12, 49, // Opcode: MOD
/* 269 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 300
/* 273 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 276 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 77, 133, 6, // Skip to: 1953
/* 284 */     MCD::OPC_Decode, 254, 6, 49, // Opcode: DIVU
/* 288 */     MCD::OPC_FilterValue, 3, 125, 6, // Skip to: 1953
/* 292 */     MCD::OPC_CheckPredicate, 77, 121, 6, // Skip to: 1953
/* 296 */     MCD::OPC_Decode, 216, 12, 49, // Opcode: MODU
/* 300 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 331
/* 304 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 307 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 78, 102, 6, // Skip to: 1953
/* 315 */     MCD::OPC_Decode, 162, 7, 12, // Opcode: DMUL_R6
/* 319 */     MCD::OPC_FilterValue, 3, 94, 6, // Skip to: 1953
/* 323 */     MCD::OPC_CheckPredicate, 78, 90, 6, // Skip to: 1953
/* 327 */     MCD::OPC_Decode, 152, 7, 12, // Opcode: DMUH
/* 331 */     MCD::OPC_FilterValue, 29, 27, 0, // Skip to: 362
/* 335 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 338 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 350
/* 342 */     MCD::OPC_CheckPredicate, 78, 71, 6, // Skip to: 1953
/* 346 */     MCD::OPC_Decode, 161, 7, 12, // Opcode: DMULU
/* 350 */     MCD::OPC_FilterValue, 3, 63, 6, // Skip to: 1953
/* 354 */     MCD::OPC_CheckPredicate, 78, 59, 6, // Skip to: 1953
/* 358 */     MCD::OPC_Decode, 153, 7, 12, // Opcode: DMUHU
/* 362 */     MCD::OPC_FilterValue, 30, 27, 0, // Skip to: 393
/* 366 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 369 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 381
/* 373 */     MCD::OPC_CheckPredicate, 78, 40, 6, // Skip to: 1953
/* 377 */     MCD::OPC_Decode, 240, 6, 12, // Opcode: DDIV
/* 381 */     MCD::OPC_FilterValue, 3, 32, 6, // Skip to: 1953
/* 385 */     MCD::OPC_CheckPredicate, 78, 28, 6, // Skip to: 1953
/* 389 */     MCD::OPC_Decode, 145, 7, 12, // Opcode: DMOD
/* 393 */     MCD::OPC_FilterValue, 31, 27, 0, // Skip to: 424
/* 397 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 400 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 412
/* 404 */     MCD::OPC_CheckPredicate, 78, 9, 6, // Skip to: 1953
/* 408 */     MCD::OPC_Decode, 241, 6, 12, // Opcode: DDIVU
/* 412 */     MCD::OPC_FilterValue, 3, 1, 6, // Skip to: 1953
/* 416 */     MCD::OPC_CheckPredicate, 78, 253, 5, // Skip to: 1953
/* 420 */     MCD::OPC_Decode, 146, 7, 12, // Opcode: DMODU
/* 424 */     MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 442
/* 428 */     MCD::OPC_CheckPredicate, 79, 241, 5, // Skip to: 1953
/* 432 */     MCD::OPC_CheckField, 6, 5, 0, 235, 5, // Skip to: 1953
/* 438 */     MCD::OPC_Decode, 178, 16, 49, // Opcode: SELEQZ
/* 442 */     MCD::OPC_FilterValue, 55, 227, 5, // Skip to: 1953
/* 446 */     MCD::OPC_CheckPredicate, 79, 223, 5, // Skip to: 1953
/* 450 */     MCD::OPC_CheckField, 6, 5, 0, 217, 5, // Skip to: 1953
/* 456 */     MCD::OPC_Decode, 185, 16, 49, // Opcode: SELNEZ
/* 460 */     MCD::OPC_FilterValue, 1, 48, 0, // Skip to: 512
/* 464 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 467 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 480
/* 471 */     MCD::OPC_CheckPredicate, 78, 198, 5, // Skip to: 1953
/* 475 */     MCD::OPC_Decode, 231, 6, 197, 2, // Opcode: DAHI
/* 480 */     MCD::OPC_FilterValue, 17, 15, 0, // Skip to: 499
/* 484 */     MCD::OPC_CheckPredicate, 76, 185, 5, // Skip to: 1953
/* 488 */     MCD::OPC_CheckField, 21, 5, 0, 179, 5, // Skip to: 1953
/* 494 */     MCD::OPC_Decode, 170, 2, 174, 1, // Opcode: BAL
/* 499 */     MCD::OPC_FilterValue, 30, 170, 5, // Skip to: 1953
/* 503 */     MCD::OPC_CheckPredicate, 78, 166, 5, // Skip to: 1953
/* 507 */     MCD::OPC_Decode, 233, 6, 197, 2, // Opcode: DATI
/* 512 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 525
/* 516 */     MCD::OPC_CheckPredicate, 77, 153, 5, // Skip to: 1953
/* 520 */     MCD::OPC_Decode, 238, 2, 198, 2, // Opcode: BGEZALC
/* 525 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 538
/* 529 */     MCD::OPC_CheckPredicate, 77, 140, 5, // Skip to: 1953
/* 533 */     MCD::OPC_Decode, 191, 3, 199, 2, // Opcode: BLTZALC
/* 538 */     MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 551
/* 542 */     MCD::OPC_CheckPredicate, 77, 127, 5, // Skip to: 1953
/* 546 */     MCD::OPC_Decode, 207, 2, 200, 2, // Opcode: BEQC
/* 551 */     MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 564
/* 555 */     MCD::OPC_CheckPredicate, 76, 114, 5, // Skip to: 1953
/* 559 */     MCD::OPC_Decode, 138, 2, 178, 1, // Opcode: AUI
/* 564 */     MCD::OPC_FilterValue, 16, 39, 0, // Skip to: 607
/* 568 */     MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 571 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 589
/* 575 */     MCD::OPC_CheckPredicate, 76, 94, 5, // Skip to: 1953
/* 579 */     MCD::OPC_CheckField, 21, 5, 11, 88, 5, // Skip to: 1953
/* 585 */     MCD::OPC_Decode, 131, 8, 73, // Opcode: EVP
/* 589 */     MCD::OPC_FilterValue, 36, 80, 5, // Skip to: 1953
/* 593 */     MCD::OPC_CheckPredicate, 76, 76, 5, // Skip to: 1953
/* 597 */     MCD::OPC_CheckField, 21, 5, 11, 70, 5, // Skip to: 1953
/* 603 */     MCD::OPC_Decode, 241, 7, 73, // Opcode: DVP
/* 607 */     MCD::OPC_FilterValue, 17, 15, 3, // Skip to: 1394
/* 611 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 614 */     MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 627
/* 618 */     MCD::OPC_CheckPredicate, 80, 51, 5, // Skip to: 1953
/* 622 */     MCD::OPC_Decode, 182, 2, 201, 2, // Opcode: BC1EQZ
/* 627 */     MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 640
/* 631 */     MCD::OPC_CheckPredicate, 80, 38, 5, // Skip to: 1953
/* 635 */     MCD::OPC_Decode, 187, 2, 201, 2, // Opcode: BC1NEZ
/* 640 */     MCD::OPC_FilterValue, 16, 158, 0, // Skip to: 802
/* 644 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 647 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 660
/* 651 */     MCD::OPC_CheckPredicate, 80, 18, 5, // Skip to: 1953
/* 655 */     MCD::OPC_Decode, 194, 16, 202, 2, // Opcode: SEL_S
/* 660 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 673
/* 664 */     MCD::OPC_CheckPredicate, 80, 5, 5, // Skip to: 1953
/* 668 */     MCD::OPC_Decode, 183, 16, 192, 1, // Opcode: SELEQZ_S
/* 673 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 686
/* 677 */     MCD::OPC_CheckPredicate, 80, 248, 4, // Skip to: 1953
/* 681 */     MCD::OPC_Decode, 190, 16, 192, 1, // Opcode: SELNEZ_S
/* 686 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 699
/* 690 */     MCD::OPC_CheckPredicate, 80, 235, 4, // Skip to: 1953
/* 694 */     MCD::OPC_Decode, 217, 11, 203, 2, // Opcode: MADDF_S
/* 699 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 712
/* 703 */     MCD::OPC_CheckPredicate, 80, 222, 4, // Skip to: 1953
/* 707 */     MCD::OPC_Decode, 151, 13, 203, 2, // Opcode: MSUBF_S
/* 712 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 731
/* 716 */     MCD::OPC_CheckPredicate, 80, 209, 4, // Skip to: 1953
/* 720 */     MCD::OPC_CheckField, 16, 5, 0, 203, 4, // Skip to: 1953
/* 726 */     MCD::OPC_Decode, 215, 15, 193, 1, // Opcode: RINT_S
/* 731 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 750
/* 735 */     MCD::OPC_CheckPredicate, 80, 190, 4, // Skip to: 1953
/* 739 */     MCD::OPC_CheckField, 16, 5, 0, 184, 4, // Skip to: 1953
/* 745 */     MCD::OPC_Decode, 206, 4, 193, 1, // Opcode: CLASS_S
/* 750 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 763
/* 754 */     MCD::OPC_CheckPredicate, 80, 171, 4, // Skip to: 1953
/* 758 */     MCD::OPC_Decode, 201, 12, 192, 1, // Opcode: MIN_S
/* 763 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 776
/* 767 */     MCD::OPC_CheckPredicate, 80, 158, 4, // Skip to: 1953
/* 771 */     MCD::OPC_Decode, 137, 12, 192, 1, // Opcode: MAX_S
/* 776 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 789
/* 780 */     MCD::OPC_CheckPredicate, 80, 145, 4, // Skip to: 1953
/* 784 */     MCD::OPC_Decode, 185, 12, 192, 1, // Opcode: MINA_S
/* 789 */     MCD::OPC_FilterValue, 31, 136, 4, // Skip to: 1953
/* 793 */     MCD::OPC_CheckPredicate, 80, 132, 4, // Skip to: 1953
/* 797 */     MCD::OPC_Decode, 249, 11, 192, 1, // Opcode: MAXA_S
/* 802 */     MCD::OPC_FilterValue, 17, 158, 0, // Skip to: 964
/* 806 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 809 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 822
/* 813 */     MCD::OPC_CheckPredicate, 80, 112, 4, // Skip to: 1953
/* 817 */     MCD::OPC_Decode, 192, 16, 204, 2, // Opcode: SEL_D
/* 822 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 835
/* 826 */     MCD::OPC_CheckPredicate, 80, 99, 4, // Skip to: 1953
/* 830 */     MCD::OPC_Decode, 180, 16, 205, 2, // Opcode: SELEQZ_D
/* 835 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 848
/* 839 */     MCD::OPC_CheckPredicate, 80, 86, 4, // Skip to: 1953
/* 843 */     MCD::OPC_Decode, 187, 16, 205, 2, // Opcode: SELNEZ_D
/* 848 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 861
/* 852 */     MCD::OPC_CheckPredicate, 80, 73, 4, // Skip to: 1953
/* 856 */     MCD::OPC_Decode, 215, 11, 204, 2, // Opcode: MADDF_D
/* 861 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 874
/* 865 */     MCD::OPC_CheckPredicate, 80, 60, 4, // Skip to: 1953
/* 869 */     MCD::OPC_Decode, 149, 13, 204, 2, // Opcode: MSUBF_D
/* 874 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 893
/* 878 */     MCD::OPC_CheckPredicate, 80, 47, 4, // Skip to: 1953
/* 882 */     MCD::OPC_CheckField, 16, 5, 0, 41, 4, // Skip to: 1953
/* 888 */     MCD::OPC_Decode, 213, 15, 204, 1, // Opcode: RINT_D
/* 893 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 912
/* 897 */     MCD::OPC_CheckPredicate, 80, 28, 4, // Skip to: 1953
/* 901 */     MCD::OPC_CheckField, 16, 5, 0, 22, 4, // Skip to: 1953
/* 907 */     MCD::OPC_Decode, 204, 4, 204, 1, // Opcode: CLASS_D
/* 912 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 925
/* 916 */     MCD::OPC_CheckPredicate, 80, 9, 4, // Skip to: 1953
/* 920 */     MCD::OPC_Decode, 199, 12, 205, 2, // Opcode: MIN_D
/* 925 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 938
/* 929 */     MCD::OPC_CheckPredicate, 80, 252, 3, // Skip to: 1953
/* 933 */     MCD::OPC_Decode, 135, 12, 205, 2, // Opcode: MAX_D
/* 938 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 951
/* 942 */     MCD::OPC_CheckPredicate, 80, 239, 3, // Skip to: 1953
/* 946 */     MCD::OPC_Decode, 183, 12, 205, 2, // Opcode: MINA_D
/* 951 */     MCD::OPC_FilterValue, 31, 230, 3, // Skip to: 1953
/* 955 */     MCD::OPC_CheckPredicate, 80, 226, 3, // Skip to: 1953
/* 959 */     MCD::OPC_Decode, 247, 11, 205, 2, // Opcode: MAXA_D
/* 964 */     MCD::OPC_FilterValue, 20, 211, 0, // Skip to: 1179
/* 968 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 971 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 984
/* 975 */     MCD::OPC_CheckPredicate, 80, 206, 3, // Skip to: 1953
/* 979 */     MCD::OPC_Decode, 147, 5, 206, 2, // Opcode: CMP_F_S
/* 984 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 997
/* 988 */     MCD::OPC_CheckPredicate, 80, 193, 3, // Skip to: 1953
/* 992 */     MCD::OPC_Decode, 206, 5, 206, 2, // Opcode: CMP_UN_S
/* 997 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1010
/* 1001 */    MCD::OPC_CheckPredicate, 80, 180, 3, // Skip to: 1953
/* 1005 */    MCD::OPC_Decode, 144, 5, 206, 2, // Opcode: CMP_EQ_S
/* 1010 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1023
/* 1014 */    MCD::OPC_CheckPredicate, 80, 167, 3, // Skip to: 1953
/* 1018 */    MCD::OPC_Decode, 194, 5, 206, 2, // Opcode: CMP_UEQ_S
/* 1023 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1036
/* 1027 */    MCD::OPC_CheckPredicate, 80, 154, 3, // Skip to: 1953
/* 1031 */    MCD::OPC_Decode, 158, 5, 206, 2, // Opcode: CMP_LT_S
/* 1036 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1049
/* 1040 */    MCD::OPC_CheckPredicate, 80, 141, 3, // Skip to: 1953
/* 1044 */    MCD::OPC_Decode, 202, 5, 206, 2, // Opcode: CMP_ULT_S
/* 1049 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1062
/* 1053 */    MCD::OPC_CheckPredicate, 80, 128, 3, // Skip to: 1953
/* 1057 */    MCD::OPC_Decode, 152, 5, 206, 2, // Opcode: CMP_LE_S
/* 1062 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1075
/* 1066 */    MCD::OPC_CheckPredicate, 80, 115, 3, // Skip to: 1953
/* 1070 */    MCD::OPC_Decode, 198, 5, 206, 2, // Opcode: CMP_ULE_S
/* 1075 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1088
/* 1079 */    MCD::OPC_CheckPredicate, 80, 102, 3, // Skip to: 1953
/* 1083 */    MCD::OPC_Decode, 162, 5, 206, 2, // Opcode: CMP_SAF_S
/* 1088 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1101
/* 1092 */    MCD::OPC_CheckPredicate, 80, 89, 3, // Skip to: 1953
/* 1096 */    MCD::OPC_Decode, 190, 5, 206, 2, // Opcode: CMP_SUN_S
/* 1101 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1114
/* 1105 */    MCD::OPC_CheckPredicate, 80, 76, 3, // Skip to: 1953
/* 1109 */    MCD::OPC_Decode, 166, 5, 206, 2, // Opcode: CMP_SEQ_S
/* 1114 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1127
/* 1118 */    MCD::OPC_CheckPredicate, 80, 63, 3, // Skip to: 1953
/* 1122 */    MCD::OPC_Decode, 178, 5, 206, 2, // Opcode: CMP_SUEQ_S
/* 1127 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1140
/* 1131 */    MCD::OPC_CheckPredicate, 80, 50, 3, // Skip to: 1953
/* 1135 */    MCD::OPC_Decode, 174, 5, 206, 2, // Opcode: CMP_SLT_S
/* 1140 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1153
/* 1144 */    MCD::OPC_CheckPredicate, 80, 37, 3, // Skip to: 1953
/* 1148 */    MCD::OPC_Decode, 186, 5, 206, 2, // Opcode: CMP_SULT_S
/* 1153 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1166
/* 1157 */    MCD::OPC_CheckPredicate, 80, 24, 3, // Skip to: 1953
/* 1161 */    MCD::OPC_Decode, 170, 5, 206, 2, // Opcode: CMP_SLE_S
/* 1166 */    MCD::OPC_FilterValue, 15, 15, 3, // Skip to: 1953
/* 1170 */    MCD::OPC_CheckPredicate, 80, 11, 3, // Skip to: 1953
/* 1174 */    MCD::OPC_Decode, 182, 5, 206, 2, // Opcode: CMP_SULE_S
/* 1179 */    MCD::OPC_FilterValue, 21, 2, 3, // Skip to: 1953
/* 1183 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1186 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1199
/* 1190 */    MCD::OPC_CheckPredicate, 80, 247, 2, // Skip to: 1953
/* 1194 */    MCD::OPC_Decode, 146, 5, 207, 2, // Opcode: CMP_F_D
/* 1199 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1212
/* 1203 */    MCD::OPC_CheckPredicate, 80, 234, 2, // Skip to: 1953
/* 1207 */    MCD::OPC_Decode, 204, 5, 207, 2, // Opcode: CMP_UN_D
/* 1212 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1225
/* 1216 */    MCD::OPC_CheckPredicate, 80, 221, 2, // Skip to: 1953
/* 1220 */    MCD::OPC_Decode, 140, 5, 207, 2, // Opcode: CMP_EQ_D
/* 1225 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1238
/* 1229 */    MCD::OPC_CheckPredicate, 80, 208, 2, // Skip to: 1953
/* 1233 */    MCD::OPC_Decode, 192, 5, 207, 2, // Opcode: CMP_UEQ_D
/* 1238 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1251
/* 1242 */    MCD::OPC_CheckPredicate, 80, 195, 2, // Skip to: 1953
/* 1246 */    MCD::OPC_Decode, 154, 5, 207, 2, // Opcode: CMP_LT_D
/* 1251 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1264
/* 1255 */    MCD::OPC_CheckPredicate, 80, 182, 2, // Skip to: 1953
/* 1259 */    MCD::OPC_Decode, 200, 5, 207, 2, // Opcode: CMP_ULT_D
/* 1264 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1277
/* 1268 */    MCD::OPC_CheckPredicate, 80, 169, 2, // Skip to: 1953
/* 1272 */    MCD::OPC_Decode, 148, 5, 207, 2, // Opcode: CMP_LE_D
/* 1277 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1290
/* 1281 */    MCD::OPC_CheckPredicate, 80, 156, 2, // Skip to: 1953
/* 1285 */    MCD::OPC_Decode, 196, 5, 207, 2, // Opcode: CMP_ULE_D
/* 1290 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1303
/* 1294 */    MCD::OPC_CheckPredicate, 80, 143, 2, // Skip to: 1953
/* 1298 */    MCD::OPC_Decode, 160, 5, 207, 2, // Opcode: CMP_SAF_D
/* 1303 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1316
/* 1307 */    MCD::OPC_CheckPredicate, 80, 130, 2, // Skip to: 1953
/* 1311 */    MCD::OPC_Decode, 188, 5, 207, 2, // Opcode: CMP_SUN_D
/* 1316 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1329
/* 1320 */    MCD::OPC_CheckPredicate, 80, 117, 2, // Skip to: 1953
/* 1324 */    MCD::OPC_Decode, 164, 5, 207, 2, // Opcode: CMP_SEQ_D
/* 1329 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1342
/* 1333 */    MCD::OPC_CheckPredicate, 80, 104, 2, // Skip to: 1953
/* 1337 */    MCD::OPC_Decode, 176, 5, 207, 2, // Opcode: CMP_SUEQ_D
/* 1342 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1355
/* 1346 */    MCD::OPC_CheckPredicate, 80, 91, 2, // Skip to: 1953
/* 1350 */    MCD::OPC_Decode, 172, 5, 207, 2, // Opcode: CMP_SLT_D
/* 1355 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1368
/* 1359 */    MCD::OPC_CheckPredicate, 80, 78, 2, // Skip to: 1953
/* 1363 */    MCD::OPC_Decode, 184, 5, 207, 2, // Opcode: CMP_SULT_D
/* 1368 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1381
/* 1372 */    MCD::OPC_CheckPredicate, 80, 65, 2, // Skip to: 1953
/* 1376 */    MCD::OPC_Decode, 168, 5, 207, 2, // Opcode: CMP_SLE_D
/* 1381 */    MCD::OPC_FilterValue, 15, 56, 2, // Skip to: 1953
/* 1385 */    MCD::OPC_CheckPredicate, 80, 52, 2, // Skip to: 1953
/* 1389 */    MCD::OPC_Decode, 180, 5, 207, 2, // Opcode: CMP_SULE_D
/* 1394 */    MCD::OPC_FilterValue, 18, 81, 0, // Skip to: 1479
/* 1398 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1401 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1414
/* 1405 */    MCD::OPC_CheckPredicate, 77, 32, 2, // Skip to: 1953
/* 1409 */    MCD::OPC_Decode, 192, 2, 208, 2, // Opcode: BC2EQZ
/* 1414 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1427
/* 1418 */    MCD::OPC_CheckPredicate, 77, 19, 2, // Skip to: 1953
/* 1422 */    MCD::OPC_Decode, 154, 11, 209, 2, // Opcode: LWC2_R6
/* 1427 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1440
/* 1431 */    MCD::OPC_CheckPredicate, 77, 6, 2, // Skip to: 1953
/* 1435 */    MCD::OPC_Decode, 183, 18, 209, 2, // Opcode: SWC2_R6
/* 1440 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1453
/* 1444 */    MCD::OPC_CheckPredicate, 77, 249, 1, // Skip to: 1953
/* 1448 */    MCD::OPC_Decode, 194, 2, 208, 2, // Opcode: BC2NEZ
/* 1453 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1466
/* 1457 */    MCD::OPC_CheckPredicate, 77, 236, 1, // Skip to: 1953
/* 1461 */    MCD::OPC_Decode, 213, 10, 209, 2, // Opcode: LDC2_R6
/* 1466 */    MCD::OPC_FilterValue, 15, 227, 1, // Skip to: 1953
/* 1470 */    MCD::OPC_CheckPredicate, 77, 223, 1, // Skip to: 1953
/* 1474 */    MCD::OPC_Decode, 158, 16, 209, 2, // Opcode: SDC2_R6
/* 1479 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 1492
/* 1483 */    MCD::OPC_CheckPredicate, 77, 210, 1, // Skip to: 1953
/* 1487 */    MCD::OPC_Decode, 243, 2, 210, 2, // Opcode: BGEZC
/* 1492 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 1505
/* 1496 */    MCD::OPC_CheckPredicate, 77, 197, 1, // Skip to: 1953
/* 1500 */    MCD::OPC_Decode, 196, 3, 211, 2, // Opcode: BLTZC
/* 1505 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1518
/* 1509 */    MCD::OPC_CheckPredicate, 77, 184, 1, // Skip to: 1953
/* 1513 */    MCD::OPC_Decode, 207, 3, 212, 2, // Opcode: BNEC
/* 1518 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 1531
/* 1522 */    MCD::OPC_CheckPredicate, 78, 171, 1, // Skip to: 1953
/* 1526 */    MCD::OPC_Decode, 234, 6, 213, 2, // Opcode: DAUI
/* 1531 */    MCD::OPC_FilterValue, 31, 183, 0, // Skip to: 1718
/* 1535 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1538 */    MCD::OPC_FilterValue, 32, 41, 0, // Skip to: 1583
/* 1542 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 1545 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1570
/* 1549 */    MCD::OPC_CheckPredicate, 76, 144, 1, // Skip to: 1953
/* 1553 */    MCD::OPC_CheckField, 21, 5, 0, 138, 1, // Skip to: 1953
/* 1559 */    MCD::OPC_CheckField, 6, 2, 0, 132, 1, // Skip to: 1953
/* 1565 */    MCD::OPC_Decode, 155, 3, 180, 2, // Opcode: BITSWAP
/* 1570 */    MCD::OPC_FilterValue, 2, 123, 1, // Skip to: 1953
/* 1574 */    MCD::OPC_CheckPredicate, 76, 119, 1, // Skip to: 1953
/* 1578 */    MCD::OPC_Decode, 203, 1, 214, 2, // Opcode: ALIGN
/* 1583 */    MCD::OPC_FilterValue, 36, 41, 0, // Skip to: 1628
/* 1587 */    MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 1590 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1615
/* 1594 */    MCD::OPC_CheckPredicate, 78, 99, 1, // Skip to: 1953
/* 1598 */    MCD::OPC_CheckField, 21, 5, 0, 93, 1, // Skip to: 1953
/* 1604 */    MCD::OPC_CheckField, 6, 3, 0, 87, 1, // Skip to: 1953
/* 1610 */    MCD::OPC_Decode, 235, 6, 215, 2, // Opcode: DBITSWAP
/* 1615 */    MCD::OPC_FilterValue, 1, 78, 1, // Skip to: 1953
/* 1619 */    MCD::OPC_CheckPredicate, 78, 74, 1, // Skip to: 1953
/* 1623 */    MCD::OPC_Decode, 232, 6, 216, 2, // Opcode: DALIGN
/* 1628 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1647
/* 1632 */    MCD::OPC_CheckPredicate, 76, 61, 1, // Skip to: 1953
/* 1636 */    MCD::OPC_CheckField, 6, 1, 0, 55, 1, // Skip to: 1953
/* 1642 */    MCD::OPC_Decode, 175, 4, 185, 2, // Opcode: CACHE_R6
/* 1647 */    MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 1660
/* 1651 */    MCD::OPC_CheckPredicate, 81, 42, 1, // Skip to: 1953
/* 1655 */    MCD::OPC_Decode, 144, 16, 217, 2, // Opcode: SC_R6
/* 1660 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1673
/* 1664 */    MCD::OPC_CheckPredicate, 76, 29, 1, // Skip to: 1953
/* 1668 */    MCD::OPC_Decode, 139, 16, 217, 2, // Opcode: SCD_R6
/* 1673 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 1692
/* 1677 */    MCD::OPC_CheckPredicate, 76, 16, 1, // Skip to: 1953
/* 1681 */    MCD::OPC_CheckField, 6, 1, 0, 10, 1, // Skip to: 1953
/* 1687 */    MCD::OPC_Decode, 133, 15, 185, 2, // Opcode: PREF_R6
/* 1692 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 1705
/* 1696 */    MCD::OPC_CheckPredicate, 81, 253, 0, // Skip to: 1953
/* 1700 */    MCD::OPC_Decode, 129, 11, 217, 2, // Opcode: LL_R6
/* 1705 */    MCD::OPC_FilterValue, 55, 244, 0, // Skip to: 1953
/* 1709 */    MCD::OPC_CheckPredicate, 78, 240, 0, // Skip to: 1953
/* 1713 */    MCD::OPC_Decode, 252, 10, 217, 2, // Opcode: LLD_R6
/* 1718 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 1731
/* 1722 */    MCD::OPC_CheckPredicate, 77, 227, 0, // Skip to: 1953
/* 1726 */    MCD::OPC_Decode, 180, 2, 218, 2, // Opcode: BC
/* 1731 */    MCD::OPC_FilterValue, 53, 24, 0, // Skip to: 1759
/* 1735 */    MCD::OPC_CheckPredicate, 22, 11, 0, // Skip to: 1750
/* 1739 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 1750
/* 1745 */    MCD::OPC_Decode, 134, 3, 156, 1, // Opcode: BGTZC_MMR6
/* 1750 */    MCD::OPC_CheckPredicate, 22, 199, 0, // Skip to: 1953
/* 1754 */    MCD::OPC_Decode, 198, 3, 156, 1, // Opcode: BLTZC_MMR6
/* 1759 */    MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 1786
/* 1763 */    MCD::OPC_CheckPredicate, 76, 10, 0, // Skip to: 1777
/* 1767 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1777
/* 1773 */    MCD::OPC_Decode, 167, 10, 89, // Opcode: JIC
/* 1777 */    MCD::OPC_CheckPredicate, 77, 172, 0, // Skip to: 1953
/* 1781 */    MCD::OPC_Decode, 215, 2, 219, 2, // Opcode: BEQZC
/* 1786 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 1799
/* 1790 */    MCD::OPC_CheckPredicate, 76, 159, 0, // Skip to: 1953
/* 1794 */    MCD::OPC_Decode, 171, 2, 218, 2, // Opcode: BALC
/* 1799 */    MCD::OPC_FilterValue, 59, 95, 0, // Skip to: 1898
/* 1803 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 1806 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1819
/* 1810 */    MCD::OPC_CheckPredicate, 76, 139, 0, // Skip to: 1953
/* 1814 */    MCD::OPC_Decode, 128, 1, 150, 1, // Opcode: ADDIUPC
/* 1819 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1832
/* 1823 */    MCD::OPC_CheckPredicate, 76, 126, 0, // Skip to: 1953
/* 1827 */    MCD::OPC_Decode, 171, 11, 150, 1, // Opcode: LWPC
/* 1832 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1845
/* 1836 */    MCD::OPC_CheckPredicate, 77, 113, 0, // Skip to: 1953
/* 1840 */    MCD::OPC_Decode, 181, 11, 150, 1, // Opcode: LWUPC
/* 1845 */    MCD::OPC_FilterValue, 3, 104, 0, // Skip to: 1953
/* 1849 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1852 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1865
/* 1856 */    MCD::OPC_CheckPredicate, 82, 93, 0, // Skip to: 1953
/* 1860 */    MCD::OPC_Decode, 221, 10, 220, 2, // Opcode: LDPC
/* 1865 */    MCD::OPC_FilterValue, 1, 84, 0, // Skip to: 1953
/* 1869 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1872 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1885
/* 1876 */    MCD::OPC_CheckPredicate, 76, 73, 0, // Skip to: 1953
/* 1880 */    MCD::OPC_Decode, 139, 2, 151, 1, // Opcode: AUIPC
/* 1885 */    MCD::OPC_FilterValue, 3, 64, 0, // Skip to: 1953
/* 1889 */    MCD::OPC_CheckPredicate, 76, 60, 0, // Skip to: 1953
/* 1893 */    MCD::OPC_Decode, 205, 1, 151, 1, // Opcode: ALUIPC
/* 1898 */    MCD::OPC_FilterValue, 61, 24, 0, // Skip to: 1926
/* 1902 */    MCD::OPC_CheckPredicate, 22, 11, 0, // Skip to: 1917
/* 1906 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 1917
/* 1912 */    MCD::OPC_Decode, 171, 3, 158, 1, // Opcode: BLEZC_MMR6
/* 1917 */    MCD::OPC_CheckPredicate, 22, 32, 0, // Skip to: 1953
/* 1921 */    MCD::OPC_Decode, 245, 2, 158, 1, // Opcode: BGEZC_MMR6
/* 1926 */    MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 1953
/* 1930 */    MCD::OPC_CheckPredicate, 76, 10, 0, // Skip to: 1944
/* 1934 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1944
/* 1940 */    MCD::OPC_Decode, 164, 10, 89, // Opcode: JIALC
/* 1944 */    MCD::OPC_CheckPredicate, 77, 5, 0, // Skip to: 1953
/* 1948 */    MCD::OPC_Decode, 223, 3, 219, 2, // Opcode: BNEZC
/* 1953 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 6, 24, 0, // Skip to: 31
/* 7 */       MCD::OPC_CheckPredicate, 77, 11, 0, // Skip to: 22
/* 11 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 22
/* 17 */      MCD::OPC_Decode, 167, 3, 198, 2, // Opcode: BLEZALC
/* 22 */      MCD::OPC_CheckPredicate, 77, 145, 0, // Skip to: 171
/* 26 */      MCD::OPC_Decode, 229, 2, 198, 2, // Opcode: BGEUC
/* 31 */      MCD::OPC_FilterValue, 7, 24, 0, // Skip to: 59
/* 35 */      MCD::OPC_CheckPredicate, 77, 11, 0, // Skip to: 50
/* 39 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 50
/* 45 */      MCD::OPC_Decode, 130, 3, 199, 2, // Opcode: BGTZALC
/* 50 */      MCD::OPC_CheckPredicate, 77, 117, 0, // Skip to: 171
/* 54 */      MCD::OPC_Decode, 182, 3, 199, 2, // Opcode: BLTUC
/* 59 */      MCD::OPC_FilterValue, 8, 24, 0, // Skip to: 87
/* 63 */      MCD::OPC_CheckPredicate, 77, 11, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 78
/* 73 */      MCD::OPC_Decode, 213, 2, 212, 2, // Opcode: BEQZALC
/* 78 */      MCD::OPC_CheckPredicate, 77, 89, 0, // Skip to: 171
/* 82 */      MCD::OPC_Decode, 236, 3, 200, 2, // Opcode: BOVC
/* 87 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 115
/* 91 */      MCD::OPC_CheckPredicate, 77, 11, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 106
/* 101 */     MCD::OPC_Decode, 169, 3, 210, 2, // Opcode: BLEZC
/* 106 */     MCD::OPC_CheckPredicate, 77, 61, 0, // Skip to: 171
/* 110 */     MCD::OPC_Decode, 222, 2, 210, 2, // Opcode: BGEC
/* 115 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 143
/* 119 */     MCD::OPC_CheckPredicate, 77, 11, 0, // Skip to: 134
/* 123 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 134
/* 129 */     MCD::OPC_Decode, 132, 3, 211, 2, // Opcode: BGTZC
/* 134 */     MCD::OPC_CheckPredicate, 77, 33, 0, // Skip to: 171
/* 138 */     MCD::OPC_Decode, 175, 3, 211, 2, // Opcode: BLTC
/* 143 */     MCD::OPC_FilterValue, 24, 24, 0, // Skip to: 171
/* 147 */     MCD::OPC_CheckPredicate, 77, 11, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 162
/* 157 */     MCD::OPC_Decode, 221, 3, 212, 2, // Opcode: BNEZALC
/* 162 */     MCD::OPC_CheckPredicate, 77, 5, 0, // Skip to: 171
/* 166 */     MCD::OPC_Decode, 229, 3, 212, 2, // Opcode: BNVC
/* 171 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_BranchZero32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 83, 18, 0, // Skip to: 29
/* 11 */      MCD::OPC_Decode, 244, 2, 210, 2, // Opcode: BGEZC64
/* 16 */      MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 83, 5, 0, // Skip to: 29
/* 24 */      MCD::OPC_Decode, 197, 3, 211, 2, // Opcode: BLTZC64
/* 29 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_GP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 10 */      MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 84, 178, 0, // Skip to: 196
/* 18 */      MCD::OPC_Decode, 179, 16, 12, // Opcode: SELEQZ64
/* 22 */      MCD::OPC_FilterValue, 55, 170, 0, // Skip to: 196
/* 26 */      MCD::OPC_CheckPredicate, 84, 166, 0, // Skip to: 196
/* 30 */      MCD::OPC_Decode, 186, 16, 12, // Opcode: SELNEZ64
/* 34 */      MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 47
/* 38 */      MCD::OPC_CheckPredicate, 83, 154, 0, // Skip to: 196
/* 42 */      MCD::OPC_Decode, 230, 2, 198, 2, // Opcode: BGEUC64
/* 47 */      MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 60
/* 51 */      MCD::OPC_CheckPredicate, 83, 141, 0, // Skip to: 196
/* 55 */      MCD::OPC_Decode, 183, 3, 199, 2, // Opcode: BLTUC64
/* 60 */      MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 73
/* 64 */      MCD::OPC_CheckPredicate, 83, 128, 0, // Skip to: 196
/* 68 */      MCD::OPC_Decode, 208, 2, 200, 2, // Opcode: BEQC64
/* 73 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 101
/* 77 */      MCD::OPC_CheckPredicate, 83, 11, 0, // Skip to: 92
/* 81 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 92
/* 87 */      MCD::OPC_Decode, 170, 3, 210, 2, // Opcode: BLEZC64
/* 92 */      MCD::OPC_CheckPredicate, 83, 100, 0, // Skip to: 196
/* 96 */      MCD::OPC_Decode, 223, 2, 210, 2, // Opcode: BGEC64
/* 101 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 129
/* 105 */     MCD::OPC_CheckPredicate, 83, 11, 0, // Skip to: 120
/* 109 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 120
/* 115 */     MCD::OPC_Decode, 133, 3, 211, 2, // Opcode: BGTZC64
/* 120 */     MCD::OPC_CheckPredicate, 83, 72, 0, // Skip to: 196
/* 124 */     MCD::OPC_Decode, 176, 3, 211, 2, // Opcode: BLTC64
/* 129 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 142
/* 133 */     MCD::OPC_CheckPredicate, 83, 59, 0, // Skip to: 196
/* 137 */     MCD::OPC_Decode, 208, 3, 212, 2, // Opcode: BNEC64
/* 142 */     MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 169
/* 146 */     MCD::OPC_CheckPredicate, 83, 10, 0, // Skip to: 160
/* 150 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 168, 10, 11, // Opcode: JIC64
/* 160 */     MCD::OPC_CheckPredicate, 83, 32, 0, // Skip to: 196
/* 164 */     MCD::OPC_Decode, 217, 2, 221, 2, // Opcode: BEQZC64
/* 169 */     MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 196
/* 173 */     MCD::OPC_CheckPredicate, 83, 10, 0, // Skip to: 187
/* 177 */     MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 187
/* 183 */     MCD::OPC_Decode, 165, 10, 11, // Opcode: JIALC64
/* 187 */     MCD::OPC_CheckPredicate, 83, 5, 0, // Skip to: 196
/* 191 */     MCD::OPC_Decode, 225, 3, 221, 2, // Opcode: BNEZC64
/* 196 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 38, 15, 0, // Skip to: 22
/* 7 */       MCD::OPC_CheckPredicate, 85, 30, 0, // Skip to: 41
/* 11 */      MCD::OPC_CheckField, 26, 6, 31, 24, 0, // Skip to: 41
/* 17 */      MCD::OPC_Decode, 137, 16, 217, 2, // Opcode: SC64_R6
/* 22 */      MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 41
/* 26 */      MCD::OPC_CheckPredicate, 85, 11, 0, // Skip to: 41
/* 30 */      MCD::OPC_CheckField, 26, 6, 31, 5, 0, // Skip to: 41
/* 36 */      MCD::OPC_Decode, 250, 10, 217, 2, // Opcode: LL64_R6
/* 41 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 132, 1, // Skip to: 395
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 34
/* 14 */      MCD::OPC_CheckPredicate, 25, 227, 3, // Skip to: 1013
/* 18 */      MCD::OPC_CheckField, 16, 5, 0, 221, 3, // Skip to: 1013
/* 24 */      MCD::OPC_CheckField, 6, 5, 0, 215, 3, // Skip to: 1013
/* 30 */      MCD::OPC_Decode, 150, 10, 15, // Opcode: JALR64
/* 34 */      MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 53
/* 38 */      MCD::OPC_CheckPredicate, 86, 203, 3, // Skip to: 1013
/* 42 */      MCD::OPC_CheckField, 6, 5, 0, 197, 3, // Skip to: 1013
/* 48 */      MCD::OPC_Decode, 229, 7, 222, 2, // Opcode: DSLLV
/* 53 */      MCD::OPC_FilterValue, 22, 29, 0, // Skip to: 86
/* 57 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 60 */      MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 73
/* 64 */      MCD::OPC_CheckPredicate, 86, 177, 3, // Skip to: 1013
/* 68 */      MCD::OPC_Decode, 235, 7, 222, 2, // Opcode: DSRLV
/* 73 */      MCD::OPC_FilterValue, 1, 168, 3, // Skip to: 1013
/* 77 */      MCD::OPC_CheckPredicate, 87, 164, 3, // Skip to: 1013
/* 81 */      MCD::OPC_Decode, 220, 7, 222, 2, // Opcode: DROTRV
/* 86 */      MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 105
/* 90 */      MCD::OPC_CheckPredicate, 86, 151, 3, // Skip to: 1013
/* 94 */      MCD::OPC_CheckField, 6, 5, 0, 145, 3, // Skip to: 1013
/* 100 */     MCD::OPC_Decode, 232, 7, 222, 2, // Opcode: DSRAV
/* 105 */     MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 124
/* 109 */     MCD::OPC_CheckPredicate, 88, 132, 3, // Skip to: 1013
/* 113 */     MCD::OPC_CheckField, 6, 10, 0, 126, 3, // Skip to: 1013
/* 119 */     MCD::OPC_Decode, 159, 7, 223, 2, // Opcode: DMULT
/* 124 */     MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 143
/* 128 */     MCD::OPC_CheckPredicate, 88, 113, 3, // Skip to: 1013
/* 132 */     MCD::OPC_CheckField, 6, 10, 0, 107, 3, // Skip to: 1013
/* 138 */     MCD::OPC_Decode, 160, 7, 223, 2, // Opcode: DMULTu
/* 143 */     MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 162
/* 147 */     MCD::OPC_CheckPredicate, 88, 94, 3, // Skip to: 1013
/* 151 */     MCD::OPC_CheckField, 6, 10, 0, 88, 3, // Skip to: 1013
/* 157 */     MCD::OPC_Decode, 222, 7, 223, 2, // Opcode: DSDIV
/* 162 */     MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 181
/* 166 */     MCD::OPC_CheckPredicate, 88, 75, 3, // Skip to: 1013
/* 170 */     MCD::OPC_CheckField, 6, 10, 0, 69, 3, // Skip to: 1013
/* 176 */     MCD::OPC_Decode, 238, 7, 223, 2, // Opcode: DUDIV
/* 181 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 199
/* 185 */     MCD::OPC_CheckPredicate, 86, 56, 3, // Skip to: 1013
/* 189 */     MCD::OPC_CheckField, 6, 5, 0, 50, 3, // Skip to: 1013
/* 195 */     MCD::OPC_Decode, 227, 6, 12, // Opcode: DADD
/* 199 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 217
/* 203 */     MCD::OPC_CheckPredicate, 86, 38, 3, // Skip to: 1013
/* 207 */     MCD::OPC_CheckField, 6, 5, 0, 32, 3, // Skip to: 1013
/* 213 */     MCD::OPC_Decode, 230, 6, 12, // Opcode: DADDu
/* 217 */     MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 235
/* 221 */     MCD::OPC_CheckPredicate, 86, 20, 3, // Skip to: 1013
/* 225 */     MCD::OPC_CheckField, 6, 5, 0, 14, 3, // Skip to: 1013
/* 231 */     MCD::OPC_Decode, 236, 7, 12, // Opcode: DSUB
/* 235 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 86, 2, 3, // Skip to: 1013
/* 243 */     MCD::OPC_CheckField, 6, 5, 0, 252, 2, // Skip to: 1013
/* 249 */     MCD::OPC_Decode, 237, 7, 12, // Opcode: DSUBu
/* 253 */     MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 272
/* 257 */     MCD::OPC_CheckPredicate, 86, 240, 2, // Skip to: 1013
/* 261 */     MCD::OPC_CheckField, 21, 5, 0, 234, 2, // Skip to: 1013
/* 267 */     MCD::OPC_Decode, 226, 7, 224, 2, // Opcode: DSLL
/* 272 */     MCD::OPC_FilterValue, 58, 29, 0, // Skip to: 305
/* 276 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 279 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 292
/* 283 */     MCD::OPC_CheckPredicate, 86, 214, 2, // Skip to: 1013
/* 287 */     MCD::OPC_Decode, 233, 7, 224, 2, // Opcode: DSRL
/* 292 */     MCD::OPC_FilterValue, 1, 205, 2, // Skip to: 1013
/* 296 */     MCD::OPC_CheckPredicate, 87, 201, 2, // Skip to: 1013
/* 300 */     MCD::OPC_Decode, 218, 7, 224, 2, // Opcode: DROTR
/* 305 */     MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 324
/* 309 */     MCD::OPC_CheckPredicate, 86, 188, 2, // Skip to: 1013
/* 313 */     MCD::OPC_CheckField, 21, 5, 0, 182, 2, // Skip to: 1013
/* 319 */     MCD::OPC_Decode, 230, 7, 224, 2, // Opcode: DSRA
/* 324 */     MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 343
/* 328 */     MCD::OPC_CheckPredicate, 86, 169, 2, // Skip to: 1013
/* 332 */     MCD::OPC_CheckField, 21, 5, 0, 163, 2, // Skip to: 1013
/* 338 */     MCD::OPC_Decode, 227, 7, 224, 2, // Opcode: DSLL32
/* 343 */     MCD::OPC_FilterValue, 62, 29, 0, // Skip to: 376
/* 347 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 350 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 363
/* 354 */     MCD::OPC_CheckPredicate, 86, 143, 2, // Skip to: 1013
/* 358 */     MCD::OPC_Decode, 234, 7, 224, 2, // Opcode: DSRL32
/* 363 */     MCD::OPC_FilterValue, 1, 134, 2, // Skip to: 1013
/* 367 */     MCD::OPC_CheckPredicate, 87, 130, 2, // Skip to: 1013
/* 371 */     MCD::OPC_Decode, 219, 7, 224, 2, // Opcode: DROTR32
/* 376 */     MCD::OPC_FilterValue, 63, 121, 2, // Skip to: 1013
/* 380 */     MCD::OPC_CheckPredicate, 86, 117, 2, // Skip to: 1013
/* 384 */     MCD::OPC_CheckField, 21, 5, 0, 111, 2, // Skip to: 1013
/* 390 */     MCD::OPC_Decode, 231, 7, 224, 2, // Opcode: DSRA32
/* 395 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 440
/* 399 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 402 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 421
/* 406 */     MCD::OPC_CheckPredicate, 89, 91, 2, // Skip to: 1013
/* 410 */     MCD::OPC_CheckField, 3, 8, 0, 85, 2, // Skip to: 1013
/* 416 */     MCD::OPC_Decode, 141, 7, 225, 2, // Opcode: DMFC0
/* 421 */     MCD::OPC_FilterValue, 5, 76, 2, // Skip to: 1013
/* 425 */     MCD::OPC_CheckPredicate, 89, 72, 2, // Skip to: 1013
/* 429 */     MCD::OPC_CheckField, 3, 8, 0, 66, 2, // Skip to: 1013
/* 435 */     MCD::OPC_Decode, 148, 7, 226, 2, // Opcode: DMTC0
/* 440 */     MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 485
/* 444 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 447 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 466
/* 451 */     MCD::OPC_CheckPredicate, 89, 46, 2, // Skip to: 1013
/* 455 */     MCD::OPC_CheckField, 3, 8, 0, 40, 2, // Skip to: 1013
/* 461 */     MCD::OPC_Decode, 143, 7, 227, 2, // Opcode: DMFC2
/* 466 */     MCD::OPC_FilterValue, 5, 31, 2, // Skip to: 1013
/* 470 */     MCD::OPC_CheckPredicate, 89, 27, 2, // Skip to: 1013
/* 474 */     MCD::OPC_CheckField, 3, 8, 0, 21, 2, // Skip to: 1013
/* 480 */     MCD::OPC_Decode, 150, 7, 228, 2, // Opcode: DMTC2
/* 485 */     MCD::OPC_FilterValue, 21, 227, 0, // Skip to: 716
/* 489 */     MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 492 */     MCD::OPC_FilterValue, 188, 8, 9, 0, // Skip to: 506
/* 497 */     MCD::OPC_CheckPredicate, 90, 0, 2, // Skip to: 1013
/* 501 */     MCD::OPC_Decode, 136, 6, 229, 2, // Opcode: C_F_D64_MM
/* 506 */     MCD::OPC_FilterValue, 252, 8, 9, 0, // Skip to: 520
/* 511 */     MCD::OPC_CheckPredicate, 90, 242, 1, // Skip to: 1013
/* 515 */     MCD::OPC_Decode, 220, 6, 229, 2, // Opcode: C_UN_D64_MM
/* 520 */     MCD::OPC_FilterValue, 188, 9, 9, 0, // Skip to: 534
/* 525 */     MCD::OPC_CheckPredicate, 90, 228, 1, // Skip to: 1013
/* 529 */     MCD::OPC_Decode, 130, 6, 229, 2, // Opcode: C_EQ_D64_MM
/* 534 */     MCD::OPC_FilterValue, 252, 9, 9, 0, // Skip to: 548
/* 539 */     MCD::OPC_CheckPredicate, 90, 214, 1, // Skip to: 1013
/* 543 */     MCD::OPC_Decode, 202, 6, 229, 2, // Opcode: C_UEQ_D64_MM
/* 548 */     MCD::OPC_FilterValue, 188, 10, 9, 0, // Skip to: 562
/* 553 */     MCD::OPC_CheckPredicate, 90, 200, 1, // Skip to: 1013
/* 557 */     MCD::OPC_Decode, 184, 6, 229, 2, // Opcode: C_OLT_D64_MM
/* 562 */     MCD::OPC_FilterValue, 252, 10, 9, 0, // Skip to: 576
/* 567 */     MCD::OPC_CheckPredicate, 90, 186, 1, // Skip to: 1013
/* 571 */     MCD::OPC_Decode, 214, 6, 229, 2, // Opcode: C_ULT_D64_MM
/* 576 */     MCD::OPC_FilterValue, 188, 11, 9, 0, // Skip to: 590
/* 581 */     MCD::OPC_CheckPredicate, 90, 172, 1, // Skip to: 1013
/* 585 */     MCD::OPC_Decode, 178, 6, 229, 2, // Opcode: C_OLE_D64_MM
/* 590 */     MCD::OPC_FilterValue, 252, 11, 9, 0, // Skip to: 604
/* 595 */     MCD::OPC_CheckPredicate, 90, 158, 1, // Skip to: 1013
/* 599 */     MCD::OPC_Decode, 208, 6, 229, 2, // Opcode: C_ULE_D64_MM
/* 604 */     MCD::OPC_FilterValue, 188, 12, 9, 0, // Skip to: 618
/* 609 */     MCD::OPC_CheckPredicate, 90, 144, 1, // Skip to: 1013
/* 613 */     MCD::OPC_Decode, 196, 6, 229, 2, // Opcode: C_SF_D64_MM
/* 618 */     MCD::OPC_FilterValue, 252, 12, 9, 0, // Skip to: 632
/* 623 */     MCD::OPC_CheckPredicate, 90, 130, 1, // Skip to: 1013
/* 627 */     MCD::OPC_Decode, 160, 6, 229, 2, // Opcode: C_NGLE_D64_MM
/* 632 */     MCD::OPC_FilterValue, 188, 13, 9, 0, // Skip to: 646
/* 637 */     MCD::OPC_CheckPredicate, 90, 116, 1, // Skip to: 1013
/* 641 */     MCD::OPC_Decode, 190, 6, 229, 2, // Opcode: C_SEQ_D64_MM
/* 646 */     MCD::OPC_FilterValue, 252, 13, 9, 0, // Skip to: 660
/* 651 */     MCD::OPC_CheckPredicate, 90, 102, 1, // Skip to: 1013
/* 655 */     MCD::OPC_Decode, 166, 6, 229, 2, // Opcode: C_NGL_D64_MM
/* 660 */     MCD::OPC_FilterValue, 188, 14, 9, 0, // Skip to: 674
/* 665 */     MCD::OPC_CheckPredicate, 90, 88, 1, // Skip to: 1013
/* 669 */     MCD::OPC_Decode, 148, 6, 229, 2, // Opcode: C_LT_D64_MM
/* 674 */     MCD::OPC_FilterValue, 252, 14, 9, 0, // Skip to: 688
/* 679 */     MCD::OPC_CheckPredicate, 90, 74, 1, // Skip to: 1013
/* 683 */     MCD::OPC_Decode, 154, 6, 229, 2, // Opcode: C_NGE_D64_MM
/* 688 */     MCD::OPC_FilterValue, 188, 15, 9, 0, // Skip to: 702
/* 693 */     MCD::OPC_CheckPredicate, 90, 60, 1, // Skip to: 1013
/* 697 */     MCD::OPC_Decode, 142, 6, 229, 2, // Opcode: C_LE_D64_MM
/* 702 */     MCD::OPC_FilterValue, 252, 15, 50, 1, // Skip to: 1013
/* 707 */     MCD::OPC_CheckPredicate, 90, 46, 1, // Skip to: 1013
/* 711 */     MCD::OPC_Decode, 172, 6, 229, 2, // Opcode: C_NGT_D64_MM
/* 716 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 729
/* 720 */     MCD::OPC_CheckPredicate, 91, 33, 1, // Skip to: 1013
/* 724 */     MCD::OPC_Decode, 228, 6, 230, 2, // Opcode: DADDi
/* 729 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 742
/* 733 */     MCD::OPC_CheckPredicate, 86, 20, 1, // Skip to: 1013
/* 737 */     MCD::OPC_Decode, 229, 6, 230, 2, // Opcode: DADDiu
/* 742 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 754
/* 746 */     MCD::OPC_CheckPredicate, 91, 7, 1, // Skip to: 1013
/* 750 */     MCD::OPC_Decode, 219, 10, 107, // Opcode: LDL
/* 754 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 766
/* 758 */     MCD::OPC_CheckPredicate, 91, 251, 0, // Skip to: 1013
/* 762 */     MCD::OPC_Decode, 222, 10, 107, // Opcode: LDR
/* 766 */     MCD::OPC_FilterValue, 28, 29, 0, // Skip to: 799
/* 770 */     MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 773 */     MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 786
/* 777 */     MCD::OPC_CheckPredicate, 92, 232, 0, // Skip to: 1013
/* 781 */     MCD::OPC_Decode, 238, 6, 231, 2, // Opcode: DCLZ
/* 786 */     MCD::OPC_FilterValue, 37, 223, 0, // Skip to: 1013
/* 790 */     MCD::OPC_CheckPredicate, 92, 219, 0, // Skip to: 1013
/* 794 */     MCD::OPC_Decode, 236, 6, 231, 2, // Opcode: DCLO
/* 799 */     MCD::OPC_FilterValue, 31, 126, 0, // Skip to: 929
/* 803 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 806 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 819
/* 810 */     MCD::OPC_CheckPredicate, 87, 199, 0, // Skip to: 1013
/* 814 */     MCD::OPC_Decode, 247, 6, 232, 2, // Opcode: DEXTM
/* 819 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 832
/* 823 */     MCD::OPC_CheckPredicate, 87, 186, 0, // Skip to: 1013
/* 827 */     MCD::OPC_Decode, 248, 6, 232, 2, // Opcode: DEXTU
/* 832 */     MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 845
/* 836 */     MCD::OPC_CheckPredicate, 87, 173, 0, // Skip to: 1013
/* 840 */     MCD::OPC_Decode, 245, 6, 232, 2, // Opcode: DEXT
/* 845 */     MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 858
/* 849 */     MCD::OPC_CheckPredicate, 87, 160, 0, // Skip to: 1013
/* 853 */     MCD::OPC_Decode, 251, 6, 233, 2, // Opcode: DINSM
/* 858 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 871
/* 862 */     MCD::OPC_CheckPredicate, 87, 147, 0, // Skip to: 1013
/* 866 */     MCD::OPC_Decode, 252, 6, 233, 2, // Opcode: DINSU
/* 871 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 884
/* 875 */     MCD::OPC_CheckPredicate, 87, 134, 0, // Skip to: 1013
/* 879 */     MCD::OPC_Decode, 250, 6, 233, 2, // Opcode: DINS
/* 884 */     MCD::OPC_FilterValue, 36, 125, 0, // Skip to: 1013
/* 888 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 891 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 910
/* 895 */     MCD::OPC_CheckPredicate, 87, 114, 0, // Skip to: 1013
/* 899 */     MCD::OPC_CheckField, 21, 5, 0, 108, 0, // Skip to: 1013
/* 905 */     MCD::OPC_Decode, 221, 7, 215, 2, // Opcode: DSBH
/* 910 */     MCD::OPC_FilterValue, 5, 99, 0, // Skip to: 1013
/* 914 */     MCD::OPC_CheckPredicate, 87, 95, 0, // Skip to: 1013
/* 918 */     MCD::OPC_CheckField, 21, 5, 0, 89, 0, // Skip to: 1013
/* 924 */     MCD::OPC_Decode, 225, 7, 215, 2, // Opcode: DSHD
/* 929 */     MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 941
/* 933 */     MCD::OPC_CheckPredicate, 86, 76, 0, // Skip to: 1013
/* 937 */     MCD::OPC_Decode, 190, 11, 107, // Opcode: LWu
/* 941 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 953
/* 945 */     MCD::OPC_CheckPredicate, 91, 64, 0, // Skip to: 1013
/* 949 */     MCD::OPC_Decode, 163, 16, 107, // Opcode: SDL
/* 953 */     MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 965
/* 957 */     MCD::OPC_CheckPredicate, 91, 52, 0, // Skip to: 1013
/* 961 */     MCD::OPC_Decode, 165, 16, 107, // Opcode: SDR
/* 965 */     MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 977
/* 969 */     MCD::OPC_CheckPredicate, 88, 40, 0, // Skip to: 1013
/* 973 */     MCD::OPC_Decode, 251, 10, 107, // Opcode: LLD
/* 977 */     MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 989
/* 981 */     MCD::OPC_CheckPredicate, 86, 28, 0, // Skip to: 1013
/* 985 */     MCD::OPC_Decode, 206, 10, 107, // Opcode: LD
/* 989 */     MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 1001
/* 993 */     MCD::OPC_CheckPredicate, 91, 16, 0, // Skip to: 1013
/* 997 */     MCD::OPC_Decode, 138, 16, 107, // Opcode: SCD
/* 1001 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 1013
/* 1005 */    MCD::OPC_CheckPredicate, 86, 4, 0, // Skip to: 1013
/* 1009 */    MCD::OPC_Decode, 145, 16, 107, // Opcode: SD
/* 1013 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMipsDSP32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 93, 16, 0, // Skip to: 27
/* 11 */      MCD::OPC_Decode, 156, 11, 107, // Opcode: LWDSP
/* 15 */      MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 93, 4, 0, // Skip to: 27
/* 23 */      MCD::OPC_Decode, 185, 18, 107, // Opcode: SWDSP
/* 27 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMipsFP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 17, 59, 4, // Skip to: 1090
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 92, 0, // Skip to: 106
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 36
/* 21 */      MCD::OPC_CheckPredicate, 94, 202, 4, // Skip to: 1251
/* 25 */      MCD::OPC_CheckField, 6, 5, 0, 196, 4, // Skip to: 1251
/* 31 */      MCD::OPC_Decode, 150, 12, 234, 2, // Opcode: MFC1_D64
/* 36 */      MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 55
/* 40 */      MCD::OPC_CheckPredicate, 95, 183, 4, // Skip to: 1251
/* 44 */      MCD::OPC_CheckField, 6, 5, 0, 177, 4, // Skip to: 1251
/* 50 */      MCD::OPC_Decode, 158, 12, 234, 2, // Opcode: MFHC1_D64
/* 55 */      MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 74
/* 59 */      MCD::OPC_CheckPredicate, 94, 164, 4, // Skip to: 1251
/* 63 */      MCD::OPC_CheckField, 6, 5, 0, 158, 4, // Skip to: 1251
/* 69 */      MCD::OPC_Decode, 176, 13, 235, 2, // Opcode: MTC1_D64
/* 74 */      MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 93
/* 78 */      MCD::OPC_CheckPredicate, 95, 145, 4, // Skip to: 1251
/* 82 */      MCD::OPC_CheckField, 6, 5, 0, 139, 4, // Skip to: 1251
/* 88 */      MCD::OPC_Decode, 184, 13, 236, 2, // Opcode: MTHC1_D64
/* 93 */      MCD::OPC_FilterValue, 17, 130, 4, // Skip to: 1251
/* 97 */      MCD::OPC_CheckPredicate, 94, 126, 4, // Skip to: 1251
/* 101 */     MCD::OPC_Decode, 174, 8, 205, 2, // Opcode: FADD_D64
/* 106 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 125
/* 110 */     MCD::OPC_CheckPredicate, 94, 113, 4, // Skip to: 1251
/* 114 */     MCD::OPC_CheckField, 21, 5, 17, 107, 4, // Skip to: 1251
/* 120 */     MCD::OPC_Decode, 191, 9, 205, 2, // Opcode: FSUB_D64
/* 125 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 144
/* 129 */     MCD::OPC_CheckPredicate, 94, 94, 4, // Skip to: 1251
/* 133 */     MCD::OPC_CheckField, 21, 5, 17, 88, 4, // Skip to: 1251
/* 139 */     MCD::OPC_Decode, 149, 9, 205, 2, // Opcode: FMUL_D64
/* 144 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 163
/* 148 */     MCD::OPC_CheckPredicate, 94, 75, 4, // Skip to: 1251
/* 152 */     MCD::OPC_CheckField, 21, 5, 17, 69, 4, // Skip to: 1251
/* 158 */     MCD::OPC_Decode, 212, 8, 205, 2, // Opcode: FDIV_D64
/* 163 */     MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 183
/* 167 */     MCD::OPC_CheckPredicate, 96, 56, 4, // Skip to: 1251
/* 171 */     MCD::OPC_CheckField, 16, 10, 160, 4, 49, 4, // Skip to: 1251
/* 178 */     MCD::OPC_Decode, 184, 9, 204, 1, // Opcode: FSQRT_D64
/* 183 */     MCD::OPC_FilterValue, 5, 16, 0, // Skip to: 203
/* 187 */     MCD::OPC_CheckPredicate, 97, 36, 4, // Skip to: 1251
/* 191 */     MCD::OPC_CheckField, 16, 10, 160, 4, 29, 4, // Skip to: 1251
/* 198 */     MCD::OPC_Decode, 167, 8, 204, 1, // Opcode: FABS_D64
/* 203 */     MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 223
/* 207 */     MCD::OPC_CheckPredicate, 94, 16, 4, // Skip to: 1251
/* 211 */     MCD::OPC_CheckField, 16, 10, 160, 4, 9, 4, // Skip to: 1251
/* 218 */     MCD::OPC_Decode, 140, 9, 204, 1, // Opcode: FMOV_D64
/* 223 */     MCD::OPC_FilterValue, 7, 16, 0, // Skip to: 243
/* 227 */     MCD::OPC_CheckPredicate, 94, 252, 3, // Skip to: 1251
/* 231 */     MCD::OPC_CheckField, 16, 10, 160, 4, 245, 3, // Skip to: 1251
/* 238 */     MCD::OPC_Decode, 157, 9, 204, 1, // Opcode: FNEG_D64
/* 243 */     MCD::OPC_FilterValue, 8, 31, 0, // Skip to: 278
/* 247 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 250 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 264
/* 255 */     MCD::OPC_CheckPredicate, 97, 224, 3, // Skip to: 1251
/* 259 */     MCD::OPC_Decode, 227, 15, 197, 1, // Opcode: ROUND_L_S
/* 264 */     MCD::OPC_FilterValue, 160, 4, 214, 3, // Skip to: 1251
/* 269 */     MCD::OPC_CheckPredicate, 97, 210, 3, // Skip to: 1251
/* 273 */     MCD::OPC_Decode, 225, 15, 204, 1, // Opcode: ROUND_L_D64
/* 278 */     MCD::OPC_FilterValue, 9, 31, 0, // Skip to: 313
/* 282 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 285 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 299
/* 290 */     MCD::OPC_CheckPredicate, 97, 189, 3, // Skip to: 1251
/* 294 */     MCD::OPC_Decode, 180, 19, 197, 1, // Opcode: TRUNC_L_S
/* 299 */     MCD::OPC_FilterValue, 160, 4, 179, 3, // Skip to: 1251
/* 304 */     MCD::OPC_CheckPredicate, 97, 175, 3, // Skip to: 1251
/* 308 */     MCD::OPC_Decode, 178, 19, 204, 1, // Opcode: TRUNC_L_D64
/* 313 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 348
/* 317 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 320 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 334
/* 325 */     MCD::OPC_CheckPredicate, 97, 154, 3, // Skip to: 1251
/* 329 */     MCD::OPC_Decode, 178, 4, 197, 1, // Opcode: CEIL_L_S
/* 334 */     MCD::OPC_FilterValue, 160, 4, 144, 3, // Skip to: 1251
/* 339 */     MCD::OPC_CheckPredicate, 97, 140, 3, // Skip to: 1251
/* 343 */     MCD::OPC_Decode, 176, 4, 204, 1, // Opcode: CEIL_L_D64
/* 348 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 383
/* 352 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 355 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 369
/* 360 */     MCD::OPC_CheckPredicate, 97, 119, 3, // Skip to: 1251
/* 364 */     MCD::OPC_Decode, 247, 8, 197, 1, // Opcode: FLOOR_L_S
/* 369 */     MCD::OPC_FilterValue, 160, 4, 109, 3, // Skip to: 1251
/* 374 */     MCD::OPC_CheckPredicate, 97, 105, 3, // Skip to: 1251
/* 378 */     MCD::OPC_Decode, 245, 8, 204, 1, // Opcode: FLOOR_L_D64
/* 383 */     MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 403
/* 387 */     MCD::OPC_CheckPredicate, 96, 92, 3, // Skip to: 1251
/* 391 */     MCD::OPC_CheckField, 16, 10, 160, 4, 85, 3, // Skip to: 1251
/* 398 */     MCD::OPC_Decode, 230, 15, 237, 2, // Opcode: ROUND_W_D64
/* 403 */     MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 423
/* 407 */     MCD::OPC_CheckPredicate, 96, 72, 3, // Skip to: 1251
/* 411 */     MCD::OPC_CheckField, 16, 10, 160, 4, 65, 3, // Skip to: 1251
/* 418 */     MCD::OPC_Decode, 183, 19, 237, 2, // Opcode: TRUNC_W_D64
/* 423 */     MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 443
/* 427 */     MCD::OPC_CheckPredicate, 96, 52, 3, // Skip to: 1251
/* 431 */     MCD::OPC_CheckField, 16, 10, 160, 4, 45, 3, // Skip to: 1251
/* 438 */     MCD::OPC_Decode, 181, 4, 237, 2, // Opcode: CEIL_W_D64
/* 443 */     MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 463
/* 447 */     MCD::OPC_CheckPredicate, 96, 32, 3, // Skip to: 1251
/* 451 */     MCD::OPC_CheckField, 16, 10, 160, 4, 25, 3, // Skip to: 1251
/* 458 */     MCD::OPC_Decode, 250, 8, 237, 2, // Opcode: FLOOR_W_D64
/* 463 */     MCD::OPC_FilterValue, 17, 41, 0, // Skip to: 508
/* 467 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 470 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 489
/* 474 */     MCD::OPC_CheckPredicate, 98, 5, 3, // Skip to: 1251
/* 478 */     MCD::OPC_CheckField, 21, 5, 17, 255, 2, // Skip to: 1251
/* 484 */     MCD::OPC_Decode, 234, 12, 238, 2, // Opcode: MOVF_D64
/* 489 */     MCD::OPC_FilterValue, 1, 246, 2, // Skip to: 1251
/* 493 */     MCD::OPC_CheckPredicate, 98, 242, 2, // Skip to: 1251
/* 497 */     MCD::OPC_CheckField, 21, 5, 17, 236, 2, // Skip to: 1251
/* 503 */     MCD::OPC_Decode, 254, 12, 238, 2, // Opcode: MOVT_D64
/* 508 */     MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 527
/* 512 */     MCD::OPC_CheckPredicate, 98, 223, 2, // Skip to: 1251
/* 516 */     MCD::OPC_CheckField, 21, 5, 17, 217, 2, // Skip to: 1251
/* 522 */     MCD::OPC_Decode, 138, 13, 239, 2, // Opcode: MOVZ_I_D64
/* 527 */     MCD::OPC_FilterValue, 19, 15, 0, // Skip to: 546
/* 531 */     MCD::OPC_CheckPredicate, 98, 204, 2, // Skip to: 1251
/* 535 */     MCD::OPC_CheckField, 21, 5, 17, 198, 2, // Skip to: 1251
/* 541 */     MCD::OPC_Decode, 246, 12, 239, 2, // Opcode: MOVN_I_D64
/* 546 */     MCD::OPC_FilterValue, 21, 16, 0, // Skip to: 566
/* 550 */     MCD::OPC_CheckPredicate, 99, 185, 2, // Skip to: 1251
/* 554 */     MCD::OPC_CheckField, 16, 10, 160, 4, 178, 2, // Skip to: 1251
/* 561 */     MCD::OPC_Decode, 201, 15, 204, 1, // Opcode: RECIP_D64
/* 566 */     MCD::OPC_FilterValue, 22, 16, 0, // Skip to: 586
/* 570 */     MCD::OPC_CheckPredicate, 99, 165, 2, // Skip to: 1251
/* 574 */     MCD::OPC_CheckField, 16, 10, 160, 4, 158, 2, // Skip to: 1251
/* 581 */     MCD::OPC_Decode, 238, 15, 204, 1, // Opcode: RSQRT_D64
/* 586 */     MCD::OPC_FilterValue, 32, 31, 0, // Skip to: 621
/* 590 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 593 */     MCD::OPC_FilterValue, 160, 4, 9, 0, // Skip to: 607
/* 598 */     MCD::OPC_CheckPredicate, 94, 137, 2, // Skip to: 1251
/* 602 */     MCD::OPC_Decode, 241, 5, 237, 2, // Opcode: CVT_S_D64
/* 607 */     MCD::OPC_FilterValue, 160, 5, 127, 2, // Skip to: 1251
/* 612 */     MCD::OPC_CheckPredicate, 97, 123, 2, // Skip to: 1251
/* 616 */     MCD::OPC_Decode, 243, 5, 237, 2, // Opcode: CVT_S_L
/* 621 */     MCD::OPC_FilterValue, 33, 45, 0, // Skip to: 670
/* 625 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 628 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 642
/* 633 */     MCD::OPC_CheckPredicate, 94, 102, 2, // Skip to: 1251
/* 637 */     MCD::OPC_Decode, 227, 5, 197, 1, // Opcode: CVT_D64_S
/* 642 */     MCD::OPC_FilterValue, 128, 5, 9, 0, // Skip to: 656
/* 647 */     MCD::OPC_CheckPredicate, 94, 88, 2, // Skip to: 1251
/* 651 */     MCD::OPC_Decode, 228, 5, 197, 1, // Opcode: CVT_D64_W
/* 656 */     MCD::OPC_FilterValue, 160, 5, 78, 2, // Skip to: 1251
/* 661 */     MCD::OPC_CheckPredicate, 94, 74, 2, // Skip to: 1251
/* 665 */     MCD::OPC_Decode, 226, 5, 204, 1, // Opcode: CVT_D64_L
/* 670 */     MCD::OPC_FilterValue, 36, 16, 0, // Skip to: 690
/* 674 */     MCD::OPC_CheckPredicate, 94, 61, 2, // Skip to: 1251
/* 678 */     MCD::OPC_CheckField, 16, 10, 160, 4, 54, 2, // Skip to: 1251
/* 685 */     MCD::OPC_Decode, 249, 5, 237, 2, // Opcode: CVT_W_D64
/* 690 */     MCD::OPC_FilterValue, 48, 21, 0, // Skip to: 715
/* 694 */     MCD::OPC_CheckPredicate, 100, 41, 2, // Skip to: 1251
/* 698 */     MCD::OPC_CheckField, 21, 5, 17, 35, 2, // Skip to: 1251
/* 704 */     MCD::OPC_CheckField, 6, 2, 0, 29, 2, // Skip to: 1251
/* 710 */     MCD::OPC_Decode, 135, 6, 240, 2, // Opcode: C_F_D64
/* 715 */     MCD::OPC_FilterValue, 49, 21, 0, // Skip to: 740
/* 719 */     MCD::OPC_CheckPredicate, 100, 16, 2, // Skip to: 1251
/* 723 */     MCD::OPC_CheckField, 21, 5, 17, 10, 2, // Skip to: 1251
/* 729 */     MCD::OPC_CheckField, 6, 2, 0, 4, 2, // Skip to: 1251
/* 735 */     MCD::OPC_Decode, 219, 6, 240, 2, // Opcode: C_UN_D64
/* 740 */     MCD::OPC_FilterValue, 50, 21, 0, // Skip to: 765
/* 744 */     MCD::OPC_CheckPredicate, 100, 247, 1, // Skip to: 1251
/* 748 */     MCD::OPC_CheckField, 21, 5, 17, 241, 1, // Skip to: 1251
/* 754 */     MCD::OPC_CheckField, 6, 2, 0, 235, 1, // Skip to: 1251
/* 760 */     MCD::OPC_Decode, 129, 6, 240, 2, // Opcode: C_EQ_D64
/* 765 */     MCD::OPC_FilterValue, 51, 21, 0, // Skip to: 790
/* 769 */     MCD::OPC_CheckPredicate, 100, 222, 1, // Skip to: 1251
/* 773 */     MCD::OPC_CheckField, 21, 5, 17, 216, 1, // Skip to: 1251
/* 779 */     MCD::OPC_CheckField, 6, 2, 0, 210, 1, // Skip to: 1251
/* 785 */     MCD::OPC_Decode, 201, 6, 240, 2, // Opcode: C_UEQ_D64
/* 790 */     MCD::OPC_FilterValue, 52, 21, 0, // Skip to: 815
/* 794 */     MCD::OPC_CheckPredicate, 100, 197, 1, // Skip to: 1251
/* 798 */     MCD::OPC_CheckField, 21, 5, 17, 191, 1, // Skip to: 1251
/* 804 */     MCD::OPC_CheckField, 6, 2, 0, 185, 1, // Skip to: 1251
/* 810 */     MCD::OPC_Decode, 183, 6, 240, 2, // Opcode: C_OLT_D64
/* 815 */     MCD::OPC_FilterValue, 53, 21, 0, // Skip to: 840
/* 819 */     MCD::OPC_CheckPredicate, 100, 172, 1, // Skip to: 1251
/* 823 */     MCD::OPC_CheckField, 21, 5, 17, 166, 1, // Skip to: 1251
/* 829 */     MCD::OPC_CheckField, 6, 2, 0, 160, 1, // Skip to: 1251
/* 835 */     MCD::OPC_Decode, 213, 6, 240, 2, // Opcode: C_ULT_D64
/* 840 */     MCD::OPC_FilterValue, 54, 21, 0, // Skip to: 865
/* 844 */     MCD::OPC_CheckPredicate, 100, 147, 1, // Skip to: 1251
/* 848 */     MCD::OPC_CheckField, 21, 5, 17, 141, 1, // Skip to: 1251
/* 854 */     MCD::OPC_CheckField, 6, 2, 0, 135, 1, // Skip to: 1251
/* 860 */     MCD::OPC_Decode, 177, 6, 240, 2, // Opcode: C_OLE_D64
/* 865 */     MCD::OPC_FilterValue, 55, 21, 0, // Skip to: 890
/* 869 */     MCD::OPC_CheckPredicate, 100, 122, 1, // Skip to: 1251
/* 873 */     MCD::OPC_CheckField, 21, 5, 17, 116, 1, // Skip to: 1251
/* 879 */     MCD::OPC_CheckField, 6, 2, 0, 110, 1, // Skip to: 1251
/* 885 */     MCD::OPC_Decode, 207, 6, 240, 2, // Opcode: C_ULE_D64
/* 890 */     MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 915
/* 894 */     MCD::OPC_CheckPredicate, 100, 97, 1, // Skip to: 1251
/* 898 */     MCD::OPC_CheckField, 21, 5, 17, 91, 1, // Skip to: 1251
/* 904 */     MCD::OPC_CheckField, 6, 2, 0, 85, 1, // Skip to: 1251
/* 910 */     MCD::OPC_Decode, 195, 6, 240, 2, // Opcode: C_SF_D64
/* 915 */     MCD::OPC_FilterValue, 57, 21, 0, // Skip to: 940
/* 919 */     MCD::OPC_CheckPredicate, 100, 72, 1, // Skip to: 1251
/* 923 */     MCD::OPC_CheckField, 21, 5, 17, 66, 1, // Skip to: 1251
/* 929 */     MCD::OPC_CheckField, 6, 2, 0, 60, 1, // Skip to: 1251
/* 935 */     MCD::OPC_Decode, 159, 6, 240, 2, // Opcode: C_NGLE_D64
/* 940 */     MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 965
/* 944 */     MCD::OPC_CheckPredicate, 100, 47, 1, // Skip to: 1251
/* 948 */     MCD::OPC_CheckField, 21, 5, 17, 41, 1, // Skip to: 1251
/* 954 */     MCD::OPC_CheckField, 6, 2, 0, 35, 1, // Skip to: 1251
/* 960 */     MCD::OPC_Decode, 189, 6, 240, 2, // Opcode: C_SEQ_D64
/* 965 */     MCD::OPC_FilterValue, 59, 21, 0, // Skip to: 990
/* 969 */     MCD::OPC_CheckPredicate, 100, 22, 1, // Skip to: 1251
/* 973 */     MCD::OPC_CheckField, 21, 5, 17, 16, 1, // Skip to: 1251
/* 979 */     MCD::OPC_CheckField, 6, 2, 0, 10, 1, // Skip to: 1251
/* 985 */     MCD::OPC_Decode, 165, 6, 240, 2, // Opcode: C_NGL_D64
/* 990 */     MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1015
/* 994 */     MCD::OPC_CheckPredicate, 100, 253, 0, // Skip to: 1251
/* 998 */     MCD::OPC_CheckField, 21, 5, 17, 247, 0, // Skip to: 1251
/* 1004 */    MCD::OPC_CheckField, 6, 2, 0, 241, 0, // Skip to: 1251
/* 1010 */    MCD::OPC_Decode, 147, 6, 240, 2, // Opcode: C_LT_D64
/* 1015 */    MCD::OPC_FilterValue, 61, 21, 0, // Skip to: 1040
/* 1019 */    MCD::OPC_CheckPredicate, 100, 228, 0, // Skip to: 1251
/* 1023 */    MCD::OPC_CheckField, 21, 5, 17, 222, 0, // Skip to: 1251
/* 1029 */    MCD::OPC_CheckField, 6, 2, 0, 216, 0, // Skip to: 1251
/* 1035 */    MCD::OPC_Decode, 153, 6, 240, 2, // Opcode: C_NGE_D64
/* 1040 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1065
/* 1044 */    MCD::OPC_CheckPredicate, 100, 203, 0, // Skip to: 1251
/* 1048 */    MCD::OPC_CheckField, 21, 5, 17, 197, 0, // Skip to: 1251
/* 1054 */    MCD::OPC_CheckField, 6, 2, 0, 191, 0, // Skip to: 1251
/* 1060 */    MCD::OPC_Decode, 141, 6, 240, 2, // Opcode: C_LE_D64
/* 1065 */    MCD::OPC_FilterValue, 63, 182, 0, // Skip to: 1251
/* 1069 */    MCD::OPC_CheckPredicate, 100, 178, 0, // Skip to: 1251
/* 1073 */    MCD::OPC_CheckField, 21, 5, 17, 172, 0, // Skip to: 1251
/* 1079 */    MCD::OPC_CheckField, 6, 2, 0, 166, 0, // Skip to: 1251
/* 1085 */    MCD::OPC_Decode, 171, 6, 240, 2, // Opcode: C_NGT_D64
/* 1090 */    MCD::OPC_FilterValue, 19, 131, 0, // Skip to: 1225
/* 1094 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1097 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1116
/* 1101 */    MCD::OPC_CheckPredicate, 101, 146, 0, // Skip to: 1251
/* 1105 */    MCD::OPC_CheckField, 11, 5, 0, 140, 0, // Skip to: 1251
/* 1111 */    MCD::OPC_Decode, 224, 10, 241, 2, // Opcode: LDXC164
/* 1116 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1135
/* 1120 */    MCD::OPC_CheckPredicate, 102, 127, 0, // Skip to: 1251
/* 1124 */    MCD::OPC_CheckField, 11, 5, 0, 121, 0, // Skip to: 1251
/* 1130 */    MCD::OPC_Decode, 142, 11, 241, 2, // Opcode: LUXC164
/* 1135 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1154
/* 1139 */    MCD::OPC_CheckPredicate, 101, 108, 0, // Skip to: 1251
/* 1143 */    MCD::OPC_CheckField, 6, 5, 0, 102, 0, // Skip to: 1251
/* 1149 */    MCD::OPC_Decode, 167, 16, 242, 2, // Opcode: SDXC164
/* 1154 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1173
/* 1158 */    MCD::OPC_CheckPredicate, 102, 89, 0, // Skip to: 1251
/* 1162 */    MCD::OPC_CheckField, 6, 5, 0, 83, 0, // Skip to: 1251
/* 1168 */    MCD::OPC_Decode, 173, 18, 242, 2, // Opcode: SUXC164
/* 1173 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 1186
/* 1177 */    MCD::OPC_CheckPredicate, 103, 70, 0, // Skip to: 1251
/* 1181 */    MCD::OPC_Decode, 231, 11, 243, 2, // Opcode: MADD_D64
/* 1186 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 1199
/* 1190 */    MCD::OPC_CheckPredicate, 103, 57, 0, // Skip to: 1251
/* 1194 */    MCD::OPC_Decode, 165, 13, 243, 2, // Opcode: MSUB_D64
/* 1199 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 1212
/* 1203 */    MCD::OPC_CheckPredicate, 103, 44, 0, // Skip to: 1251
/* 1207 */    MCD::OPC_Decode, 158, 14, 243, 2, // Opcode: NMADD_D64
/* 1212 */    MCD::OPC_FilterValue, 57, 35, 0, // Skip to: 1251
/* 1216 */    MCD::OPC_CheckPredicate, 103, 31, 0, // Skip to: 1251
/* 1220 */    MCD::OPC_Decode, 163, 14, 243, 2, // Opcode: NMSUB_D64
/* 1225 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 1238
/* 1229 */    MCD::OPC_CheckPredicate, 104, 18, 0, // Skip to: 1251
/* 1233 */    MCD::OPC_Decode, 208, 10, 195, 2, // Opcode: LDC164
/* 1238 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 1251
/* 1242 */    MCD::OPC_CheckPredicate, 104, 5, 0, // Skip to: 1251
/* 1246 */    MCD::OPC_Decode, 153, 16, 195, 2, // Opcode: SDC164
/* 1251 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Mips::FeatureMips16]);
  case 1:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMicroMips]);
  case 2:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMicroMips]);
  case 3:
    return (Bits[Mips::FeatureCnMips]);
  case 4:
    return (Bits[Mips::FeatureMips64] && Bits[Mips::FeatureCnMips] && !Bits[Mips::FeatureMicroMips]);
  case 5:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 6:
    return (Bits[Mips::FeatureMicroMips]);
  case 7:
    return (Bits[Mips::FeatureDSP] && Bits[Mips::FeatureMicroMips]);
  case 8:
    return (Bits[Mips::FeatureDSPR2] && Bits[Mips::FeatureMicroMips]);
  case 9:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 10:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips]);
  case 11:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 12:
    return (Bits[Mips::FeatureDSPR3] && Bits[Mips::FeatureMicroMips]);
  case 13:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureMicroMips]);
  case 14:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 15:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureSoftFloat]);
  case 16:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat]);
  case 17:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureSoftFloat]);
  case 18:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureDSP] && Bits[Mips::FeatureMicroMips]);
  case 19:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 20:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureSoftFloat]);
  case 21:
    return (Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 22:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 23:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 24:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 25:
    return (!Bits[Mips::FeatureMips16]);
  case 26:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2]);
  case 27:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 28:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 29:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA]);
  case 30:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 31:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 32:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32]);
  case 33:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 34:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 35:
    return (Bits[Mips::FeatureDSP]);
  case 36:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA] && Bits[Mips::FeatureMips64]);
  case 37:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 38:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 39:
    return (Bits[Mips::FeatureDSP] && !Bits[Mips::FeatureMicroMips]);
  case 40:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMicroMips]);
  case 41:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMT] && !Bits[Mips::FeatureMicroMips]);
  case 42:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 43:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMicroMips]);
  case 44:
    return (!Bits[Mips::FeatureMicroMips]);
  case 45:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r5] && !Bits[Mips::FeatureMicroMips]);
  case 46:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 47:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 48:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 49:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 50:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 51:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 52:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 53:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 54:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 55:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 56:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 57:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 58:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 59:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 60:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 61:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 62:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 63:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMadd4]);
  case 64:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMadd4]);
  case 65:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 66:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 67:
    return (Bits[Mips::FeatureDSPR2]);
  case 68:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 69:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2]);
  case 70:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 71:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 72:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 73:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 74:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && !Bits[Mips::FeatureMicroMips]);
  case 75:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 76:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6]);
  case 77:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 78:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 79:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 80:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 81:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 82:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6]);
  case 83:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips64r6]);
  case 84:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6]);
  case 85:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 86:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMicroMips]);
  case 87:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r2] && !Bits[Mips::FeatureMicroMips]);
  case 88:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 89:
    return (Bits[Mips::FeatureMips64]);
  case 90:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 91:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 92:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 93:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureDSP]);
  case 94:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 95:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 96:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 97:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 98:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 99:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 100:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 101:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 102:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 103:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMadd4]);
  case 104:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 3;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 21, 6) << 5;
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    if (DecodeFMem3(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    if (DecodeSImmWithOffsetAndScale<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeMemMMImm4(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodePOOL16BEncodedField(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeANDI16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeMemMMReglistImm4Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    if (DecodeMemMMSPImm5Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 4);
    if (DecodeSImmWithOffsetAndScale<4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 1, 9);
    if (DecodeSimm9SP(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeMemMMGPImm7Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeAddiur2Simm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 6);
    if (DecodeUImmWithOffsetAndScale<6, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeMovePRegPair(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeBranchTarget7MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeBranchTarget10MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeLi16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 7);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    if (DecodeSImmWithOffsetAndScale<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    if (DecodeMemMMImm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    if (DecodeMemMMImm12(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    if (DecodeCacheOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 90:
    if (DecodeSyncI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget1SImm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 93:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 94:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 95:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 98:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 101:
    if (DecodeMemMMImm9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 102:
    if (DecodePrefeOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 103:
    if (DecodeJumpTargetMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 23);
    if (DecodeSimm23Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 106:
    if (DecodeFMemMMR2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 107:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 6, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 117:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeMovePRegPair(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 2) << 0;
    tmp |= fieldFromInstruction(insn, 3, 1) << 2;
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 118:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 121:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 124:
    if (DecodeLoadByte15(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 125:
    if (DecodeFMemCop2MMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 128:
    if (DecodeSynciR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 147:
    if (DecodeLoadByte9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 148:
    if (DecodeStoreEvaOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 149:
    if (DecodePOP35GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 152:
    if (DecodePOP37GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 155:
    if (DecodeBlezGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 156:
    if (DecodePOP65GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 157:
    if (DecodeBgtzGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 158:
    if (DecodePOP75GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 160:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 168:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 175:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 4, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 185:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 186:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 189:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 192:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 193:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 194:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 200:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 201:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 202:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 203:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 204:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 206:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 210:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 211:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 212:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 216:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 217:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 218:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 219:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 220:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 223:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 224:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 225:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 226:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 227:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 228:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 229:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 230:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 232:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 233:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 234:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 235:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 236:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 237:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 238:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 239:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 240:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 241:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 242:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 244:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 245:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 246:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 247:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 248:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 249:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 250:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 251:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 252:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 253:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 254:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 255:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 256:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 257:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 258:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 259:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 260:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 261:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 262:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 263:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 264:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 265:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 266:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 267:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 268:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 269:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 270:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 271:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 272:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 273:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 274:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 275:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 276:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 277:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 278:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 279:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 280:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 281:
    if (DecodeINSVE_DF(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 282:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 283:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 284:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 285:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 286:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 287:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 288:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 289:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 290:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 291:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 292:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 293:
    if (DecodeMSA128Mem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 294:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 295:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 296:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 297:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 298:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 299:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 300:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 301:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 302:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 303:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 304:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 305:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 306:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 307:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 308:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 309:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 310:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 311:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 312:
    if (DecodeMemEVA(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 313:
    if (DecodeCacheeOp_CacheOpR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 314:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 315:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 316:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 317:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 318:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 319:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 320:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 321:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 322:
    if (DecodeCacheOp(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 323:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 324:
    if (DecodeFMem2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 325:
    if (DecodeDAHIDATI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 326:
    if (DecodeBlezGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 327:
    if (DecodeBgtzGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 328:
    if (DecodeAddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 329:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 330:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 331:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 332:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 333:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 334:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 335:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 336:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 337:
    if (DecodeFMemCop2R6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 338:
    if (DecodeBlezlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 339:
    if (DecodeBgtzlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 340:
    if (DecodeDaddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 341:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 342:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 343:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 344:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 345:
    if (DecodeSpecial3LlSc(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 346:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 347:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 348:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 18);
    if (DecodeSimm18Lsl3(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 349:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 350:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 351:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 352:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 353:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 354:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 355:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 356:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 357:
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 358:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 359:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 360:
    if (DecodeDEXT(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 361:
    if (DecodeDINS(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 362:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 363:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 364:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 365:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 366:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 367:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 368:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 369:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 370:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 371:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
