/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Sparc Disassembler                                                      *|
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

static const uint8_t DecoderTableSparc32[] = {
/* 0 */       MCD::OPC_ExtractField, 30, 2,  // Inst{31-30} ...
/* 3 */       MCD::OPC_FilterValue, 0, 75, 2, // Skip to: 594
/* 7 */       MCD::OPC_ExtractField, 22, 3,  // Inst{24-22} ...
/* 10 */      MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 24
/* 14 */      MCD::OPC_CheckField, 25, 5, 0, 5, 27, // Skip to: 6937
/* 20 */      MCD::OPC_Decode, 230, 4, 0, // Opcode: UNIMP
/* 24 */      MCD::OPC_FilterValue, 1, 111, 0, // Skip to: 139
/* 28 */      MCD::OPC_ExtractField, 19, 3,  // Inst{21-19} ...
/* 31 */      MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 62
/* 35 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 38 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 50
/* 42 */      MCD::OPC_CheckPredicate, 0, 235, 26, // Skip to: 6937
/* 46 */      MCD::OPC_Decode, 169, 1, 1, // Opcode: BPICCNT
/* 50 */      MCD::OPC_FilterValue, 1, 227, 26, // Skip to: 6937
/* 54 */      MCD::OPC_CheckPredicate, 0, 223, 26, // Skip to: 6937
/* 58 */      MCD::OPC_Decode, 168, 1, 1, // Opcode: BPICCANT
/* 62 */      MCD::OPC_FilterValue, 1, 27, 0, // Skip to: 93
/* 66 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 69 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 81
/* 73 */      MCD::OPC_CheckPredicate, 0, 204, 26, // Skip to: 6937
/* 77 */      MCD::OPC_Decode, 166, 1, 1, // Opcode: BPICC
/* 81 */      MCD::OPC_FilterValue, 1, 196, 26, // Skip to: 6937
/* 85 */      MCD::OPC_CheckPredicate, 0, 192, 26, // Skip to: 6937
/* 89 */      MCD::OPC_Decode, 167, 1, 1, // Opcode: BPICCA
/* 93 */      MCD::OPC_FilterValue, 4, 19, 0, // Skip to: 116
/* 97 */      MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 100 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 108
/* 104 */     MCD::OPC_Decode, 185, 1, 1, // Opcode: BPXCCNT
/* 108 */     MCD::OPC_FilterValue, 1, 169, 26, // Skip to: 6937
/* 112 */     MCD::OPC_Decode, 184, 1, 1, // Opcode: BPXCCANT
/* 116 */     MCD::OPC_FilterValue, 5, 161, 26, // Skip to: 6937
/* 120 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 123 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 131
/* 127 */     MCD::OPC_Decode, 182, 1, 1, // Opcode: BPXCC
/* 131 */     MCD::OPC_FilterValue, 1, 146, 26, // Skip to: 6937
/* 135 */     MCD::OPC_Decode, 183, 1, 1, // Opcode: BPXCCA
/* 139 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 172
/* 143 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 146 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 164
/* 150 */     MCD::OPC_CheckField, 25, 4, 8, 4, 0, // Skip to: 160
/* 156 */     MCD::OPC_Decode, 148, 1, 0, // Opcode: BA
/* 160 */     MCD::OPC_Decode, 149, 1, 2, // Opcode: BCOND
/* 164 */     MCD::OPC_FilterValue, 1, 113, 26, // Skip to: 6937
/* 168 */     MCD::OPC_Decode, 150, 1, 2, // Opcode: BCONDA
/* 172 */     MCD::OPC_FilterValue, 3, 23, 1, // Skip to: 455
/* 176 */     MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 179 */     MCD::OPC_FilterValue, 1, 19, 0, // Skip to: 202
/* 183 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 186 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 194
/* 190 */     MCD::OPC_Decode, 188, 1, 3, // Opcode: BPZnapn
/* 194 */     MCD::OPC_FilterValue, 1, 83, 26, // Skip to: 6937
/* 198 */     MCD::OPC_Decode, 189, 1, 3, // Opcode: BPZnapt
/* 202 */     MCD::OPC_FilterValue, 2, 19, 0, // Skip to: 225
/* 206 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 209 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 217
/* 213 */     MCD::OPC_Decode, 172, 1, 3, // Opcode: BPLEZnapn
/* 217 */     MCD::OPC_FilterValue, 1, 60, 26, // Skip to: 6937
/* 221 */     MCD::OPC_Decode, 173, 1, 3, // Opcode: BPLEZnapt
/* 225 */     MCD::OPC_FilterValue, 3, 19, 0, // Skip to: 248
/* 229 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 232 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 240
/* 236 */     MCD::OPC_Decode, 176, 1, 3, // Opcode: BPLZnapn
/* 240 */     MCD::OPC_FilterValue, 1, 37, 26, // Skip to: 6937
/* 244 */     MCD::OPC_Decode, 177, 1, 3, // Opcode: BPLZnapt
/* 248 */     MCD::OPC_FilterValue, 5, 19, 0, // Skip to: 271
/* 252 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 255 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 263
/* 259 */     MCD::OPC_Decode, 180, 1, 3, // Opcode: BPNZnapn
/* 263 */     MCD::OPC_FilterValue, 1, 14, 26, // Skip to: 6937
/* 267 */     MCD::OPC_Decode, 181, 1, 3, // Opcode: BPNZnapt
/* 271 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 294
/* 275 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 278 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 286
/* 282 */     MCD::OPC_Decode, 164, 1, 3, // Opcode: BPGZnapn
/* 286 */     MCD::OPC_FilterValue, 1, 247, 25, // Skip to: 6937
/* 290 */     MCD::OPC_Decode, 165, 1, 3, // Opcode: BPGZnapt
/* 294 */     MCD::OPC_FilterValue, 7, 19, 0, // Skip to: 317
/* 298 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 301 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 309
/* 305 */     MCD::OPC_Decode, 160, 1, 3, // Opcode: BPGEZnapn
/* 309 */     MCD::OPC_FilterValue, 1, 224, 25, // Skip to: 6937
/* 313 */     MCD::OPC_Decode, 161, 1, 3, // Opcode: BPGEZnapt
/* 317 */     MCD::OPC_FilterValue, 17, 19, 0, // Skip to: 340
/* 321 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 324 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 332
/* 328 */     MCD::OPC_Decode, 186, 1, 3, // Opcode: BPZapn
/* 332 */     MCD::OPC_FilterValue, 1, 201, 25, // Skip to: 6937
/* 336 */     MCD::OPC_Decode, 187, 1, 3, // Opcode: BPZapt
/* 340 */     MCD::OPC_FilterValue, 18, 19, 0, // Skip to: 363
/* 344 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 347 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 355
/* 351 */     MCD::OPC_Decode, 170, 1, 3, // Opcode: BPLEZapn
/* 355 */     MCD::OPC_FilterValue, 1, 178, 25, // Skip to: 6937
/* 359 */     MCD::OPC_Decode, 171, 1, 3, // Opcode: BPLEZapt
/* 363 */     MCD::OPC_FilterValue, 19, 19, 0, // Skip to: 386
/* 367 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 370 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 378
/* 374 */     MCD::OPC_Decode, 174, 1, 3, // Opcode: BPLZapn
/* 378 */     MCD::OPC_FilterValue, 1, 155, 25, // Skip to: 6937
/* 382 */     MCD::OPC_Decode, 175, 1, 3, // Opcode: BPLZapt
/* 386 */     MCD::OPC_FilterValue, 21, 19, 0, // Skip to: 409
/* 390 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 393 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 401
/* 397 */     MCD::OPC_Decode, 178, 1, 3, // Opcode: BPNZapn
/* 401 */     MCD::OPC_FilterValue, 1, 132, 25, // Skip to: 6937
/* 405 */     MCD::OPC_Decode, 179, 1, 3, // Opcode: BPNZapt
/* 409 */     MCD::OPC_FilterValue, 22, 19, 0, // Skip to: 432
/* 413 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 416 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 424
/* 420 */     MCD::OPC_Decode, 162, 1, 3, // Opcode: BPGZapn
/* 424 */     MCD::OPC_FilterValue, 1, 109, 25, // Skip to: 6937
/* 428 */     MCD::OPC_Decode, 163, 1, 3, // Opcode: BPGZapt
/* 432 */     MCD::OPC_FilterValue, 23, 101, 25, // Skip to: 6937
/* 436 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 439 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 447
/* 443 */     MCD::OPC_Decode, 158, 1, 3, // Opcode: BPGEZapn
/* 447 */     MCD::OPC_FilterValue, 1, 86, 25, // Skip to: 6937
/* 451 */     MCD::OPC_Decode, 159, 1, 3, // Opcode: BPGEZapt
/* 455 */     MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 479
/* 459 */     MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 475
/* 465 */     MCD::OPC_CheckField, 0, 22, 0, 4, 0, // Skip to: 475
/* 471 */     MCD::OPC_Decode, 208, 3, 4, // Opcode: NOP
/* 475 */     MCD::OPC_Decode, 252, 3, 5, // Opcode: SETHIi
/* 479 */     MCD::OPC_FilterValue, 5, 65, 0, // Skip to: 548
/* 483 */     MCD::OPC_ExtractField, 19, 1,  // Inst{19} ...
/* 486 */     MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 517
/* 490 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 493 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 505
/* 497 */     MCD::OPC_CheckPredicate, 0, 36, 25, // Skip to: 6937
/* 501 */     MCD::OPC_Decode, 157, 1, 6, // Opcode: BPFCCNT
/* 505 */     MCD::OPC_FilterValue, 1, 28, 25, // Skip to: 6937
/* 509 */     MCD::OPC_CheckPredicate, 0, 24, 25, // Skip to: 6937
/* 513 */     MCD::OPC_Decode, 156, 1, 6, // Opcode: BPFCCANT
/* 517 */     MCD::OPC_FilterValue, 1, 16, 25, // Skip to: 6937
/* 521 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 524 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 536
/* 528 */     MCD::OPC_CheckPredicate, 0, 5, 25, // Skip to: 6937
/* 532 */     MCD::OPC_Decode, 154, 1, 6, // Opcode: BPFCC
/* 536 */     MCD::OPC_FilterValue, 1, 253, 24, // Skip to: 6937
/* 540 */     MCD::OPC_CheckPredicate, 0, 249, 24, // Skip to: 6937
/* 544 */     MCD::OPC_Decode, 155, 1, 6, // Opcode: BPFCCA
/* 548 */     MCD::OPC_FilterValue, 6, 19, 0, // Skip to: 571
/* 552 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 555 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 563
/* 559 */     MCD::OPC_Decode, 234, 1, 2, // Opcode: FBCOND
/* 563 */     MCD::OPC_FilterValue, 1, 226, 24, // Skip to: 6937
/* 567 */     MCD::OPC_Decode, 235, 1, 2, // Opcode: FBCONDA
/* 571 */     MCD::OPC_FilterValue, 7, 218, 24, // Skip to: 6937
/* 575 */     MCD::OPC_ExtractField, 29, 1,  // Inst{29} ...
/* 578 */     MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 586
/* 582 */     MCD::OPC_Decode, 198, 1, 2, // Opcode: CBCOND
/* 586 */     MCD::OPC_FilterValue, 1, 203, 24, // Skip to: 6937
/* 590 */     MCD::OPC_Decode, 199, 1, 2, // Opcode: CBCONDA
/* 594 */     MCD::OPC_FilterValue, 1, 4, 0, // Skip to: 602
/* 598 */     MCD::OPC_Decode, 191, 1, 7, // Opcode: CALL
/* 602 */     MCD::OPC_FilterValue, 2, 149, 19, // Skip to: 5619
/* 606 */     MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 609 */     MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 638
/* 613 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 616 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 630
/* 620 */     MCD::OPC_CheckField, 5, 8, 0, 167, 24, // Skip to: 6937
/* 626 */     MCD::OPC_Decode, 129, 1, 8, // Opcode: ADDrr
/* 630 */     MCD::OPC_FilterValue, 1, 159, 24, // Skip to: 6937
/* 634 */     MCD::OPC_Decode, 128, 1, 9, // Opcode: ADDri
/* 638 */     MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 667
/* 642 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 645 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 659
/* 649 */     MCD::OPC_CheckField, 5, 8, 0, 138, 24, // Skip to: 6937
/* 655 */     MCD::OPC_Decode, 144, 1, 8, // Opcode: ANDrr
/* 659 */     MCD::OPC_FilterValue, 1, 130, 24, // Skip to: 6937
/* 663 */     MCD::OPC_Decode, 143, 1, 9, // Opcode: ANDri
/* 667 */     MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 696
/* 671 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 674 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 688
/* 678 */     MCD::OPC_CheckField, 5, 8, 0, 109, 24, // Skip to: 6937
/* 684 */     MCD::OPC_Decode, 219, 3, 8, // Opcode: ORrr
/* 688 */     MCD::OPC_FilterValue, 1, 101, 24, // Skip to: 6937
/* 692 */     MCD::OPC_Decode, 218, 3, 9, // Opcode: ORri
/* 696 */     MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 725
/* 700 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 703 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 717
/* 707 */     MCD::OPC_CheckField, 5, 8, 0, 80, 24, // Skip to: 6937
/* 713 */     MCD::OPC_Decode, 136, 5, 8, // Opcode: XORrr
/* 717 */     MCD::OPC_FilterValue, 1, 72, 24, // Skip to: 6937
/* 721 */     MCD::OPC_Decode, 135, 5, 9, // Opcode: XORri
/* 725 */     MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 754
/* 729 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 732 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 746
/* 736 */     MCD::OPC_CheckField, 5, 8, 0, 51, 24, // Skip to: 6937
/* 742 */     MCD::OPC_Decode, 192, 4, 8, // Opcode: SUBrr
/* 746 */     MCD::OPC_FilterValue, 1, 43, 24, // Skip to: 6937
/* 750 */     MCD::OPC_Decode, 191, 4, 9, // Opcode: SUBri
/* 754 */     MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 783
/* 758 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 761 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 775
/* 765 */     MCD::OPC_CheckField, 5, 8, 0, 22, 24, // Skip to: 6937
/* 771 */     MCD::OPC_Decode, 139, 1, 8, // Opcode: ANDNrr
/* 775 */     MCD::OPC_FilterValue, 1, 14, 24, // Skip to: 6937
/* 779 */     MCD::OPC_Decode, 138, 1, 9, // Opcode: ANDNri
/* 783 */     MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 812
/* 787 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 790 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 804
/* 794 */     MCD::OPC_CheckField, 5, 8, 0, 249, 23, // Skip to: 6937
/* 800 */     MCD::OPC_Decode, 214, 3, 8, // Opcode: ORNrr
/* 804 */     MCD::OPC_FilterValue, 1, 241, 23, // Skip to: 6937
/* 808 */     MCD::OPC_Decode, 213, 3, 9, // Opcode: ORNri
/* 812 */     MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 841
/* 816 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 819 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 833
/* 823 */     MCD::OPC_CheckField, 5, 8, 0, 220, 23, // Skip to: 6937
/* 829 */     MCD::OPC_Decode, 130, 5, 8, // Opcode: XNORrr
/* 833 */     MCD::OPC_FilterValue, 1, 212, 23, // Skip to: 6937
/* 837 */     MCD::OPC_Decode, 129, 5, 9, // Opcode: XNORri
/* 841 */     MCD::OPC_FilterValue, 8, 23, 0, // Skip to: 868
/* 845 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 848 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 861
/* 852 */     MCD::OPC_CheckField, 5, 8, 0, 191, 23, // Skip to: 6937
/* 858 */     MCD::OPC_Decode, 121, 8, // Opcode: ADDCrr
/* 861 */     MCD::OPC_FilterValue, 1, 184, 23, // Skip to: 6937
/* 865 */     MCD::OPC_Decode, 120, 9, // Opcode: ADDCri
/* 868 */     MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 897
/* 872 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 875 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 889
/* 879 */     MCD::OPC_CheckField, 5, 8, 0, 164, 23, // Skip to: 6937
/* 885 */     MCD::OPC_Decode, 207, 3, 10, // Opcode: MULXrr
/* 889 */     MCD::OPC_FilterValue, 1, 156, 23, // Skip to: 6937
/* 893 */     MCD::OPC_Decode, 206, 3, 11, // Opcode: MULXri
/* 897 */     MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 926
/* 901 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 904 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 918
/* 908 */     MCD::OPC_CheckField, 5, 8, 0, 135, 23, // Skip to: 6937
/* 914 */     MCD::OPC_Decode, 229, 4, 8, // Opcode: UMULrr
/* 918 */     MCD::OPC_FilterValue, 1, 127, 23, // Skip to: 6937
/* 922 */     MCD::OPC_Decode, 228, 4, 9, // Opcode: UMULri
/* 926 */     MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 955
/* 930 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 933 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 947
/* 937 */     MCD::OPC_CheckField, 5, 8, 0, 106, 23, // Skip to: 6937
/* 943 */     MCD::OPC_Decode, 136, 4, 8, // Opcode: SMULrr
/* 947 */     MCD::OPC_FilterValue, 1, 98, 23, // Skip to: 6937
/* 951 */     MCD::OPC_Decode, 135, 4, 9, // Opcode: SMULri
/* 955 */     MCD::OPC_FilterValue, 12, 25, 0, // Skip to: 984
/* 959 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 962 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 976
/* 966 */     MCD::OPC_CheckField, 5, 8, 0, 77, 23, // Skip to: 6937
/* 972 */     MCD::OPC_Decode, 186, 4, 8, // Opcode: SUBCrr
/* 976 */     MCD::OPC_FilterValue, 1, 69, 23, // Skip to: 6937
/* 980 */     MCD::OPC_Decode, 185, 4, 9, // Opcode: SUBCri
/* 984 */     MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 1013
/* 988 */     MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 991 */     MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1005
/* 995 */     MCD::OPC_CheckField, 5, 8, 0, 48, 23, // Skip to: 6937
/* 1001 */    MCD::OPC_Decode, 220, 4, 10, // Opcode: UDIVXrr
/* 1005 */    MCD::OPC_FilterValue, 1, 40, 23, // Skip to: 6937
/* 1009 */    MCD::OPC_Decode, 219, 4, 11, // Opcode: UDIVXri
/* 1013 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 1042
/* 1017 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1020 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1034
/* 1024 */    MCD::OPC_CheckField, 5, 8, 0, 19, 23, // Skip to: 6937
/* 1030 */    MCD::OPC_Decode, 222, 4, 8, // Opcode: UDIVrr
/* 1034 */    MCD::OPC_FilterValue, 1, 11, 23, // Skip to: 6937
/* 1038 */    MCD::OPC_Decode, 221, 4, 9, // Opcode: UDIVri
/* 1042 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 1071
/* 1046 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1049 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1063
/* 1053 */    MCD::OPC_CheckField, 5, 8, 0, 246, 22, // Skip to: 6937
/* 1059 */    MCD::OPC_Decode, 241, 3, 8, // Opcode: SDIVrr
/* 1063 */    MCD::OPC_FilterValue, 1, 238, 22, // Skip to: 6937
/* 1067 */    MCD::OPC_Decode, 240, 3, 9, // Opcode: SDIVri
/* 1071 */    MCD::OPC_FilterValue, 16, 23, 0, // Skip to: 1098
/* 1075 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1078 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1091
/* 1082 */    MCD::OPC_CheckField, 5, 8, 0, 217, 22, // Skip to: 6937
/* 1088 */    MCD::OPC_Decode, 119, 8, // Opcode: ADDCCrr
/* 1091 */    MCD::OPC_FilterValue, 1, 210, 22, // Skip to: 6937
/* 1095 */    MCD::OPC_Decode, 118, 9, // Opcode: ADDCCri
/* 1098 */    MCD::OPC_FilterValue, 17, 25, 0, // Skip to: 1127
/* 1102 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1105 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1119
/* 1109 */    MCD::OPC_CheckField, 5, 8, 0, 190, 22, // Skip to: 6937
/* 1115 */    MCD::OPC_Decode, 135, 1, 8, // Opcode: ANDCCrr
/* 1119 */    MCD::OPC_FilterValue, 1, 182, 22, // Skip to: 6937
/* 1123 */    MCD::OPC_Decode, 134, 1, 9, // Opcode: ANDCCri
/* 1127 */    MCD::OPC_FilterValue, 18, 25, 0, // Skip to: 1156
/* 1131 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1134 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1148
/* 1138 */    MCD::OPC_CheckField, 5, 8, 0, 161, 22, // Skip to: 6937
/* 1144 */    MCD::OPC_Decode, 210, 3, 8, // Opcode: ORCCrr
/* 1148 */    MCD::OPC_FilterValue, 1, 153, 22, // Skip to: 6937
/* 1152 */    MCD::OPC_Decode, 209, 3, 9, // Opcode: ORCCri
/* 1156 */    MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 1185
/* 1160 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1163 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1177
/* 1167 */    MCD::OPC_CheckField, 5, 8, 0, 132, 22, // Skip to: 6937
/* 1173 */    MCD::OPC_Decode, 132, 5, 8, // Opcode: XORCCrr
/* 1177 */    MCD::OPC_FilterValue, 1, 124, 22, // Skip to: 6937
/* 1181 */    MCD::OPC_Decode, 131, 5, 9, // Opcode: XORCCri
/* 1185 */    MCD::OPC_FilterValue, 20, 46, 0, // Skip to: 1235
/* 1189 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1192 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1217
/* 1196 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 1199 */    MCD::OPC_FilterValue, 0, 102, 22, // Skip to: 6937
/* 1203 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1213
/* 1209 */    MCD::OPC_Decode, 204, 1, 12, // Opcode: CMPrr
/* 1213 */    MCD::OPC_Decode, 184, 4, 8, // Opcode: SUBCCrr
/* 1217 */    MCD::OPC_FilterValue, 1, 84, 22, // Skip to: 6937
/* 1221 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1231
/* 1227 */    MCD::OPC_Decode, 203, 1, 13, // Opcode: CMPri
/* 1231 */    MCD::OPC_Decode, 183, 4, 9, // Opcode: SUBCCri
/* 1235 */    MCD::OPC_FilterValue, 21, 25, 0, // Skip to: 1264
/* 1239 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1242 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1256
/* 1246 */    MCD::OPC_CheckField, 5, 8, 0, 53, 22, // Skip to: 6937
/* 1252 */    MCD::OPC_Decode, 137, 1, 8, // Opcode: ANDNCCrr
/* 1256 */    MCD::OPC_FilterValue, 1, 45, 22, // Skip to: 6937
/* 1260 */    MCD::OPC_Decode, 136, 1, 9, // Opcode: ANDNCCri
/* 1264 */    MCD::OPC_FilterValue, 22, 25, 0, // Skip to: 1293
/* 1268 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1271 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1285
/* 1275 */    MCD::OPC_CheckField, 5, 8, 0, 24, 22, // Skip to: 6937
/* 1281 */    MCD::OPC_Decode, 212, 3, 8, // Opcode: ORNCCrr
/* 1285 */    MCD::OPC_FilterValue, 1, 16, 22, // Skip to: 6937
/* 1289 */    MCD::OPC_Decode, 211, 3, 9, // Opcode: ORNCCri
/* 1293 */    MCD::OPC_FilterValue, 23, 25, 0, // Skip to: 1322
/* 1297 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1300 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1314
/* 1304 */    MCD::OPC_CheckField, 5, 8, 0, 251, 21, // Skip to: 6937
/* 1310 */    MCD::OPC_Decode, 255, 4, 8, // Opcode: XNORCCrr
/* 1314 */    MCD::OPC_FilterValue, 1, 243, 21, // Skip to: 6937
/* 1318 */    MCD::OPC_Decode, 254, 4, 9, // Opcode: XNORCCri
/* 1322 */    MCD::OPC_FilterValue, 24, 23, 0, // Skip to: 1349
/* 1326 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1329 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1342
/* 1333 */    MCD::OPC_CheckField, 5, 8, 0, 222, 21, // Skip to: 6937
/* 1339 */    MCD::OPC_Decode, 123, 8, // Opcode: ADDErr
/* 1342 */    MCD::OPC_FilterValue, 1, 215, 21, // Skip to: 6937
/* 1346 */    MCD::OPC_Decode, 122, 9, // Opcode: ADDEri
/* 1349 */    MCD::OPC_FilterValue, 26, 25, 0, // Skip to: 1378
/* 1353 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1356 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1370
/* 1360 */    MCD::OPC_CheckField, 5, 8, 0, 195, 21, // Skip to: 6937
/* 1366 */    MCD::OPC_Decode, 226, 4, 8, // Opcode: UMULCCrr
/* 1370 */    MCD::OPC_FilterValue, 1, 187, 21, // Skip to: 6937
/* 1374 */    MCD::OPC_Decode, 225, 4, 9, // Opcode: UMULCCri
/* 1378 */    MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 1407
/* 1382 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1385 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1399
/* 1389 */    MCD::OPC_CheckField, 5, 8, 0, 166, 21, // Skip to: 6937
/* 1395 */    MCD::OPC_Decode, 134, 4, 8, // Opcode: SMULCCrr
/* 1399 */    MCD::OPC_FilterValue, 1, 158, 21, // Skip to: 6937
/* 1403 */    MCD::OPC_Decode, 133, 4, 9, // Opcode: SMULCCri
/* 1407 */    MCD::OPC_FilterValue, 28, 25, 0, // Skip to: 1436
/* 1411 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1414 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1428
/* 1418 */    MCD::OPC_CheckField, 5, 8, 0, 137, 21, // Skip to: 6937
/* 1424 */    MCD::OPC_Decode, 188, 4, 8, // Opcode: SUBErr
/* 1428 */    MCD::OPC_FilterValue, 1, 129, 21, // Skip to: 6937
/* 1432 */    MCD::OPC_Decode, 187, 4, 9, // Opcode: SUBEri
/* 1436 */    MCD::OPC_FilterValue, 30, 25, 0, // Skip to: 1465
/* 1440 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1443 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1457
/* 1447 */    MCD::OPC_CheckField, 5, 8, 0, 108, 21, // Skip to: 6937
/* 1453 */    MCD::OPC_Decode, 218, 4, 8, // Opcode: UDIVCCrr
/* 1457 */    MCD::OPC_FilterValue, 1, 100, 21, // Skip to: 6937
/* 1461 */    MCD::OPC_Decode, 217, 4, 9, // Opcode: UDIVCCri
/* 1465 */    MCD::OPC_FilterValue, 31, 25, 0, // Skip to: 1494
/* 1469 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1472 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1486
/* 1476 */    MCD::OPC_CheckField, 5, 8, 0, 79, 21, // Skip to: 6937
/* 1482 */    MCD::OPC_Decode, 237, 3, 8, // Opcode: SDIVCCrr
/* 1486 */    MCD::OPC_FilterValue, 1, 71, 21, // Skip to: 6937
/* 1490 */    MCD::OPC_Decode, 236, 3, 9, // Opcode: SDIVCCri
/* 1494 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 1523
/* 1498 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1501 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1515
/* 1505 */    MCD::OPC_CheckField, 5, 8, 0, 50, 21, // Skip to: 6937
/* 1511 */    MCD::OPC_Decode, 201, 4, 8, // Opcode: TADDCCrr
/* 1515 */    MCD::OPC_FilterValue, 1, 42, 21, // Skip to: 6937
/* 1519 */    MCD::OPC_Decode, 200, 4, 9, // Opcode: TADDCCri
/* 1523 */    MCD::OPC_FilterValue, 33, 25, 0, // Skip to: 1552
/* 1527 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1530 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1544
/* 1534 */    MCD::OPC_CheckField, 5, 8, 0, 21, 21, // Skip to: 6937
/* 1540 */    MCD::OPC_Decode, 214, 4, 8, // Opcode: TSUBCCrr
/* 1544 */    MCD::OPC_FilterValue, 1, 13, 21, // Skip to: 6937
/* 1548 */    MCD::OPC_Decode, 213, 4, 9, // Opcode: TSUBCCri
/* 1552 */    MCD::OPC_FilterValue, 34, 25, 0, // Skip to: 1581
/* 1556 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1559 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1573
/* 1563 */    MCD::OPC_CheckField, 5, 8, 0, 248, 20, // Skip to: 6937
/* 1569 */    MCD::OPC_Decode, 199, 4, 8, // Opcode: TADDCCTVrr
/* 1573 */    MCD::OPC_FilterValue, 1, 240, 20, // Skip to: 6937
/* 1577 */    MCD::OPC_Decode, 198, 4, 9, // Opcode: TADDCCTVri
/* 1581 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 1610
/* 1585 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1588 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1602
/* 1592 */    MCD::OPC_CheckField, 5, 8, 0, 219, 20, // Skip to: 6937
/* 1598 */    MCD::OPC_Decode, 212, 4, 8, // Opcode: TSUBCCTVrr
/* 1602 */    MCD::OPC_FilterValue, 1, 211, 20, // Skip to: 6937
/* 1606 */    MCD::OPC_Decode, 211, 4, 9, // Opcode: TSUBCCTVri
/* 1610 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 1639
/* 1614 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1617 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1631
/* 1621 */    MCD::OPC_CheckField, 5, 8, 0, 190, 20, // Skip to: 6937
/* 1627 */    MCD::OPC_Decode, 205, 3, 8, // Opcode: MULSCCrr
/* 1631 */    MCD::OPC_FilterValue, 1, 182, 20, // Skip to: 6937
/* 1635 */    MCD::OPC_Decode, 204, 3, 9, // Opcode: MULSCCri
/* 1639 */    MCD::OPC_FilterValue, 37, 50, 0, // Skip to: 1693
/* 1643 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1646 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1675
/* 1650 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1653 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1667
/* 1657 */    MCD::OPC_CheckField, 5, 7, 0, 154, 20, // Skip to: 6937
/* 1663 */    MCD::OPC_Decode, 130, 4, 8, // Opcode: SLLrr
/* 1667 */    MCD::OPC_FilterValue, 1, 146, 20, // Skip to: 6937
/* 1671 */    MCD::OPC_Decode, 128, 4, 14, // Opcode: SLLXrr
/* 1675 */    MCD::OPC_FilterValue, 1, 138, 20, // Skip to: 6937
/* 1679 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1689
/* 1685 */    MCD::OPC_Decode, 255, 3, 15, // Opcode: SLLXri
/* 1689 */    MCD::OPC_Decode, 129, 4, 9, // Opcode: SLLri
/* 1693 */    MCD::OPC_FilterValue, 38, 50, 0, // Skip to: 1747
/* 1697 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1700 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1729
/* 1704 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1707 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1721
/* 1711 */    MCD::OPC_CheckField, 5, 7, 0, 100, 20, // Skip to: 6937
/* 1717 */    MCD::OPC_Decode, 144, 4, 8, // Opcode: SRLrr
/* 1721 */    MCD::OPC_FilterValue, 1, 92, 20, // Skip to: 6937
/* 1725 */    MCD::OPC_Decode, 142, 4, 14, // Opcode: SRLXrr
/* 1729 */    MCD::OPC_FilterValue, 1, 84, 20, // Skip to: 6937
/* 1733 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1743
/* 1739 */    MCD::OPC_Decode, 141, 4, 15, // Opcode: SRLXri
/* 1743 */    MCD::OPC_Decode, 143, 4, 9, // Opcode: SRLri
/* 1747 */    MCD::OPC_FilterValue, 39, 50, 0, // Skip to: 1801
/* 1751 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1754 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 1783
/* 1758 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1761 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 1775
/* 1765 */    MCD::OPC_CheckField, 5, 7, 0, 46, 20, // Skip to: 6937
/* 1771 */    MCD::OPC_Decode, 140, 4, 8, // Opcode: SRArr
/* 1775 */    MCD::OPC_FilterValue, 1, 38, 20, // Skip to: 6937
/* 1779 */    MCD::OPC_Decode, 138, 4, 14, // Opcode: SRAXrr
/* 1783 */    MCD::OPC_FilterValue, 1, 30, 20, // Skip to: 6937
/* 1787 */    MCD::OPC_CheckField, 12, 1, 1, 4, 0, // Skip to: 1797
/* 1793 */    MCD::OPC_Decode, 137, 4, 15, // Opcode: SRAXri
/* 1797 */    MCD::OPC_Decode, 139, 4, 9, // Opcode: SRAri
/* 1801 */    MCD::OPC_FilterValue, 40, 58, 0, // Skip to: 1863
/* 1805 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1808 */    MCD::OPC_FilterValue, 0, 27, 0, // Skip to: 1839
/* 1812 */    MCD::OPC_ExtractField, 0, 13,  // Inst{12-0} ...
/* 1815 */    MCD::OPC_FilterValue, 0, 254, 19, // Skip to: 6937
/* 1819 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 1835
/* 1825 */    MCD::OPC_CheckField, 14, 5, 15, 4, 0, // Skip to: 1835
/* 1831 */    MCD::OPC_Decode, 146, 4, 4, // Opcode: STBAR
/* 1835 */    MCD::OPC_Decode, 223, 3, 16, // Opcode: RDASR
/* 1839 */    MCD::OPC_FilterValue, 1, 230, 19, // Skip to: 6937
/* 1843 */    MCD::OPC_CheckPredicate, 0, 226, 19, // Skip to: 6937
/* 1847 */    MCD::OPC_CheckField, 25, 5, 0, 220, 19, // Skip to: 6937
/* 1853 */    MCD::OPC_CheckField, 14, 5, 15, 214, 19, // Skip to: 6937
/* 1859 */    MCD::OPC_Decode, 180, 3, 17, // Opcode: MEMBARi
/* 1863 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 1877
/* 1867 */    MCD::OPC_CheckField, 0, 19, 0, 200, 19, // Skip to: 6937
/* 1873 */    MCD::OPC_Decode, 225, 3, 18, // Opcode: RDPSR
/* 1877 */    MCD::OPC_FilterValue, 42, 25, 0, // Skip to: 1906
/* 1881 */    MCD::OPC_ExtractField, 0, 14,  // Inst{13-0} ...
/* 1884 */    MCD::OPC_FilterValue, 0, 185, 19, // Skip to: 6937
/* 1888 */    MCD::OPC_CheckField, 14, 5, 0, 4, 0, // Skip to: 1898
/* 1894 */    MCD::OPC_Decode, 227, 3, 18, // Opcode: RDWIM
/* 1898 */    MCD::OPC_CheckPredicate, 0, 171, 19, // Skip to: 6937
/* 1902 */    MCD::OPC_Decode, 224, 3, 19, // Opcode: RDPR
/* 1906 */    MCD::OPC_FilterValue, 43, 25, 0, // Skip to: 1935
/* 1910 */    MCD::OPC_ExtractField, 0, 19,  // Inst{18-0} ...
/* 1913 */    MCD::OPC_FilterValue, 0, 156, 19, // Skip to: 6937
/* 1917 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1931
/* 1921 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 1931
/* 1927 */    MCD::OPC_Decode, 139, 2, 4, // Opcode: FLUSHW
/* 1931 */    MCD::OPC_Decode, 226, 3, 18, // Opcode: RDTBR
/* 1935 */    MCD::OPC_FilterValue, 44, 123, 0, // Skip to: 2062
/* 1939 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 1942 */    MCD::OPC_FilterValue, 0, 56, 0, // Skip to: 2002
/* 1946 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1949 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 1975
/* 1953 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 1967
/* 1957 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 1967
/* 1963 */    MCD::OPC_Decode, 183, 3, 20, // Opcode: MOVFCCrr
/* 1967 */    MCD::OPC_CheckPredicate, 0, 102, 19, // Skip to: 6937
/* 1971 */    MCD::OPC_Decode, 241, 4, 21, // Opcode: V9MOVFCCrr
/* 1975 */    MCD::OPC_FilterValue, 1, 94, 19, // Skip to: 6937
/* 1979 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 1982 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1994
/* 1986 */    MCD::OPC_CheckPredicate, 0, 83, 19, // Skip to: 6937
/* 1990 */    MCD::OPC_Decode, 185, 3, 20, // Opcode: MOVICCrr
/* 1994 */    MCD::OPC_FilterValue, 2, 75, 19, // Skip to: 6937
/* 1998 */    MCD::OPC_Decode, 202, 3, 20, // Opcode: MOVXCCrr
/* 2002 */    MCD::OPC_FilterValue, 1, 67, 19, // Skip to: 6937
/* 2006 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 2009 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 2035
/* 2013 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 2027
/* 2017 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 2027
/* 2023 */    MCD::OPC_Decode, 182, 3, 22, // Opcode: MOVFCCri
/* 2027 */    MCD::OPC_CheckPredicate, 0, 42, 19, // Skip to: 6937
/* 2031 */    MCD::OPC_Decode, 240, 4, 23, // Opcode: V9MOVFCCri
/* 2035 */    MCD::OPC_FilterValue, 1, 34, 19, // Skip to: 6937
/* 2039 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 2042 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2054
/* 2046 */    MCD::OPC_CheckPredicate, 0, 23, 19, // Skip to: 6937
/* 2050 */    MCD::OPC_Decode, 184, 3, 22, // Opcode: MOVICCri
/* 2054 */    MCD::OPC_FilterValue, 2, 15, 19, // Skip to: 6937
/* 2058 */    MCD::OPC_Decode, 201, 3, 22, // Opcode: MOVXCCri
/* 2062 */    MCD::OPC_FilterValue, 45, 25, 0, // Skip to: 2091
/* 2066 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2069 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2083
/* 2073 */    MCD::OPC_CheckField, 5, 8, 0, 250, 18, // Skip to: 6937
/* 2079 */    MCD::OPC_Decode, 239, 3, 10, // Opcode: SDIVXrr
/* 2083 */    MCD::OPC_FilterValue, 1, 242, 18, // Skip to: 6937
/* 2087 */    MCD::OPC_Decode, 238, 3, 11, // Opcode: SDIVXri
/* 2091 */    MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 2109
/* 2095 */    MCD::OPC_CheckPredicate, 0, 230, 18, // Skip to: 6937
/* 2099 */    MCD::OPC_CheckField, 5, 14, 0, 224, 18, // Skip to: 6937
/* 2105 */    MCD::OPC_Decode, 222, 3, 24, // Opcode: POPCrr
/* 2109 */    MCD::OPC_FilterValue, 47, 135, 0, // Skip to: 2248
/* 2113 */    MCD::OPC_ExtractField, 10, 4,  // Inst{13-10} ...
/* 2116 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2130
/* 2120 */    MCD::OPC_CheckField, 5, 5, 0, 203, 18, // Skip to: 6937
/* 2126 */    MCD::OPC_Decode, 197, 3, 14, // Opcode: MOVRRZrr
/* 2130 */    MCD::OPC_FilterValue, 2, 10, 0, // Skip to: 2144
/* 2134 */    MCD::OPC_CheckField, 5, 5, 0, 189, 18, // Skip to: 6937
/* 2140 */    MCD::OPC_Decode, 191, 3, 14, // Opcode: MOVRLEZrr
/* 2144 */    MCD::OPC_FilterValue, 3, 10, 0, // Skip to: 2158
/* 2148 */    MCD::OPC_CheckField, 5, 5, 0, 175, 18, // Skip to: 6937
/* 2154 */    MCD::OPC_Decode, 193, 3, 14, // Opcode: MOVRLZrr
/* 2158 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2172
/* 2162 */    MCD::OPC_CheckField, 5, 5, 0, 161, 18, // Skip to: 6937
/* 2168 */    MCD::OPC_Decode, 195, 3, 14, // Opcode: MOVRNZrr
/* 2172 */    MCD::OPC_FilterValue, 6, 10, 0, // Skip to: 2186
/* 2176 */    MCD::OPC_CheckField, 5, 5, 0, 147, 18, // Skip to: 6937
/* 2182 */    MCD::OPC_Decode, 189, 3, 14, // Opcode: MOVRGZrr
/* 2186 */    MCD::OPC_FilterValue, 7, 10, 0, // Skip to: 2200
/* 2190 */    MCD::OPC_CheckField, 5, 5, 0, 133, 18, // Skip to: 6937
/* 2196 */    MCD::OPC_Decode, 187, 3, 14, // Opcode: MOVRGEZrr
/* 2200 */    MCD::OPC_FilterValue, 9, 4, 0, // Skip to: 2208
/* 2204 */    MCD::OPC_Decode, 196, 3, 25, // Opcode: MOVRRZri
/* 2208 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 2216
/* 2212 */    MCD::OPC_Decode, 190, 3, 25, // Opcode: MOVRLEZri
/* 2216 */    MCD::OPC_FilterValue, 11, 4, 0, // Skip to: 2224
/* 2220 */    MCD::OPC_Decode, 192, 3, 25, // Opcode: MOVRLZri
/* 2224 */    MCD::OPC_FilterValue, 13, 4, 0, // Skip to: 2232
/* 2228 */    MCD::OPC_Decode, 194, 3, 25, // Opcode: MOVRNZri
/* 2232 */    MCD::OPC_FilterValue, 14, 4, 0, // Skip to: 2240
/* 2236 */    MCD::OPC_Decode, 188, 3, 25, // Opcode: MOVRGZri
/* 2240 */    MCD::OPC_FilterValue, 15, 85, 18, // Skip to: 6937
/* 2244 */    MCD::OPC_Decode, 186, 3, 25, // Opcode: MOVRGEZri
/* 2248 */    MCD::OPC_FilterValue, 48, 25, 0, // Skip to: 2277
/* 2252 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2255 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 2269
/* 2259 */    MCD::OPC_CheckField, 5, 8, 0, 64, 18, // Skip to: 6937
/* 2265 */    MCD::OPC_Decode, 243, 4, 26, // Opcode: WRASRrr
/* 2269 */    MCD::OPC_FilterValue, 1, 56, 18, // Skip to: 6937
/* 2273 */    MCD::OPC_Decode, 242, 4, 27, // Opcode: WRASRri
/* 2277 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 2318
/* 2281 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2284 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2304
/* 2288 */    MCD::OPC_CheckField, 25, 5, 0, 35, 18, // Skip to: 6937
/* 2294 */    MCD::OPC_CheckField, 5, 8, 0, 29, 18, // Skip to: 6937
/* 2300 */    MCD::OPC_Decode, 247, 4, 12, // Opcode: WRPSRrr
/* 2304 */    MCD::OPC_FilterValue, 1, 21, 18, // Skip to: 6937
/* 2308 */    MCD::OPC_CheckField, 25, 5, 0, 15, 18, // Skip to: 6937
/* 2314 */    MCD::OPC_Decode, 246, 4, 13, // Opcode: WRPSRri
/* 2318 */    MCD::OPC_FilterValue, 50, 54, 0, // Skip to: 2376
/* 2322 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2325 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 2354
/* 2329 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 2332 */    MCD::OPC_FilterValue, 0, 249, 17, // Skip to: 6937
/* 2336 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2346
/* 2342 */    MCD::OPC_Decode, 251, 4, 12, // Opcode: WRWIMrr
/* 2346 */    MCD::OPC_CheckPredicate, 0, 235, 17, // Skip to: 6937
/* 2350 */    MCD::OPC_Decode, 245, 4, 28, // Opcode: WRPRrr
/* 2354 */    MCD::OPC_FilterValue, 1, 227, 17, // Skip to: 6937
/* 2358 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 2368
/* 2364 */    MCD::OPC_Decode, 250, 4, 13, // Opcode: WRWIMri
/* 2368 */    MCD::OPC_CheckPredicate, 0, 213, 17, // Skip to: 6937
/* 2372 */    MCD::OPC_Decode, 244, 4, 29, // Opcode: WRPRri
/* 2376 */    MCD::OPC_FilterValue, 51, 37, 0, // Skip to: 2417
/* 2380 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 2383 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 2403
/* 2387 */    MCD::OPC_CheckField, 25, 5, 0, 192, 17, // Skip to: 6937
/* 2393 */    MCD::OPC_CheckField, 5, 8, 0, 186, 17, // Skip to: 6937
/* 2399 */    MCD::OPC_Decode, 249, 4, 12, // Opcode: WRTBRrr
/* 2403 */    MCD::OPC_FilterValue, 1, 178, 17, // Skip to: 6937
/* 2407 */    MCD::OPC_CheckField, 25, 5, 0, 172, 17, // Skip to: 6937
/* 2413 */    MCD::OPC_Decode, 248, 4, 13, // Opcode: WRTBRri
/* 2417 */    MCD::OPC_FilterValue, 52, 197, 2, // Skip to: 3130
/* 2421 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 2424 */    MCD::OPC_FilterValue, 1, 10, 0, // Skip to: 2438
/* 2428 */    MCD::OPC_CheckField, 14, 5, 0, 151, 17, // Skip to: 6937
/* 2434 */    MCD::OPC_Decode, 169, 2, 30, // Opcode: FMOVS
/* 2438 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2456
/* 2442 */    MCD::OPC_CheckPredicate, 0, 139, 17, // Skip to: 6937
/* 2446 */    MCD::OPC_CheckField, 14, 5, 0, 133, 17, // Skip to: 6937
/* 2452 */    MCD::OPC_Decode, 143, 2, 31, // Opcode: FMOVD
/* 2456 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2474
/* 2460 */    MCD::OPC_CheckPredicate, 0, 121, 17, // Skip to: 6937
/* 2464 */    MCD::OPC_CheckField, 14, 5, 0, 115, 17, // Skip to: 6937
/* 2470 */    MCD::OPC_Decode, 147, 2, 32, // Opcode: FMOVQ
/* 2474 */    MCD::OPC_FilterValue, 5, 10, 0, // Skip to: 2488
/* 2478 */    MCD::OPC_CheckField, 14, 5, 0, 101, 17, // Skip to: 6937
/* 2484 */    MCD::OPC_Decode, 189, 2, 30, // Opcode: FNEGS
/* 2488 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2506
/* 2492 */    MCD::OPC_CheckPredicate, 0, 89, 17, // Skip to: 6937
/* 2496 */    MCD::OPC_CheckField, 14, 5, 0, 83, 17, // Skip to: 6937
/* 2502 */    MCD::OPC_Decode, 187, 2, 31, // Opcode: FNEGD
/* 2506 */    MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 2524
/* 2510 */    MCD::OPC_CheckPredicate, 0, 71, 17, // Skip to: 6937
/* 2514 */    MCD::OPC_CheckField, 14, 5, 0, 65, 17, // Skip to: 6937
/* 2520 */    MCD::OPC_Decode, 188, 2, 32, // Opcode: FNEGQ
/* 2524 */    MCD::OPC_FilterValue, 9, 10, 0, // Skip to: 2538
/* 2528 */    MCD::OPC_CheckField, 14, 5, 0, 51, 17, // Skip to: 6937
/* 2534 */    MCD::OPC_Decode, 223, 1, 30, // Opcode: FABSS
/* 2538 */    MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 2556
/* 2542 */    MCD::OPC_CheckPredicate, 0, 39, 17, // Skip to: 6937
/* 2546 */    MCD::OPC_CheckField, 14, 5, 0, 33, 17, // Skip to: 6937
/* 2552 */    MCD::OPC_Decode, 221, 1, 31, // Opcode: FABSD
/* 2556 */    MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 2574
/* 2560 */    MCD::OPC_CheckPredicate, 0, 21, 17, // Skip to: 6937
/* 2564 */    MCD::OPC_CheckField, 14, 5, 0, 15, 17, // Skip to: 6937
/* 2570 */    MCD::OPC_Decode, 222, 1, 32, // Opcode: FABSQ
/* 2574 */    MCD::OPC_FilterValue, 41, 10, 0, // Skip to: 2588
/* 2578 */    MCD::OPC_CheckField, 14, 5, 0, 1, 17, // Skip to: 6937
/* 2584 */    MCD::OPC_Decode, 233, 2, 30, // Opcode: FSQRTS
/* 2588 */    MCD::OPC_FilterValue, 42, 10, 0, // Skip to: 2602
/* 2592 */    MCD::OPC_CheckField, 14, 5, 0, 243, 16, // Skip to: 6937
/* 2598 */    MCD::OPC_Decode, 231, 2, 31, // Opcode: FSQRTD
/* 2602 */    MCD::OPC_FilterValue, 43, 10, 0, // Skip to: 2616
/* 2606 */    MCD::OPC_CheckField, 14, 5, 0, 229, 16, // Skip to: 6937
/* 2612 */    MCD::OPC_Decode, 232, 2, 32, // Opcode: FSQRTQ
/* 2616 */    MCD::OPC_FilterValue, 65, 4, 0, // Skip to: 2624
/* 2620 */    MCD::OPC_Decode, 226, 1, 33, // Opcode: FADDS
/* 2624 */    MCD::OPC_FilterValue, 66, 4, 0, // Skip to: 2632
/* 2628 */    MCD::OPC_Decode, 224, 1, 34, // Opcode: FADDD
/* 2632 */    MCD::OPC_FilterValue, 67, 4, 0, // Skip to: 2640
/* 2636 */    MCD::OPC_Decode, 225, 1, 35, // Opcode: FADDQ
/* 2640 */    MCD::OPC_FilterValue, 69, 4, 0, // Skip to: 2648
/* 2644 */    MCD::OPC_Decode, 248, 2, 33, // Opcode: FSUBS
/* 2648 */    MCD::OPC_FilterValue, 70, 4, 0, // Skip to: 2656
/* 2652 */    MCD::OPC_Decode, 246, 2, 34, // Opcode: FSUBD
/* 2656 */    MCD::OPC_FilterValue, 71, 4, 0, // Skip to: 2664
/* 2660 */    MCD::OPC_Decode, 247, 2, 35, // Opcode: FSUBQ
/* 2664 */    MCD::OPC_FilterValue, 73, 4, 0, // Skip to: 2672
/* 2668 */    MCD::OPC_Decode, 182, 2, 33, // Opcode: FMULS
/* 2672 */    MCD::OPC_FilterValue, 74, 4, 0, // Skip to: 2680
/* 2676 */    MCD::OPC_Decode, 178, 2, 34, // Opcode: FMULD
/* 2680 */    MCD::OPC_FilterValue, 75, 4, 0, // Skip to: 2688
/* 2684 */    MCD::OPC_Decode, 181, 2, 35, // Opcode: FMULQ
/* 2688 */    MCD::OPC_FilterValue, 77, 4, 0, // Skip to: 2696
/* 2692 */    MCD::OPC_Decode, 250, 1, 33, // Opcode: FDIVS
/* 2696 */    MCD::OPC_FilterValue, 78, 4, 0, // Skip to: 2704
/* 2700 */    MCD::OPC_Decode, 248, 1, 34, // Opcode: FDIVD
/* 2704 */    MCD::OPC_FilterValue, 79, 4, 0, // Skip to: 2712
/* 2708 */    MCD::OPC_Decode, 249, 1, 35, // Opcode: FDIVQ
/* 2712 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 2724
/* 2716 */    MCD::OPC_CheckPredicate, 1, 121, 16, // Skip to: 6937
/* 2720 */    MCD::OPC_Decode, 184, 2, 34, // Opcode: FNADDS
/* 2724 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 2736
/* 2728 */    MCD::OPC_CheckPredicate, 1, 109, 16, // Skip to: 6937
/* 2732 */    MCD::OPC_Decode, 183, 2, 34, // Opcode: FNADDD
/* 2736 */    MCD::OPC_FilterValue, 89, 8, 0, // Skip to: 2748
/* 2740 */    MCD::OPC_CheckPredicate, 1, 97, 16, // Skip to: 6937
/* 2744 */    MCD::OPC_Decode, 193, 2, 34, // Opcode: FNMULS
/* 2748 */    MCD::OPC_FilterValue, 90, 8, 0, // Skip to: 2760
/* 2752 */    MCD::OPC_CheckPredicate, 1, 85, 16, // Skip to: 6937
/* 2756 */    MCD::OPC_Decode, 192, 2, 34, // Opcode: FNMULD
/* 2760 */    MCD::OPC_FilterValue, 97, 8, 0, // Skip to: 2772
/* 2764 */    MCD::OPC_CheckPredicate, 1, 73, 16, // Skip to: 6937
/* 2768 */    MCD::OPC_Decode, 130, 2, 34, // Opcode: FHADDS
/* 2772 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 2784
/* 2776 */    MCD::OPC_CheckPredicate, 1, 61, 16, // Skip to: 6937
/* 2780 */    MCD::OPC_Decode, 129, 2, 34, // Opcode: FHADDD
/* 2784 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 2796
/* 2788 */    MCD::OPC_CheckPredicate, 1, 49, 16, // Skip to: 6937
/* 2792 */    MCD::OPC_Decode, 132, 2, 34, // Opcode: FHSUBS
/* 2796 */    MCD::OPC_FilterValue, 102, 8, 0, // Skip to: 2808
/* 2800 */    MCD::OPC_CheckPredicate, 1, 37, 16, // Skip to: 6937
/* 2804 */    MCD::OPC_Decode, 131, 2, 34, // Opcode: FHSUBD
/* 2808 */    MCD::OPC_FilterValue, 105, 4, 0, // Skip to: 2816
/* 2812 */    MCD::OPC_Decode, 230, 2, 36, // Opcode: FSMULD
/* 2816 */    MCD::OPC_FilterValue, 110, 4, 0, // Skip to: 2824
/* 2820 */    MCD::OPC_Decode, 251, 1, 37, // Opcode: FDMULQ
/* 2824 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 2836
/* 2828 */    MCD::OPC_CheckPredicate, 1, 9, 16, // Skip to: 6937
/* 2832 */    MCD::OPC_Decode, 191, 2, 34, // Opcode: FNHADDS
/* 2836 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 2848
/* 2840 */    MCD::OPC_CheckPredicate, 1, 253, 15, // Skip to: 6937
/* 2844 */    MCD::OPC_Decode, 190, 2, 34, // Opcode: FNHADDD
/* 2848 */    MCD::OPC_FilterValue, 121, 8, 0, // Skip to: 2860
/* 2852 */    MCD::OPC_CheckPredicate, 1, 241, 15, // Skip to: 6937
/* 2856 */    MCD::OPC_Decode, 200, 2, 34, // Opcode: FNSMULD
/* 2860 */    MCD::OPC_FilterValue, 129, 1, 10, 0, // Skip to: 2875
/* 2865 */    MCD::OPC_CheckField, 14, 5, 0, 226, 15, // Skip to: 6937
/* 2871 */    MCD::OPC_Decode, 245, 2, 38, // Opcode: FSTOX
/* 2875 */    MCD::OPC_FilterValue, 130, 1, 10, 0, // Skip to: 2890
/* 2880 */    MCD::OPC_CheckField, 14, 5, 0, 211, 15, // Skip to: 6937
/* 2886 */    MCD::OPC_Decode, 255, 1, 31, // Opcode: FDTOX
/* 2890 */    MCD::OPC_FilterValue, 131, 1, 10, 0, // Skip to: 2905
/* 2895 */    MCD::OPC_CheckField, 14, 5, 0, 196, 15, // Skip to: 6937
/* 2901 */    MCD::OPC_Decode, 225, 2, 39, // Opcode: FQTOX
/* 2905 */    MCD::OPC_FilterValue, 132, 1, 10, 0, // Skip to: 2920
/* 2910 */    MCD::OPC_CheckField, 14, 5, 0, 181, 15, // Skip to: 6937
/* 2916 */    MCD::OPC_Decode, 255, 2, 40, // Opcode: FXTOS
/* 2920 */    MCD::OPC_FilterValue, 136, 1, 10, 0, // Skip to: 2935
/* 2925 */    MCD::OPC_CheckField, 14, 5, 0, 166, 15, // Skip to: 6937
/* 2931 */    MCD::OPC_Decode, 253, 2, 31, // Opcode: FXTOD
/* 2935 */    MCD::OPC_FilterValue, 140, 1, 10, 0, // Skip to: 2950
/* 2940 */    MCD::OPC_CheckField, 14, 5, 0, 151, 15, // Skip to: 6937
/* 2946 */    MCD::OPC_Decode, 254, 2, 41, // Opcode: FXTOQ
/* 2950 */    MCD::OPC_FilterValue, 196, 1, 10, 0, // Skip to: 2965
/* 2955 */    MCD::OPC_CheckField, 14, 5, 0, 136, 15, // Skip to: 6937
/* 2961 */    MCD::OPC_Decode, 135, 2, 30, // Opcode: FITOS
/* 2965 */    MCD::OPC_FilterValue, 198, 1, 10, 0, // Skip to: 2980
/* 2970 */    MCD::OPC_CheckField, 14, 5, 0, 121, 15, // Skip to: 6937
/* 2976 */    MCD::OPC_Decode, 254, 1, 40, // Opcode: FDTOS
/* 2980 */    MCD::OPC_FilterValue, 199, 1, 10, 0, // Skip to: 2995
/* 2985 */    MCD::OPC_CheckField, 14, 5, 0, 106, 15, // Skip to: 6937
/* 2991 */    MCD::OPC_Decode, 224, 2, 42, // Opcode: FQTOS
/* 2995 */    MCD::OPC_FilterValue, 200, 1, 10, 0, // Skip to: 3010
/* 3000 */    MCD::OPC_CheckField, 14, 5, 0, 91, 15, // Skip to: 6937
/* 3006 */    MCD::OPC_Decode, 133, 2, 38, // Opcode: FITOD
/* 3010 */    MCD::OPC_FilterValue, 201, 1, 10, 0, // Skip to: 3025
/* 3015 */    MCD::OPC_CheckField, 14, 5, 0, 76, 15, // Skip to: 6937
/* 3021 */    MCD::OPC_Decode, 242, 2, 38, // Opcode: FSTOD
/* 3025 */    MCD::OPC_FilterValue, 203, 1, 10, 0, // Skip to: 3040
/* 3030 */    MCD::OPC_CheckField, 14, 5, 0, 61, 15, // Skip to: 6937
/* 3036 */    MCD::OPC_Decode, 222, 2, 39, // Opcode: FQTOD
/* 3040 */    MCD::OPC_FilterValue, 204, 1, 10, 0, // Skip to: 3055
/* 3045 */    MCD::OPC_CheckField, 14, 5, 0, 46, 15, // Skip to: 6937
/* 3051 */    MCD::OPC_Decode, 134, 2, 43, // Opcode: FITOQ
/* 3055 */    MCD::OPC_FilterValue, 205, 1, 10, 0, // Skip to: 3070
/* 3060 */    MCD::OPC_CheckField, 14, 5, 0, 31, 15, // Skip to: 6937
/* 3066 */    MCD::OPC_Decode, 244, 2, 43, // Opcode: FSTOQ
/* 3070 */    MCD::OPC_FilterValue, 206, 1, 10, 0, // Skip to: 3085
/* 3075 */    MCD::OPC_CheckField, 14, 5, 0, 16, 15, // Skip to: 6937
/* 3081 */    MCD::OPC_Decode, 253, 1, 41, // Opcode: FDTOQ
/* 3085 */    MCD::OPC_FilterValue, 209, 1, 10, 0, // Skip to: 3100
/* 3090 */    MCD::OPC_CheckField, 14, 5, 0, 1, 15, // Skip to: 6937
/* 3096 */    MCD::OPC_Decode, 243, 2, 30, // Opcode: FSTOI
/* 3100 */    MCD::OPC_FilterValue, 210, 1, 10, 0, // Skip to: 3115
/* 3105 */    MCD::OPC_CheckField, 14, 5, 0, 242, 14, // Skip to: 6937
/* 3111 */    MCD::OPC_Decode, 252, 1, 40, // Opcode: FDTOI
/* 3115 */    MCD::OPC_FilterValue, 211, 1, 233, 14, // Skip to: 6937
/* 3120 */    MCD::OPC_CheckField, 14, 5, 0, 227, 14, // Skip to: 6937
/* 3126 */    MCD::OPC_Decode, 223, 2, 42, // Opcode: FQTOI
/* 3130 */    MCD::OPC_FilterValue, 53, 70, 2, // Skip to: 3716
/* 3134 */    MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 3137 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 3216
/* 3141 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3144 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3177
/* 3148 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3151 */    MCD::OPC_FilterValue, 0, 198, 14, // Skip to: 6937
/* 3155 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3169
/* 3159 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3169
/* 3165 */    MCD::OPC_Decode, 170, 2, 44, // Opcode: FMOVS_FCC
/* 3169 */    MCD::OPC_CheckPredicate, 0, 180, 14, // Skip to: 6937
/* 3173 */    MCD::OPC_Decode, 239, 4, 45, // Opcode: V9FMOVS_FCC
/* 3177 */    MCD::OPC_FilterValue, 1, 172, 14, // Skip to: 6937
/* 3181 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3184 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3202
/* 3188 */    MCD::OPC_CheckPredicate, 0, 161, 14, // Skip to: 6937
/* 3192 */    MCD::OPC_CheckField, 18, 1, 0, 155, 14, // Skip to: 6937
/* 3198 */    MCD::OPC_Decode, 171, 2, 44, // Opcode: FMOVS_ICC
/* 3202 */    MCD::OPC_FilterValue, 2, 147, 14, // Skip to: 6937
/* 3206 */    MCD::OPC_CheckField, 18, 1, 0, 141, 14, // Skip to: 6937
/* 3212 */    MCD::OPC_Decode, 172, 2, 44, // Opcode: FMOVS_XCC
/* 3216 */    MCD::OPC_FilterValue, 2, 75, 0, // Skip to: 3295
/* 3220 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3223 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3256
/* 3227 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3230 */    MCD::OPC_FilterValue, 0, 119, 14, // Skip to: 6937
/* 3234 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3248
/* 3238 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3248
/* 3244 */    MCD::OPC_Decode, 144, 2, 46, // Opcode: FMOVD_FCC
/* 3248 */    MCD::OPC_CheckPredicate, 0, 101, 14, // Skip to: 6937
/* 3252 */    MCD::OPC_Decode, 237, 4, 47, // Opcode: V9FMOVD_FCC
/* 3256 */    MCD::OPC_FilterValue, 1, 93, 14, // Skip to: 6937
/* 3260 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3263 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3281
/* 3267 */    MCD::OPC_CheckPredicate, 0, 82, 14, // Skip to: 6937
/* 3271 */    MCD::OPC_CheckField, 18, 1, 0, 76, 14, // Skip to: 6937
/* 3277 */    MCD::OPC_Decode, 145, 2, 46, // Opcode: FMOVD_ICC
/* 3281 */    MCD::OPC_FilterValue, 2, 68, 14, // Skip to: 6937
/* 3285 */    MCD::OPC_CheckField, 18, 1, 0, 62, 14, // Skip to: 6937
/* 3291 */    MCD::OPC_Decode, 146, 2, 46, // Opcode: FMOVD_XCC
/* 3295 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 3374
/* 3299 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 3302 */    MCD::OPC_FilterValue, 0, 29, 0, // Skip to: 3335
/* 3306 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3309 */    MCD::OPC_FilterValue, 0, 40, 14, // Skip to: 6937
/* 3313 */    MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 3327
/* 3317 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3327
/* 3323 */    MCD::OPC_Decode, 148, 2, 48, // Opcode: FMOVQ_FCC
/* 3327 */    MCD::OPC_CheckPredicate, 0, 22, 14, // Skip to: 6937
/* 3331 */    MCD::OPC_Decode, 238, 4, 49, // Opcode: V9FMOVQ_FCC
/* 3335 */    MCD::OPC_FilterValue, 1, 14, 14, // Skip to: 6937
/* 3339 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3342 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 3360
/* 3346 */    MCD::OPC_CheckPredicate, 0, 3, 14, // Skip to: 6937
/* 3350 */    MCD::OPC_CheckField, 18, 1, 0, 253, 13, // Skip to: 6937
/* 3356 */    MCD::OPC_Decode, 149, 2, 48, // Opcode: FMOVQ_ICC
/* 3360 */    MCD::OPC_FilterValue, 2, 245, 13, // Skip to: 6937
/* 3364 */    MCD::OPC_CheckField, 18, 1, 0, 239, 13, // Skip to: 6937
/* 3370 */    MCD::OPC_Decode, 150, 2, 48, // Opcode: FMOVQ_XCC
/* 3374 */    MCD::OPC_FilterValue, 5, 27, 0, // Skip to: 3405
/* 3378 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3381 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3393
/* 3385 */    MCD::OPC_CheckPredicate, 0, 220, 13, // Skip to: 6937
/* 3389 */    MCD::OPC_Decode, 159, 2, 50, // Opcode: FMOVRLEZS
/* 3393 */    MCD::OPC_FilterValue, 3, 212, 13, // Skip to: 6937
/* 3397 */    MCD::OPC_CheckPredicate, 0, 208, 13, // Skip to: 6937
/* 3401 */    MCD::OPC_Decode, 156, 2, 50, // Opcode: FMOVRGZS
/* 3405 */    MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 3436
/* 3409 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3412 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3424
/* 3416 */    MCD::OPC_CheckPredicate, 0, 189, 13, // Skip to: 6937
/* 3420 */    MCD::OPC_Decode, 157, 2, 50, // Opcode: FMOVRLEZD
/* 3424 */    MCD::OPC_FilterValue, 3, 181, 13, // Skip to: 6937
/* 3428 */    MCD::OPC_CheckPredicate, 0, 177, 13, // Skip to: 6937
/* 3432 */    MCD::OPC_Decode, 154, 2, 50, // Opcode: FMOVRGZD
/* 3436 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 3467
/* 3440 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3443 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3455
/* 3447 */    MCD::OPC_CheckPredicate, 0, 158, 13, // Skip to: 6937
/* 3451 */    MCD::OPC_Decode, 158, 2, 50, // Opcode: FMOVRLEZQ
/* 3455 */    MCD::OPC_FilterValue, 3, 150, 13, // Skip to: 6937
/* 3459 */    MCD::OPC_CheckPredicate, 0, 146, 13, // Skip to: 6937
/* 3463 */    MCD::OPC_Decode, 155, 2, 50, // Opcode: FMOVRGZQ
/* 3467 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 3481
/* 3471 */    MCD::OPC_CheckField, 11, 3, 1, 132, 13, // Skip to: 6937
/* 3477 */    MCD::OPC_Decode, 236, 4, 51, // Opcode: V9FCMPS
/* 3481 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 3495
/* 3485 */    MCD::OPC_CheckField, 11, 3, 1, 118, 13, // Skip to: 6937
/* 3491 */    MCD::OPC_Decode, 231, 4, 52, // Opcode: V9FCMPD
/* 3495 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 3509
/* 3499 */    MCD::OPC_CheckField, 11, 3, 1, 104, 13, // Skip to: 6937
/* 3505 */    MCD::OPC_Decode, 235, 4, 53, // Opcode: V9FCMPQ
/* 3509 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 3523
/* 3513 */    MCD::OPC_CheckField, 11, 3, 1, 90, 13, // Skip to: 6937
/* 3519 */    MCD::OPC_Decode, 234, 4, 51, // Opcode: V9FCMPES
/* 3523 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 3537
/* 3527 */    MCD::OPC_CheckField, 11, 3, 1, 76, 13, // Skip to: 6937
/* 3533 */    MCD::OPC_Decode, 232, 4, 52, // Opcode: V9FCMPED
/* 3537 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 3551
/* 3541 */    MCD::OPC_CheckField, 11, 3, 1, 62, 13, // Skip to: 6937
/* 3547 */    MCD::OPC_Decode, 233, 4, 53, // Opcode: V9FCMPEQ
/* 3551 */    MCD::OPC_FilterValue, 37, 51, 0, // Skip to: 3606
/* 3555 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3558 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3570
/* 3562 */    MCD::OPC_CheckPredicate, 0, 43, 13, // Skip to: 6937
/* 3566 */    MCD::OPC_Decode, 168, 2, 50, // Opcode: FMOVRZS
/* 3570 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3582
/* 3574 */    MCD::OPC_CheckPredicate, 0, 31, 13, // Skip to: 6937
/* 3578 */    MCD::OPC_Decode, 162, 2, 50, // Opcode: FMOVRLZS
/* 3582 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3594
/* 3586 */    MCD::OPC_CheckPredicate, 0, 19, 13, // Skip to: 6937
/* 3590 */    MCD::OPC_Decode, 165, 2, 50, // Opcode: FMOVRNZS
/* 3594 */    MCD::OPC_FilterValue, 3, 11, 13, // Skip to: 6937
/* 3598 */    MCD::OPC_CheckPredicate, 0, 7, 13, // Skip to: 6937
/* 3602 */    MCD::OPC_Decode, 153, 2, 50, // Opcode: FMOVRGEZS
/* 3606 */    MCD::OPC_FilterValue, 38, 51, 0, // Skip to: 3661
/* 3610 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3613 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3625
/* 3617 */    MCD::OPC_CheckPredicate, 0, 244, 12, // Skip to: 6937
/* 3621 */    MCD::OPC_Decode, 166, 2, 50, // Opcode: FMOVRZD
/* 3625 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3637
/* 3629 */    MCD::OPC_CheckPredicate, 0, 232, 12, // Skip to: 6937
/* 3633 */    MCD::OPC_Decode, 160, 2, 50, // Opcode: FMOVRLZD
/* 3637 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3649
/* 3641 */    MCD::OPC_CheckPredicate, 0, 220, 12, // Skip to: 6937
/* 3645 */    MCD::OPC_Decode, 163, 2, 50, // Opcode: FMOVRNZD
/* 3649 */    MCD::OPC_FilterValue, 3, 212, 12, // Skip to: 6937
/* 3653 */    MCD::OPC_CheckPredicate, 0, 208, 12, // Skip to: 6937
/* 3657 */    MCD::OPC_Decode, 151, 2, 50, // Opcode: FMOVRGEZD
/* 3661 */    MCD::OPC_FilterValue, 39, 200, 12, // Skip to: 6937
/* 3665 */    MCD::OPC_ExtractField, 11, 3,  // Inst{13-11} ...
/* 3668 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3680
/* 3672 */    MCD::OPC_CheckPredicate, 0, 189, 12, // Skip to: 6937
/* 3676 */    MCD::OPC_Decode, 167, 2, 50, // Opcode: FMOVRZQ
/* 3680 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3692
/* 3684 */    MCD::OPC_CheckPredicate, 0, 177, 12, // Skip to: 6937
/* 3688 */    MCD::OPC_Decode, 161, 2, 50, // Opcode: FMOVRLZQ
/* 3692 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3704
/* 3696 */    MCD::OPC_CheckPredicate, 0, 165, 12, // Skip to: 6937
/* 3700 */    MCD::OPC_Decode, 164, 2, 50, // Opcode: FMOVRNZQ
/* 3704 */    MCD::OPC_FilterValue, 3, 157, 12, // Skip to: 6937
/* 3708 */    MCD::OPC_CheckPredicate, 0, 153, 12, // Skip to: 6937
/* 3712 */    MCD::OPC_Decode, 152, 2, 50, // Opcode: FMOVRGEZQ
/* 3716 */    MCD::OPC_FilterValue, 54, 30, 6, // Skip to: 5286
/* 3720 */    MCD::OPC_ExtractField, 5, 9,  // Inst{13-5} ...
/* 3723 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3735
/* 3727 */    MCD::OPC_CheckPredicate, 2, 134, 12, // Skip to: 6937
/* 3731 */    MCD::OPC_Decode, 213, 1, 10, // Opcode: EDGE8
/* 3735 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3747
/* 3739 */    MCD::OPC_CheckPredicate, 3, 122, 12, // Skip to: 6937
/* 3743 */    MCD::OPC_Decode, 216, 1, 10, // Opcode: EDGE8N
/* 3747 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3759
/* 3751 */    MCD::OPC_CheckPredicate, 2, 110, 12, // Skip to: 6937
/* 3755 */    MCD::OPC_Decode, 214, 1, 10, // Opcode: EDGE8L
/* 3759 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3771
/* 3763 */    MCD::OPC_CheckPredicate, 3, 98, 12, // Skip to: 6937
/* 3767 */    MCD::OPC_Decode, 215, 1, 10, // Opcode: EDGE8LN
/* 3771 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3783
/* 3775 */    MCD::OPC_CheckPredicate, 2, 86, 12, // Skip to: 6937
/* 3779 */    MCD::OPC_Decode, 205, 1, 10, // Opcode: EDGE16
/* 3783 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3795
/* 3787 */    MCD::OPC_CheckPredicate, 3, 74, 12, // Skip to: 6937
/* 3791 */    MCD::OPC_Decode, 208, 1, 10, // Opcode: EDGE16N
/* 3795 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3807
/* 3799 */    MCD::OPC_CheckPredicate, 2, 62, 12, // Skip to: 6937
/* 3803 */    MCD::OPC_Decode, 206, 1, 10, // Opcode: EDGE16L
/* 3807 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3819
/* 3811 */    MCD::OPC_CheckPredicate, 3, 50, 12, // Skip to: 6937
/* 3815 */    MCD::OPC_Decode, 207, 1, 10, // Opcode: EDGE16LN
/* 3819 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3831
/* 3823 */    MCD::OPC_CheckPredicate, 2, 38, 12, // Skip to: 6937
/* 3827 */    MCD::OPC_Decode, 209, 1, 10, // Opcode: EDGE32
/* 3831 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3843
/* 3835 */    MCD::OPC_CheckPredicate, 3, 26, 12, // Skip to: 6937
/* 3839 */    MCD::OPC_Decode, 212, 1, 10, // Opcode: EDGE32N
/* 3843 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3855
/* 3847 */    MCD::OPC_CheckPredicate, 2, 14, 12, // Skip to: 6937
/* 3851 */    MCD::OPC_Decode, 210, 1, 10, // Opcode: EDGE32L
/* 3855 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3867
/* 3859 */    MCD::OPC_CheckPredicate, 3, 2, 12, // Skip to: 6937
/* 3863 */    MCD::OPC_Decode, 211, 1, 10, // Opcode: EDGE32LN
/* 3867 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 3879
/* 3871 */    MCD::OPC_CheckPredicate, 2, 246, 11, // Skip to: 6937
/* 3875 */    MCD::OPC_Decode, 147, 1, 10, // Opcode: ARRAY8
/* 3879 */    MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 3890
/* 3883 */    MCD::OPC_CheckPredicate, 1, 234, 11, // Skip to: 6937
/* 3887 */    MCD::OPC_Decode, 124, 10, // Opcode: ADDXC
/* 3890 */    MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 3902
/* 3894 */    MCD::OPC_CheckPredicate, 2, 223, 11, // Skip to: 6937
/* 3898 */    MCD::OPC_Decode, 145, 1, 10, // Opcode: ARRAY16
/* 3902 */    MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 3913
/* 3906 */    MCD::OPC_CheckPredicate, 1, 211, 11, // Skip to: 6937
/* 3910 */    MCD::OPC_Decode, 125, 10, // Opcode: ADDXCCC
/* 3913 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3925
/* 3917 */    MCD::OPC_CheckPredicate, 2, 200, 11, // Skip to: 6937
/* 3921 */    MCD::OPC_Decode, 146, 1, 10, // Opcode: ARRAY32
/* 3925 */    MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 3937
/* 3929 */    MCD::OPC_CheckPredicate, 1, 188, 11, // Skip to: 6937
/* 3933 */    MCD::OPC_Decode, 227, 4, 10, // Opcode: UMULXHI
/* 3937 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 3955
/* 3941 */    MCD::OPC_CheckPredicate, 1, 176, 11, // Skip to: 6937
/* 3945 */    MCD::OPC_CheckField, 14, 5, 0, 170, 11, // Skip to: 6937
/* 3951 */    MCD::OPC_Decode, 179, 3, 54, // Opcode: LZCNT
/* 3955 */    MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 3967
/* 3959 */    MCD::OPC_CheckPredicate, 2, 158, 11, // Skip to: 6937
/* 3963 */    MCD::OPC_Decode, 132, 1, 10, // Opcode: ALIGNADDR
/* 3967 */    MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 3979
/* 3971 */    MCD::OPC_CheckPredicate, 3, 146, 11, // Skip to: 6937
/* 3975 */    MCD::OPC_Decode, 153, 1, 10, // Opcode: BMASK
/* 3979 */    MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 3991
/* 3983 */    MCD::OPC_CheckPredicate, 2, 134, 11, // Skip to: 6937
/* 3987 */    MCD::OPC_Decode, 133, 1, 10, // Opcode: ALIGNADDRL
/* 3991 */    MCD::OPC_FilterValue, 27, 20, 0, // Skip to: 4015
/* 3995 */    MCD::OPC_CheckPredicate, 1, 122, 11, // Skip to: 6937
/* 3999 */    MCD::OPC_CheckField, 25, 5, 0, 116, 11, // Skip to: 6937
/* 4005 */    MCD::OPC_CheckField, 14, 5, 0, 110, 11, // Skip to: 6937
/* 4011 */    MCD::OPC_Decode, 202, 1, 55, // Opcode: CMASK8
/* 4015 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 4027
/* 4019 */    MCD::OPC_CheckPredicate, 3, 98, 11, // Skip to: 6937
/* 4023 */    MCD::OPC_Decode, 190, 1, 34, // Opcode: BSHUFFLE
/* 4027 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 4051
/* 4031 */    MCD::OPC_CheckPredicate, 1, 86, 11, // Skip to: 6937
/* 4035 */    MCD::OPC_CheckField, 25, 5, 0, 80, 11, // Skip to: 6937
/* 4041 */    MCD::OPC_CheckField, 14, 5, 0, 74, 11, // Skip to: 6937
/* 4047 */    MCD::OPC_Decode, 200, 1, 55, // Opcode: CMASK16
/* 4051 */    MCD::OPC_FilterValue, 31, 20, 0, // Skip to: 4075
/* 4055 */    MCD::OPC_CheckPredicate, 1, 62, 11, // Skip to: 6937
/* 4059 */    MCD::OPC_CheckField, 25, 5, 0, 56, 11, // Skip to: 6937
/* 4065 */    MCD::OPC_CheckField, 14, 5, 0, 50, 11, // Skip to: 6937
/* 4071 */    MCD::OPC_Decode, 201, 1, 55, // Opcode: CMASK32
/* 4075 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 4087
/* 4079 */    MCD::OPC_CheckPredicate, 2, 38, 11, // Skip to: 6937
/* 4083 */    MCD::OPC_Decode, 242, 1, 56, // Opcode: FCMPLE16
/* 4087 */    MCD::OPC_FilterValue, 33, 8, 0, // Skip to: 4099
/* 4091 */    MCD::OPC_CheckPredicate, 1, 26, 11, // Skip to: 6937
/* 4095 */    MCD::OPC_Decode, 228, 2, 34, // Opcode: FSLL16
/* 4099 */    MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 4111
/* 4103 */    MCD::OPC_CheckPredicate, 2, 14, 11, // Skip to: 6937
/* 4107 */    MCD::OPC_Decode, 244, 1, 56, // Opcode: FCMPNE16
/* 4111 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 4123
/* 4115 */    MCD::OPC_CheckPredicate, 1, 2, 11, // Skip to: 6937
/* 4119 */    MCD::OPC_Decode, 240, 2, 34, // Opcode: FSRL16
/* 4123 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 4135
/* 4127 */    MCD::OPC_CheckPredicate, 2, 246, 10, // Skip to: 6937
/* 4131 */    MCD::OPC_Decode, 243, 1, 56, // Opcode: FCMPLE32
/* 4135 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 4147
/* 4139 */    MCD::OPC_CheckPredicate, 1, 234, 10, // Skip to: 6937
/* 4143 */    MCD::OPC_Decode, 229, 2, 34, // Opcode: FSLL32
/* 4147 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 4159
/* 4151 */    MCD::OPC_CheckPredicate, 2, 222, 10, // Skip to: 6937
/* 4155 */    MCD::OPC_Decode, 245, 1, 56, // Opcode: FCMPNE32
/* 4159 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 4171
/* 4163 */    MCD::OPC_CheckPredicate, 1, 210, 10, // Skip to: 6937
/* 4167 */    MCD::OPC_Decode, 241, 2, 34, // Opcode: FSRL32
/* 4171 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 4183
/* 4175 */    MCD::OPC_CheckPredicate, 2, 198, 10, // Skip to: 6937
/* 4179 */    MCD::OPC_Decode, 240, 1, 56, // Opcode: FCMPGT16
/* 4183 */    MCD::OPC_FilterValue, 41, 8, 0, // Skip to: 4195
/* 4187 */    MCD::OPC_CheckPredicate, 1, 186, 10, // Skip to: 6937
/* 4191 */    MCD::OPC_Decode, 226, 2, 34, // Opcode: FSLAS16
/* 4195 */    MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 4207
/* 4199 */    MCD::OPC_CheckPredicate, 2, 174, 10, // Skip to: 6937
/* 4203 */    MCD::OPC_Decode, 238, 1, 56, // Opcode: FCMPEQ16
/* 4207 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 4219
/* 4211 */    MCD::OPC_CheckPredicate, 1, 162, 10, // Skip to: 6937
/* 4215 */    MCD::OPC_Decode, 234, 2, 34, // Opcode: FSRA16
/* 4219 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4231
/* 4223 */    MCD::OPC_CheckPredicate, 2, 150, 10, // Skip to: 6937
/* 4227 */    MCD::OPC_Decode, 241, 1, 56, // Opcode: FCMPGT32
/* 4231 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4243
/* 4235 */    MCD::OPC_CheckPredicate, 1, 138, 10, // Skip to: 6937
/* 4239 */    MCD::OPC_Decode, 227, 2, 34, // Opcode: FSLAS32
/* 4243 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4255
/* 4247 */    MCD::OPC_CheckPredicate, 2, 126, 10, // Skip to: 6937
/* 4251 */    MCD::OPC_Decode, 239, 1, 56, // Opcode: FCMPEQ32
/* 4255 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4267
/* 4259 */    MCD::OPC_CheckPredicate, 1, 114, 10, // Skip to: 6937
/* 4263 */    MCD::OPC_Decode, 235, 2, 34, // Opcode: FSRA32
/* 4267 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 4279
/* 4271 */    MCD::OPC_CheckPredicate, 2, 102, 10, // Skip to: 6937
/* 4275 */    MCD::OPC_Decode, 175, 2, 34, // Opcode: FMUL8X16
/* 4279 */    MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 4291
/* 4283 */    MCD::OPC_CheckPredicate, 2, 90, 10, // Skip to: 6937
/* 4287 */    MCD::OPC_Decode, 177, 2, 34, // Opcode: FMUL8X16AU
/* 4291 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4303
/* 4295 */    MCD::OPC_CheckPredicate, 2, 78, 10, // Skip to: 6937
/* 4299 */    MCD::OPC_Decode, 176, 2, 34, // Opcode: FMUL8X16AL
/* 4303 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 4315
/* 4307 */    MCD::OPC_CheckPredicate, 2, 66, 10, // Skip to: 6937
/* 4311 */    MCD::OPC_Decode, 173, 2, 34, // Opcode: FMUL8SUX16
/* 4315 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 4327
/* 4319 */    MCD::OPC_CheckPredicate, 2, 54, 10, // Skip to: 6937
/* 4323 */    MCD::OPC_Decode, 174, 2, 34, // Opcode: FMUL8ULX16
/* 4327 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 4339
/* 4331 */    MCD::OPC_CheckPredicate, 2, 42, 10, // Skip to: 6937
/* 4335 */    MCD::OPC_Decode, 179, 2, 34, // Opcode: FMULD8SUX16
/* 4339 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 4351
/* 4343 */    MCD::OPC_CheckPredicate, 2, 30, 10, // Skip to: 6937
/* 4347 */    MCD::OPC_Decode, 180, 2, 34, // Opcode: FMULD8ULX16
/* 4351 */    MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 4363
/* 4355 */    MCD::OPC_CheckPredicate, 2, 18, 10, // Skip to: 6937
/* 4359 */    MCD::OPC_Decode, 210, 2, 34, // Opcode: FPACK32
/* 4363 */    MCD::OPC_FilterValue, 59, 14, 0, // Skip to: 4381
/* 4367 */    MCD::OPC_CheckPredicate, 2, 6, 10, // Skip to: 6937
/* 4371 */    MCD::OPC_CheckField, 14, 5, 0, 0, 10, // Skip to: 6937
/* 4377 */    MCD::OPC_Decode, 209, 2, 31, // Opcode: FPACK16
/* 4381 */    MCD::OPC_FilterValue, 61, 14, 0, // Skip to: 4399
/* 4385 */    MCD::OPC_CheckPredicate, 2, 244, 9, // Skip to: 6937
/* 4389 */    MCD::OPC_CheckField, 14, 5, 0, 238, 9, // Skip to: 6937
/* 4395 */    MCD::OPC_Decode, 211, 2, 31, // Opcode: FPACKFIX
/* 4399 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4411
/* 4403 */    MCD::OPC_CheckPredicate, 2, 226, 9, // Skip to: 6937
/* 4407 */    MCD::OPC_Decode, 220, 3, 34, // Opcode: PDIST
/* 4411 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4423
/* 4415 */    MCD::OPC_CheckPredicate, 1, 214, 9, // Skip to: 6937
/* 4419 */    MCD::OPC_Decode, 221, 3, 34, // Opcode: PDISTN
/* 4423 */    MCD::OPC_FilterValue, 64, 8, 0, // Skip to: 4435
/* 4427 */    MCD::OPC_CheckPredicate, 1, 202, 9, // Skip to: 6937
/* 4431 */    MCD::OPC_Decode, 142, 2, 34, // Opcode: FMEAN16
/* 4435 */    MCD::OPC_FilterValue, 66, 8, 0, // Skip to: 4447
/* 4439 */    MCD::OPC_CheckPredicate, 1, 190, 9, // Skip to: 6937
/* 4443 */    MCD::OPC_Decode, 216, 2, 34, // Opcode: FPADD64
/* 4447 */    MCD::OPC_FilterValue, 68, 8, 0, // Skip to: 4459
/* 4451 */    MCD::OPC_CheckPredicate, 1, 178, 9, // Skip to: 6937
/* 4455 */    MCD::OPC_Decode, 236, 1, 34, // Opcode: FCHKSM16
/* 4459 */    MCD::OPC_FilterValue, 72, 8, 0, // Skip to: 4471
/* 4463 */    MCD::OPC_CheckPredicate, 2, 166, 9, // Skip to: 6937
/* 4467 */    MCD::OPC_Decode, 227, 1, 34, // Opcode: FALIGNADATA
/* 4471 */    MCD::OPC_FilterValue, 75, 8, 0, // Skip to: 4483
/* 4475 */    MCD::OPC_CheckPredicate, 2, 154, 9, // Skip to: 6937
/* 4479 */    MCD::OPC_Decode, 217, 2, 34, // Opcode: FPMERGE
/* 4483 */    MCD::OPC_FilterValue, 77, 14, 0, // Skip to: 4501
/* 4487 */    MCD::OPC_CheckPredicate, 2, 142, 9, // Skip to: 6937
/* 4491 */    MCD::OPC_CheckField, 14, 5, 0, 136, 9, // Skip to: 6937
/* 4497 */    MCD::OPC_Decode, 128, 2, 31, // Opcode: FEXPAND
/* 4501 */    MCD::OPC_FilterValue, 80, 8, 0, // Skip to: 4513
/* 4505 */    MCD::OPC_CheckPredicate, 2, 124, 9, // Skip to: 6937
/* 4509 */    MCD::OPC_Decode, 212, 2, 34, // Opcode: FPADD16
/* 4513 */    MCD::OPC_FilterValue, 81, 8, 0, // Skip to: 4525
/* 4517 */    MCD::OPC_CheckPredicate, 2, 112, 9, // Skip to: 6937
/* 4521 */    MCD::OPC_Decode, 213, 2, 34, // Opcode: FPADD16S
/* 4525 */    MCD::OPC_FilterValue, 82, 8, 0, // Skip to: 4537
/* 4529 */    MCD::OPC_CheckPredicate, 2, 100, 9, // Skip to: 6937
/* 4533 */    MCD::OPC_Decode, 214, 2, 34, // Opcode: FPADD32
/* 4537 */    MCD::OPC_FilterValue, 83, 8, 0, // Skip to: 4549
/* 4541 */    MCD::OPC_CheckPredicate, 2, 88, 9, // Skip to: 6937
/* 4545 */    MCD::OPC_Decode, 215, 2, 34, // Opcode: FPADD32S
/* 4549 */    MCD::OPC_FilterValue, 84, 8, 0, // Skip to: 4561
/* 4553 */    MCD::OPC_CheckPredicate, 2, 76, 9, // Skip to: 6937
/* 4557 */    MCD::OPC_Decode, 218, 2, 34, // Opcode: FPSUB16
/* 4561 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 4573
/* 4565 */    MCD::OPC_CheckPredicate, 2, 64, 9, // Skip to: 6937
/* 4569 */    MCD::OPC_Decode, 219, 2, 34, // Opcode: FPSUB16S
/* 4573 */    MCD::OPC_FilterValue, 86, 8, 0, // Skip to: 4585
/* 4577 */    MCD::OPC_CheckPredicate, 2, 52, 9, // Skip to: 6937
/* 4581 */    MCD::OPC_Decode, 220, 2, 34, // Opcode: FPSUB32
/* 4585 */    MCD::OPC_FilterValue, 87, 8, 0, // Skip to: 4597
/* 4589 */    MCD::OPC_CheckPredicate, 2, 40, 9, // Skip to: 6937
/* 4593 */    MCD::OPC_Decode, 221, 2, 34, // Opcode: FPSUB32S
/* 4597 */    MCD::OPC_FilterValue, 96, 20, 0, // Skip to: 4621
/* 4601 */    MCD::OPC_CheckPredicate, 2, 28, 9, // Skip to: 6937
/* 4605 */    MCD::OPC_CheckField, 14, 5, 0, 22, 9, // Skip to: 6937
/* 4611 */    MCD::OPC_CheckField, 0, 5, 0, 16, 9, // Skip to: 6937
/* 4617 */    MCD::OPC_Decode, 128, 3, 57, // Opcode: FZERO
/* 4621 */    MCD::OPC_FilterValue, 97, 20, 0, // Skip to: 4645
/* 4625 */    MCD::OPC_CheckPredicate, 2, 4, 9, // Skip to: 6937
/* 4629 */    MCD::OPC_CheckField, 14, 5, 0, 254, 8, // Skip to: 6937
/* 4635 */    MCD::OPC_CheckField, 0, 5, 0, 248, 8, // Skip to: 6937
/* 4641 */    MCD::OPC_Decode, 129, 3, 58, // Opcode: FZEROS
/* 4645 */    MCD::OPC_FilterValue, 98, 8, 0, // Skip to: 4657
/* 4649 */    MCD::OPC_CheckPredicate, 2, 236, 8, // Skip to: 6937
/* 4653 */    MCD::OPC_Decode, 194, 2, 34, // Opcode: FNOR
/* 4657 */    MCD::OPC_FilterValue, 99, 8, 0, // Skip to: 4669
/* 4661 */    MCD::OPC_CheckPredicate, 2, 224, 8, // Skip to: 6937
/* 4665 */    MCD::OPC_Decode, 195, 2, 33, // Opcode: FNORS
/* 4669 */    MCD::OPC_FilterValue, 100, 8, 0, // Skip to: 4681
/* 4673 */    MCD::OPC_CheckPredicate, 2, 212, 8, // Skip to: 6937
/* 4677 */    MCD::OPC_Decode, 231, 1, 34, // Opcode: FANDNOT2
/* 4681 */    MCD::OPC_FilterValue, 101, 8, 0, // Skip to: 4693
/* 4685 */    MCD::OPC_CheckPredicate, 2, 200, 8, // Skip to: 6937
/* 4689 */    MCD::OPC_Decode, 232, 1, 33, // Opcode: FANDNOT2S
/* 4693 */    MCD::OPC_FilterValue, 102, 14, 0, // Skip to: 4711
/* 4697 */    MCD::OPC_CheckPredicate, 2, 188, 8, // Skip to: 6937
/* 4701 */    MCD::OPC_CheckField, 14, 5, 0, 182, 8, // Skip to: 6937
/* 4707 */    MCD::OPC_Decode, 198, 2, 31, // Opcode: FNOT2
/* 4711 */    MCD::OPC_FilterValue, 103, 14, 0, // Skip to: 4729
/* 4715 */    MCD::OPC_CheckPredicate, 2, 170, 8, // Skip to: 6937
/* 4719 */    MCD::OPC_CheckField, 14, 5, 0, 164, 8, // Skip to: 6937
/* 4725 */    MCD::OPC_Decode, 199, 2, 30, // Opcode: FNOT2S
/* 4729 */    MCD::OPC_FilterValue, 104, 8, 0, // Skip to: 4741
/* 4733 */    MCD::OPC_CheckPredicate, 2, 152, 8, // Skip to: 6937
/* 4737 */    MCD::OPC_Decode, 229, 1, 34, // Opcode: FANDNOT1
/* 4741 */    MCD::OPC_FilterValue, 105, 8, 0, // Skip to: 4753
/* 4745 */    MCD::OPC_CheckPredicate, 2, 140, 8, // Skip to: 6937
/* 4749 */    MCD::OPC_Decode, 230, 1, 33, // Opcode: FANDNOT1S
/* 4753 */    MCD::OPC_FilterValue, 106, 14, 0, // Skip to: 4771
/* 4757 */    MCD::OPC_CheckPredicate, 2, 128, 8, // Skip to: 6937
/* 4761 */    MCD::OPC_CheckField, 0, 5, 0, 122, 8, // Skip to: 6937
/* 4767 */    MCD::OPC_Decode, 196, 2, 59, // Opcode: FNOT1
/* 4771 */    MCD::OPC_FilterValue, 107, 14, 0, // Skip to: 4789
/* 4775 */    MCD::OPC_CheckPredicate, 2, 110, 8, // Skip to: 6937
/* 4779 */    MCD::OPC_CheckField, 0, 5, 0, 104, 8, // Skip to: 6937
/* 4785 */    MCD::OPC_Decode, 197, 2, 60, // Opcode: FNOT1S
/* 4789 */    MCD::OPC_FilterValue, 108, 8, 0, // Skip to: 4801
/* 4793 */    MCD::OPC_CheckPredicate, 2, 92, 8, // Skip to: 6937
/* 4797 */    MCD::OPC_Decode, 251, 2, 34, // Opcode: FXOR
/* 4801 */    MCD::OPC_FilterValue, 109, 8, 0, // Skip to: 4813
/* 4805 */    MCD::OPC_CheckPredicate, 2, 80, 8, // Skip to: 6937
/* 4809 */    MCD::OPC_Decode, 252, 2, 33, // Opcode: FXORS
/* 4813 */    MCD::OPC_FilterValue, 110, 8, 0, // Skip to: 4825
/* 4817 */    MCD::OPC_CheckPredicate, 2, 68, 8, // Skip to: 6937
/* 4821 */    MCD::OPC_Decode, 185, 2, 34, // Opcode: FNAND
/* 4825 */    MCD::OPC_FilterValue, 111, 8, 0, // Skip to: 4837
/* 4829 */    MCD::OPC_CheckPredicate, 2, 56, 8, // Skip to: 6937
/* 4833 */    MCD::OPC_Decode, 186, 2, 33, // Opcode: FNANDS
/* 4837 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 4849
/* 4841 */    MCD::OPC_CheckPredicate, 2, 44, 8, // Skip to: 6937
/* 4845 */    MCD::OPC_Decode, 228, 1, 34, // Opcode: FAND
/* 4849 */    MCD::OPC_FilterValue, 113, 8, 0, // Skip to: 4861
/* 4853 */    MCD::OPC_CheckPredicate, 2, 32, 8, // Skip to: 6937
/* 4857 */    MCD::OPC_Decode, 233, 1, 33, // Opcode: FANDS
/* 4861 */    MCD::OPC_FilterValue, 114, 8, 0, // Skip to: 4873
/* 4865 */    MCD::OPC_CheckPredicate, 2, 20, 8, // Skip to: 6937
/* 4869 */    MCD::OPC_Decode, 249, 2, 34, // Opcode: FXNOR
/* 4873 */    MCD::OPC_FilterValue, 115, 8, 0, // Skip to: 4885
/* 4877 */    MCD::OPC_CheckPredicate, 2, 8, 8, // Skip to: 6937
/* 4881 */    MCD::OPC_Decode, 250, 2, 33, // Opcode: FXNORS
/* 4885 */    MCD::OPC_FilterValue, 116, 14, 0, // Skip to: 4903
/* 4889 */    MCD::OPC_CheckPredicate, 2, 252, 7, // Skip to: 6937
/* 4893 */    MCD::OPC_CheckField, 0, 5, 0, 246, 7, // Skip to: 6937
/* 4899 */    MCD::OPC_Decode, 236, 2, 59, // Opcode: FSRC1
/* 4903 */    MCD::OPC_FilterValue, 117, 14, 0, // Skip to: 4921
/* 4907 */    MCD::OPC_CheckPredicate, 2, 234, 7, // Skip to: 6937
/* 4911 */    MCD::OPC_CheckField, 0, 5, 0, 228, 7, // Skip to: 6937
/* 4917 */    MCD::OPC_Decode, 237, 2, 60, // Opcode: FSRC1S
/* 4921 */    MCD::OPC_FilterValue, 118, 8, 0, // Skip to: 4933
/* 4925 */    MCD::OPC_CheckPredicate, 2, 216, 7, // Skip to: 6937
/* 4929 */    MCD::OPC_Decode, 206, 2, 34, // Opcode: FORNOT2
/* 4933 */    MCD::OPC_FilterValue, 119, 8, 0, // Skip to: 4945
/* 4937 */    MCD::OPC_CheckPredicate, 2, 204, 7, // Skip to: 6937
/* 4941 */    MCD::OPC_Decode, 207, 2, 33, // Opcode: FORNOT2S
/* 4945 */    MCD::OPC_FilterValue, 120, 14, 0, // Skip to: 4963
/* 4949 */    MCD::OPC_CheckPredicate, 2, 192, 7, // Skip to: 6937
/* 4953 */    MCD::OPC_CheckField, 14, 5, 0, 186, 7, // Skip to: 6937
/* 4959 */    MCD::OPC_Decode, 238, 2, 31, // Opcode: FSRC2
/* 4963 */    MCD::OPC_FilterValue, 121, 14, 0, // Skip to: 4981
/* 4967 */    MCD::OPC_CheckPredicate, 2, 174, 7, // Skip to: 6937
/* 4971 */    MCD::OPC_CheckField, 14, 5, 0, 168, 7, // Skip to: 6937
/* 4977 */    MCD::OPC_Decode, 239, 2, 30, // Opcode: FSRC2S
/* 4981 */    MCD::OPC_FilterValue, 122, 8, 0, // Skip to: 4993
/* 4985 */    MCD::OPC_CheckPredicate, 2, 156, 7, // Skip to: 6937
/* 4989 */    MCD::OPC_Decode, 204, 2, 34, // Opcode: FORNOT1
/* 4993 */    MCD::OPC_FilterValue, 123, 8, 0, // Skip to: 5005
/* 4997 */    MCD::OPC_CheckPredicate, 2, 144, 7, // Skip to: 6937
/* 5001 */    MCD::OPC_Decode, 205, 2, 33, // Opcode: FORNOT1S
/* 5005 */    MCD::OPC_FilterValue, 124, 8, 0, // Skip to: 5017
/* 5009 */    MCD::OPC_CheckPredicate, 2, 132, 7, // Skip to: 6937
/* 5013 */    MCD::OPC_Decode, 203, 2, 34, // Opcode: FOR
/* 5017 */    MCD::OPC_FilterValue, 125, 8, 0, // Skip to: 5029
/* 5021 */    MCD::OPC_CheckPredicate, 2, 120, 7, // Skip to: 6937
/* 5025 */    MCD::OPC_Decode, 208, 2, 33, // Opcode: FORS
/* 5029 */    MCD::OPC_FilterValue, 126, 20, 0, // Skip to: 5053
/* 5033 */    MCD::OPC_CheckPredicate, 2, 108, 7, // Skip to: 6937
/* 5037 */    MCD::OPC_CheckField, 14, 5, 0, 102, 7, // Skip to: 6937
/* 5043 */    MCD::OPC_CheckField, 0, 5, 0, 96, 7, // Skip to: 6937
/* 5049 */    MCD::OPC_Decode, 201, 2, 57, // Opcode: FONE
/* 5053 */    MCD::OPC_FilterValue, 127, 20, 0, // Skip to: 5077
/* 5057 */    MCD::OPC_CheckPredicate, 2, 84, 7, // Skip to: 6937
/* 5061 */    MCD::OPC_CheckField, 14, 5, 0, 78, 7, // Skip to: 6937
/* 5067 */    MCD::OPC_CheckField, 0, 5, 0, 72, 7, // Skip to: 6937
/* 5073 */    MCD::OPC_Decode, 202, 2, 58, // Opcode: FONES
/* 5077 */    MCD::OPC_FilterValue, 128, 1, 26, 0, // Skip to: 5108
/* 5082 */    MCD::OPC_CheckPredicate, 2, 59, 7, // Skip to: 6937
/* 5086 */    MCD::OPC_CheckField, 25, 5, 0, 53, 7, // Skip to: 6937
/* 5092 */    MCD::OPC_CheckField, 14, 5, 0, 47, 7, // Skip to: 6937
/* 5098 */    MCD::OPC_CheckField, 0, 5, 0, 41, 7, // Skip to: 6937
/* 5104 */    MCD::OPC_Decode, 253, 3, 4, // Opcode: SHUTDOWN
/* 5108 */    MCD::OPC_FilterValue, 129, 1, 26, 0, // Skip to: 5139
/* 5113 */    MCD::OPC_CheckPredicate, 3, 28, 7, // Skip to: 6937
/* 5117 */    MCD::OPC_CheckField, 25, 5, 0, 22, 7, // Skip to: 6937
/* 5123 */    MCD::OPC_CheckField, 14, 5, 0, 16, 7, // Skip to: 6937
/* 5129 */    MCD::OPC_CheckField, 0, 5, 0, 10, 7, // Skip to: 6937
/* 5135 */    MCD::OPC_Decode, 254, 3, 4, // Opcode: SIAM
/* 5139 */    MCD::OPC_FilterValue, 144, 2, 14, 0, // Skip to: 5158
/* 5144 */    MCD::OPC_CheckPredicate, 1, 253, 6, // Skip to: 6937
/* 5148 */    MCD::OPC_CheckField, 14, 5, 0, 247, 6, // Skip to: 6937
/* 5154 */    MCD::OPC_Decode, 181, 3, 61, // Opcode: MOVDTOX
/* 5158 */    MCD::OPC_FilterValue, 145, 2, 14, 0, // Skip to: 5177
/* 5163 */    MCD::OPC_CheckPredicate, 1, 234, 6, // Skip to: 6937
/* 5167 */    MCD::OPC_CheckField, 14, 5, 0, 228, 6, // Skip to: 6937
/* 5173 */    MCD::OPC_Decode, 199, 3, 61, // Opcode: MOVSTOUW
/* 5177 */    MCD::OPC_FilterValue, 147, 2, 14, 0, // Skip to: 5196
/* 5182 */    MCD::OPC_CheckPredicate, 1, 215, 6, // Skip to: 6937
/* 5186 */    MCD::OPC_CheckField, 14, 5, 0, 209, 6, // Skip to: 6937
/* 5192 */    MCD::OPC_Decode, 198, 3, 61, // Opcode: MOVSTOSW
/* 5196 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 5209
/* 5201 */    MCD::OPC_CheckPredicate, 1, 196, 6, // Skip to: 6937
/* 5205 */    MCD::OPC_Decode, 252, 4, 10, // Opcode: XMULX
/* 5209 */    MCD::OPC_FilterValue, 151, 2, 8, 0, // Skip to: 5222
/* 5214 */    MCD::OPC_CheckPredicate, 1, 183, 6, // Skip to: 6937
/* 5218 */    MCD::OPC_Decode, 253, 4, 10, // Opcode: XMULXHI
/* 5222 */    MCD::OPC_FilterValue, 152, 2, 14, 0, // Skip to: 5241
/* 5227 */    MCD::OPC_CheckPredicate, 1, 170, 6, // Skip to: 6937
/* 5231 */    MCD::OPC_CheckField, 14, 5, 0, 164, 6, // Skip to: 6937
/* 5237 */    MCD::OPC_Decode, 203, 3, 62, // Opcode: MOVXTOD
/* 5241 */    MCD::OPC_FilterValue, 153, 2, 14, 0, // Skip to: 5260
/* 5246 */    MCD::OPC_CheckPredicate, 1, 151, 6, // Skip to: 6937
/* 5250 */    MCD::OPC_CheckField, 14, 5, 0, 145, 6, // Skip to: 6937
/* 5256 */    MCD::OPC_Decode, 200, 3, 62, // Opcode: MOVWTOS
/* 5260 */    MCD::OPC_FilterValue, 209, 2, 8, 0, // Skip to: 5273
/* 5265 */    MCD::OPC_CheckPredicate, 1, 132, 6, // Skip to: 6937
/* 5269 */    MCD::OPC_Decode, 137, 2, 52, // Opcode: FLCMPS
/* 5273 */    MCD::OPC_FilterValue, 210, 2, 123, 6, // Skip to: 6937
/* 5278 */    MCD::OPC_CheckPredicate, 1, 119, 6, // Skip to: 6937
/* 5282 */    MCD::OPC_Decode, 136, 2, 52, // Opcode: FLCMPD
/* 5286 */    MCD::OPC_FilterValue, 56, 25, 0, // Skip to: 5315
/* 5290 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5293 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5307
/* 5297 */    MCD::OPC_CheckField, 5, 8, 0, 98, 6, // Skip to: 6937
/* 5303 */    MCD::OPC_Decode, 132, 3, 63, // Opcode: JMPLrr
/* 5307 */    MCD::OPC_FilterValue, 1, 90, 6, // Skip to: 6937
/* 5311 */    MCD::OPC_Decode, 131, 3, 63, // Opcode: JMPLri
/* 5315 */    MCD::OPC_FilterValue, 57, 37, 0, // Skip to: 5356
/* 5319 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5322 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 5342
/* 5326 */    MCD::OPC_CheckField, 25, 5, 0, 69, 6, // Skip to: 6937
/* 5332 */    MCD::OPC_CheckField, 5, 8, 0, 63, 6, // Skip to: 6937
/* 5338 */    MCD::OPC_Decode, 233, 3, 64, // Opcode: RETTrr
/* 5342 */    MCD::OPC_FilterValue, 1, 55, 6, // Skip to: 6937
/* 5346 */    MCD::OPC_CheckField, 25, 5, 0, 49, 6, // Skip to: 6937
/* 5352 */    MCD::OPC_Decode, 232, 3, 64, // Opcode: RETTri
/* 5356 */    MCD::OPC_FilterValue, 58, 84, 0, // Skip to: 5444
/* 5360 */    MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 5363 */    MCD::OPC_FilterValue, 16, 16, 0, // Skip to: 5383
/* 5367 */    MCD::OPC_CheckField, 29, 1, 0, 28, 6, // Skip to: 6937
/* 5373 */    MCD::OPC_CheckField, 5, 3, 0, 22, 6, // Skip to: 6937
/* 5379 */    MCD::OPC_Decode, 216, 4, 65, // Opcode: TXCCrr
/* 5383 */    MCD::OPC_FilterValue, 32, 43, 0, // Skip to: 5430
/* 5387 */    MCD::OPC_ExtractField, 0, 8,  // Inst{7-0} ...
/* 5390 */    MCD::OPC_FilterValue, 3, 16, 0, // Skip to: 5410
/* 5394 */    MCD::OPC_CheckField, 25, 5, 0, 1, 6, // Skip to: 6937
/* 5400 */    MCD::OPC_CheckField, 14, 5, 1, 251, 5, // Skip to: 6937
/* 5406 */    MCD::OPC_Decode, 196, 4, 4, // Opcode: TA3
/* 5410 */    MCD::OPC_FilterValue, 5, 243, 5, // Skip to: 6937
/* 5414 */    MCD::OPC_CheckField, 25, 5, 8, 237, 5, // Skip to: 6937
/* 5420 */    MCD::OPC_CheckField, 14, 5, 0, 231, 5, // Skip to: 6937
/* 5426 */    MCD::OPC_Decode, 197, 4, 4, // Opcode: TA5
/* 5430 */    MCD::OPC_FilterValue, 48, 223, 5, // Skip to: 6937
/* 5434 */    MCD::OPC_CheckField, 29, 1, 0, 217, 5, // Skip to: 6937
/* 5440 */    MCD::OPC_Decode, 215, 4, 66, // Opcode: TXCCri
/* 5444 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 5503
/* 5448 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5451 */    MCD::OPC_FilterValue, 0, 34, 0, // Skip to: 5489
/* 5455 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 5458 */    MCD::OPC_FilterValue, 0, 195, 5, // Skip to: 6937
/* 5462 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 5465 */    MCD::OPC_FilterValue, 0, 188, 5, // Skip to: 6937
/* 5469 */    MCD::OPC_CheckField, 14, 5, 0, 10, 0, // Skip to: 5485
/* 5475 */    MCD::OPC_CheckField, 0, 5, 0, 4, 0, // Skip to: 5485
/* 5481 */    MCD::OPC_Decode, 138, 2, 4, // Opcode: FLUSH
/* 5485 */    MCD::OPC_Decode, 141, 2, 4, // Opcode: FLUSHrr
/* 5489 */    MCD::OPC_FilterValue, 1, 164, 5, // Skip to: 6937
/* 5493 */    MCD::OPC_CheckField, 25, 5, 0, 158, 5, // Skip to: 6937
/* 5499 */    MCD::OPC_Decode, 140, 2, 4, // Opcode: FLUSHri
/* 5503 */    MCD::OPC_FilterValue, 60, 25, 0, // Skip to: 5532
/* 5507 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5510 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5524
/* 5514 */    MCD::OPC_CheckField, 5, 8, 0, 137, 5, // Skip to: 6937
/* 5520 */    MCD::OPC_Decode, 235, 3, 8, // Opcode: SAVErr
/* 5524 */    MCD::OPC_FilterValue, 1, 129, 5, // Skip to: 6937
/* 5528 */    MCD::OPC_Decode, 234, 3, 9, // Opcode: SAVEri
/* 5532 */    MCD::OPC_FilterValue, 61, 25, 0, // Skip to: 5561
/* 5536 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5539 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5553
/* 5543 */    MCD::OPC_CheckField, 5, 8, 0, 108, 5, // Skip to: 6937
/* 5549 */    MCD::OPC_Decode, 229, 3, 8, // Opcode: RESTORErr
/* 5553 */    MCD::OPC_FilterValue, 1, 100, 5, // Skip to: 6937
/* 5557 */    MCD::OPC_Decode, 228, 3, 9, // Opcode: RESTOREri
/* 5561 */    MCD::OPC_FilterValue, 62, 25, 0, // Skip to: 5590
/* 5565 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5568 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5582
/* 5572 */    MCD::OPC_CheckField, 5, 8, 0, 79, 5, // Skip to: 6937
/* 5578 */    MCD::OPC_Decode, 224, 4, 8, // Opcode: UMACrr
/* 5582 */    MCD::OPC_FilterValue, 1, 71, 5, // Skip to: 6937
/* 5586 */    MCD::OPC_Decode, 223, 4, 9, // Opcode: UMACri
/* 5590 */    MCD::OPC_FilterValue, 63, 63, 5, // Skip to: 6937
/* 5594 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5597 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5611
/* 5601 */    MCD::OPC_CheckField, 5, 8, 0, 50, 5, // Skip to: 6937
/* 5607 */    MCD::OPC_Decode, 132, 4, 8, // Opcode: SMACrr
/* 5611 */    MCD::OPC_FilterValue, 1, 42, 5, // Skip to: 6937
/* 5615 */    MCD::OPC_Decode, 131, 4, 9, // Opcode: SMACri
/* 5619 */    MCD::OPC_FilterValue, 3, 34, 5, // Skip to: 6937
/* 5623 */    MCD::OPC_ExtractField, 19, 6,  // Inst{24-19} ...
/* 5626 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 5655
/* 5630 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5633 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5647
/* 5637 */    MCD::OPC_CheckField, 5, 8, 0, 14, 5, // Skip to: 6937
/* 5643 */    MCD::OPC_Decode, 176, 3, 67, // Opcode: LDrr
/* 5647 */    MCD::OPC_FilterValue, 1, 6, 5, // Skip to: 6937
/* 5651 */    MCD::OPC_Decode, 175, 3, 67, // Opcode: LDri
/* 5655 */    MCD::OPC_FilterValue, 1, 25, 0, // Skip to: 5684
/* 5659 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5662 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5676
/* 5666 */    MCD::OPC_CheckField, 5, 8, 0, 241, 4, // Skip to: 6937
/* 5672 */    MCD::OPC_Decode, 167, 3, 67, // Opcode: LDUBrr
/* 5676 */    MCD::OPC_FilterValue, 1, 233, 4, // Skip to: 6937
/* 5680 */    MCD::OPC_Decode, 166, 3, 67, // Opcode: LDUBri
/* 5684 */    MCD::OPC_FilterValue, 2, 25, 0, // Skip to: 5713
/* 5688 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5691 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5705
/* 5695 */    MCD::OPC_CheckField, 5, 8, 0, 212, 4, // Skip to: 6937
/* 5701 */    MCD::OPC_Decode, 170, 3, 67, // Opcode: LDUHrr
/* 5705 */    MCD::OPC_FilterValue, 1, 204, 4, // Skip to: 6937
/* 5709 */    MCD::OPC_Decode, 169, 3, 67, // Opcode: LDUHri
/* 5713 */    MCD::OPC_FilterValue, 3, 25, 0, // Skip to: 5742
/* 5717 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5720 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5734
/* 5724 */    MCD::OPC_CheckField, 5, 8, 0, 183, 4, // Skip to: 6937
/* 5730 */    MCD::OPC_Decode, 145, 3, 68, // Opcode: LDDrr
/* 5734 */    MCD::OPC_FilterValue, 1, 175, 4, // Skip to: 6937
/* 5738 */    MCD::OPC_Decode, 144, 3, 68, // Opcode: LDDri
/* 5742 */    MCD::OPC_FilterValue, 4, 25, 0, // Skip to: 5771
/* 5746 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5749 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5763
/* 5753 */    MCD::OPC_CheckField, 5, 8, 0, 154, 4, // Skip to: 6937
/* 5759 */    MCD::OPC_Decode, 182, 4, 69, // Opcode: STrr
/* 5763 */    MCD::OPC_FilterValue, 1, 146, 4, // Skip to: 6937
/* 5767 */    MCD::OPC_Decode, 181, 4, 69, // Opcode: STri
/* 5771 */    MCD::OPC_FilterValue, 5, 25, 0, // Skip to: 5800
/* 5775 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5778 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5792
/* 5782 */    MCD::OPC_CheckField, 5, 8, 0, 125, 4, // Skip to: 6937
/* 5788 */    MCD::OPC_Decode, 149, 4, 69, // Opcode: STBrr
/* 5792 */    MCD::OPC_FilterValue, 1, 117, 4, // Skip to: 6937
/* 5796 */    MCD::OPC_Decode, 148, 4, 69, // Opcode: STBri
/* 5800 */    MCD::OPC_FilterValue, 6, 25, 0, // Skip to: 5829
/* 5804 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5807 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5821
/* 5811 */    MCD::OPC_CheckField, 5, 8, 0, 96, 4, // Skip to: 6937
/* 5817 */    MCD::OPC_Decode, 173, 4, 69, // Opcode: STHrr
/* 5821 */    MCD::OPC_FilterValue, 1, 88, 4, // Skip to: 6937
/* 5825 */    MCD::OPC_Decode, 172, 4, 69, // Opcode: STHri
/* 5829 */    MCD::OPC_FilterValue, 7, 25, 0, // Skip to: 5858
/* 5833 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5836 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5850
/* 5840 */    MCD::OPC_CheckField, 5, 8, 0, 67, 4, // Skip to: 6937
/* 5846 */    MCD::OPC_Decode, 165, 4, 70, // Opcode: STDrr
/* 5850 */    MCD::OPC_FilterValue, 1, 59, 4, // Skip to: 6937
/* 5854 */    MCD::OPC_Decode, 164, 4, 70, // Opcode: STDri
/* 5858 */    MCD::OPC_FilterValue, 8, 25, 0, // Skip to: 5887
/* 5862 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5865 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5879
/* 5869 */    MCD::OPC_CheckField, 5, 8, 0, 38, 4, // Skip to: 6937
/* 5875 */    MCD::OPC_Decode, 164, 3, 67, // Opcode: LDSWrr
/* 5879 */    MCD::OPC_FilterValue, 1, 30, 4, // Skip to: 6937
/* 5883 */    MCD::OPC_Decode, 163, 3, 67, // Opcode: LDSWri
/* 5887 */    MCD::OPC_FilterValue, 9, 25, 0, // Skip to: 5916
/* 5891 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5894 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5908
/* 5898 */    MCD::OPC_CheckField, 5, 8, 0, 9, 4, // Skip to: 6937
/* 5904 */    MCD::OPC_Decode, 156, 3, 67, // Opcode: LDSBrr
/* 5908 */    MCD::OPC_FilterValue, 1, 1, 4, // Skip to: 6937
/* 5912 */    MCD::OPC_Decode, 155, 3, 67, // Opcode: LDSBri
/* 5916 */    MCD::OPC_FilterValue, 10, 25, 0, // Skip to: 5945
/* 5920 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5923 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5937
/* 5927 */    MCD::OPC_CheckField, 5, 8, 0, 236, 3, // Skip to: 6937
/* 5933 */    MCD::OPC_Decode, 159, 3, 67, // Opcode: LDSHrr
/* 5937 */    MCD::OPC_FilterValue, 1, 228, 3, // Skip to: 6937
/* 5941 */    MCD::OPC_Decode, 158, 3, 67, // Opcode: LDSHri
/* 5945 */    MCD::OPC_FilterValue, 11, 25, 0, // Skip to: 5974
/* 5949 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5952 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5966
/* 5956 */    MCD::OPC_CheckField, 5, 8, 0, 207, 3, // Skip to: 6937
/* 5962 */    MCD::OPC_Decode, 174, 3, 67, // Opcode: LDXrr
/* 5966 */    MCD::OPC_FilterValue, 1, 199, 3, // Skip to: 6937
/* 5970 */    MCD::OPC_Decode, 173, 3, 67, // Opcode: LDXri
/* 5974 */    MCD::OPC_FilterValue, 13, 25, 0, // Skip to: 6003
/* 5978 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 5981 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 5995
/* 5985 */    MCD::OPC_CheckField, 5, 8, 0, 178, 3, // Skip to: 6937
/* 5991 */    MCD::OPC_Decode, 162, 3, 4, // Opcode: LDSTUBrr
/* 5995 */    MCD::OPC_FilterValue, 1, 170, 3, // Skip to: 6937
/* 5999 */    MCD::OPC_Decode, 161, 3, 4, // Opcode: LDSTUBri
/* 6003 */    MCD::OPC_FilterValue, 14, 25, 0, // Skip to: 6032
/* 6007 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6010 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6024
/* 6014 */    MCD::OPC_CheckField, 5, 8, 0, 149, 3, // Skip to: 6937
/* 6020 */    MCD::OPC_Decode, 180, 4, 69, // Opcode: STXrr
/* 6024 */    MCD::OPC_FilterValue, 1, 141, 3, // Skip to: 6937
/* 6028 */    MCD::OPC_Decode, 179, 4, 69, // Opcode: STXri
/* 6032 */    MCD::OPC_FilterValue, 15, 25, 0, // Skip to: 6061
/* 6036 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6039 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6053
/* 6043 */    MCD::OPC_CheckField, 5, 8, 0, 120, 3, // Skip to: 6937
/* 6049 */    MCD::OPC_Decode, 195, 4, 71, // Opcode: SWAPrr
/* 6053 */    MCD::OPC_FilterValue, 1, 112, 3, // Skip to: 6937
/* 6057 */    MCD::OPC_Decode, 194, 4, 71, // Opcode: SWAPri
/* 6061 */    MCD::OPC_FilterValue, 16, 10, 0, // Skip to: 6075
/* 6065 */    MCD::OPC_CheckField, 13, 1, 0, 98, 3, // Skip to: 6937
/* 6071 */    MCD::OPC_Decode, 133, 3, 67, // Opcode: LDArr
/* 6075 */    MCD::OPC_FilterValue, 17, 10, 0, // Skip to: 6089
/* 6079 */    MCD::OPC_CheckField, 13, 1, 0, 84, 3, // Skip to: 6937
/* 6085 */    MCD::OPC_Decode, 165, 3, 67, // Opcode: LDUBArr
/* 6089 */    MCD::OPC_FilterValue, 18, 10, 0, // Skip to: 6103
/* 6093 */    MCD::OPC_CheckField, 13, 1, 0, 70, 3, // Skip to: 6937
/* 6099 */    MCD::OPC_Decode, 168, 3, 67, // Opcode: LDUHArr
/* 6103 */    MCD::OPC_FilterValue, 19, 10, 0, // Skip to: 6117
/* 6107 */    MCD::OPC_CheckField, 13, 1, 0, 56, 3, // Skip to: 6937
/* 6113 */    MCD::OPC_Decode, 138, 3, 68, // Opcode: LDDArr
/* 6117 */    MCD::OPC_FilterValue, 20, 10, 0, // Skip to: 6131
/* 6121 */    MCD::OPC_CheckField, 13, 1, 0, 42, 3, // Skip to: 6937
/* 6127 */    MCD::OPC_Decode, 145, 4, 69, // Opcode: STArr
/* 6131 */    MCD::OPC_FilterValue, 21, 10, 0, // Skip to: 6145
/* 6135 */    MCD::OPC_CheckField, 13, 1, 0, 28, 3, // Skip to: 6937
/* 6141 */    MCD::OPC_Decode, 147, 4, 69, // Opcode: STBArr
/* 6145 */    MCD::OPC_FilterValue, 22, 10, 0, // Skip to: 6159
/* 6149 */    MCD::OPC_CheckField, 13, 1, 0, 14, 3, // Skip to: 6937
/* 6155 */    MCD::OPC_Decode, 171, 4, 69, // Opcode: STHArr
/* 6159 */    MCD::OPC_FilterValue, 23, 10, 0, // Skip to: 6173
/* 6163 */    MCD::OPC_CheckField, 13, 1, 0, 0, 3, // Skip to: 6937
/* 6169 */    MCD::OPC_Decode, 154, 4, 70, // Opcode: STDArr
/* 6173 */    MCD::OPC_FilterValue, 25, 10, 0, // Skip to: 6187
/* 6177 */    MCD::OPC_CheckField, 13, 1, 0, 242, 2, // Skip to: 6937
/* 6183 */    MCD::OPC_Decode, 154, 3, 67, // Opcode: LDSBArr
/* 6187 */    MCD::OPC_FilterValue, 26, 10, 0, // Skip to: 6201
/* 6191 */    MCD::OPC_CheckField, 13, 1, 0, 228, 2, // Skip to: 6937
/* 6197 */    MCD::OPC_Decode, 157, 3, 67, // Opcode: LDSHArr
/* 6201 */    MCD::OPC_FilterValue, 29, 10, 0, // Skip to: 6215
/* 6205 */    MCD::OPC_CheckField, 13, 1, 0, 214, 2, // Skip to: 6937
/* 6211 */    MCD::OPC_Decode, 160, 3, 72, // Opcode: LDSTUBArr
/* 6215 */    MCD::OPC_FilterValue, 31, 10, 0, // Skip to: 6229
/* 6219 */    MCD::OPC_CheckField, 13, 1, 0, 200, 2, // Skip to: 6937
/* 6225 */    MCD::OPC_Decode, 193, 4, 71, // Opcode: SWAPArr
/* 6229 */    MCD::OPC_FilterValue, 32, 25, 0, // Skip to: 6258
/* 6233 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6236 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6250
/* 6240 */    MCD::OPC_CheckField, 5, 8, 0, 179, 2, // Skip to: 6937
/* 6246 */    MCD::OPC_Decode, 150, 3, 73, // Opcode: LDFrr
/* 6250 */    MCD::OPC_FilterValue, 1, 171, 2, // Skip to: 6937
/* 6254 */    MCD::OPC_Decode, 149, 3, 73, // Opcode: LDFri
/* 6258 */    MCD::OPC_FilterValue, 33, 69, 0, // Skip to: 6331
/* 6262 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6265 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6304
/* 6269 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6272 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6286
/* 6276 */    MCD::OPC_CheckField, 5, 8, 0, 143, 2, // Skip to: 6937
/* 6282 */    MCD::OPC_Decode, 148, 3, 73, // Opcode: LDFSRrr
/* 6286 */    MCD::OPC_FilterValue, 1, 135, 2, // Skip to: 6937
/* 6290 */    MCD::OPC_CheckPredicate, 0, 131, 2, // Skip to: 6937
/* 6294 */    MCD::OPC_CheckField, 5, 8, 0, 125, 2, // Skip to: 6937
/* 6300 */    MCD::OPC_Decode, 172, 3, 73, // Opcode: LDXFSRrr
/* 6304 */    MCD::OPC_FilterValue, 1, 117, 2, // Skip to: 6937
/* 6308 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6311 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6319
/* 6315 */    MCD::OPC_Decode, 147, 3, 73, // Opcode: LDFSRri
/* 6319 */    MCD::OPC_FilterValue, 1, 102, 2, // Skip to: 6937
/* 6323 */    MCD::OPC_CheckPredicate, 0, 98, 2, // Skip to: 6937
/* 6327 */    MCD::OPC_Decode, 171, 3, 73, // Opcode: LDXFSRri
/* 6331 */    MCD::OPC_FilterValue, 34, 33, 0, // Skip to: 6368
/* 6335 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6338 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 6356
/* 6342 */    MCD::OPC_CheckPredicate, 0, 79, 2, // Skip to: 6937
/* 6346 */    MCD::OPC_CheckField, 5, 8, 0, 73, 2, // Skip to: 6937
/* 6352 */    MCD::OPC_Decode, 153, 3, 74, // Opcode: LDQFrr
/* 6356 */    MCD::OPC_FilterValue, 1, 65, 2, // Skip to: 6937
/* 6360 */    MCD::OPC_CheckPredicate, 0, 61, 2, // Skip to: 6937
/* 6364 */    MCD::OPC_Decode, 152, 3, 74, // Opcode: LDQFri
/* 6368 */    MCD::OPC_FilterValue, 35, 25, 0, // Skip to: 6397
/* 6372 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6375 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6389
/* 6379 */    MCD::OPC_CheckField, 5, 8, 0, 40, 2, // Skip to: 6937
/* 6385 */    MCD::OPC_Decode, 143, 3, 75, // Opcode: LDDFrr
/* 6389 */    MCD::OPC_FilterValue, 1, 32, 2, // Skip to: 6937
/* 6393 */    MCD::OPC_Decode, 142, 3, 75, // Opcode: LDDFri
/* 6397 */    MCD::OPC_FilterValue, 36, 25, 0, // Skip to: 6426
/* 6401 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6404 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6418
/* 6408 */    MCD::OPC_CheckField, 5, 8, 0, 11, 2, // Skip to: 6937
/* 6414 */    MCD::OPC_Decode, 170, 4, 76, // Opcode: STFrr
/* 6418 */    MCD::OPC_FilterValue, 1, 3, 2, // Skip to: 6937
/* 6422 */    MCD::OPC_Decode, 169, 4, 76, // Opcode: STFri
/* 6426 */    MCD::OPC_FilterValue, 37, 69, 0, // Skip to: 6499
/* 6430 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6433 */    MCD::OPC_FilterValue, 0, 35, 0, // Skip to: 6472
/* 6437 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6440 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6454
/* 6444 */    MCD::OPC_CheckField, 5, 8, 0, 231, 1, // Skip to: 6937
/* 6450 */    MCD::OPC_Decode, 168, 4, 76, // Opcode: STFSRrr
/* 6454 */    MCD::OPC_FilterValue, 1, 223, 1, // Skip to: 6937
/* 6458 */    MCD::OPC_CheckPredicate, 0, 219, 1, // Skip to: 6937
/* 6462 */    MCD::OPC_CheckField, 5, 8, 0, 213, 1, // Skip to: 6937
/* 6468 */    MCD::OPC_Decode, 178, 4, 76, // Opcode: STXFSRrr
/* 6472 */    MCD::OPC_FilterValue, 1, 205, 1, // Skip to: 6937
/* 6476 */    MCD::OPC_ExtractField, 25, 5,  // Inst{29-25} ...
/* 6479 */    MCD::OPC_FilterValue, 0, 4, 0, // Skip to: 6487
/* 6483 */    MCD::OPC_Decode, 167, 4, 76, // Opcode: STFSRri
/* 6487 */    MCD::OPC_FilterValue, 1, 190, 1, // Skip to: 6937
/* 6491 */    MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 6937
/* 6495 */    MCD::OPC_Decode, 177, 4, 76, // Opcode: STXFSRri
/* 6499 */    MCD::OPC_FilterValue, 38, 54, 0, // Skip to: 6557
/* 6503 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6506 */    MCD::OPC_FilterValue, 0, 25, 0, // Skip to: 6535
/* 6510 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6513 */    MCD::OPC_FilterValue, 0, 164, 1, // Skip to: 6937
/* 6517 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6527
/* 6523 */    MCD::OPC_Decode, 161, 4, 76, // Opcode: STDFQrr
/* 6527 */    MCD::OPC_CheckPredicate, 0, 150, 1, // Skip to: 6937
/* 6531 */    MCD::OPC_Decode, 176, 4, 77, // Opcode: STQFrr
/* 6535 */    MCD::OPC_FilterValue, 1, 142, 1, // Skip to: 6937
/* 6539 */    MCD::OPC_CheckField, 25, 5, 0, 4, 0, // Skip to: 6549
/* 6545 */    MCD::OPC_Decode, 160, 4, 76, // Opcode: STDFQri
/* 6549 */    MCD::OPC_CheckPredicate, 0, 128, 1, // Skip to: 6937
/* 6553 */    MCD::OPC_Decode, 175, 4, 77, // Opcode: STQFri
/* 6557 */    MCD::OPC_FilterValue, 39, 25, 0, // Skip to: 6586
/* 6561 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6564 */    MCD::OPC_FilterValue, 0, 10, 0, // Skip to: 6578
/* 6568 */    MCD::OPC_CheckField, 5, 8, 0, 107, 1, // Skip to: 6937
/* 6574 */    MCD::OPC_Decode, 163, 4, 78, // Opcode: STDFrr
/* 6578 */    MCD::OPC_FilterValue, 1, 99, 1, // Skip to: 6937
/* 6582 */    MCD::OPC_Decode, 162, 4, 78, // Opcode: STDFri
/* 6586 */    MCD::OPC_FilterValue, 48, 33, 0, // Skip to: 6623
/* 6590 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6593 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6615
/* 6597 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6607
/* 6603 */    MCD::OPC_Decode, 137, 3, 79, // Opcode: LDCrr
/* 6607 */    MCD::OPC_CheckPredicate, 0, 70, 1, // Skip to: 6937
/* 6611 */    MCD::OPC_Decode, 146, 3, 73, // Opcode: LDFArr
/* 6615 */    MCD::OPC_FilterValue, 1, 62, 1, // Skip to: 6937
/* 6619 */    MCD::OPC_Decode, 136, 3, 79, // Opcode: LDCri
/* 6623 */    MCD::OPC_FilterValue, 49, 37, 0, // Skip to: 6664
/* 6627 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6630 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6650
/* 6634 */    MCD::OPC_CheckField, 25, 5, 0, 41, 1, // Skip to: 6937
/* 6640 */    MCD::OPC_CheckField, 5, 8, 0, 35, 1, // Skip to: 6937
/* 6646 */    MCD::OPC_Decode, 135, 3, 79, // Opcode: LDCSRrr
/* 6650 */    MCD::OPC_FilterValue, 1, 27, 1, // Skip to: 6937
/* 6654 */    MCD::OPC_CheckField, 25, 5, 0, 21, 1, // Skip to: 6937
/* 6660 */    MCD::OPC_Decode, 134, 3, 79, // Opcode: LDCSRri
/* 6664 */    MCD::OPC_FilterValue, 50, 14, 0, // Skip to: 6682
/* 6668 */    MCD::OPC_CheckPredicate, 0, 9, 1, // Skip to: 6937
/* 6672 */    MCD::OPC_CheckField, 13, 1, 0, 3, 1, // Skip to: 6937
/* 6678 */    MCD::OPC_Decode, 151, 3, 74, // Opcode: LDQFArr
/* 6682 */    MCD::OPC_FilterValue, 51, 33, 0, // Skip to: 6719
/* 6686 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6689 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6711
/* 6693 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6703
/* 6699 */    MCD::OPC_Decode, 140, 3, 80, // Opcode: LDDCrr
/* 6703 */    MCD::OPC_CheckPredicate, 0, 230, 0, // Skip to: 6937
/* 6707 */    MCD::OPC_Decode, 141, 3, 75, // Opcode: LDDFArr
/* 6711 */    MCD::OPC_FilterValue, 1, 222, 0, // Skip to: 6937
/* 6715 */    MCD::OPC_Decode, 139, 3, 80, // Opcode: LDDCri
/* 6719 */    MCD::OPC_FilterValue, 52, 33, 0, // Skip to: 6756
/* 6723 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6726 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6748
/* 6730 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6740
/* 6736 */    MCD::OPC_Decode, 153, 4, 81, // Opcode: STCrr
/* 6740 */    MCD::OPC_CheckPredicate, 0, 193, 0, // Skip to: 6937
/* 6744 */    MCD::OPC_Decode, 166, 4, 76, // Opcode: STFArr
/* 6748 */    MCD::OPC_FilterValue, 1, 185, 0, // Skip to: 6937
/* 6752 */    MCD::OPC_Decode, 152, 4, 81, // Opcode: STCri
/* 6756 */    MCD::OPC_FilterValue, 53, 37, 0, // Skip to: 6797
/* 6760 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6763 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 6783
/* 6767 */    MCD::OPC_CheckField, 25, 5, 0, 164, 0, // Skip to: 6937
/* 6773 */    MCD::OPC_CheckField, 5, 8, 0, 158, 0, // Skip to: 6937
/* 6779 */    MCD::OPC_Decode, 151, 4, 81, // Opcode: STCSRrr
/* 6783 */    MCD::OPC_FilterValue, 1, 150, 0, // Skip to: 6937
/* 6787 */    MCD::OPC_CheckField, 25, 5, 0, 144, 0, // Skip to: 6937
/* 6793 */    MCD::OPC_Decode, 150, 4, 81, // Opcode: STCSRri
/* 6797 */    MCD::OPC_FilterValue, 54, 45, 0, // Skip to: 6846
/* 6801 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6804 */    MCD::OPC_FilterValue, 0, 24, 0, // Skip to: 6832
/* 6808 */    MCD::OPC_CheckField, 25, 5, 0, 10, 0, // Skip to: 6824
/* 6814 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6824
/* 6820 */    MCD::OPC_Decode, 156, 4, 81, // Opcode: STDCQrr
/* 6824 */    MCD::OPC_CheckPredicate, 0, 109, 0, // Skip to: 6937
/* 6828 */    MCD::OPC_Decode, 174, 4, 77, // Opcode: STQFArr
/* 6832 */    MCD::OPC_FilterValue, 1, 101, 0, // Skip to: 6937
/* 6836 */    MCD::OPC_CheckField, 25, 5, 0, 95, 0, // Skip to: 6937
/* 6842 */    MCD::OPC_Decode, 155, 4, 81, // Opcode: STDCQri
/* 6846 */    MCD::OPC_FilterValue, 55, 33, 0, // Skip to: 6883
/* 6850 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6853 */    MCD::OPC_FilterValue, 0, 18, 0, // Skip to: 6875
/* 6857 */    MCD::OPC_CheckField, 5, 8, 0, 4, 0, // Skip to: 6867
/* 6863 */    MCD::OPC_Decode, 158, 4, 82, // Opcode: STDCrr
/* 6867 */    MCD::OPC_CheckPredicate, 0, 66, 0, // Skip to: 6937
/* 6871 */    MCD::OPC_Decode, 159, 4, 78, // Opcode: STDFArr
/* 6875 */    MCD::OPC_FilterValue, 1, 58, 0, // Skip to: 6937
/* 6879 */    MCD::OPC_Decode, 157, 4, 82, // Opcode: STDCri
/* 6883 */    MCD::OPC_FilterValue, 60, 35, 0, // Skip to: 6922
/* 6887 */    MCD::OPC_ExtractField, 13, 1,  // Inst{13} ...
/* 6890 */    MCD::OPC_FilterValue, 0, 43, 0, // Skip to: 6937
/* 6894 */    MCD::OPC_ExtractField, 5, 8,  // Inst{12-5} ...
/* 6897 */    MCD::OPC_FilterValue, 10, 4, 0, // Skip to: 6905
/* 6901 */    MCD::OPC_Decode, 194, 1, 83, // Opcode: CASAasi10
/* 6905 */    MCD::OPC_FilterValue, 128, 1, 8, 0, // Skip to: 6918
/* 6910 */    MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 6918
/* 6914 */    MCD::OPC_Decode, 197, 1, 83, // Opcode: CASrr
/* 6918 */    MCD::OPC_Decode, 195, 1, 84, // Opcode: CASArr
/* 6922 */    MCD::OPC_FilterValue, 62, 11, 0, // Skip to: 6937
/* 6926 */    MCD::OPC_CheckField, 5, 9, 128, 1, 4, 0, // Skip to: 6937
/* 6933 */    MCD::OPC_Decode, 196, 1, 85, // Opcode: CASXrr
/* 6937 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV832[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 29
/* 7 */       MCD::OPC_CheckField, 29, 3, 4, 36, 0, // Skip to: 49
/* 13 */      MCD::OPC_CheckField, 19, 6, 58, 30, 0, // Skip to: 49
/* 19 */      MCD::OPC_CheckField, 5, 3, 0, 24, 0, // Skip to: 49
/* 25 */      MCD::OPC_Decode, 210, 4, 86, // Opcode: TRAPrr
/* 29 */      MCD::OPC_FilterValue, 32, 16, 0, // Skip to: 49
/* 33 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 49
/* 39 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 49
/* 45 */      MCD::OPC_Decode, 209, 4, 86, // Opcode: TRAPri
/* 49 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableSparcV932[] = {
/* 0 */       MCD::OPC_ExtractField, 8, 6,  // Inst{13-8} ...
/* 3 */       MCD::OPC_FilterValue, 0, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_CheckPredicate, 0, 46, 0, // Skip to: 57
/* 11 */      MCD::OPC_CheckField, 29, 3, 4, 40, 0, // Skip to: 57
/* 17 */      MCD::OPC_CheckField, 19, 6, 58, 34, 0, // Skip to: 57
/* 23 */      MCD::OPC_CheckField, 5, 3, 0, 28, 0, // Skip to: 57
/* 29 */      MCD::OPC_Decode, 203, 4, 86, // Opcode: TICCrr
/* 33 */      MCD::OPC_FilterValue, 32, 20, 0, // Skip to: 57
/* 37 */      MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 57
/* 41 */      MCD::OPC_CheckField, 29, 3, 4, 10, 0, // Skip to: 57
/* 47 */      MCD::OPC_CheckField, 19, 6, 58, 4, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 202, 4, 86, // Opcode: TICCri
/* 57 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Sparc::FeatureV9]);
  case 1:
    return (Bits[Sparc::FeatureVIS3]);
  case 2:
    return (Bits[Sparc::FeatureVIS]);
  case 3:
    return (Bits[Sparc::FeatureVIS2]);
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
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 14) << 0;
    tmp |= fieldFromInstruction(insn, 20, 2) << 14;
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 4:
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 22);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 0, 19);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 20, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 0, 30);
    if (DecodeCall(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 11);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 26:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeASRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodePRRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 13);
    if (DecodeSIMM13(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFCCRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeQFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeDFPRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    if (DecodeJMPL(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    if (DecodeReturn(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 25, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    if (DecodeLoadInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    if (DecodeLoadIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    if (DecodeStoreInt(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 70:
    if (DecodeStoreIntPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 71:
    if (DecodeSWAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    if (DecodeLoadFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    if (DecodeLoadQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    if (DecodeLoadDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    if (DecodeStoreFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    if (DecodeStoreQFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    if (DecodeStoreDFP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 79:
    if (DecodeLoadCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    if (DecodeLoadCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 81:
    if (DecodeStoreCP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    if (DecodeStoreCPPair(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeIntRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 25, 5);
    if (DecodeI64RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    if (DecodeTRAP(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
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
