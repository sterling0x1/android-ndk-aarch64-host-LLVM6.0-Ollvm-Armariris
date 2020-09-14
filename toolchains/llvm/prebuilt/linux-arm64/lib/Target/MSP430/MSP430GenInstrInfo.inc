/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace MSP430 {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    ANNOTATION_LABEL	= 5,
    KILL	= 6,
    EXTRACT_SUBREG	= 7,
    INSERT_SUBREG	= 8,
    IMPLICIT_DEF	= 9,
    SUBREG_TO_REG	= 10,
    COPY_TO_REGCLASS	= 11,
    DBG_VALUE	= 12,
    REG_SEQUENCE	= 13,
    COPY	= 14,
    BUNDLE	= 15,
    LIFETIME_START	= 16,
    LIFETIME_END	= 17,
    STACKMAP	= 18,
    FENTRY_CALL	= 19,
    PATCHPOINT	= 20,
    LOAD_STACK_GUARD	= 21,
    STATEPOINT	= 22,
    LOCAL_ESCAPE	= 23,
    FAULTING_OP	= 24,
    PATCHABLE_OP	= 25,
    PATCHABLE_FUNCTION_ENTER	= 26,
    PATCHABLE_RET	= 27,
    PATCHABLE_FUNCTION_EXIT	= 28,
    PATCHABLE_TAIL_CALL	= 29,
    PATCHABLE_EVENT_CALL	= 30,
    G_ADD	= 31,
    G_SUB	= 32,
    G_MUL	= 33,
    G_SDIV	= 34,
    G_UDIV	= 35,
    G_SREM	= 36,
    G_UREM	= 37,
    G_AND	= 38,
    G_OR	= 39,
    G_XOR	= 40,
    G_IMPLICIT_DEF	= 41,
    G_PHI	= 42,
    G_FRAME_INDEX	= 43,
    G_GLOBAL_VALUE	= 44,
    G_EXTRACT	= 45,
    G_UNMERGE_VALUES	= 46,
    G_INSERT	= 47,
    G_MERGE_VALUES	= 48,
    G_PTRTOINT	= 49,
    G_INTTOPTR	= 50,
    G_BITCAST	= 51,
    G_LOAD	= 52,
    G_STORE	= 53,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 54,
    G_ATOMIC_CMPXCHG	= 55,
    G_ATOMICRMW_XCHG	= 56,
    G_ATOMICRMW_ADD	= 57,
    G_ATOMICRMW_SUB	= 58,
    G_ATOMICRMW_AND	= 59,
    G_ATOMICRMW_NAND	= 60,
    G_ATOMICRMW_OR	= 61,
    G_ATOMICRMW_XOR	= 62,
    G_ATOMICRMW_MAX	= 63,
    G_ATOMICRMW_MIN	= 64,
    G_ATOMICRMW_UMAX	= 65,
    G_ATOMICRMW_UMIN	= 66,
    G_BRCOND	= 67,
    G_BRINDIRECT	= 68,
    G_INTRINSIC	= 69,
    G_INTRINSIC_W_SIDE_EFFECTS	= 70,
    G_ANYEXT	= 71,
    G_TRUNC	= 72,
    G_CONSTANT	= 73,
    G_FCONSTANT	= 74,
    G_VASTART	= 75,
    G_VAARG	= 76,
    G_SEXT	= 77,
    G_ZEXT	= 78,
    G_SHL	= 79,
    G_LSHR	= 80,
    G_ASHR	= 81,
    G_ICMP	= 82,
    G_FCMP	= 83,
    G_SELECT	= 84,
    G_UADDE	= 85,
    G_USUBE	= 86,
    G_SADDO	= 87,
    G_SSUBO	= 88,
    G_UMULO	= 89,
    G_SMULO	= 90,
    G_UMULH	= 91,
    G_SMULH	= 92,
    G_FADD	= 93,
    G_FSUB	= 94,
    G_FMUL	= 95,
    G_FMA	= 96,
    G_FDIV	= 97,
    G_FREM	= 98,
    G_FPOW	= 99,
    G_FEXP	= 100,
    G_FEXP2	= 101,
    G_FLOG	= 102,
    G_FLOG2	= 103,
    G_FNEG	= 104,
    G_FPEXT	= 105,
    G_FPTRUNC	= 106,
    G_FPTOSI	= 107,
    G_FPTOUI	= 108,
    G_SITOFP	= 109,
    G_UITOFP	= 110,
    G_GEP	= 111,
    G_PTR_MASK	= 112,
    G_BR	= 113,
    G_INSERT_VECTOR_ELT	= 114,
    G_EXTRACT_VECTOR_ELT	= 115,
    G_SHUFFLE_VECTOR	= 116,
    G_BSWAP	= 117,
    ADC16mi	= 118,
    ADC16mm	= 119,
    ADC16mr	= 120,
    ADC16ri	= 121,
    ADC16rm	= 122,
    ADC16rr	= 123,
    ADC8mi	= 124,
    ADC8mm	= 125,
    ADC8mr	= 126,
    ADC8ri	= 127,
    ADC8rm	= 128,
    ADC8rr	= 129,
    ADD16mi	= 130,
    ADD16mm	= 131,
    ADD16mr	= 132,
    ADD16ri	= 133,
    ADD16rm	= 134,
    ADD16rm_POST	= 135,
    ADD16rr	= 136,
    ADD8mi	= 137,
    ADD8mm	= 138,
    ADD8mr	= 139,
    ADD8ri	= 140,
    ADD8rm	= 141,
    ADD8rm_POST	= 142,
    ADD8rr	= 143,
    ADDframe	= 144,
    ADJCALLSTACKDOWN	= 145,
    ADJCALLSTACKUP	= 146,
    AND16mi	= 147,
    AND16mm	= 148,
    AND16mr	= 149,
    AND16ri	= 150,
    AND16rm	= 151,
    AND16rm_POST	= 152,
    AND16rr	= 153,
    AND8mi	= 154,
    AND8mm	= 155,
    AND8mr	= 156,
    AND8ri	= 157,
    AND8rm	= 158,
    AND8rm_POST	= 159,
    AND8rr	= 160,
    BIC16mm	= 161,
    BIC16mr	= 162,
    BIC16rm	= 163,
    BIC16rr	= 164,
    BIC8mm	= 165,
    BIC8mr	= 166,
    BIC8rm	= 167,
    BIC8rr	= 168,
    BIT16mi	= 169,
    BIT16mm	= 170,
    BIT16mr	= 171,
    BIT16ri	= 172,
    BIT16rm	= 173,
    BIT16rr	= 174,
    BIT8mi	= 175,
    BIT8mm	= 176,
    BIT8mr	= 177,
    BIT8ri	= 178,
    BIT8rm	= 179,
    BIT8rr	= 180,
    Bi	= 181,
    Bm	= 182,
    Br	= 183,
    CALLi	= 184,
    CALLm	= 185,
    CALLr	= 186,
    CMP16mi	= 187,
    CMP16mr	= 188,
    CMP16ri	= 189,
    CMP16rm	= 190,
    CMP16rr	= 191,
    CMP8mi	= 192,
    CMP8mr	= 193,
    CMP8ri	= 194,
    CMP8rm	= 195,
    CMP8rr	= 196,
    JCC	= 197,
    JMP	= 198,
    MOV16mi	= 199,
    MOV16mm	= 200,
    MOV16mr	= 201,
    MOV16ri	= 202,
    MOV16rm	= 203,
    MOV16rm_POST	= 204,
    MOV16rr	= 205,
    MOV8mi	= 206,
    MOV8mm	= 207,
    MOV8mr	= 208,
    MOV8ri	= 209,
    MOV8rm	= 210,
    MOV8rm_POST	= 211,
    MOV8rr	= 212,
    MOVZX16rm8	= 213,
    MOVZX16rr8	= 214,
    NOP	= 215,
    OR16mi	= 216,
    OR16mm	= 217,
    OR16mr	= 218,
    OR16ri	= 219,
    OR16rm	= 220,
    OR16rm_POST	= 221,
    OR16rr	= 222,
    OR8mi	= 223,
    OR8mm	= 224,
    OR8mr	= 225,
    OR8ri	= 226,
    OR8rm	= 227,
    OR8rm_POST	= 228,
    OR8rr	= 229,
    POP16r	= 230,
    PUSH16r	= 231,
    RET	= 232,
    RETI	= 233,
    SAR16r1	= 234,
    SAR16r1c	= 235,
    SAR8r1	= 236,
    SAR8r1c	= 237,
    SBC16mi	= 238,
    SBC16mm	= 239,
    SBC16mr	= 240,
    SBC16ri	= 241,
    SBC16rm	= 242,
    SBC16rr	= 243,
    SBC8mi	= 244,
    SBC8mm	= 245,
    SBC8mr	= 246,
    SBC8ri	= 247,
    SBC8rm	= 248,
    SBC8rr	= 249,
    SEXT16r	= 250,
    SHL16r1	= 251,
    SHL8r1	= 252,
    SUB16mi	= 253,
    SUB16mm	= 254,
    SUB16mr	= 255,
    SUB16ri	= 256,
    SUB16rm	= 257,
    SUB16rm_POST	= 258,
    SUB16rr	= 259,
    SUB8mi	= 260,
    SUB8mm	= 261,
    SUB8mr	= 262,
    SUB8ri	= 263,
    SUB8rm	= 264,
    SUB8rm_POST	= 265,
    SUB8rr	= 266,
    SWPB16r	= 267,
    Select16	= 268,
    Select8	= 269,
    Shl16	= 270,
    Shl8	= 271,
    Sra16	= 272,
    Sra8	= 273,
    Srl16	= 274,
    Srl8	= 275,
    XOR16mi	= 276,
    XOR16mm	= 277,
    XOR16mr	= 278,
    XOR16ri	= 279,
    XOR16rm	= 280,
    XOR16rm_POST	= 281,
    XOR16rr	= 282,
    XOR8mi	= 283,
    XOR8mm	= 284,
    XOR8mr	= 285,
    XOR8ri	= 286,
    XOR8rm	= 287,
    XOR8rm_POST	= 288,
    XOR8rr	= 289,
    ZEXT16r	= 290,
    INSTRUCTION_LIST_END = 291
  };

} // end MSP430 namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace MSP430 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // end Sched namespace
} // end MSP430 namespace
} // end llvm namespace
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { MSP430::SR, 0 };
static const MCPhysReg ImplicitList2[] = { MSP430::SP, 0 };
static const MCPhysReg ImplicitList3[] = { MSP430::SP, MSP430::SR, 0 };
static const MCPhysReg ImplicitList4[] = { MSP430::R11, MSP430::R12, MSP430::R13, MSP430::R14, MSP430::R15, MSP430::SR, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo41[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo42[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo52[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo53[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo55[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo56[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { MSP430::GR8RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc MSP430Insts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #5 = ANNOTATION_LABEL
  { 6,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #6 = KILL
  { 7,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #7 = EXTRACT_SUBREG
  { 8,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #8 = INSERT_SUBREG
  { 9,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #9 = IMPLICIT_DEF
  { 10,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #10 = SUBREG_TO_REG
  { 11,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #11 = COPY_TO_REGCLASS
  { 12,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #12 = DBG_VALUE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = REG_SEQUENCE
  { 14,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #14 = COPY
  { 15,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #15 = BUNDLE
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #16 = LIFETIME_START
  { 17,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #17 = LIFETIME_END
  { 18,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #18 = STACKMAP
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #19 = FENTRY_CALL
  { 20,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #20 = PATCHPOINT
  { 21,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #21 = LOAD_STACK_GUARD
  { 22,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #22 = STATEPOINT
  { 23,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #23 = LOCAL_ESCAPE
  { 24,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #24 = FAULTING_OP
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #25 = PATCHABLE_OP
  { 26,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #26 = PATCHABLE_FUNCTION_ENTER
  { 27,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #27 = PATCHABLE_RET
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #28 = PATCHABLE_FUNCTION_EXIT
  { 29,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #29 = PATCHABLE_TAIL_CALL
  { 30,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #30 = PATCHABLE_EVENT_CALL
  { 31,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #31 = G_ADD
  { 32,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = G_SUB
  { 33,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = G_MUL
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #34 = G_SDIV
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #35 = G_UDIV
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #36 = G_SREM
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #37 = G_UREM
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #38 = G_AND
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #39 = G_OR
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #40 = G_XOR
  { 41,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #41 = G_IMPLICIT_DEF
  { 42,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #42 = G_PHI
  { 43,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #43 = G_FRAME_INDEX
  { 44,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #44 = G_GLOBAL_VALUE
  { 45,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #45 = G_EXTRACT
  { 46,	2,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #46 = G_UNMERGE_VALUES
  { 47,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #47 = G_INSERT
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #48 = G_MERGE_VALUES
  { 49,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #49 = G_PTRTOINT
  { 50,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #50 = G_INTTOPTR
  { 51,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #51 = G_BITCAST
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #52 = G_LOAD
  { 53,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #53 = G_STORE
  { 54,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #54 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 55,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #55 = G_ATOMIC_CMPXCHG
  { 56,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #56 = G_ATOMICRMW_XCHG
  { 57,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #57 = G_ATOMICRMW_ADD
  { 58,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #58 = G_ATOMICRMW_SUB
  { 59,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #59 = G_ATOMICRMW_AND
  { 60,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #60 = G_ATOMICRMW_NAND
  { 61,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #61 = G_ATOMICRMW_OR
  { 62,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #62 = G_ATOMICRMW_XOR
  { 63,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #63 = G_ATOMICRMW_MAX
  { 64,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #64 = G_ATOMICRMW_MIN
  { 65,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #65 = G_ATOMICRMW_UMAX
  { 66,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #66 = G_ATOMICRMW_UMIN
  { 67,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #67 = G_BRCOND
  { 68,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #68 = G_BRINDIRECT
  { 69,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #69 = G_INTRINSIC
  { 70,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #70 = G_INTRINSIC_W_SIDE_EFFECTS
  { 71,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #71 = G_ANYEXT
  { 72,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #72 = G_TRUNC
  { 73,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #73 = G_CONSTANT
  { 74,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #74 = G_FCONSTANT
  { 75,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #75 = G_VASTART
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #76 = G_VAARG
  { 77,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #77 = G_SEXT
  { 78,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #78 = G_ZEXT
  { 79,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #79 = G_SHL
  { 80,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #80 = G_LSHR
  { 81,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #81 = G_ASHR
  { 82,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #82 = G_ICMP
  { 83,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #83 = G_FCMP
  { 84,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #84 = G_SELECT
  { 85,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #85 = G_UADDE
  { 86,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #86 = G_USUBE
  { 87,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #87 = G_SADDO
  { 88,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #88 = G_SSUBO
  { 89,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #89 = G_UMULO
  { 90,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #90 = G_SMULO
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #91 = G_UMULH
  { 92,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #92 = G_SMULH
  { 93,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #93 = G_FADD
  { 94,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #94 = G_FSUB
  { 95,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #95 = G_FMUL
  { 96,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #96 = G_FMA
  { 97,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #97 = G_FDIV
  { 98,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #98 = G_FREM
  { 99,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #99 = G_FPOW
  { 100,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #100 = G_FEXP
  { 101,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #101 = G_FEXP2
  { 102,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #102 = G_FLOG
  { 103,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #103 = G_FLOG2
  { 104,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #104 = G_FNEG
  { 105,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #105 = G_FPEXT
  { 106,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #106 = G_FPTRUNC
  { 107,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #107 = G_FPTOSI
  { 108,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #108 = G_FPTOUI
  { 109,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #109 = G_SITOFP
  { 110,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #110 = G_UITOFP
  { 111,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #111 = G_GEP
  { 112,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #112 = G_PTR_MASK
  { 113,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #113 = G_BR
  { 114,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #114 = G_INSERT_VECTOR_ELT
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #115 = G_EXTRACT_VECTOR_ELT
  { 116,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #116 = G_SHUFFLE_VECTOR
  { 117,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #117 = G_BSWAP
  { 118,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #118 = ADC16mi
  { 119,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #119 = ADC16mm
  { 120,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #120 = ADC16mr
  { 121,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #121 = ADC16ri
  { 122,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #122 = ADC16rm
  { 123,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #123 = ADC16rr
  { 124,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #124 = ADC8mi
  { 125,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #125 = ADC8mm
  { 126,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #126 = ADC8mr
  { 127,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #127 = ADC8ri
  { 128,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #128 = ADC8rm
  { 129,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, ImplicitList1, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #129 = ADC8rr
  { 130,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #130 = ADD16mi
  { 131,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #131 = ADD16mm
  { 132,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #132 = ADD16mr
  { 133,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #133 = ADD16ri
  { 134,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #134 = ADD16rm
  { 135,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #135 = ADD16rm_POST
  { 136,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #136 = ADD16rr
  { 137,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #137 = ADD8mi
  { 138,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #138 = ADD8mm
  { 139,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #139 = ADD8mr
  { 140,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #140 = ADD8ri
  { 141,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #141 = ADD8rm
  { 142,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #142 = ADD8rm_POST
  { 143,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #143 = ADD8rr
  { 144,	3,	1,	0,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, ImplicitList2, ImplicitList1, OperandInfo42, -1 ,nullptr },  // Inst #144 = ADDframe
  { 145,	2,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #145 = ADJCALLSTACKDOWN
  { 146,	2,	0,	0,	0,	0, 0x4ULL, ImplicitList2, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #146 = ADJCALLSTACKUP
  { 147,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #147 = AND16mi
  { 148,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #148 = AND16mm
  { 149,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #149 = AND16mr
  { 150,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #150 = AND16ri
  { 151,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #151 = AND16rm
  { 152,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #152 = AND16rm_POST
  { 153,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #153 = AND16rr
  { 154,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #154 = AND8mi
  { 155,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #155 = AND8mm
  { 156,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #156 = AND8mr
  { 157,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #157 = AND8ri
  { 158,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #158 = AND8rm
  { 159,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #159 = AND8rm_POST
  { 160,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #160 = AND8rr
  { 161,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #161 = BIC16mm
  { 162,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #162 = BIC16mr
  { 163,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #163 = BIC16rm
  { 164,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #164 = BIC16rr
  { 165,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #165 = BIC8mm
  { 166,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #166 = BIC8mr
  { 167,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #167 = BIC8rm
  { 168,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #168 = BIC8rr
  { 169,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #169 = BIT16mi
  { 170,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #170 = BIT16mm
  { 171,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #171 = BIT16mr
  { 172,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #172 = BIT16ri
  { 173,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #173 = BIT16rm
  { 174,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #174 = BIT16rr
  { 175,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #175 = BIT8mi
  { 176,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #176 = BIT8mm
  { 177,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #177 = BIT8mr
  { 178,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #178 = BIT8ri
  { 179,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #179 = BIT8rm
  { 180,	2,	0,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #180 = BIT8rr
  { 181,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #181 = Bi
  { 182,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator), 0xeULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #182 = Bm
  { 183,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #183 = Br
  { 184,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo3, -1 ,nullptr },  // Inst #184 = CALLi
  { 185,	2,	0,	0,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad), 0xdULL, ImplicitList2, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #185 = CALLm
  { 186,	1,	0,	0,	0,	0|(1ULL<<MCID::Call), 0x9ULL, ImplicitList2, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #186 = CALLr
  { 187,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #187 = CMP16mi
  { 188,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #188 = CMP16mr
  { 189,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo43, -1 ,nullptr },  // Inst #189 = CMP16ri
  { 190,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo44, -1 ,nullptr },  // Inst #190 = CMP16rm
  { 191,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo45, -1 ,nullptr },  // Inst #191 = CMP16rr
  { 192,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #192 = CMP8mi
  { 193,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #193 = CMP8mr
  { 194,	2,	0,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo46, -1 ,nullptr },  // Inst #194 = CMP8ri
  { 195,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo47, -1 ,nullptr },  // Inst #195 = CMP8rm
  { 196,	2,	0,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo48, -1 ,nullptr },  // Inst #196 = CMP8rr
  { 197,	2,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0xbULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #197 = JCC
  { 198,	1,	0,	0,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xbULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #198 = JMP
  { 199,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #199 = MOV16mi
  { 200,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #200 = MOV16mm
  { 201,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #201 = MOV16mr
  { 202,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #202 = MOV16ri
  { 203,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #203 = MOV16rm
  { 204,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #204 = MOV16rm_POST
  { 205,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #205 = MOV16rr
  { 206,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #206 = MOV8mi
  { 207,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #207 = MOV8mm
  { 208,	3,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0xeULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #208 = MOV8mr
  { 209,	2,	1,	0,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0xeULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #209 = MOV8ri
  { 210,	3,	1,	0,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0xeULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #210 = MOV8rm
  { 211,	3,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #211 = MOV8rm_POST
  { 212,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #212 = MOV8rr
  { 213,	3,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #213 = MOVZX16rm8
  { 214,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #214 = MOVZX16rr8
  { 215,	0,	0,	0,	0,	0, 0x4ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #215 = NOP
  { 216,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #216 = OR16mi
  { 217,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #217 = OR16mm
  { 218,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #218 = OR16mr
  { 219,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #219 = OR16ri
  { 220,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #220 = OR16rm
  { 221,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #221 = OR16rm_POST
  { 222,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #222 = OR16rr
  { 223,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #223 = OR8mi
  { 224,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #224 = OR8mm
  { 225,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #225 = OR8mr
  { 226,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #226 = OR8ri
  { 227,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #227 = OR8rm
  { 228,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #228 = OR8rm_POST
  { 229,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #229 = OR8rr
  { 230,	1,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xaULL, ImplicitList2, ImplicitList2, OperandInfo50, -1 ,nullptr },  // Inst #230 = POP16r
  { 231,	1,	0,	0,	0,	0|(1ULL<<MCID::MayStore), 0x9ULL, ImplicitList2, ImplicitList2, OperandInfo50, -1 ,nullptr },  // Inst #231 = PUSH16r
  { 232,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0xaULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #232 = RET
  { 233,	0,	0,	0,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x9ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #233 = RETI
  { 234,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #234 = SAR16r1
  { 235,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #235 = SAR16r1c
  { 236,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #236 = SAR8r1
  { 237,	2,	1,	0,	0,	0, 0x4ULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #237 = SAR8r1c
  { 238,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #238 = SBC16mi
  { 239,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #239 = SBC16mm
  { 240,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #240 = SBC16mr
  { 241,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #241 = SBC16ri
  { 242,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #242 = SBC16rm
  { 243,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #243 = SBC16rr
  { 244,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #244 = SBC8mi
  { 245,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, ImplicitList1, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #245 = SBC8mm
  { 246,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #246 = SBC8mr
  { 247,	3,	1,	0,	0,	0, 0xeULL, ImplicitList1, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #247 = SBC8ri
  { 248,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, ImplicitList1, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #248 = SBC8rm
  { 249,	3,	1,	0,	0,	0, 0xaULL, ImplicitList1, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #249 = SBC8rr
  { 250,	2,	1,	0,	0,	0, 0x9ULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #250 = SEXT16r
  { 251,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo54, -1 ,nullptr },  // Inst #251 = SHL16r1
  { 252,	2,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo55, -1 ,nullptr },  // Inst #252 = SHL8r1
  { 253,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #253 = SUB16mi
  { 254,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #254 = SUB16mm
  { 255,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #255 = SUB16mr
  { 256,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #256 = SUB16ri
  { 257,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #257 = SUB16rm
  { 258,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #258 = SUB16rm_POST
  { 259,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #259 = SUB16rr
  { 260,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #260 = SUB8mi
  { 261,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #261 = SUB8mm
  { 262,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #262 = SUB8mr
  { 263,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #263 = SUB8ri
  { 264,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #264 = SUB8rm
  { 265,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #265 = SUB8rm_POST
  { 266,	3,	1,	0,	0,	0, 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #266 = SUB8rr
  { 267,	2,	1,	0,	0,	0, 0x9ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #267 = SWPB16r
  { 268,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, ImplicitList1, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #268 = Select16
  { 269,	4,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, ImplicitList1, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #269 = Select8
  { 270,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo58, -1 ,nullptr },  // Inst #270 = Shl16
  { 271,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #271 = Shl8
  { 272,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo58, -1 ,nullptr },  // Inst #272 = Sra16
  { 273,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #273 = Sra8
  { 274,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo58, -1 ,nullptr },  // Inst #274 = Srl16
  { 275,	3,	1,	0,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x4ULL, nullptr, ImplicitList1, OperandInfo59, -1 ,nullptr },  // Inst #275 = Srl8
  { 276,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #276 = XOR16mi
  { 277,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #277 = XOR16mm
  { 278,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo32, -1 ,nullptr },  // Inst #278 = XOR16mr
  { 279,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo33, -1 ,nullptr },  // Inst #279 = XOR16ri
  { 280,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo34, -1 ,nullptr },  // Inst #280 = XOR16rm
  { 281,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo40, -1 ,nullptr },  // Inst #281 = XOR16rm_POST
  { 282,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo35, -1 ,nullptr },  // Inst #282 = XOR16rr
  { 283,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo30, -1 ,nullptr },  // Inst #283 = XOR8mi
  { 284,	4,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x12ULL, nullptr, ImplicitList1, OperandInfo31, -1 ,nullptr },  // Inst #284 = XOR8mm
  { 285,	3,	0,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0xeULL, nullptr, ImplicitList1, OperandInfo36, -1 ,nullptr },  // Inst #285 = XOR8mr
  { 286,	3,	1,	0,	0,	0, 0xeULL, nullptr, ImplicitList1, OperandInfo37, -1 ,nullptr },  // Inst #286 = XOR8ri
  { 287,	4,	1,	0,	0,	0|(1ULL<<MCID::MayLoad), 0xeULL, nullptr, ImplicitList1, OperandInfo38, -1 ,nullptr },  // Inst #287 = XOR8rm
  { 288,	4,	2,	0,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraDefRegAllocReq), 0xaULL, nullptr, ImplicitList1, OperandInfo41, -1 ,nullptr },  // Inst #288 = XOR8rm_POST
  { 289,	3,	1,	0,	0,	0|(1ULL<<MCID::Commutable), 0xaULL, nullptr, ImplicitList1, OperandInfo39, -1 ,nullptr },  // Inst #289 = XOR8rr
  { 290,	2,	1,	0,	0,	0, 0xaULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #290 = ZEXT16r
};

extern const char MSP430InstrNameData[] = {
  /* 0 */ 'S', 'H', 'L', '1', '6', 'r', '1', 0,
  /* 8 */ 'S', 'A', 'R', '1', '6', 'r', '1', 0,
  /* 16 */ 'S', 'H', 'L', '8', 'r', '1', 0,
  /* 23 */ 'S', 'A', 'R', '8', 'r', '1', 0,
  /* 30 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 38 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 46 */ 'S', 'r', 'a', '1', '6', 0,
  /* 52 */ 'S', 'h', 'l', '1', '6', 0,
  /* 58 */ 'S', 'r', 'l', '1', '6', 0,
  /* 64 */ 'S', 'e', 'l', 'e', 'c', 't', '1', '6', 0,
  /* 73 */ 'S', 'r', 'a', '8', 0,
  /* 78 */ 'S', 'h', 'l', '8', 0,
  /* 83 */ 'S', 'r', 'l', '8', 0,
  /* 88 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'm', '8', 0,
  /* 99 */ 'M', 'O', 'V', 'Z', 'X', '1', '6', 'r', 'r', '8', 0,
  /* 110 */ 'S', 'e', 'l', 'e', 'c', 't', '8', 0,
  /* 118 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 124 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 131 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 137 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 153 */ 'J', 'C', 'C', 0,
  /* 157 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 169 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 179 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 187 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 194 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 201 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 207 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 223 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 240 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 246 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 262 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 275 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 284 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 301 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 309 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 322 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 330 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 337 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 350 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 358 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 368 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 383 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 398 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 405 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 420 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 434 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 448 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 465 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 482 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 489 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 497 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 505 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 513 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 519 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 528 */ 'R', 'E', 'T', 'I', 0,
  /* 533 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 542 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 553 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 562 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 571 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 588 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 594 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 614 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 635 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 647 */ 'K', 'I', 'L', 'L', 0,
  /* 652 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 659 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 665 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 672 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 679 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 686 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 696 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 713 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 729 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 745 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 762 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 770 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 778 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 786 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 794 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 803 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 811 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 817 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 826 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 835 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 842 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 849 */ 'J', 'M', 'P', 0,
  /* 853 */ 'N', 'O', 'P', 0,
  /* 857 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 870 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 882 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 897 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 904 */ 'G', '_', 'B', 'R', 0,
  /* 909 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 934 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 941 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 948 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 965 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 971 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 987 */ 'G', '_', 'O', 'R', 0,
  /* 992 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 1007 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 1018 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1035 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 1050 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 1067 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 1097 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 1124 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 1134 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 1143 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 1156 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 1170 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 1194 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1215 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 1235 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1247 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 1258 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1269 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 1280 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 1291 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1301 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 1316 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 1325 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 1335 */ 'S', 'U', 'B', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1348 */ 'A', 'D', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1361 */ 'A', 'N', 'D', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1374 */ 'X', 'O', 'R', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1387 */ 'M', 'O', 'V', '1', '6', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1400 */ 'S', 'U', 'B', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1412 */ 'A', 'D', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1424 */ 'A', 'N', 'D', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1436 */ 'X', 'O', 'R', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1448 */ 'M', 'O', 'V', '8', 'r', 'm', '_', 'P', 'O', 'S', 'T', 0,
  /* 1460 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 1468 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 1475 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 1484 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 1491 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 1498 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 1505 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 1512 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 1519 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 1536 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 1552 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 1566 */ 'C', 'O', 'P', 'Y', 0,
  /* 1571 */ 'S', 'A', 'R', '1', '6', 'r', '1', 'c', 0,
  /* 1580 */ 'S', 'A', 'R', '8', 'r', '1', 'c', 0,
  /* 1588 */ 'A', 'D', 'D', 'f', 'r', 'a', 'm', 'e', 0,
  /* 1597 */ 'B', 'i', 0,
  /* 1600 */ 'C', 'A', 'L', 'L', 'i', 0,
  /* 1606 */ 'S', 'U', 'B', '1', '6', 'm', 'i', 0,
  /* 1614 */ 'S', 'B', 'C', '1', '6', 'm', 'i', 0,
  /* 1622 */ 'A', 'D', 'C', '1', '6', 'm', 'i', 0,
  /* 1630 */ 'A', 'D', 'D', '1', '6', 'm', 'i', 0,
  /* 1638 */ 'A', 'N', 'D', '1', '6', 'm', 'i', 0,
  /* 1646 */ 'C', 'M', 'P', '1', '6', 'm', 'i', 0,
  /* 1654 */ 'X', 'O', 'R', '1', '6', 'm', 'i', 0,
  /* 1662 */ 'B', 'I', 'T', '1', '6', 'm', 'i', 0,
  /* 1670 */ 'M', 'O', 'V', '1', '6', 'm', 'i', 0,
  /* 1678 */ 'S', 'U', 'B', '8', 'm', 'i', 0,
  /* 1685 */ 'S', 'B', 'C', '8', 'm', 'i', 0,
  /* 1692 */ 'A', 'D', 'C', '8', 'm', 'i', 0,
  /* 1699 */ 'A', 'D', 'D', '8', 'm', 'i', 0,
  /* 1706 */ 'A', 'N', 'D', '8', 'm', 'i', 0,
  /* 1713 */ 'C', 'M', 'P', '8', 'm', 'i', 0,
  /* 1720 */ 'X', 'O', 'R', '8', 'm', 'i', 0,
  /* 1727 */ 'B', 'I', 'T', '8', 'm', 'i', 0,
  /* 1734 */ 'M', 'O', 'V', '8', 'm', 'i', 0,
  /* 1741 */ 'S', 'U', 'B', '1', '6', 'r', 'i', 0,
  /* 1749 */ 'S', 'B', 'C', '1', '6', 'r', 'i', 0,
  /* 1757 */ 'A', 'D', 'C', '1', '6', 'r', 'i', 0,
  /* 1765 */ 'A', 'D', 'D', '1', '6', 'r', 'i', 0,
  /* 1773 */ 'A', 'N', 'D', '1', '6', 'r', 'i', 0,
  /* 1781 */ 'C', 'M', 'P', '1', '6', 'r', 'i', 0,
  /* 1789 */ 'X', 'O', 'R', '1', '6', 'r', 'i', 0,
  /* 1797 */ 'B', 'I', 'T', '1', '6', 'r', 'i', 0,
  /* 1805 */ 'M', 'O', 'V', '1', '6', 'r', 'i', 0,
  /* 1813 */ 'S', 'U', 'B', '8', 'r', 'i', 0,
  /* 1820 */ 'S', 'B', 'C', '8', 'r', 'i', 0,
  /* 1827 */ 'A', 'D', 'C', '8', 'r', 'i', 0,
  /* 1834 */ 'A', 'D', 'D', '8', 'r', 'i', 0,
  /* 1841 */ 'A', 'N', 'D', '8', 'r', 'i', 0,
  /* 1848 */ 'C', 'M', 'P', '8', 'r', 'i', 0,
  /* 1855 */ 'X', 'O', 'R', '8', 'r', 'i', 0,
  /* 1862 */ 'B', 'I', 'T', '8', 'r', 'i', 0,
  /* 1869 */ 'M', 'O', 'V', '8', 'r', 'i', 0,
  /* 1876 */ 'B', 'm', 0,
  /* 1879 */ 'C', 'A', 'L', 'L', 'm', 0,
  /* 1885 */ 'S', 'U', 'B', '1', '6', 'm', 'm', 0,
  /* 1893 */ 'S', 'B', 'C', '1', '6', 'm', 'm', 0,
  /* 1901 */ 'A', 'D', 'C', '1', '6', 'm', 'm', 0,
  /* 1909 */ 'B', 'I', 'C', '1', '6', 'm', 'm', 0,
  /* 1917 */ 'A', 'D', 'D', '1', '6', 'm', 'm', 0,
  /* 1925 */ 'A', 'N', 'D', '1', '6', 'm', 'm', 0,
  /* 1933 */ 'X', 'O', 'R', '1', '6', 'm', 'm', 0,
  /* 1941 */ 'B', 'I', 'T', '1', '6', 'm', 'm', 0,
  /* 1949 */ 'M', 'O', 'V', '1', '6', 'm', 'm', 0,
  /* 1957 */ 'S', 'U', 'B', '8', 'm', 'm', 0,
  /* 1964 */ 'S', 'B', 'C', '8', 'm', 'm', 0,
  /* 1971 */ 'A', 'D', 'C', '8', 'm', 'm', 0,
  /* 1978 */ 'B', 'I', 'C', '8', 'm', 'm', 0,
  /* 1985 */ 'A', 'D', 'D', '8', 'm', 'm', 0,
  /* 1992 */ 'A', 'N', 'D', '8', 'm', 'm', 0,
  /* 1999 */ 'X', 'O', 'R', '8', 'm', 'm', 0,
  /* 2006 */ 'B', 'I', 'T', '8', 'm', 'm', 0,
  /* 2013 */ 'M', 'O', 'V', '8', 'm', 'm', 0,
  /* 2020 */ 'S', 'U', 'B', '1', '6', 'r', 'm', 0,
  /* 2028 */ 'S', 'B', 'C', '1', '6', 'r', 'm', 0,
  /* 2036 */ 'A', 'D', 'C', '1', '6', 'r', 'm', 0,
  /* 2044 */ 'B', 'I', 'C', '1', '6', 'r', 'm', 0,
  /* 2052 */ 'A', 'D', 'D', '1', '6', 'r', 'm', 0,
  /* 2060 */ 'A', 'N', 'D', '1', '6', 'r', 'm', 0,
  /* 2068 */ 'C', 'M', 'P', '1', '6', 'r', 'm', 0,
  /* 2076 */ 'X', 'O', 'R', '1', '6', 'r', 'm', 0,
  /* 2084 */ 'B', 'I', 'T', '1', '6', 'r', 'm', 0,
  /* 2092 */ 'M', 'O', 'V', '1', '6', 'r', 'm', 0,
  /* 2100 */ 'S', 'U', 'B', '8', 'r', 'm', 0,
  /* 2107 */ 'S', 'B', 'C', '8', 'r', 'm', 0,
  /* 2114 */ 'A', 'D', 'C', '8', 'r', 'm', 0,
  /* 2121 */ 'B', 'I', 'C', '8', 'r', 'm', 0,
  /* 2128 */ 'A', 'D', 'D', '8', 'r', 'm', 0,
  /* 2135 */ 'A', 'N', 'D', '8', 'r', 'm', 0,
  /* 2142 */ 'C', 'M', 'P', '8', 'r', 'm', 0,
  /* 2149 */ 'X', 'O', 'R', '8', 'r', 'm', 0,
  /* 2156 */ 'B', 'I', 'T', '8', 'r', 'm', 0,
  /* 2163 */ 'M', 'O', 'V', '8', 'r', 'm', 0,
  /* 2170 */ 'S', 'W', 'P', 'B', '1', '6', 'r', 0,
  /* 2178 */ 'P', 'U', 'S', 'H', '1', '6', 'r', 0,
  /* 2186 */ 'P', 'O', 'P', '1', '6', 'r', 0,
  /* 2193 */ 'S', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 2201 */ 'Z', 'E', 'X', 'T', '1', '6', 'r', 0,
  /* 2209 */ 'B', 'r', 0,
  /* 2212 */ 'C', 'A', 'L', 'L', 'r', 0,
  /* 2218 */ 'S', 'U', 'B', '1', '6', 'm', 'r', 0,
  /* 2226 */ 'S', 'B', 'C', '1', '6', 'm', 'r', 0,
  /* 2234 */ 'A', 'D', 'C', '1', '6', 'm', 'r', 0,
  /* 2242 */ 'B', 'I', 'C', '1', '6', 'm', 'r', 0,
  /* 2250 */ 'A', 'D', 'D', '1', '6', 'm', 'r', 0,
  /* 2258 */ 'A', 'N', 'D', '1', '6', 'm', 'r', 0,
  /* 2266 */ 'C', 'M', 'P', '1', '6', 'm', 'r', 0,
  /* 2274 */ 'X', 'O', 'R', '1', '6', 'm', 'r', 0,
  /* 2282 */ 'B', 'I', 'T', '1', '6', 'm', 'r', 0,
  /* 2290 */ 'M', 'O', 'V', '1', '6', 'm', 'r', 0,
  /* 2298 */ 'S', 'U', 'B', '8', 'm', 'r', 0,
  /* 2305 */ 'S', 'B', 'C', '8', 'm', 'r', 0,
  /* 2312 */ 'A', 'D', 'C', '8', 'm', 'r', 0,
  /* 2319 */ 'B', 'I', 'C', '8', 'm', 'r', 0,
  /* 2326 */ 'A', 'D', 'D', '8', 'm', 'r', 0,
  /* 2333 */ 'A', 'N', 'D', '8', 'm', 'r', 0,
  /* 2340 */ 'C', 'M', 'P', '8', 'm', 'r', 0,
  /* 2347 */ 'X', 'O', 'R', '8', 'm', 'r', 0,
  /* 2354 */ 'B', 'I', 'T', '8', 'm', 'r', 0,
  /* 2361 */ 'M', 'O', 'V', '8', 'm', 'r', 0,
  /* 2368 */ 'S', 'U', 'B', '1', '6', 'r', 'r', 0,
  /* 2376 */ 'S', 'B', 'C', '1', '6', 'r', 'r', 0,
  /* 2384 */ 'A', 'D', 'C', '1', '6', 'r', 'r', 0,
  /* 2392 */ 'B', 'I', 'C', '1', '6', 'r', 'r', 0,
  /* 2400 */ 'A', 'D', 'D', '1', '6', 'r', 'r', 0,
  /* 2408 */ 'A', 'N', 'D', '1', '6', 'r', 'r', 0,
  /* 2416 */ 'C', 'M', 'P', '1', '6', 'r', 'r', 0,
  /* 2424 */ 'X', 'O', 'R', '1', '6', 'r', 'r', 0,
  /* 2432 */ 'B', 'I', 'T', '1', '6', 'r', 'r', 0,
  /* 2440 */ 'M', 'O', 'V', '1', '6', 'r', 'r', 0,
  /* 2448 */ 'S', 'U', 'B', '8', 'r', 'r', 0,
  /* 2455 */ 'S', 'B', 'C', '8', 'r', 'r', 0,
  /* 2462 */ 'A', 'D', 'C', '8', 'r', 'r', 0,
  /* 2469 */ 'B', 'I', 'C', '8', 'r', 'r', 0,
  /* 2476 */ 'A', 'D', 'D', '8', 'r', 'r', 0,
  /* 2483 */ 'A', 'N', 'D', '8', 'r', 'r', 0,
  /* 2490 */ 'C', 'M', 'P', '8', 'r', 'r', 0,
  /* 2497 */ 'X', 'O', 'R', '8', 'r', 'r', 0,
  /* 2504 */ 'B', 'I', 'T', '8', 'r', 'r', 0,
  /* 2511 */ 'M', 'O', 'V', '8', 'r', 'r', 0,
};

extern const unsigned MSP430InstrNameIndices[] = {
    515U, 686U, 729U, 562U, 553U, 571U, 647U, 405U, 
    420U, 385U, 434U, 1050U, 358U, 309U, 1566U, 330U, 
    1301U, 262U, 794U, 635U, 1269U, 284U, 1258U, 337U, 
    870U, 857U, 909U, 1156U, 1170U, 594U, 614U, 201U, 
    131U, 659U, 1498U, 1505U, 672U, 679U, 240U, 987U, 
    965U, 383U, 513U, 1552U, 368U, 1124U, 1018U, 1316U, 
    1035U, 1280U, 1007U, 1325U, 187U, 350U, 1067U, 448U, 
    465U, 207U, 137U, 246U, 223U, 992U, 971U, 1536U, 
    713U, 1519U, 696U, 275U, 1143U, 157U, 1097U, 1475U, 
    179U, 1247U, 1235U, 1291U, 489U, 1468U, 1484U, 588U, 
    941U, 934U, 842U, 835U, 1134U, 322U, 301U, 770U, 
    762U, 786U, 778U, 505U, 497U, 194U, 124U, 652U, 
    118U, 1491U, 665U, 1512U, 897U, 38U, 482U, 30U, 
    398U, 1460U, 169U, 519U, 533U, 817U, 826U, 811U, 
    542U, 904U, 1215U, 1194U, 948U, 803U, 1622U, 1901U, 
    2234U, 1757U, 2036U, 2384U, 1692U, 1971U, 2312U, 1827U, 
    2114U, 2462U, 1630U, 1917U, 2250U, 1765U, 2052U, 1348U, 
    2400U, 1699U, 1985U, 2326U, 1834U, 2128U, 1412U, 2476U, 
    1588U, 745U, 882U, 1638U, 1925U, 2258U, 1773U, 2060U, 
    1361U, 2408U, 1706U, 1992U, 2333U, 1841U, 2135U, 1424U, 
    2483U, 1909U, 2242U, 2044U, 2392U, 1978U, 2319U, 2121U, 
    2469U, 1662U, 1941U, 2282U, 1797U, 2084U, 2432U, 1727U, 
    2006U, 2354U, 1862U, 2156U, 2504U, 1597U, 1876U, 2209U, 
    1600U, 1879U, 2212U, 1646U, 2266U, 1781U, 2068U, 2416U, 
    1713U, 2340U, 1848U, 2142U, 2490U, 153U, 849U, 1670U, 
    1949U, 2290U, 1805U, 2092U, 1387U, 2440U, 1734U, 2013U, 
    2361U, 1869U, 2163U, 1448U, 2511U, 88U, 99U, 853U, 
    1655U, 1934U, 2275U, 1790U, 2077U, 1375U, 2425U, 1721U, 
    2000U, 2348U, 1856U, 2150U, 1437U, 2498U, 2186U, 2178U, 
    1166U, 528U, 8U, 1571U, 23U, 1580U, 1614U, 1893U, 
    2226U, 1749U, 2028U, 2376U, 1685U, 1964U, 2305U, 1820U, 
    2107U, 2455U, 2193U, 0U, 16U, 1606U, 1885U, 2218U, 
    1741U, 2020U, 1335U, 2368U, 1678U, 1957U, 2298U, 1813U, 
    2100U, 1400U, 2448U, 2170U, 64U, 110U, 52U, 78U, 
    46U, 73U, 58U, 83U, 1654U, 1933U, 2274U, 1789U, 
    2076U, 1374U, 2424U, 1720U, 1999U, 2347U, 1855U, 2149U, 
    1436U, 2497U, 2201U, 
};

static inline void InitMSP430MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 291);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MSP430GenInstrInfo : public TargetInstrInfo {
  explicit MSP430GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~MSP430GenInstrInfo() override = default;
};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MSP430Insts[];
extern const unsigned MSP430InstrNameIndices[];
extern const char MSP430InstrNameData[];
MSP430GenInstrInfo::MSP430GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MSP430Insts, MSP430InstrNameIndices, MSP430InstrNameData, 291);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace MSP430 {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace MSP430 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace MSP430
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace MSP430 {
namespace OpTypes {
enum OperandType {
  cc = 0,
  f32imm = 1,
  f64imm = 2,
  i16imm = 3,
  i1imm = 4,
  i32imm = 5,
  i64imm = 6,
  i8imm = 7,
  jmptarget = 8,
  memdst = 9,
  memsrc = 10,
  ptype0 = 11,
  ptype1 = 12,
  ptype2 = 13,
  ptype3 = 14,
  ptype4 = 15,
  ptype5 = 16,
  type0 = 17,
  type1 = 18,
  type2 = 19,
  type3 = 20,
  type4 = 21,
  type5 = 22,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace MSP430
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

