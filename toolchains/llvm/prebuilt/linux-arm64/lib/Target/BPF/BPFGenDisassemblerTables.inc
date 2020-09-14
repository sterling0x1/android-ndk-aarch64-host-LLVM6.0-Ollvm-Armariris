/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * BPF Disassembler                                                        *|
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

static const uint8_t DecoderTableBPF64[] = {
/* 0 */       MCD::OPC_ExtractField, 56, 8,  // Inst{63-56} ...
/* 3 */       MCD::OPC_FilterValue, 4, 3, 0, // Skip to: 10
/* 7 */       MCD::OPC_Decode, 119, 0, // Opcode: ADD_ri_32
/* 10 */      MCD::OPC_FilterValue, 5, 4, 0, // Skip to: 18
/* 14 */      MCD::OPC_Decode, 140, 1, 1, // Opcode: JMP
/* 18 */      MCD::OPC_FilterValue, 7, 3, 0, // Skip to: 25
/* 22 */      MCD::OPC_Decode, 118, 2, // Opcode: ADD_ri
/* 25 */      MCD::OPC_FilterValue, 12, 3, 0, // Skip to: 32
/* 29 */      MCD::OPC_Decode, 121, 3, // Opcode: ADD_rr_32
/* 32 */      MCD::OPC_FilterValue, 15, 3, 0, // Skip to: 39
/* 36 */      MCD::OPC_Decode, 120, 4, // Opcode: ADD_rr
/* 39 */      MCD::OPC_FilterValue, 20, 4, 0, // Skip to: 47
/* 43 */      MCD::OPC_Decode, 207, 1, 0, // Opcode: SUB_ri_32
/* 47 */      MCD::OPC_FilterValue, 21, 4, 0, // Skip to: 55
/* 51 */      MCD::OPC_Decode, 138, 1, 5, // Opcode: JEQ_ri
/* 55 */      MCD::OPC_FilterValue, 23, 4, 0, // Skip to: 63
/* 59 */      MCD::OPC_Decode, 206, 1, 2, // Opcode: SUB_ri
/* 63 */      MCD::OPC_FilterValue, 24, 37, 0, // Skip to: 104
/* 67 */      MCD::OPC_ExtractField, 32, 16,  // Inst{47-32} ...
/* 70 */      MCD::OPC_FilterValue, 0, 245, 2, // Skip to: 831
/* 74 */      MCD::OPC_CheckField, 48, 8, 32, 10, 0, // Skip to: 90
/* 80 */      MCD::OPC_CheckField, 0, 32, 0, 4, 0, // Skip to: 90
/* 86 */      MCD::OPC_Decode, 135, 1, 6, // Opcode: FI_ri
/* 90 */      MCD::OPC_CheckField, 52, 4, 0, 4, 0, // Skip to: 100
/* 96 */      MCD::OPC_Decode, 169, 1, 7, // Opcode: LD_imm64
/* 100 */     MCD::OPC_Decode, 170, 1, 8, // Opcode: LD_pseudo
/* 104 */     MCD::OPC_FilterValue, 28, 4, 0, // Skip to: 112
/* 108 */     MCD::OPC_Decode, 209, 1, 3, // Opcode: SUB_rr_32
/* 112 */     MCD::OPC_FilterValue, 29, 4, 0, // Skip to: 120
/* 116 */     MCD::OPC_Decode, 139, 1, 9, // Opcode: JEQ_rr
/* 120 */     MCD::OPC_FilterValue, 31, 4, 0, // Skip to: 128
/* 124 */     MCD::OPC_Decode, 208, 1, 4, // Opcode: SUB_rr
/* 128 */     MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 136
/* 132 */     MCD::OPC_Decode, 165, 1, 10, // Opcode: LD_ABS_W
/* 136 */     MCD::OPC_FilterValue, 36, 4, 0, // Skip to: 144
/* 140 */     MCD::OPC_Decode, 179, 1, 0, // Opcode: MUL_ri_32
/* 144 */     MCD::OPC_FilterValue, 37, 4, 0, // Skip to: 152
/* 148 */     MCD::OPC_Decode, 153, 1, 5, // Opcode: JUGT_ri
/* 152 */     MCD::OPC_FilterValue, 39, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 178, 1, 2, // Opcode: MUL_ri
/* 160 */     MCD::OPC_FilterValue, 40, 4, 0, // Skip to: 168
/* 164 */     MCD::OPC_Decode, 164, 1, 10, // Opcode: LD_ABS_H
/* 168 */     MCD::OPC_FilterValue, 44, 4, 0, // Skip to: 176
/* 172 */     MCD::OPC_Decode, 181, 1, 3, // Opcode: MUL_rr_32
/* 176 */     MCD::OPC_FilterValue, 45, 4, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 154, 1, 9, // Opcode: JUGT_rr
/* 184 */     MCD::OPC_FilterValue, 47, 4, 0, // Skip to: 192
/* 188 */     MCD::OPC_Decode, 180, 1, 4, // Opcode: MUL_rr
/* 192 */     MCD::OPC_FilterValue, 48, 4, 0, // Skip to: 200
/* 196 */     MCD::OPC_Decode, 163, 1, 10, // Opcode: LD_ABS_B
/* 200 */     MCD::OPC_FilterValue, 52, 4, 0, // Skip to: 208
/* 204 */     MCD::OPC_Decode, 132, 1, 0, // Opcode: DIV_ri_32
/* 208 */     MCD::OPC_FilterValue, 53, 4, 0, // Skip to: 216
/* 212 */     MCD::OPC_Decode, 151, 1, 5, // Opcode: JUGE_ri
/* 216 */     MCD::OPC_FilterValue, 55, 4, 0, // Skip to: 224
/* 220 */     MCD::OPC_Decode, 131, 1, 2, // Opcode: DIV_ri
/* 224 */     MCD::OPC_FilterValue, 60, 4, 0, // Skip to: 232
/* 228 */     MCD::OPC_Decode, 134, 1, 3, // Opcode: DIV_rr_32
/* 232 */     MCD::OPC_FilterValue, 61, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 152, 1, 9, // Opcode: JUGE_rr
/* 240 */     MCD::OPC_FilterValue, 63, 4, 0, // Skip to: 248
/* 244 */     MCD::OPC_Decode, 133, 1, 4, // Opcode: DIV_rr
/* 248 */     MCD::OPC_FilterValue, 64, 4, 0, // Skip to: 256
/* 252 */     MCD::OPC_Decode, 168, 1, 11, // Opcode: LD_IND_W
/* 256 */     MCD::OPC_FilterValue, 68, 4, 0, // Skip to: 264
/* 260 */     MCD::OPC_Decode, 186, 1, 0, // Opcode: OR_ri_32
/* 264 */     MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 272
/* 268 */     MCD::OPC_Decode, 185, 1, 2, // Opcode: OR_ri
/* 272 */     MCD::OPC_FilterValue, 72, 4, 0, // Skip to: 280
/* 276 */     MCD::OPC_Decode, 167, 1, 11, // Opcode: LD_IND_H
/* 280 */     MCD::OPC_FilterValue, 76, 4, 0, // Skip to: 288
/* 284 */     MCD::OPC_Decode, 188, 1, 3, // Opcode: OR_rr_32
/* 288 */     MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 296
/* 292 */     MCD::OPC_Decode, 187, 1, 4, // Opcode: OR_rr
/* 296 */     MCD::OPC_FilterValue, 80, 4, 0, // Skip to: 304
/* 300 */     MCD::OPC_Decode, 166, 1, 11, // Opcode: LD_IND_B
/* 304 */     MCD::OPC_FilterValue, 84, 3, 0, // Skip to: 311
/* 308 */     MCD::OPC_Decode, 125, 0, // Opcode: AND_ri_32
/* 311 */     MCD::OPC_FilterValue, 85, 4, 0, // Skip to: 319
/* 315 */     MCD::OPC_Decode, 141, 1, 5, // Opcode: JNE_ri
/* 319 */     MCD::OPC_FilterValue, 87, 3, 0, // Skip to: 326
/* 323 */     MCD::OPC_Decode, 124, 2, // Opcode: AND_ri
/* 326 */     MCD::OPC_FilterValue, 92, 3, 0, // Skip to: 333
/* 330 */     MCD::OPC_Decode, 127, 3, // Opcode: AND_rr_32
/* 333 */     MCD::OPC_FilterValue, 93, 4, 0, // Skip to: 341
/* 337 */     MCD::OPC_Decode, 142, 1, 9, // Opcode: JNE_rr
/* 341 */     MCD::OPC_FilterValue, 95, 3, 0, // Skip to: 348
/* 345 */     MCD::OPC_Decode, 126, 4, // Opcode: AND_rr
/* 348 */     MCD::OPC_FilterValue, 97, 4, 0, // Skip to: 356
/* 352 */     MCD::OPC_Decode, 162, 1, 12, // Opcode: LDW
/* 356 */     MCD::OPC_FilterValue, 99, 4, 0, // Skip to: 364
/* 360 */     MCD::OPC_Decode, 205, 1, 13, // Opcode: STW
/* 364 */     MCD::OPC_FilterValue, 100, 4, 0, // Skip to: 372
/* 368 */     MCD::OPC_Decode, 191, 1, 0, // Opcode: SLL_ri_32
/* 372 */     MCD::OPC_FilterValue, 101, 4, 0, // Skip to: 380
/* 376 */     MCD::OPC_Decode, 145, 1, 5, // Opcode: JSGT_ri
/* 380 */     MCD::OPC_FilterValue, 103, 4, 0, // Skip to: 388
/* 384 */     MCD::OPC_Decode, 190, 1, 2, // Opcode: SLL_ri
/* 388 */     MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 396
/* 392 */     MCD::OPC_Decode, 161, 1, 12, // Opcode: LDH
/* 396 */     MCD::OPC_FilterValue, 107, 4, 0, // Skip to: 404
/* 400 */     MCD::OPC_Decode, 204, 1, 13, // Opcode: STH
/* 404 */     MCD::OPC_FilterValue, 108, 4, 0, // Skip to: 412
/* 408 */     MCD::OPC_Decode, 193, 1, 3, // Opcode: SLL_rr_32
/* 412 */     MCD::OPC_FilterValue, 109, 4, 0, // Skip to: 420
/* 416 */     MCD::OPC_Decode, 146, 1, 9, // Opcode: JSGT_rr
/* 420 */     MCD::OPC_FilterValue, 111, 4, 0, // Skip to: 428
/* 424 */     MCD::OPC_Decode, 192, 1, 4, // Opcode: SLL_rr
/* 428 */     MCD::OPC_FilterValue, 113, 4, 0, // Skip to: 436
/* 432 */     MCD::OPC_Decode, 159, 1, 12, // Opcode: LDB
/* 436 */     MCD::OPC_FilterValue, 115, 4, 0, // Skip to: 444
/* 440 */     MCD::OPC_Decode, 202, 1, 13, // Opcode: STB
/* 444 */     MCD::OPC_FilterValue, 116, 4, 0, // Skip to: 452
/* 448 */     MCD::OPC_Decode, 199, 1, 0, // Opcode: SRL_ri_32
/* 452 */     MCD::OPC_FilterValue, 117, 4, 0, // Skip to: 460
/* 456 */     MCD::OPC_Decode, 143, 1, 5, // Opcode: JSGE_ri
/* 460 */     MCD::OPC_FilterValue, 119, 4, 0, // Skip to: 468
/* 464 */     MCD::OPC_Decode, 198, 1, 2, // Opcode: SRL_ri
/* 468 */     MCD::OPC_FilterValue, 121, 4, 0, // Skip to: 476
/* 472 */     MCD::OPC_Decode, 160, 1, 12, // Opcode: LDD
/* 476 */     MCD::OPC_FilterValue, 123, 4, 0, // Skip to: 484
/* 480 */     MCD::OPC_Decode, 203, 1, 13, // Opcode: STD
/* 484 */     MCD::OPC_FilterValue, 124, 4, 0, // Skip to: 492
/* 488 */     MCD::OPC_Decode, 201, 1, 3, // Opcode: SRL_rr_32
/* 492 */     MCD::OPC_FilterValue, 125, 4, 0, // Skip to: 500
/* 496 */     MCD::OPC_Decode, 144, 1, 9, // Opcode: JSGE_rr
/* 500 */     MCD::OPC_FilterValue, 127, 4, 0, // Skip to: 508
/* 504 */     MCD::OPC_Decode, 200, 1, 4, // Opcode: SRL_rr
/* 508 */     MCD::OPC_FilterValue, 132, 1, 4, 0, // Skip to: 517
/* 513 */     MCD::OPC_Decode, 182, 1, 14, // Opcode: NEG_32
/* 517 */     MCD::OPC_FilterValue, 133, 1, 4, 0, // Skip to: 526
/* 522 */     MCD::OPC_Decode, 136, 1, 10, // Opcode: JAL
/* 526 */     MCD::OPC_FilterValue, 135, 1, 4, 0, // Skip to: 535
/* 531 */     MCD::OPC_Decode, 183, 1, 15, // Opcode: NEG_64
/* 535 */     MCD::OPC_FilterValue, 141, 1, 4, 0, // Skip to: 544
/* 540 */     MCD::OPC_Decode, 137, 1, 10, // Opcode: JALX
/* 544 */     MCD::OPC_FilterValue, 149, 1, 10, 0, // Skip to: 559
/* 549 */     MCD::OPC_CheckField, 0, 32, 0, 20, 1, // Skip to: 831
/* 555 */     MCD::OPC_Decode, 189, 1, 6, // Opcode: RET
/* 559 */     MCD::OPC_FilterValue, 164, 1, 4, 0, // Skip to: 568
/* 564 */     MCD::OPC_Decode, 215, 1, 0, // Opcode: XOR_ri_32
/* 568 */     MCD::OPC_FilterValue, 165, 1, 4, 0, // Skip to: 577
/* 573 */     MCD::OPC_Decode, 157, 1, 5, // Opcode: JULT_ri
/* 577 */     MCD::OPC_FilterValue, 167, 1, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 214, 1, 2, // Opcode: XOR_ri
/* 586 */     MCD::OPC_FilterValue, 172, 1, 4, 0, // Skip to: 595
/* 591 */     MCD::OPC_Decode, 217, 1, 3, // Opcode: XOR_rr_32
/* 595 */     MCD::OPC_FilterValue, 173, 1, 4, 0, // Skip to: 604
/* 600 */     MCD::OPC_Decode, 158, 1, 9, // Opcode: JULT_rr
/* 604 */     MCD::OPC_FilterValue, 175, 1, 4, 0, // Skip to: 613
/* 609 */     MCD::OPC_Decode, 216, 1, 4, // Opcode: XOR_rr
/* 613 */     MCD::OPC_FilterValue, 180, 1, 4, 0, // Skip to: 622
/* 618 */     MCD::OPC_Decode, 175, 1, 16, // Opcode: MOV_ri_32
/* 622 */     MCD::OPC_FilterValue, 181, 1, 4, 0, // Skip to: 631
/* 627 */     MCD::OPC_Decode, 155, 1, 5, // Opcode: JULE_ri
/* 631 */     MCD::OPC_FilterValue, 183, 1, 4, 0, // Skip to: 640
/* 636 */     MCD::OPC_Decode, 174, 1, 7, // Opcode: MOV_ri
/* 640 */     MCD::OPC_FilterValue, 188, 1, 4, 0, // Skip to: 649
/* 645 */     MCD::OPC_Decode, 177, 1, 17, // Opcode: MOV_rr_32
/* 649 */     MCD::OPC_FilterValue, 189, 1, 4, 0, // Skip to: 658
/* 654 */     MCD::OPC_Decode, 156, 1, 9, // Opcode: JULE_rr
/* 658 */     MCD::OPC_FilterValue, 191, 1, 14, 0, // Skip to: 677
/* 663 */     MCD::OPC_CheckField, 48, 8, 0, 4, 0, // Skip to: 673
/* 669 */     MCD::OPC_Decode, 184, 1, 6, // Opcode: NOP
/* 673 */     MCD::OPC_Decode, 176, 1, 18, // Opcode: MOV_rr
/* 677 */     MCD::OPC_FilterValue, 195, 1, 4, 0, // Skip to: 686
/* 682 */     MCD::OPC_Decode, 212, 1, 19, // Opcode: XADD32
/* 686 */     MCD::OPC_FilterValue, 196, 1, 4, 0, // Skip to: 695
/* 691 */     MCD::OPC_Decode, 195, 1, 0, // Opcode: SRA_ri_32
/* 695 */     MCD::OPC_FilterValue, 197, 1, 4, 0, // Skip to: 704
/* 700 */     MCD::OPC_Decode, 149, 1, 5, // Opcode: JSLT_ri
/* 704 */     MCD::OPC_FilterValue, 199, 1, 4, 0, // Skip to: 713
/* 709 */     MCD::OPC_Decode, 194, 1, 2, // Opcode: SRA_ri
/* 713 */     MCD::OPC_FilterValue, 204, 1, 4, 0, // Skip to: 722
/* 718 */     MCD::OPC_Decode, 197, 1, 3, // Opcode: SRA_rr_32
/* 722 */     MCD::OPC_FilterValue, 205, 1, 4, 0, // Skip to: 731
/* 727 */     MCD::OPC_Decode, 150, 1, 9, // Opcode: JSLT_rr
/* 731 */     MCD::OPC_FilterValue, 207, 1, 4, 0, // Skip to: 740
/* 736 */     MCD::OPC_Decode, 196, 1, 4, // Opcode: SRA_rr
/* 740 */     MCD::OPC_FilterValue, 212, 1, 27, 0, // Skip to: 772
/* 745 */     MCD::OPC_ExtractField, 0, 32,  // Inst{31-0} ...
/* 748 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 756
/* 752 */     MCD::OPC_Decode, 171, 1, 15, // Opcode: LE16
/* 756 */     MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 764
/* 760 */     MCD::OPC_Decode, 172, 1, 15, // Opcode: LE32
/* 764 */     MCD::OPC_FilterValue, 64, 63, 0, // Skip to: 831
/* 768 */     MCD::OPC_Decode, 173, 1, 15, // Opcode: LE64
/* 772 */     MCD::OPC_FilterValue, 213, 1, 4, 0, // Skip to: 781
/* 777 */     MCD::OPC_Decode, 147, 1, 5, // Opcode: JSLE_ri
/* 781 */     MCD::OPC_FilterValue, 219, 1, 4, 0, // Skip to: 790
/* 786 */     MCD::OPC_Decode, 213, 1, 19, // Opcode: XADD64
/* 790 */     MCD::OPC_FilterValue, 220, 1, 27, 0, // Skip to: 822
/* 795 */     MCD::OPC_ExtractField, 0, 32,  // Inst{31-0} ...
/* 798 */     MCD::OPC_FilterValue, 16, 4, 0, // Skip to: 806
/* 802 */     MCD::OPC_Decode, 128, 1, 15, // Opcode: BE16
/* 806 */     MCD::OPC_FilterValue, 32, 4, 0, // Skip to: 814
/* 810 */     MCD::OPC_Decode, 129, 1, 15, // Opcode: BE32
/* 814 */     MCD::OPC_FilterValue, 64, 13, 0, // Skip to: 831
/* 818 */     MCD::OPC_Decode, 130, 1, 15, // Opcode: BE64
/* 822 */     MCD::OPC_FilterValue, 221, 1, 4, 0, // Skip to: 831
/* 827 */     MCD::OPC_Decode, 148, 1, 9, // Opcode: JSLE_rr
/* 831 */     MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 32, 16) << 0;
    tmp |= fieldFromInstruction(insn, 52, 4) << 16;
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
