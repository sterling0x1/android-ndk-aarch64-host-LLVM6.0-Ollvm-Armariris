/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t BPFMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(504403158265495552),	// ADD_ri
    UINT64_C(288230376151711744),	// ADD_ri_32
    UINT64_C(1080863910568919040),	// ADD_rr
    UINT64_C(864691128455135232),	// ADD_rr_32
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(6269010681299730432),	// AND_ri
    UINT64_C(6052837899185946624),	// AND_ri_32
    UINT64_C(6845471433603153920),	// AND_rr
    UINT64_C(6629298651489370112),	// AND_rr_32
    UINT64_C(15852670688344145936),	// BE16
    UINT64_C(15852670688344145952),	// BE32
    UINT64_C(15852670688344145984),	// BE64
    UINT64_C(3963167672086036480),	// DIV_ri
    UINT64_C(3746994889972252672),	// DIV_ri_32
    UINT64_C(4539628424389459968),	// DIV_rr
    UINT64_C(4323455642275676160),	// DIV_rr_32
    UINT64_C(1738389456165011456),	// FI_ri
    UINT64_C(9583660007044415488),	// JAL
    UINT64_C(10160120759347838976),	// JALX
    UINT64_C(1513209474796486656),	// JEQ_ri
    UINT64_C(2089670227099910144),	// JEQ_rr
    UINT64_C(360287970189639680),	// JMP
    UINT64_C(6124895493223874560),	// JNE_ri
    UINT64_C(6701356245527298048),	// JNE_rr
    UINT64_C(8430738502437568512),	// JSGE_ri
    UINT64_C(9007199254740992000),	// JSGE_rr
    UINT64_C(7277816997830721536),	// JSGT_ri
    UINT64_C(7854277750134145024),	// JSGT_rr
    UINT64_C(15348267530078650368),	// JSLE_ri
    UINT64_C(15924728282382073856),	// JSLE_rr
    UINT64_C(14195346025471803392),	// JSLT_ri
    UINT64_C(14771806777775226880),	// JSLT_rr
    UINT64_C(3819052484010180608),	// JUGE_ri
    UINT64_C(4395513236313604096),	// JUGE_rr
    UINT64_C(2666130979403333632),	// JUGT_ri
    UINT64_C(3242591731706757120),	// JUGT_rr
    UINT64_C(13042424520864956416),	// JULE_ri
    UINT64_C(13618885273168379904),	// JULE_rr
    UINT64_C(11889503016258109440),	// JULT_ri
    UINT64_C(12465963768561532928),	// JULT_rr
    UINT64_C(8142508126285856768),	// LDB
    UINT64_C(8718968878589280256),	// LDD
    UINT64_C(7566047373982433280),	// LDH
    UINT64_C(6989586621679009792),	// LDW
    UINT64_C(3458764513820540928),	// LD_ABS_B
    UINT64_C(2882303761517117440),	// LD_ABS_H
    UINT64_C(2305843009213693952),	// LD_ABS_W
    UINT64_C(5764607523034234880),	// LD_IND_B
    UINT64_C(5188146770730811392),	// LD_IND_H
    UINT64_C(4611686018427387904),	// LD_IND_W
    UINT64_C(1729382256910270464),	// LD_imm64
    UINT64_C(1729382256910270464),	// LD_pseudo
    UINT64_C(15276209936040722448),	// LE16
    UINT64_C(15276209936040722464),	// LE32
    UINT64_C(15276209936040722496),	// LE64
    UINT64_C(13186539708940812288),	// MOV_ri
    UINT64_C(12970366926827028480),	// MOV_ri_32
    UINT64_C(13763000461244235776),	// MOV_rr
    UINT64_C(13546827679130451968),	// MOV_rr_32
    UINT64_C(2810246167479189504),	// MUL_ri
    UINT64_C(2594073385365405696),	// MUL_ri_32
    UINT64_C(3386706919782612992),	// MUL_rr
    UINT64_C(3170534137668829184),	// MUL_rr_32
    UINT64_C(9511602413006487552),	// NEG_32
    UINT64_C(9727775195120271360),	// NEG_64
    UINT64_C(13763000461244235776),	// NOP
    UINT64_C(5116089176692883456),	// OR_ri
    UINT64_C(4899916394579099648),	// OR_ri_32
    UINT64_C(5692549928996306944),	// OR_rr
    UINT64_C(5476377146882523136),	// OR_rr_32
    UINT64_C(10736581511651262464),	// RET
    UINT64_C(7421932185906577408),	// SLL_ri
    UINT64_C(7205759403792793600),	// SLL_ri_32
    UINT64_C(7998392938210000896),	// SLL_rr
    UINT64_C(7782220156096217088),	// SLL_rr_32
    UINT64_C(14339461213547659264),	// SRA_ri
    UINT64_C(14123288431433875456),	// SRA_ri_32
    UINT64_C(14915921965851082752),	// SRA_rr
    UINT64_C(14699749183737298944),	// SRA_rr_32
    UINT64_C(8574853690513424384),	// SRL_ri
    UINT64_C(8358680908399640576),	// SRL_ri_32
    UINT64_C(9151314442816847872),	// SRL_rr
    UINT64_C(8935141660703064064),	// SRL_rr_32
    UINT64_C(8286623314361712640),	// STB
    UINT64_C(8863084066665136128),	// STD
    UINT64_C(7710162562058289152),	// STH
    UINT64_C(7133701809754865664),	// STW
    UINT64_C(1657324662872342528),	// SUB_ri
    UINT64_C(1441151880758558720),	// SUB_ri_32
    UINT64_C(2233785415175766016),	// SUB_rr
    UINT64_C(2017612633061982208),	// SUB_rr_32
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(14051230837395947520),	// XADD32
    UINT64_C(15780613094306217984),	// XADD64
    UINT64_C(12033618204333965312),	// XOR_ri
    UINT64_C(11817445422220181504),	// XOR_ri_32
    UINT64_C(12610078956637388800),	// XOR_rr
    UINT64_C(12393906174523604992),	// XOR_rr_32
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case BPF::FI_ri:
    case BPF::NOP:
    case BPF::RET: {
      break;
    }
    case BPF::JMP: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::JAL:
    case BPF::JALX: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::BE16:
    case BPF::BE32:
    case BPF::BE64:
    case BPF::LE16:
    case BPF::LE32:
    case BPF::LE64:
    case BPF::NEG_32:
    case BPF::NEG_64: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      break;
    }
    case BPF::JEQ_ri:
    case BPF::JNE_ri:
    case BPF::JSGE_ri:
    case BPF::JSGT_ri:
    case BPF::JSLE_ri:
    case BPF::JSLT_ri:
    case BPF::JUGE_ri:
    case BPF::JUGT_ri:
    case BPF::JULE_ri:
    case BPF::JULT_ri: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 32;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::LDB:
    case BPF::LDD:
    case BPF::LDH:
    case BPF::LDW: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(983040)) << 36;
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::LD_imm64:
    case BPF::MOV_ri:
    case BPF::MOV_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::ADD_ri:
    case BPF::ADD_ri_32:
    case BPF::AND_ri:
    case BPF::AND_ri_32:
    case BPF::DIV_ri:
    case BPF::DIV_ri_32:
    case BPF::MUL_ri:
    case BPF::MUL_ri_32:
    case BPF::OR_ri:
    case BPF::OR_ri_32:
    case BPF::SLL_ri:
    case BPF::SLL_ri_32:
    case BPF::SRA_ri:
    case BPF::SRA_ri_32:
    case BPF::SRL_ri:
    case BPF::SRL_ri_32:
    case BPF::SUB_ri:
    case BPF::SUB_ri_32:
    case BPF::XOR_ri:
    case BPF::XOR_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::LD_pseudo: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      // op: pseudo
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
    case BPF::MOV_rr:
    case BPF::MOV_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
    case BPF::JEQ_rr:
    case BPF::JNE_rr:
    case BPF::JSGE_rr:
    case BPF::JSGT_rr:
    case BPF::JSLE_rr:
    case BPF::JSLT_rr:
    case BPF::JUGE_rr:
    case BPF::JUGT_rr:
    case BPF::JULE_rr:
    case BPF::JULT_rr: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::ADD_rr:
    case BPF::ADD_rr_32:
    case BPF::AND_rr:
    case BPF::AND_rr_32:
    case BPF::DIV_rr:
    case BPF::DIV_rr_32:
    case BPF::MUL_rr:
    case BPF::MUL_rr_32:
    case BPF::OR_rr:
    case BPF::OR_rr_32:
    case BPF::SLL_rr:
    case BPF::SLL_rr_32:
    case BPF::SRA_rr:
    case BPF::SRA_rr_32:
    case BPF::SRL_rr:
    case BPF::SRL_rr_32:
    case BPF::SUB_rr:
    case BPF::SUB_rr_32:
    case BPF::XOR_rr:
    case BPF::XOR_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
    case BPF::XADD32:
    case BPF::XADD64: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1048575)) << 32;
      break;
    }
    case BPF::LD_ABS_B:
    case BPF::LD_ABS_H:
    case BPF::LD_ABS_W: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::STB:
    case BPF::STD:
    case BPF::STH:
    case BPF::STW: {
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1048575)) << 32;
      break;
    }
    case BPF::LD_IND_B:
    case BPF::LD_IND_H:
    case BPF::LD_IND_W: {
      // op: val
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint8_t {
  Feature_None = 0
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG
uint64_t BPFMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

void BPFMCCodeEmitter::verifyInstructionPredicates(
    const MCInst &Inst, uint64_t AvailableFeatures) const {
#ifndef NDEBUG
  static uint64_t RequiredFeatures[] = {
    0, // PHI = 0
    0, // INLINEASM = 1
    0, // CFI_INSTRUCTION = 2
    0, // EH_LABEL = 3
    0, // GC_LABEL = 4
    0, // ANNOTATION_LABEL = 5
    0, // KILL = 6
    0, // EXTRACT_SUBREG = 7
    0, // INSERT_SUBREG = 8
    0, // IMPLICIT_DEF = 9
    0, // SUBREG_TO_REG = 10
    0, // COPY_TO_REGCLASS = 11
    0, // DBG_VALUE = 12
    0, // REG_SEQUENCE = 13
    0, // COPY = 14
    0, // BUNDLE = 15
    0, // LIFETIME_START = 16
    0, // LIFETIME_END = 17
    0, // STACKMAP = 18
    0, // FENTRY_CALL = 19
    0, // PATCHPOINT = 20
    0, // LOAD_STACK_GUARD = 21
    0, // STATEPOINT = 22
    0, // LOCAL_ESCAPE = 23
    0, // FAULTING_OP = 24
    0, // PATCHABLE_OP = 25
    0, // PATCHABLE_FUNCTION_ENTER = 26
    0, // PATCHABLE_RET = 27
    0, // PATCHABLE_FUNCTION_EXIT = 28
    0, // PATCHABLE_TAIL_CALL = 29
    0, // PATCHABLE_EVENT_CALL = 30
    0, // G_ADD = 31
    0, // G_SUB = 32
    0, // G_MUL = 33
    0, // G_SDIV = 34
    0, // G_UDIV = 35
    0, // G_SREM = 36
    0, // G_UREM = 37
    0, // G_AND = 38
    0, // G_OR = 39
    0, // G_XOR = 40
    0, // G_IMPLICIT_DEF = 41
    0, // G_PHI = 42
    0, // G_FRAME_INDEX = 43
    0, // G_GLOBAL_VALUE = 44
    0, // G_EXTRACT = 45
    0, // G_UNMERGE_VALUES = 46
    0, // G_INSERT = 47
    0, // G_MERGE_VALUES = 48
    0, // G_PTRTOINT = 49
    0, // G_INTTOPTR = 50
    0, // G_BITCAST = 51
    0, // G_LOAD = 52
    0, // G_STORE = 53
    0, // G_ATOMIC_CMPXCHG_WITH_SUCCESS = 54
    0, // G_ATOMIC_CMPXCHG = 55
    0, // G_ATOMICRMW_XCHG = 56
    0, // G_ATOMICRMW_ADD = 57
    0, // G_ATOMICRMW_SUB = 58
    0, // G_ATOMICRMW_AND = 59
    0, // G_ATOMICRMW_NAND = 60
    0, // G_ATOMICRMW_OR = 61
    0, // G_ATOMICRMW_XOR = 62
    0, // G_ATOMICRMW_MAX = 63
    0, // G_ATOMICRMW_MIN = 64
    0, // G_ATOMICRMW_UMAX = 65
    0, // G_ATOMICRMW_UMIN = 66
    0, // G_BRCOND = 67
    0, // G_BRINDIRECT = 68
    0, // G_INTRINSIC = 69
    0, // G_INTRINSIC_W_SIDE_EFFECTS = 70
    0, // G_ANYEXT = 71
    0, // G_TRUNC = 72
    0, // G_CONSTANT = 73
    0, // G_FCONSTANT = 74
    0, // G_VASTART = 75
    0, // G_VAARG = 76
    0, // G_SEXT = 77
    0, // G_ZEXT = 78
    0, // G_SHL = 79
    0, // G_LSHR = 80
    0, // G_ASHR = 81
    0, // G_ICMP = 82
    0, // G_FCMP = 83
    0, // G_SELECT = 84
    0, // G_UADDE = 85
    0, // G_USUBE = 86
    0, // G_SADDO = 87
    0, // G_SSUBO = 88
    0, // G_UMULO = 89
    0, // G_SMULO = 90
    0, // G_UMULH = 91
    0, // G_SMULH = 92
    0, // G_FADD = 93
    0, // G_FSUB = 94
    0, // G_FMUL = 95
    0, // G_FMA = 96
    0, // G_FDIV = 97
    0, // G_FREM = 98
    0, // G_FPOW = 99
    0, // G_FEXP = 100
    0, // G_FEXP2 = 101
    0, // G_FLOG = 102
    0, // G_FLOG2 = 103
    0, // G_FNEG = 104
    0, // G_FPEXT = 105
    0, // G_FPTRUNC = 106
    0, // G_FPTOSI = 107
    0, // G_FPTOUI = 108
    0, // G_SITOFP = 109
    0, // G_UITOFP = 110
    0, // G_GEP = 111
    0, // G_PTR_MASK = 112
    0, // G_BR = 113
    0, // G_INSERT_VECTOR_ELT = 114
    0, // G_EXTRACT_VECTOR_ELT = 115
    0, // G_SHUFFLE_VECTOR = 116
    0, // G_BSWAP = 117
    0, // ADD_ri = 118
    0, // ADD_ri_32 = 119
    0, // ADD_rr = 120
    0, // ADD_rr_32 = 121
    0, // ADJCALLSTACKDOWN = 122
    0, // ADJCALLSTACKUP = 123
    0, // AND_ri = 124
    0, // AND_ri_32 = 125
    0, // AND_rr = 126
    0, // AND_rr_32 = 127
    0, // BE16 = 128
    0, // BE32 = 129
    0, // BE64 = 130
    0, // DIV_ri = 131
    0, // DIV_ri_32 = 132
    0, // DIV_rr = 133
    0, // DIV_rr_32 = 134
    0, // FI_ri = 135
    0, // JAL = 136
    0, // JALX = 137
    0, // JEQ_ri = 138
    0, // JEQ_rr = 139
    0, // JMP = 140
    0, // JNE_ri = 141
    0, // JNE_rr = 142
    0, // JSGE_ri = 143
    0, // JSGE_rr = 144
    0, // JSGT_ri = 145
    0, // JSGT_rr = 146
    0, // JSLE_ri = 147
    0, // JSLE_rr = 148
    0, // JSLT_ri = 149
    0, // JSLT_rr = 150
    0, // JUGE_ri = 151
    0, // JUGE_rr = 152
    0, // JUGT_ri = 153
    0, // JUGT_rr = 154
    0, // JULE_ri = 155
    0, // JULE_rr = 156
    0, // JULT_ri = 157
    0, // JULT_rr = 158
    0, // LDB = 159
    0, // LDD = 160
    0, // LDH = 161
    0, // LDW = 162
    0, // LD_ABS_B = 163
    0, // LD_ABS_H = 164
    0, // LD_ABS_W = 165
    0, // LD_IND_B = 166
    0, // LD_IND_H = 167
    0, // LD_IND_W = 168
    0, // LD_imm64 = 169
    0, // LD_pseudo = 170
    0, // LE16 = 171
    0, // LE32 = 172
    0, // LE64 = 173
    0, // MOV_ri = 174
    0, // MOV_ri_32 = 175
    0, // MOV_rr = 176
    0, // MOV_rr_32 = 177
    0, // MUL_ri = 178
    0, // MUL_ri_32 = 179
    0, // MUL_rr = 180
    0, // MUL_rr_32 = 181
    0, // NEG_32 = 182
    0, // NEG_64 = 183
    0, // NOP = 184
    0, // OR_ri = 185
    0, // OR_ri_32 = 186
    0, // OR_rr = 187
    0, // OR_rr_32 = 188
    0, // RET = 189
    0, // SLL_ri = 190
    0, // SLL_ri_32 = 191
    0, // SLL_rr = 192
    0, // SLL_rr_32 = 193
    0, // SRA_ri = 194
    0, // SRA_ri_32 = 195
    0, // SRA_rr = 196
    0, // SRA_rr_32 = 197
    0, // SRL_ri = 198
    0, // SRL_ri_32 = 199
    0, // SRL_rr = 200
    0, // SRL_rr_32 = 201
    0, // STB = 202
    0, // STD = 203
    0, // STH = 204
    0, // STW = 205
    0, // SUB_ri = 206
    0, // SUB_ri_32 = 207
    0, // SUB_rr = 208
    0, // SUB_rr_32 = 209
    0, // Select = 210
    0, // Select_Ri = 211
    0, // XADD32 = 212
    0, // XADD64 = 213
    0, // XOR_ri = 214
    0, // XOR_ri_32 = 215
    0, // XOR_rr = 216
    0, // XOR_rr_32 = 217
  };

  assert(Inst.getOpcode() < 218);
  uint64_t MissingFeatures =
      (AvailableFeatures & RequiredFeatures[Inst.getOpcode()]) ^
      RequiredFeatures[Inst.getOpcode()];
  if (MissingFeatures) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << MCII.getName(Inst.getOpcode()).str()
        << " instruction but the ";
    for (unsigned i = 0; i < 8 * sizeof(MissingFeatures); ++i)
      if (MissingFeatures & (1ULL << i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str());
  }
#else
// Silence unused variable warning on targets that don't use MCII for other purposes (e.g. BPF).
(void)MCII;
#endif // NDEBUG
}
#endif
