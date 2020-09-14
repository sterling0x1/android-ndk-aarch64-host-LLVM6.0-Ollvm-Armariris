/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace PPC {
enum {
  DeprecatedDST = 0,
  Directive32 = 1,
  Directive64 = 2,
  Directive440 = 3,
  Directive601 = 4,
  Directive602 = 5,
  Directive603 = 6,
  Directive604 = 7,
  Directive620 = 8,
  Directive750 = 9,
  Directive970 = 10,
  Directive7400 = 11,
  DirectiveA2 = 12,
  DirectiveE500mc = 13,
  DirectiveE5500 = 14,
  DirectivePwr3 = 15,
  DirectivePwr4 = 16,
  DirectivePwr5 = 17,
  DirectivePwr5x = 18,
  DirectivePwr6 = 19,
  DirectivePwr6x = 20,
  DirectivePwr7 = 21,
  DirectivePwr8 = 22,
  DirectivePwr9 = 23,
  Feature64Bit = 24,
  Feature64BitRegs = 25,
  FeatureAltivec = 26,
  FeatureBPERMD = 27,
  FeatureBookE = 28,
  FeatureCMPB = 29,
  FeatureCRBits = 30,
  FeatureDirectMove = 31,
  FeatureE500 = 32,
  FeatureExtDiv = 33,
  FeatureFCPSGN = 34,
  FeatureFPCVT = 35,
  FeatureFPRND = 36,
  FeatureFRE = 37,
  FeatureFRES = 38,
  FeatureFRSQRTE = 39,
  FeatureFRSQRTES = 40,
  FeatureFSqrt = 41,
  FeatureFloat128 = 42,
  FeatureFusion = 43,
  FeatureHTM = 44,
  FeatureHardFloat = 45,
  FeatureICBT = 46,
  FeatureISA3_0 = 47,
  FeatureISEL = 48,
  FeatureInvariantFunctionDescriptors = 49,
  FeatureLDBRX = 50,
  FeatureLFIWAX = 51,
  FeatureLongCall = 52,
  FeatureMFOCRF = 53,
  FeatureMFTB = 54,
  FeatureMSYNC = 55,
  FeatureP8Altivec = 56,
  FeatureP8Crypto = 57,
  FeatureP8Vector = 58,
  FeatureP9Altivec = 59,
  FeatureP9Vector = 60,
  FeaturePOPCNTD = 61,
  FeaturePPC4xx = 62,
  FeaturePPC6xx = 63,
  FeaturePartwordAtomic = 64,
  FeatureQPX = 65,
  FeatureRecipPrec = 66,
  FeatureSPE = 67,
  FeatureSTFIWX = 68,
  FeatureSlowPOPCNTD = 69,
  FeatureVSX = 70,
};
} // end namespace PPC
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PPCFeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", { PPC::Feature64Bit }, { } },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", { PPC::Feature64BitRegs }, { } },
  { "altivec", "Enable Altivec instructions", { PPC::FeatureAltivec }, { PPC::FeatureHardFloat } },
  { "booke", "Enable Book E instructions", { PPC::FeatureBookE }, { PPC::FeatureICBT } },
  { "bpermd", "Enable the bpermd instruction", { PPC::FeatureBPERMD }, { } },
  { "cmpb", "Enable the cmpb instruction", { PPC::FeatureCMPB }, { } },
  { "crbits", "Use condition-register bits individually", { PPC::FeatureCRBits }, { } },
  { "crypto", "Enable POWER8 Crypto instructions", { PPC::FeatureP8Crypto }, { PPC::FeatureP8Altivec } },
  { "direct-move", "Enable Power8 direct move instructions", { PPC::FeatureDirectMove }, { PPC::FeatureVSX } },
  { "e500", "Enable E500/E500mc instructions", { PPC::FeatureE500 }, { } },
  { "extdiv", "Enable extended divide instructions", { PPC::FeatureExtDiv }, { } },
  { "fcpsgn", "Enable the fcpsgn instruction", { PPC::FeatureFCPSGN }, { PPC::FeatureHardFloat } },
  { "float128", "Enable the __float128 data type for IEEE-754R Binary128.", { PPC::FeatureFloat128 }, { PPC::FeatureVSX } },
  { "fpcvt", "Enable fc[ft]* (unsigned and single-precision) and lfiwzx instructions", { PPC::FeatureFPCVT }, { PPC::FeatureHardFloat } },
  { "fprnd", "Enable the fri[mnpz] instructions", { PPC::FeatureFPRND }, { PPC::FeatureHardFloat } },
  { "fre", "Enable the fre instruction", { PPC::FeatureFRE }, { PPC::FeatureHardFloat } },
  { "fres", "Enable the fres instruction", { PPC::FeatureFRES }, { PPC::FeatureHardFloat } },
  { "frsqrte", "Enable the frsqrte instruction", { PPC::FeatureFRSQRTE }, { PPC::FeatureHardFloat } },
  { "frsqrtes", "Enable the frsqrtes instruction", { PPC::FeatureFRSQRTES }, { PPC::FeatureHardFloat } },
  { "fsqrt", "Enable the fsqrt instruction", { PPC::FeatureFSqrt }, { PPC::FeatureHardFloat } },
  { "fusion", "Target supports add/load integer fusion.", { PPC::FeatureFusion }, { } },
  { "hard-float", "Enable floating-point instructions", { PPC::FeatureHardFloat }, { } },
  { "htm", "Enable Hardware Transactional Memory instructions", { PPC::FeatureHTM }, { } },
  { "icbt", "Enable icbt instruction", { PPC::FeatureICBT }, { } },
  { "invariant-function-descriptors", "Assume function descriptors are invariant", { PPC::FeatureInvariantFunctionDescriptors }, { } },
  { "isa-v30-instructions", "Enable instructions added in ISA 3.0.", { PPC::FeatureISA3_0 }, { } },
  { "isel", "Enable the isel instruction", { PPC::FeatureISEL }, { } },
  { "ldbrx", "Enable the ldbrx instruction", { PPC::FeatureLDBRX }, { } },
  { "lfiwax", "Enable the lfiwax instruction", { PPC::FeatureLFIWAX }, { PPC::FeatureHardFloat } },
  { "longcall", "Always use indirect calls", { PPC::FeatureLongCall }, { } },
  { "mfocrf", "Enable the MFOCRF instruction", { PPC::FeatureMFOCRF }, { } },
  { "msync", "Has only the msync instruction instead of sync", { PPC::FeatureMSYNC }, { PPC::FeatureBookE } },
  { "partword-atomics", "Enable l[bh]arx and st[bh]cx.", { PPC::FeaturePartwordAtomic }, { } },
  { "popcntd", "Enable the popcnt[dw] instructions", { PPC::FeaturePOPCNTD }, { } },
  { "power8-altivec", "Enable POWER8 Altivec instructions", { PPC::FeatureP8Altivec }, { PPC::FeatureAltivec } },
  { "power8-vector", "Enable POWER8 vector instructions", { PPC::FeatureP8Vector }, { PPC::FeatureVSX, PPC::FeatureP8Altivec } },
  { "power9-altivec", "Enable POWER9 Altivec instructions", { PPC::FeatureP9Altivec }, { PPC::FeatureISA3_0, PPC::FeatureP8Altivec } },
  { "power9-vector", "Enable POWER9 vector instructions", { PPC::FeatureP9Vector }, { PPC::FeatureISA3_0, PPC::FeatureP8Vector, PPC::FeatureP9Altivec } },
  { "ppc4xx", "Enable PPC 4xx instructions", { PPC::FeaturePPC4xx }, { } },
  { "ppc6xx", "Enable PPC 6xx instructions", { PPC::FeaturePPC6xx }, { } },
  { "qpx", "Enable QPX instructions", { PPC::FeatureQPX }, { PPC::FeatureHardFloat } },
  { "recipprec", "Assume higher precision reciprocal estimates", { PPC::FeatureRecipPrec }, { } },
  { "slow-popcntd", "Has slow popcnt[dw] instructions", { PPC::FeatureSlowPOPCNTD }, { } },
  { "spe", "Enable SPE instructions", { PPC::FeatureSPE }, { PPC::FeatureHardFloat } },
  { "stfiwx", "Enable the stfiwx instruction", { PPC::FeatureSTFIWX }, { PPC::FeatureHardFloat } },
  { "vsx", "Enable VSX instructions", { PPC::FeatureVSX }, { PPC::FeatureAltivec } },
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[] = {
  { "440", "Select the 440 processor", { PPC::Directive440, PPC::FeatureISEL, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMSYNC, PPC::FeatureMFTB }, { } },
  { "450", "Select the 450 processor", { PPC::Directive440, PPC::FeatureISEL, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMSYNC, PPC::FeatureMFTB }, { } },
  { "601", "Select the 601 processor", { PPC::Directive601, PPC::FeatureHardFloat }, { } },
  { "602", "Select the 602 processor", { PPC::Directive602, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "603", "Select the 603 processor", { PPC::Directive603, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "603e", "Select the 603e processor", { PPC::Directive603, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "603ev", "Select the 603ev processor", { PPC::Directive603, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "604", "Select the 604 processor", { PPC::Directive604, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "604e", "Select the 604e processor", { PPC::Directive604, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "620", "Select the 620 processor", { PPC::Directive620, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "7400", "Select the 7400 processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "7450", "Select the 7450 processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "750", "Select the 750 processor", { PPC::Directive750, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "970", "Select the 970 processor", { PPC::Directive970, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "a2", "Select the a2 processor", { PPC::DirectiveA2, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeatureSlowPOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "a2q", "Select the a2q processor", { PPC::DirectiveA2, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeatureSlowPOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureQPX, PPC::FeatureMFTB }, { } },
  { "e500mc", "Select the e500mc processor", { PPC::DirectiveE500mc, PPC::FeatureSTFIWX, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureISEL, PPC::FeatureMFTB }, { } },
  { "e5500", "Select the e5500 processor", { PPC::DirectiveE5500, PPC::FeatureMFOCRF, PPC::Feature64Bit, PPC::FeatureSTFIWX, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureISEL, PPC::FeatureMFTB }, { } },
  { "g3", "Select the g3 processor", { PPC::Directive750, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "g4", "Select the g4 processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "g4+", "Select the g4+ processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "g5", "Select the g5 processor", { PPC::Directive970, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureSTFIWX, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "generic", "Select the generic processor", { PPC::Directive32, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "ppc", "Select the ppc processor", { PPC::Directive32, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "ppc32", "Select the ppc32 processor", { PPC::Directive32, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "ppc64", "Select the ppc64 processor", { PPC::Directive64, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "ppc64le", "Select the ppc64le processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST, PPC::DirectivePwr8, PPC::FeatureP8Altivec, PPC::FeatureP8Vector, PPC::FeatureP8Crypto, PPC::FeatureHTM, PPC::FeatureDirectMove, PPC::FeatureICBT, PPC::FeaturePartwordAtomic, PPC::FeatureFusion }, { } },
  { "pwr3", "Select the pwr3 processor", { PPC::DirectivePwr3, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFOCRF, PPC::FeatureSTFIWX, PPC::Feature64Bit }, { } },
  { "pwr4", "Select the pwr4 processor", { PPC::DirectivePwr4, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "pwr5", "Select the pwr5 processor", { PPC::DirectivePwr5, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr5x", "Select the pwr5x processor", { PPC::DirectivePwr5x, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureSTFIWX, PPC::FeatureFPRND, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr6", "Select the pwr6 processor", { PPC::DirectivePwr6, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureCMPB, PPC::FeatureFPRND, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr6x", "Select the pwr6x processor", { PPC::DirectivePwr5x, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureCMPB, PPC::FeatureFPRND, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr7", "Select the pwr7 processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr8", "Select the pwr8 processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST, PPC::DirectivePwr8, PPC::FeatureP8Altivec, PPC::FeatureP8Vector, PPC::FeatureP8Crypto, PPC::FeatureHTM, PPC::FeatureDirectMove, PPC::FeatureICBT, PPC::FeaturePartwordAtomic, PPC::FeatureFusion }, { } },
  { "pwr9", "Select the pwr9 processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST, PPC::DirectivePwr8, PPC::FeatureP8Altivec, PPC::FeatureP8Vector, PPC::FeatureP8Crypto, PPC::FeatureHTM, PPC::FeatureDirectMove, PPC::FeatureICBT, PPC::FeaturePartwordAtomic, PPC::FeatureFusion, PPC::DirectivePwr9, PPC::FeatureP9Altivec, PPC::FeatureP9Vector, PPC::FeatureISA3_0 }, { } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "PPC440Itineraries"
namespace PPC440ItinerariesFU {
  const unsigned P440_DISS1 = 1 << 0;
  const unsigned P440_DISS2 = 1 << 1;
  const unsigned P440_FRACC = 1 << 2;
  const unsigned P440_IRACC = 1 << 3;
  const unsigned P440_IEXE1 = 1 << 4;
  const unsigned P440_IEXE2 = 1 << 5;
  const unsigned P440_IWB = 1 << 6;
  const unsigned P440_LRACC = 1 << 7;
  const unsigned P440_JEXE1 = 1 << 8;
  const unsigned P440_JEXE2 = 1 << 9;
  const unsigned P440_JWB = 1 << 10;
  const unsigned P440_AGEN = 1 << 11;
  const unsigned P440_CRD = 1 << 12;
  const unsigned P440_LWB = 1 << 13;
  const unsigned P440_FEXE1 = 1 << 14;
  const unsigned P440_FEXE2 = 1 << 15;
  const unsigned P440_FEXE3 = 1 << 16;
  const unsigned P440_FEXE4 = 1 << 17;
  const unsigned P440_FEXE5 = 1 << 18;
  const unsigned P440_FEXE6 = 1 << 19;
  const unsigned P440_FWB = 1 << 20;
  const unsigned P440_LWARX_Hold = 1 << 21;
} // end namespace PPC440ItinerariesFU

// Pipeline forwarding pathes for itineraries "PPC440Itineraries"
namespace PPC440ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned P440_GPR_Bypass = 1 << 0;
  const unsigned P440_FPR_Bypass = 1 << 1;
} // end namespace PPC440ItinerariesBypass

// Functional units for "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned G3_IU1 = 1 << 0;
  const unsigned G3_IU2 = 1 << 1;
  const unsigned G3_FPU1 = 1 << 2;
  const unsigned G3_BPU = 1 << 3;
  const unsigned G3_SRU = 1 << 4;
  const unsigned G3_SLU = 1 << 5;
} // end namespace G3ItinerariesFU

// Functional units for "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned G4_IU1 = 1 << 0;
  const unsigned G4_IU2 = 1 << 1;
  const unsigned G4_SLU = 1 << 2;
  const unsigned G4_SRU = 1 << 3;
  const unsigned G4_BPU = 1 << 4;
  const unsigned G4_FPU1 = 1 << 5;
  const unsigned G4_VIU1 = 1 << 6;
  const unsigned G4_VIU2 = 1 << 7;
  const unsigned G4_VPU = 1 << 8;
  const unsigned G4_VFPU = 1 << 9;
} // end namespace G4ItinerariesFU

// Functional units for "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned G4P_IU1 = 1 << 0;
  const unsigned G4P_IU2 = 1 << 1;
  const unsigned G4P_IU3 = 1 << 2;
  const unsigned G4P_IU4 = 1 << 3;
  const unsigned G4P_BPU = 1 << 4;
  const unsigned G4P_SLU = 1 << 5;
  const unsigned G4P_FPU1 = 1 << 6;
  const unsigned G4P_VFPU = 1 << 7;
  const unsigned G4P_VIU1 = 1 << 8;
  const unsigned G4P_VIU2 = 1 << 9;
  const unsigned G4P_VPU = 1 << 10;
} // end namespace G4PlusItinerariesFU

// Functional units for "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned G5_IU1 = 1 << 0;
  const unsigned G5_IU2 = 1 << 1;
  const unsigned G5_SLU = 1 << 2;
  const unsigned G5_BPU = 1 << 3;
  const unsigned G5_FPU1 = 1 << 4;
  const unsigned G5_FPU2 = 1 << 5;
  const unsigned G5_VFPU = 1 << 6;
  const unsigned G5_VIU1 = 1 << 7;
  const unsigned G5_VIU2 = 1 << 8;
  const unsigned G5_VPU = 1 << 9;
} // end namespace G5ItinerariesFU

// Functional units for "PPCA2Itineraries"
namespace PPCA2ItinerariesFU {
  const unsigned A2_XU = 1 << 0;
  const unsigned A2_FU = 1 << 1;
} // end namespace PPCA2ItinerariesFU

// Functional units for "PPCE500mcItineraries"
namespace PPCE500mcItinerariesFU {
  const unsigned E500_DIS0 = 1 << 0;
  const unsigned E500_DIS1 = 1 << 1;
  const unsigned E500_SFX0 = 1 << 2;
  const unsigned E500_SFX1 = 1 << 3;
  const unsigned E500_BU = 1 << 4;
  const unsigned E500_CFX_DivBypass = 1 << 5;
  const unsigned E500_CFX_0 = 1 << 6;
  const unsigned E500_LSU_0 = 1 << 7;
  const unsigned E500_FPU_0 = 1 << 8;
} // end namespace PPCE500mcItinerariesFU

// Pipeline forwarding pathes for itineraries "PPCE500mcItineraries"
namespace PPCE500mcItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E500_CR_Bypass = 1 << 0;
  const unsigned E500_GPR_Bypass = 1 << 1;
  const unsigned E500_FPR_Bypass = 1 << 2;
} // end namespace PPCE500mcItinerariesBypass

// Functional units for "PPCE5500Itineraries"
namespace PPCE5500ItinerariesFU {
  const unsigned E5500_DIS0 = 1 << 0;
  const unsigned E5500_DIS1 = 1 << 1;
  const unsigned E5500_SFX0 = 1 << 2;
  const unsigned E5500_SFX1 = 1 << 3;
  const unsigned E5500_BU = 1 << 4;
  const unsigned E5500_CFX_DivBypass = 1 << 5;
  const unsigned E5500_CFX_0 = 1 << 6;
  const unsigned E5500_CFX_1 = 1 << 7;
  const unsigned E5500_LSU_0 = 1 << 8;
  const unsigned E5500_FPU_0 = 1 << 9;
} // end namespace PPCE5500ItinerariesFU

// Pipeline forwarding pathes for itineraries "PPCE5500Itineraries"
namespace PPCE5500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E5500_CR_Bypass = 1 << 0;
  const unsigned E5500_GPR_Bypass = 1 << 1;
  const unsigned E5500_FPR_Bypass = 1 << 2;
} // end namespace PPCE5500ItinerariesBypass

// Functional units for "P8Itineraries"
namespace P8ItinerariesFU {
  const unsigned P8_DU1 = 1 << 0;
  const unsigned P8_DU2 = 1 << 1;
  const unsigned P8_DU3 = 1 << 2;
  const unsigned P8_DU4 = 1 << 3;
  const unsigned P8_DU5 = 1 << 4;
  const unsigned P8_DU6 = 1 << 5;
  const unsigned P8_DU7 = 1 << 6;
  const unsigned P8_DU8 = 1 << 7;
  const unsigned P8_LU1 = 1 << 8;
  const unsigned P8_LU2 = 1 << 9;
  const unsigned P8_LSU1 = 1 << 10;
  const unsigned P8_LSU2 = 1 << 11;
  const unsigned P8_FXU1 = 1 << 12;
  const unsigned P8_FXU2 = 1 << 13;
  const unsigned P8_FPU1 = 1 << 14;
  const unsigned P8_FPU2 = 1 << 15;
  const unsigned P8_CRU = 1 << 16;
  const unsigned P8_BRU = 1 << 17;
} // end namespace P8ItinerariesFU

// Functional units for "P7Itineraries"
namespace P7ItinerariesFU {
  const unsigned P7_DU1 = 1 << 0;
  const unsigned P7_DU2 = 1 << 1;
  const unsigned P7_DU3 = 1 << 2;
  const unsigned P7_DU4 = 1 << 3;
  const unsigned P7_DU5 = 1 << 4;
  const unsigned P7_DU6 = 1 << 5;
  const unsigned P7_LS1 = 1 << 6;
  const unsigned P7_LS2 = 1 << 7;
  const unsigned P7_FX1 = 1 << 8;
  const unsigned P7_FX2 = 1 << 9;
  const unsigned P7_VS1 = 1 << 10;
  const unsigned P7_VS2 = 1 << 11;
  const unsigned P7_CRU = 1 << 12;
  const unsigned P7_BRU = 1 << 13;
} // end namespace P7ItinerariesFU

extern const llvm::InstrStage PPCStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC | PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1 | PPC440ItinerariesFU::P440_JEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2 | PPC440ItinerariesFU::P440_JEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB | PPC440ItinerariesFU::P440_JWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-5
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6-10
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_AGEN, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_CRD, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11-15
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-20
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21-25
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 33, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-30
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 31-39
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-48
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 49-57
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_FEXE3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_LWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_JWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-73
  { 1, PPC440ItinerariesFU::P440_DISS1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPC440ItinerariesFU::P440_LWARX_Hold, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74-80
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81-85
  { 1, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 1, G3ItinerariesFU::G3_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 3, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 1, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 2, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 19, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 31, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 17, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 2, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95
  { 2, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96
  { 34, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97
  { 3, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98
  { 3, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99
  { 5, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100
  { 6, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101
  { 3, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102
  { 8, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103
  { 2, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104
  { 1, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105
  { 1, G4ItinerariesFU::G4_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106
  { 4, G4ItinerariesFU::G4_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107
  { 8, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108
  { 1, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109
  { 2, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110
  { 19, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111
  { 1, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112
  { 31, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113
  { 17, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 2, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115
  { 3, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116
  { 34, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117
  { 3, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118
  { 3, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119
  { 1, G4ItinerariesFU::G4_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120
  { 5, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121
  { 6, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 3, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123
  { 1, G4ItinerariesFU::G4_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 124
  { 5, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125
  { 8, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 126
  { 2, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127
  { 1, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128
  { 1, G4PlusItinerariesFU::G4P_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129
  { 4, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130
  { 35, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131
  { 2, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132
  { 3, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133
  { 23, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 134
  { 5, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135
  { 35, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136
  { 21, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137
  { 3, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 138
  { 0, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139
  { 4, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140
  { 37, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141
  { 4, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 142
  { 5, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143
  { 1, G4PlusItinerariesFU::G4P_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 144
  { 2, G4PlusItinerariesFU::G4P_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145
  { 2, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146
  { 2, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147
  { 2, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 148
  { 1, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 8, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 35, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 3, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 4, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 3, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 68, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 36, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156
  { 6, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 8, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 33, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 40, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 40, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 11, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 5, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 64, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164
  { 7, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165
  { 2, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166
  { 3, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167
  { 2, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168
  { 3, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169
  { 6, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170
  { 10, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171
  { 2, G5ItinerariesFU::G5_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172
  { 8, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173
  { 5, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174
  { 4, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175
  { 3, G5ItinerariesFU::G5_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176
  { 4, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177
  { 1, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178
  { 1, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179
  { 2, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180
  { 1, PPCA2ItinerariesFU::A2_XU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 181
  { 1, PPCA2ItinerariesFU::A2_FU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 183-184
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 185-186
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 187-188
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500mcItinerariesFU::E500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 189-191
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-193
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-195
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196-197
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 198-199
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-201
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-204
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 205-206
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, PPCE500mcItinerariesFU::E500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 207-208
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-210
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0 | PPCE500mcItinerariesFU::E500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 211-212
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 213-214
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 215-216
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 217-218
  { 1, PPCE500mcItinerariesFU::E500_DIS0 | PPCE500mcItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 219-220
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-222
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 223-224
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 225-226
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227-229
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230-232
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 233-234
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 31, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-238
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-240
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 241-243
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 244-245
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 246-248
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 249-250
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 251-252
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 253-254
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 255-256
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 257-258
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 259-261
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 262-263
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 264-265
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 266-267
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 268-269
  { 1, P8ItinerariesFU::P8_DU7 | P8ItinerariesFU::P8_DU8, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 270-271
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 272-273
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 274-275
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 276-277
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-279
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 23, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 280-281
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 15, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 282-283
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 284-285
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 286-288
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 289-291
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 292-296
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 297-300
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 301-307
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 308-309
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 310-313
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 314-317
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 318-322
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 323-331
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 332-335
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 336-337
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 338-339
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 340-341
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 342-344
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 345-349
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 350-357
  { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 358-360
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 361-364
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 365-373
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2 | P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 374-375
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 376-377
  { 1, P7ItinerariesFU::P7_DU5 | P7ItinerariesFU::P7_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 378-379
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 380-381
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 382-383
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 384-385
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 386-388
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 36, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 389-391
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 392-393
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 394-396
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 397-399
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 400-404
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 405-408
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 409-415
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 416-419
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 420-424
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 425-432
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 433-438
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 439-440
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 441-442
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 443-444
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 445-447
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 448-452
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 453-459
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned PPCOperandCycles[] = {
  0, // No itinerary
  2,   0,   0, // 1-3
  2,   0,   0, // 4-6
  4,   0, // 7-8
  2,   0,   0, // 9-11
  4,   0,   0, // 12-14
  1,   1, // 15-16
  5,   1,   1, // 17-19
  36,   0,   0, // 20-22
  6,   0,   0, // 23-25
  6,   0,   0, // 26-28
  6,   0,   0, // 29-31
  31,   0,   0, // 32-34
  19,   0,   0, // 35-37
  6,   0,   0,   0, // 38-41
  4,   1,   1, // 42-44
  1,   1,   1, // 45-47
  2,   0,   0,   0, // 48-51
  4,   1,   1, // 52-54
  5,   2,   1,   1, // 55-58
  5,   2,   1,   1, // 59-62
  5,   1,   1, // 63-65
  5,   2,   1,   1, // 66-69
  5,   2,   1,   1, // 70-73
  4,   1,   1, // 74-76
  4,   1,   1, // 77-79
  4,   1,   1, // 80-82
  4,   1,   1, // 83-85
  4,   0,   0, // 86-88
  4,   0,   0, // 89-91
  4,   0, // 92-93
  6,   0, // 94-95
  3,   0,   0, // 96-98
  3,   0, // 99-100
  2,   0, // 101-102
  6,   0, // 103-104
  6,   0, // 105-106
  3,   0,   0, // 107-109
  2,   0, // 110-111
  5,   0, // 112-113
  4,   0,   0, // 114-116
  4,   0,   0, // 117-119
  4,   0,   0, // 120-122
  1,   1,   1, // 123-125
  2,   1,   1,   1, // 126-129
  4,   0, // 130-131
  2,   0,   0, // 132-134
  2,   0,   0, // 135-137
  4,   1,   1, // 138-140
  2,   1,   1,   1, // 141-144
  4,   1,   1, // 145-147
  4,   1,   1, // 148-150
  2,   1,   1,   1, // 151-154
  2,   1,   1,   1, // 155-158
  2,   0, // 159-160
  6,   0,   0, // 161-163
  6,   0,   0, // 164-166
  4,   0,   0, // 167-169
  4,   0,   0, // 170-172
  6,   0,   0, // 173-175
  6,   0,   0, // 176-178
  6,   0,   0, // 179-181
  6,   0,   0,   0, // 182-185
  6,   0,   0,   0, // 186-189
  6,   0,   0, // 190-192
  5,   1,   1, // 193-195
  5,   1,   1, // 196-198
  5,   1,   1, // 199-201
  5,   1,   1, // 202-204
  5,   1,   1, // 205-207
  1,   1,   1, // 208-210
  1,   1,   1, // 211-213
  36,   0,   0, // 214-216
  36,   0,   0, // 217-219
  36,   0,   0, // 220-222
  4,   0,   0, // 223-225
  4,   0,   0, // 226-228
  31,   0,   0, // 229-231
  31,   0,   0, // 232-234
  31,   0,   0, // 235-237
  19,   0,   0, // 238-240
  19,   0,   0, // 241-243
  19,   0,   0, // 244-246
  19,   0,   0, // 247-249
  31,   0,   0, // 250-252
  5,   2,   1,   1, // 253-256
  5,   2,   1,   1, // 257-260
  5,   2,   1,   1, // 261-264
  5,   2,   1,   1, // 265-268
  1,   0,   0, // 269-271
  2,   0,   0, // 272-274
  6,   0,   0, // 275-277
  6, // 278
  2,   0,   0, // 279-281
  1,   0,   0, // 282-284
  1,   0,   0, // 285-287
  6,   0,   0, // 288-290
  71,   0,   0, // 291-293
  39,   0,   0, // 294-296
  2,   0,   0, // 297-299
  6,   0,   0, // 300-302
  6,   0,   0, // 303-305
  5,   0,   0, // 306-308
  72,   0,   0, // 309-311
  59,   0,   0, // 312-314
  6,   0,   0,   0, // 315-318
  69,   0,   0, // 319-321
  65,   0,   0, // 322-324
  16,   0,   0, // 325-327
  0,   0,   0, // 328-330
  2,   0,   0,   0, // 331-334
  16, // 335
  82,   0,   0, // 336-338
  6,   8,   0,   0, // 339-342
  6,   8,   0,   0, // 343-346
  6,   0,   0, // 347-349
  6,   0,   0, // 350-352
  7,   0,   0, // 353-355
  7,   9,   0,   0, // 356-359
  7,   9,   0,   0, // 360-363
  6,   0,   0, // 364-366
  6,   8,   0,   0, // 367-370
  6,   8,   0,   0, // 371-374
  5,   0,   0, // 375-377
  1,   0,   0, // 378-380
  6,   0, // 381-382
  6,   0, // 383-384
  4,   0, // 385-386
  1,   0, // 387-388
  4,   0, // 389-390
  6,   0, // 391-392
  16,   0, // 393-394
  5,   0,   0, // 395-397
  5,   0,   0, // 398-400
  6,   0,   0, // 401-403
  0,   0,   0, // 404-406
  2,   0,   0,   0, // 407-410
  16, // 411
  2,   0,   0, // 412-414
  2,   0,   0, // 415-417
  2,   0,   0, // 418-420
  82,   0,   0, // 421-423
  2,   0,   0,   0, // 424-427
  0,   0,   0, // 428-430
  82,   0,   0, // 431-433
  2,   0,   0,   0, // 434-437
  2,   0,   0,   0, // 438-441
  2,   0, // 442-443
  2,   0, // 444-445
  5,   0,   0, // 446-448
  5,   0,   0, // 449-451
  5,   0,   0, // 452-454
  1,   0,   0, // 455-457
  2,   0,   0, // 458-460
  2,   0,   0, // 461-463
  2,   0,   0, // 464-466
  2,   0,   0, // 467-469
  6,   0,   0, // 470-472
  5,   0,   0, // 473-475
  6,   0,   0, // 476-478
  6,   0,   0,   0, // 479-482
  6,   0,   0,   0, // 483-486
  5,   0,   0, // 487-489
  7,   0,   0, // 490-492
  7,   0,   0, // 493-495
  7,   0,   0, // 496-498
  7,   0,   0, // 499-501
  7,   0,   0, // 502-504
  0,   0,   0, // 505-507
  0,   0,   0, // 508-510
  39,   0,   0, // 511-513
  39,   0,   0, // 514-516
  71,   0,   0, // 517-519
  71,   0,   0, // 520-522
  71,   0,   0, // 523-525
  39,   0,   0, // 526-528
  71,   0,   0, // 529-531
  1,   0,   0, // 532-534
  5,   0,   0, // 535-537
  72,   0,   0, // 538-540
  72,   0,   0, // 541-543
  72,   0,   0, // 544-546
  59,   0,   0, // 547-549
  59,   0,   0, // 550-552
  59,   0,   0, // 553-555
  59,   0,   0, // 556-558
  72,   0,   0, // 559-561
  7,   9,   0,   0, // 562-565
  7,   9,   0,   0, // 566-569
  7,   9,   0,   0, // 570-573
  7,   9,   0,   0, // 574-577
  4,   1,   1, // 578-580
  4,   1,   1, // 581-583
  4,   1, // 584-585
  5,   1,   1, // 586-588
  4,   1,   1, // 589-591
  6,   1, // 592-593
  6,   1, // 594-595
  17,   1,   1, // 596-598
  11,   1,   1, // 599-601
  13,   1,   1, // 602-604
  11,   1,   1, // 605-607
  71,   1,   1, // 608-610
  41,   1,   1, // 611-613
  13,   1,   1,   1, // 614-617
  6,   1, // 618-619
  6,   1, // 620-621
  4,   1,   1,   1, // 622-625
  6,   1,   1, // 626-628
  6,   1, // 629-630
  6,   1, // 631-632
  7,   1,   1, // 633-635
  7,   1,   1, // 636-638
  7,   1,   1, // 639-641
  6,   1, // 642-643
  6,   1, // 644-645
  6,   1, // 646-647
  7,   1, // 648-649
  4,   1, // 650-651
  4,   1,   1, // 652-654
  8,   1, // 655-656
  4,   1, // 657-658
  11, // 659
  7,   1, // 660-661
  8,   1, // 662-663
  7,   1, // 664-665
  7,   1, // 666-667
  7,   1, // 668-669
  4,   1, // 670-671
  11,   1,   1, // 672-674
  5,   1, // 675-676
  4,   1, // 677-678
  5,   1, // 679-680
  7,   1,   1, // 681-683
  7,   1,   1, // 684-686
  7,   1,   1, // 687-689
  6,   1,   1, // 690-692
  6,   1,   1, // 693-695
  4,   1,   1, // 696-698
  4,   1,   1, // 699-701
  6,   1, // 702-703
  6,   1, // 704-705
  5,   1, // 706-707
  11,   1,   1, // 708-710
  11,   1,   1, // 711-713
  4,   1, // 714-715
  4,   1,   1, // 716-718
  11,   1,   1, // 719-721
  11,   1,   1, // 722-724
  11,   1,   1, // 725-727
  13,   1,   1,   1, // 728-731
  13,   1,   1,   1, // 732-735
  11,   1,   1, // 736-738
  7,   1,   1, // 739-741
  7,   1,   1, // 742-744
  7,   1,   1, // 745-747
  7,   1,   1, // 748-750
  7,   1,   1, // 751-753
  6,   1,   1, // 754-756
  6,   1,   1, // 757-759
  17,   1,   1, // 760-762
  17,   1,   1, // 763-765
  17,   1,   1, // 766-768
  4,   1,   1, // 769-771
  4,   1, // 772-773
  71,   1,   1, // 774-776
  71,   1,   1, // 777-779
  71,   1,   1, // 780-782
  41,   1,   1, // 783-785
  41,   1,   1, // 786-788
  41,   1,   1, // 789-791
  41,   1,   1, // 792-794
  71,   1,   1, // 795-797
  7,   1,   1, // 798-800
  7,   1,   1, // 801-803
  7,   1,   1, // 804-806
  7,   1,   1, // 807-809
  5,   2,   2, // 810-812
  5,   2,   2, // 813-815
  5,   2, // 816-817
  6,   2,   2, // 818-820
  5,   2,   2, // 821-823
  7,   2, // 824-825
  7,   2, // 826-827
  7,   2, // 828-829
  30,   2,   2, // 830-832
  20,   2,   2, // 833-835
  5,   2,   2, // 836-838
  11,   2,   2, // 839-841
  11,   2,   2, // 842-844
  11,   2,   2, // 845-847
  39,   2,   2, // 848-850
  24,   2,   2, // 851-853
  11,   2,   2,   2, // 854-857
  7,   2, // 858-859
  7,   2, // 860-861
  5,   2,   2,   2, // 862-865
  7,   2,   2, // 866-868
  7,   2, // 869-870
  7,   2, // 871-872
  7,   2, // 873-874
  7,   2, // 875-876
  7,   2, // 877-878
  8,   2,   2, // 879-881
  8,   2,   2, // 882-884
  8,   2,   2, // 885-887
  7,   2, // 888-889
  7,   2, // 890-891
  7,   2, // 892-893
  8,   2, // 894-895
  9,   2,   2, // 896-898
  5,   2, // 899-900
  5,   2,   2, // 901-903
  9,   2, // 904-905
  5, // 906
  11, // 907
  9,   2, // 908-909
  8,   2, // 910-911
  8,   2, // 912-913
  5, // 914
  11,   2,   2, // 915-917
  6,   2, // 918-919
  5, // 920
  8,   2,   2, // 921-923
  8,   2,   2, // 924-926
  8,   2,   2, // 927-929
  7,   2,   2, // 930-932
  7,   2,   2, // 933-935
  6,   2,   2, // 936-938
  5,   2,   2, // 939-941
  6,   2,   2, // 942-944
  7,   2, // 945-946
  7,   2, // 947-948
  7,   2, // 949-950
  7,   2, // 951-952
  7,   2, // 953-954
  7,   2, // 955-956
  6,   2, // 957-958
  11,   2,   2, // 959-961
  11,   2,   2, // 962-964
  5,   2, // 965-966
  5,   2,   2, // 967-969
  6,   2,   2, // 970-972
  5,   2,   2, // 973-975
  6,   2,   2, // 976-978
  5,   2,   2, // 979-981
  11,   2,   2, // 982-984
  11,   2,   2, // 985-987
  11,   2,   2, // 988-990
  11,   2,   2,   2, // 991-994
  11,   2,   2,   2, // 995-998
  11,   2,   2, // 999-1001
  8,   2,   2, // 1002-1004
  8,   2,   2, // 1005-1007
  8,   2,   2, // 1008-1010
  8,   2,   2, // 1011-1013
  8,   2,   2, // 1014-1016
  7,   2,   2, // 1017-1019
  7,   2,   2, // 1020-1022
  20,   2,   2, // 1023-1025
  20,   2,   2, // 1026-1028
  30,   2,   2, // 1029-1031
  30,   2,   2, // 1032-1034
  30,   2,   2, // 1035-1037
  20,   2,   2, // 1038-1040
  30,   2,   2, // 1041-1043
  5,   2,   2, // 1044-1046
  5,   2, // 1047-1048
  39,   2,   2, // 1049-1051
  39,   2,   2, // 1052-1054
  39,   2,   2, // 1055-1057
  24,   2,   2, // 1058-1060
  24,   2,   2, // 1061-1063
  24,   2,   2, // 1064-1066
  24,   2,   2, // 1067-1069
  39,   2,   2, // 1070-1072
  8,   2,   2, // 1073-1075
  8,   2,   2, // 1076-1078
  8,   2,   2, // 1079-1081
  8,   2,   2, // 1082-1084
  1,   1,   1, // 1085-1087
  1,   1,   1, // 1088-1090
  3,   1,   1, // 1091-1093
  6,   1,   1, // 1094-1096
  1,   1,   1, // 1097-1099
  3,   1,   1, // 1100-1102
  2,   1,   1, // 1103-1105
  2,   1,   1, // 1106-1108
  23,   1,   1, // 1109-1111
  15,   1,   1, // 1112-1114
  5,   1,   1, // 1115-1117
  5,   1,   1, // 1118-1120
  8,   1,   1, // 1121-1123
  33,   1,   1, // 1124-1126
  27,   1,   1, // 1127-1129
  5,   1,   1,   1, // 1130-1133
  44,   1,   1, // 1134-1136
  32,   1,   1, // 1137-1139
  1,   1,   1, // 1140-1142
  1,   1,   1,   1, // 1143-1146
  3,   1,   1, // 1147-1149
  2,   2,   1,   1, // 1150-1153
  3,   3,   1,   1, // 1154-1157
  3,   1,   1, // 1158-1160
  2,   2,   1,   1, // 1161-1164
  3,   3,   1,   1, // 1165-1168
  3,   1,   1, // 1169-1171
  3,   3,   1,   1, // 1172-1175
  3,   3,   1,   1, // 1176-1179
  3,   1,   1, // 1180-1182
  4,   4,   1,   1, // 1183-1186
  4,   4,   1,   1, // 1187-1190
  2,   1,   1, // 1191-1193
  3,   1,   1, // 1194-1196
  3,   1,   1, // 1197-1199
  3,   1, // 1200-1201
  6,   1, // 1202-1203
  3,   1, // 1204-1205
  2,   1,   1, // 1206-1208
  4,   1, // 1209-1210
  4,   1,   1, // 1211-1213
  4,   1,   1, // 1214-1216
  4,   1,   1, // 1217-1219
  3,   1,   1, // 1220-1222
  1,   1,   1, // 1223-1225
  2,   1,   1,   1, // 1226-1229
  1,   1,   1, // 1230-1232
  1,   1,   1, // 1233-1235
  1,   1,   1, // 1236-1238
  1,   1,   1, // 1239-1241
  1,   1,   1, // 1242-1244
  2,   1,   1,   1, // 1245-1248
  2,   1,   1,   1, // 1249-1252
  1,   1, // 1253-1254
  1,   1, // 1255-1256
  6,   1,   1, // 1257-1259
  6,   1,   1, // 1260-1262
  2,   1,   1, // 1263-1265
  6,   1,   1, // 1266-1268
  3,   1,   1, // 1269-1271
  8,   1,   1, // 1272-1274
  6,   1,   1, // 1275-1277
  6,   1,   1, // 1278-1280
  8,   1,   1, // 1281-1283
  3,   1,   1, // 1284-1286
  3,   1, // 1287-1288
  1,   1,   1, // 1289-1291
  6,   1,   1, // 1292-1294
  1,   1,   1, // 1295-1297
  6,   1,   1, // 1298-1300
  5,   1,   1, // 1301-1303
  6,   1,   1, // 1304-1306
  2,   1,   1, // 1307-1309
  6,   1,   1, // 1310-1312
  8,   1,   1, // 1313-1315
  6,   1,   1, // 1316-1318
  2,   1,   1, // 1319-1321
  5,   1,   1, // 1322-1324
  5,   1,   1,   1, // 1325-1328
  6,   1,   1, // 1329-1331
  5,   1,   1,   1, // 1332-1335
  6,   1,   1, // 1336-1338
  6,   1,   1, // 1339-1341
  2,   1,   1, // 1342-1344
  3,   1,   1, // 1345-1347
  8,   1,   1, // 1348-1350
  6,   1,   1, // 1351-1353
  6,   1,   1, // 1354-1356
  6,   1,   1, // 1357-1359
  6,   1,   1, // 1360-1362
  3,   1,   1, // 1363-1365
  3,   1,   1, // 1366-1368
  3,   1,   1, // 1369-1371
  3,   1,   1, // 1372-1374
  3,   1,   1, // 1375-1377
  1,   1,   1, // 1378-1380
  1,   1,   1, // 1381-1383
  15,   1,   1, // 1384-1386
  15,   1,   1, // 1387-1389
  23,   1,   1, // 1390-1392
  23,   1,   1, // 1393-1395
  23,   1,   1, // 1396-1398
  15,   1,   1, // 1399-1401
  23,   1,   1, // 1402-1404
  3,   1, // 1405-1406
  3,   1,   1, // 1407-1409
  33,   1,   1, // 1410-1412
  33,   1,   1, // 1413-1415
  33,   1,   1, // 1416-1418
  27,   1,   1, // 1419-1421
  27,   1,   1, // 1422-1424
  27,   1,   1, // 1425-1427
  27,   1,   1, // 1428-1430
  33,   1,   1, // 1431-1433
  3,   3,   1,   1, // 1434-1437
  3,   3,   1,   1, // 1438-1441
  3,   3,   1,   1, // 1442-1445
  3,   3,   1,   1, // 1446-1449
  6,   1,   1, // 1450-1452
  1,   1,   1, // 1453-1455
  1,   1,   1, // 1456-1458
  3,   1,   1, // 1459-1461
  6,   1,   1, // 1462-1464
  1,   1,   1, // 1465-1467
  3,   1,   1, // 1468-1470
  2,   1,   1, // 1471-1473
  2,   1,   1, // 1474-1476
  68,   1,   1, // 1477-1479
  36,   1,   1, // 1480-1482
  5,   1,   1, // 1483-1485
  5,   1,   1, // 1486-1488
  8,   1,   1, // 1489-1491
  33,   1,   1, // 1492-1494
  27,   1,   1, // 1495-1497
  5,   1,   1,   1, // 1498-1501
  44,   1,   1, // 1502-1504
  32,   1,   1, // 1505-1507
  1,   1,   1, // 1508-1510
  1,   1,   1,   1, // 1511-1514
  3,   1,   1, // 1515-1517
  2,   2,   1,   1, // 1518-1521
  3,   3,   1,   1, // 1522-1525
  3,   1,   1, // 1526-1528
  2,   2,   1,   1, // 1529-1532
  3,   3,   1,   1, // 1533-1536
  3,   1,   1, // 1537-1539
  3,   3,   1,   1, // 1540-1543
  3,   3,   1,   1, // 1544-1547
  3,   1,   1, // 1548-1550
  4,   4,   1,   1, // 1551-1554
  4,   4,   1,   1, // 1555-1558
  2,   1,   1, // 1559-1561
  3,   1,   1, // 1562-1564
  3,   1,   1, // 1565-1567
  3,   1, // 1568-1569
  6,   1, // 1570-1571
  3,   1, // 1572-1573
  2,   1,   1, // 1574-1576
  4,   1, // 1577-1578
  4,   1,   1, // 1579-1581
  4,   1,   1, // 1582-1584
  4,   1,   1, // 1585-1587
  3,   1,   1, // 1588-1590
  1,   1,   1, // 1591-1593
  2,   1,   1,   1, // 1594-1597
  1,   1,   1, // 1598-1600
  1,   1,   1, // 1601-1603
  1,   1,   1, // 1604-1606
  1,   1,   1, // 1607-1609
  1,   1,   1, // 1610-1612
  1,   1,   1, // 1613-1615
  2,   1,   1,   1, // 1616-1619
  2,   1,   1,   1, // 1620-1623
  1,   1, // 1624-1625
  1,   1, // 1626-1627
  6,   1,   1, // 1628-1630
  6,   1,   1, // 1631-1633
  2,   1,   1, // 1634-1636
  6,   1,   1, // 1637-1639
  3,   1,   1, // 1640-1642
  8,   1,   1, // 1643-1645
  6,   1,   1, // 1646-1648
  6,   1,   1, // 1649-1651
  8,   1,   1, // 1652-1654
  3,   1,   1, // 1655-1657
  3,   1, // 1658-1659
  1,   1,   1, // 1660-1662
  6,   1,   1, // 1663-1665
  1,   1,   1, // 1666-1668
  6,   1,   1, // 1669-1671
  5,   1,   1, // 1672-1674
  6,   1,   1, // 1675-1677
  2,   1,   1, // 1678-1680
  6,   1,   1, // 1681-1683
  8,   1,   1, // 1684-1686
  6,   1,   1, // 1687-1689
  2,   1,   1, // 1690-1692
  5,   1,   1, // 1693-1695
  5,   1,   1,   1, // 1696-1699
  6,   1,   1, // 1700-1702
  5,   1,   1,   1, // 1703-1706
  6,   1,   1, // 1707-1709
  6,   1,   1, // 1710-1712
  2,   1,   1, // 1713-1715
  3,   1,   1, // 1716-1718
  8,   1,   1, // 1719-1721
  6,   1,   1, // 1722-1724
  6,   1,   1, // 1725-1727
  6,   1,   1, // 1728-1730
  6,   1,   1, // 1731-1733
  3,   1,   1, // 1734-1736
  3,   1,   1, // 1737-1739
  3,   1,   1, // 1740-1742
  3,   1,   1, // 1743-1745
  3,   1,   1, // 1746-1748
  1,   1,   1, // 1749-1751
  1,   1,   1, // 1752-1754
  36,   1,   1, // 1755-1757
  36,   1,   1, // 1758-1760
  68,   1,   1, // 1761-1763
  68,   1,   1, // 1764-1766
  68,   1,   1, // 1767-1769
  36,   1,   1, // 1770-1772
  68,   1,   1, // 1773-1775
  3,   1, // 1776-1777
  3,   1,   1, // 1778-1780
  33,   1,   1, // 1781-1783
  33,   1,   1, // 1784-1786
  33,   1,   1, // 1787-1789
  27,   1,   1, // 1790-1792
  27,   1,   1, // 1793-1795
  27,   1,   1, // 1796-1798
  27,   1,   1, // 1799-1801
  33,   1,   1, // 1802-1804
  3,   3,   1,   1, // 1805-1808
  3,   3,   1,   1, // 1809-1812
  3,   3,   1,   1, // 1813-1816
  3,   3,   1,   1, // 1817-1820
  6,   1,   1, // 1821-1823
  0 // End operand cycles
};
extern const unsigned PPCForwardingPaths[] = {
 0, // No itinerary
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 1-3
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 4-6
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 7-8
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 9-11
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 12-14
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 15-16
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 17-19
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 20-22
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 23-25
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 26-28
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 29-31
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 32-34
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 35-37
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 38-41
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 42-44
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 45-47
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::NoBypass, // 48-51
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 52-54
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 55-58
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 59-62
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 63-65
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 66-69
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 70-73
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 74-76
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 77-79
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 80-82
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 83-85
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 86-88
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 89-91
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 92-93
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 94-95
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 96-98
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 99-100
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 101-102
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 103-104
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 105-106
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 107-109
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 110-111
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 112-113
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 114-116
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 117-119
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 120-122
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 123-125
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 126-129
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 130-131
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 132-134
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 135-137
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 138-140
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 141-144
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 145-147
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 148-150
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 151-154
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 155-158
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 159-160
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 161-163
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 164-166
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 167-169
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 170-172
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 173-175
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 176-178
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 179-181
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 182-185
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 186-189
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 190-192
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 193-195
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 196-198
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 199-201
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 202-204
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 205-207
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 208-210
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 211-213
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 214-216
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 217-219
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 220-222
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 223-225
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 226-228
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 229-231
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 232-234
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 235-237
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 238-240
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 241-243
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 244-246
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 247-249
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 250-252
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 253-256
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 257-260
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 261-264
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 265-268
 0,  0,  0, // 269-271
 0,  0,  0, // 272-274
 0,  0,  0, // 275-277
 0, // 278
 0,  0,  0, // 279-281
 0,  0,  0, // 282-284
 0,  0,  0, // 285-287
 0,  0,  0, // 288-290
 0,  0,  0, // 291-293
 0,  0,  0, // 294-296
 0,  0,  0, // 297-299
 0,  0,  0, // 300-302
 0,  0,  0, // 303-305
 0,  0,  0, // 306-308
 0,  0,  0, // 309-311
 0,  0,  0, // 312-314
 0,  0,  0,  0, // 315-318
 0,  0,  0, // 319-321
 0,  0,  0, // 322-324
 0,  0,  0, // 325-327
 0,  0,  0, // 328-330
 0,  0,  0,  0, // 331-334
 0, // 335
 0,  0,  0, // 336-338
 0,  0,  0,  0, // 339-342
 0,  0,  0,  0, // 343-346
 0,  0,  0, // 347-349
 0,  0,  0, // 350-352
 0,  0,  0, // 353-355
 0,  0,  0,  0, // 356-359
 0,  0,  0,  0, // 360-363
 0,  0,  0, // 364-366
 0,  0,  0,  0, // 367-370
 0,  0,  0,  0, // 371-374
 0,  0,  0, // 375-377
 0,  0,  0, // 378-380
 0,  0, // 381-382
 0,  0, // 383-384
 0,  0, // 385-386
 0,  0, // 387-388
 0,  0, // 389-390
 0,  0, // 391-392
 0,  0, // 393-394
 0,  0,  0, // 395-397
 0,  0,  0, // 398-400
 0,  0,  0, // 401-403
 0,  0,  0, // 404-406
 0,  0,  0,  0, // 407-410
 0, // 411
 0,  0,  0, // 412-414
 0,  0,  0, // 415-417
 0,  0,  0, // 418-420
 0,  0,  0, // 421-423
 0,  0,  0,  0, // 424-427
 0,  0,  0, // 428-430
 0,  0,  0, // 431-433
 0,  0,  0,  0, // 434-437
 0,  0,  0,  0, // 438-441
 0,  0, // 442-443
 0,  0, // 444-445
 0,  0,  0, // 446-448
 0,  0,  0, // 449-451
 0,  0,  0, // 452-454
 0,  0,  0, // 455-457
 0,  0,  0, // 458-460
 0,  0,  0, // 461-463
 0,  0,  0, // 464-466
 0,  0,  0, // 467-469
 0,  0,  0, // 470-472
 0,  0,  0, // 473-475
 0,  0,  0, // 476-478
 0,  0,  0,  0, // 479-482
 0,  0,  0,  0, // 483-486
 0,  0,  0, // 487-489
 0,  0,  0, // 490-492
 0,  0,  0, // 493-495
 0,  0,  0, // 496-498
 0,  0,  0, // 499-501
 0,  0,  0, // 502-504
 0,  0,  0, // 505-507
 0,  0,  0, // 508-510
 0,  0,  0, // 511-513
 0,  0,  0, // 514-516
 0,  0,  0, // 517-519
 0,  0,  0, // 520-522
 0,  0,  0, // 523-525
 0,  0,  0, // 526-528
 0,  0,  0, // 529-531
 0,  0,  0, // 532-534
 0,  0,  0, // 535-537
 0,  0,  0, // 538-540
 0,  0,  0, // 541-543
 0,  0,  0, // 544-546
 0,  0,  0, // 547-549
 0,  0,  0, // 550-552
 0,  0,  0, // 553-555
 0,  0,  0, // 556-558
 0,  0,  0, // 559-561
 0,  0,  0,  0, // 562-565
 0,  0,  0,  0, // 566-569
 0,  0,  0,  0, // 570-573
 0,  0,  0,  0, // 574-577
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 578-580
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 581-583
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 584-585
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 586-588
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 589-591
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 592-593
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 594-595
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 596-598
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 599-601
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 602-604
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 605-607
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 608-610
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 611-613
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 614-617
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 618-619
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 620-621
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 622-625
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 626-628
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 629-630
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 631-632
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 633-635
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 636-638
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 639-641
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 642-643
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 644-645
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 646-647
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 648-649
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 650-651
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass,  0, // 652-654
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 655-656
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 657-658
PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 659
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 660-661
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 662-663
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 664-665
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 666-667
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 668-669
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 670-671
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 672-674
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 675-676
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 677-678
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 679-680
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 681-683
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 684-686
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 687-689
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 690-692
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 693-695
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 696-698
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 699-701
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 702-703
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 704-705
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 706-707
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 708-710
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 711-713
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 714-715
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass,  0, // 716-718
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 719-721
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 722-724
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 725-727
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 728-731
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 732-735
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 736-738
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 739-741
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 742-744
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 745-747
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 748-750
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 751-753
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 754-756
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 757-759
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 760-762
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 763-765
PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 766-768
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass,  0, // 769-771
PPCE500mcItinerariesBypass::E500_CR_Bypass, PPCE500mcItinerariesBypass::E500_CR_Bypass, // 772-773
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 774-776
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 777-779
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 780-782
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 783-785
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 786-788
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 789-791
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 792-794
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_FPR_Bypass, // 795-797
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 798-800
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 801-803
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 804-806
PPCE500mcItinerariesBypass::E500_FPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, PPCE500mcItinerariesBypass::E500_GPR_Bypass, // 807-809
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 810-812
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 813-815
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 816-817
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 818-820
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 821-823
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 824-825
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 826-827
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 828-829
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 830-832
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 833-835
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 836-838
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 839-841
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 842-844
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 845-847
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 848-850
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 851-853
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 854-857
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 858-859
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 860-861
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 862-865
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 866-868
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 869-870
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 871-872
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 873-874
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 875-876
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 877-878
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 879-881
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 882-884
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 885-887
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 888-889
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 890-891
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 892-893
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 894-895
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 896-898
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 899-900
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 901-903
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 904-905
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 906
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 907
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 908-909
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 910-911
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 912-913
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 914
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 915-917
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 918-919
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 920
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 921-923
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 924-926
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 927-929
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 930-932
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 933-935
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 936-938
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 939-941
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 942-944
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 945-946
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 947-948
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 949-950
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 951-952
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 953-954
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 955-956
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 957-958
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 959-961
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 962-964
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 965-966
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 967-969
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 970-972
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 973-975
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 976-978
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 979-981
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 982-984
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 985-987
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 988-990
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 991-994
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 995-998
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 999-1001
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1002-1004
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1005-1007
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1008-1010
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1011-1013
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1014-1016
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1017-1019
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1020-1022
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1023-1025
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1026-1028
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1029-1031
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1032-1034
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1035-1037
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1038-1040
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1041-1043
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 1044-1046
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 1047-1048
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 1049-1051
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 1052-1054
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 1055-1057
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 1058-1060
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 1061-1063
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 1064-1066
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 1067-1069
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 1070-1072
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1073-1075
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1076-1078
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1079-1081
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1082-1084
 0,  0,  0, // 1085-1087
 0,  0,  0, // 1088-1090
 0,  0,  0, // 1091-1093
 0,  0,  0, // 1094-1096
 0,  0,  0, // 1097-1099
 0,  0,  0, // 1100-1102
 0,  0,  0, // 1103-1105
 0,  0,  0, // 1106-1108
 0,  0,  0, // 1109-1111
 0,  0,  0, // 1112-1114
 0,  0,  0, // 1115-1117
 0,  0,  0, // 1118-1120
 0,  0,  0, // 1121-1123
 0,  0,  0, // 1124-1126
 0,  0,  0, // 1127-1129
 0,  0,  0,  0, // 1130-1133
 0,  0,  0, // 1134-1136
 0,  0,  0, // 1137-1139
 0,  0,  0, // 1140-1142
 0,  0,  0,  0, // 1143-1146
 0,  0,  0, // 1147-1149
 0,  0,  0,  0, // 1150-1153
 0,  0,  0,  0, // 1154-1157
 0,  0,  0, // 1158-1160
 0,  0,  0,  0, // 1161-1164
 0,  0,  0,  0, // 1165-1168
 0,  0,  0, // 1169-1171
 0,  0,  0,  0, // 1172-1175
 0,  0,  0,  0, // 1176-1179
 0,  0,  0, // 1180-1182
 0,  0,  0,  0, // 1183-1186
 0,  0,  0,  0, // 1187-1190
 0,  0,  0, // 1191-1193
 0,  0,  0, // 1194-1196
 0,  0,  0, // 1197-1199
 0,  0, // 1200-1201
 0,  0, // 1202-1203
 0,  0, // 1204-1205
 0,  0,  0, // 1206-1208
 0,  0, // 1209-1210
 0,  0,  0, // 1211-1213
 0,  0,  0, // 1214-1216
 0,  0,  0, // 1217-1219
 0,  0,  0, // 1220-1222
 0,  0,  0, // 1223-1225
 0,  0,  0,  0, // 1226-1229
 0,  0,  0, // 1230-1232
 0,  0,  0, // 1233-1235
 0,  0,  0, // 1236-1238
 0,  0,  0, // 1239-1241
 0,  0,  0, // 1242-1244
 0,  0,  0,  0, // 1245-1248
 0,  0,  0,  0, // 1249-1252
 0,  0, // 1253-1254
 0,  0, // 1255-1256
 0,  0,  0, // 1257-1259
 0,  0,  0, // 1260-1262
 0,  0,  0, // 1263-1265
 0,  0,  0, // 1266-1268
 0,  0,  0, // 1269-1271
 0,  0,  0, // 1272-1274
 0,  0,  0, // 1275-1277
 0,  0,  0, // 1278-1280
 0,  0,  0, // 1281-1283
 0,  0,  0, // 1284-1286
 0,  0, // 1287-1288
 0,  0,  0, // 1289-1291
 0,  0,  0, // 1292-1294
 0,  0,  0, // 1295-1297
 0,  0,  0, // 1298-1300
 0,  0,  0, // 1301-1303
 0,  0,  0, // 1304-1306
 0,  0,  0, // 1307-1309
 0,  0,  0, // 1310-1312
 0,  0,  0, // 1313-1315
 0,  0,  0, // 1316-1318
 0,  0,  0, // 1319-1321
 0,  0,  0, // 1322-1324
 0,  0,  0,  0, // 1325-1328
 0,  0,  0, // 1329-1331
 0,  0,  0,  0, // 1332-1335
 0,  0,  0, // 1336-1338
 0,  0,  0, // 1339-1341
 0,  0,  0, // 1342-1344
 0,  0,  0, // 1345-1347
 0,  0,  0, // 1348-1350
 0,  0,  0, // 1351-1353
 0,  0,  0, // 1354-1356
 0,  0,  0, // 1357-1359
 0,  0,  0, // 1360-1362
 0,  0,  0, // 1363-1365
 0,  0,  0, // 1366-1368
 0,  0,  0, // 1369-1371
 0,  0,  0, // 1372-1374
 0,  0,  0, // 1375-1377
 0,  0,  0, // 1378-1380
 0,  0,  0, // 1381-1383
 0,  0,  0, // 1384-1386
 0,  0,  0, // 1387-1389
 0,  0,  0, // 1390-1392
 0,  0,  0, // 1393-1395
 0,  0,  0, // 1396-1398
 0,  0,  0, // 1399-1401
 0,  0,  0, // 1402-1404
 0,  0, // 1405-1406
 0,  0,  0, // 1407-1409
 0,  0,  0, // 1410-1412
 0,  0,  0, // 1413-1415
 0,  0,  0, // 1416-1418
 0,  0,  0, // 1419-1421
 0,  0,  0, // 1422-1424
 0,  0,  0, // 1425-1427
 0,  0,  0, // 1428-1430
 0,  0,  0, // 1431-1433
 0,  0,  0,  0, // 1434-1437
 0,  0,  0,  0, // 1438-1441
 0,  0,  0,  0, // 1442-1445
 0,  0,  0,  0, // 1446-1449
 0,  0,  0, // 1450-1452
 0,  0,  0, // 1453-1455
 0,  0,  0, // 1456-1458
 0,  0,  0, // 1459-1461
 0,  0,  0, // 1462-1464
 0,  0,  0, // 1465-1467
 0,  0,  0, // 1468-1470
 0,  0,  0, // 1471-1473
 0,  0,  0, // 1474-1476
 0,  0,  0, // 1477-1479
 0,  0,  0, // 1480-1482
 0,  0,  0, // 1483-1485
 0,  0,  0, // 1486-1488
 0,  0,  0, // 1489-1491
 0,  0,  0, // 1492-1494
 0,  0,  0, // 1495-1497
 0,  0,  0,  0, // 1498-1501
 0,  0,  0, // 1502-1504
 0,  0,  0, // 1505-1507
 0,  0,  0, // 1508-1510
 0,  0,  0,  0, // 1511-1514
 0,  0,  0, // 1515-1517
 0,  0,  0,  0, // 1518-1521
 0,  0,  0,  0, // 1522-1525
 0,  0,  0, // 1526-1528
 0,  0,  0,  0, // 1529-1532
 0,  0,  0,  0, // 1533-1536
 0,  0,  0, // 1537-1539
 0,  0,  0,  0, // 1540-1543
 0,  0,  0,  0, // 1544-1547
 0,  0,  0, // 1548-1550
 0,  0,  0,  0, // 1551-1554
 0,  0,  0,  0, // 1555-1558
 0,  0,  0, // 1559-1561
 0,  0,  0, // 1562-1564
 0,  0,  0, // 1565-1567
 0,  0, // 1568-1569
 0,  0, // 1570-1571
 0,  0, // 1572-1573
 0,  0,  0, // 1574-1576
 0,  0, // 1577-1578
 0,  0,  0, // 1579-1581
 0,  0,  0, // 1582-1584
 0,  0,  0, // 1585-1587
 0,  0,  0, // 1588-1590
 0,  0,  0, // 1591-1593
 0,  0,  0,  0, // 1594-1597
 0,  0,  0, // 1598-1600
 0,  0,  0, // 1601-1603
 0,  0,  0, // 1604-1606
 0,  0,  0, // 1607-1609
 0,  0,  0, // 1610-1612
 0,  0,  0, // 1613-1615
 0,  0,  0,  0, // 1616-1619
 0,  0,  0,  0, // 1620-1623
 0,  0, // 1624-1625
 0,  0, // 1626-1627
 0,  0,  0, // 1628-1630
 0,  0,  0, // 1631-1633
 0,  0,  0, // 1634-1636
 0,  0,  0, // 1637-1639
 0,  0,  0, // 1640-1642
 0,  0,  0, // 1643-1645
 0,  0,  0, // 1646-1648
 0,  0,  0, // 1649-1651
 0,  0,  0, // 1652-1654
 0,  0,  0, // 1655-1657
 0,  0, // 1658-1659
 0,  0,  0, // 1660-1662
 0,  0,  0, // 1663-1665
 0,  0,  0, // 1666-1668
 0,  0,  0, // 1669-1671
 0,  0,  0, // 1672-1674
 0,  0,  0, // 1675-1677
 0,  0,  0, // 1678-1680
 0,  0,  0, // 1681-1683
 0,  0,  0, // 1684-1686
 0,  0,  0, // 1687-1689
 0,  0,  0, // 1690-1692
 0,  0,  0, // 1693-1695
 0,  0,  0,  0, // 1696-1699
 0,  0,  0, // 1700-1702
 0,  0,  0,  0, // 1703-1706
 0,  0,  0, // 1707-1709
 0,  0,  0, // 1710-1712
 0,  0,  0, // 1713-1715
 0,  0,  0, // 1716-1718
 0,  0,  0, // 1719-1721
 0,  0,  0, // 1722-1724
 0,  0,  0, // 1725-1727
 0,  0,  0, // 1728-1730
 0,  0,  0, // 1731-1733
 0,  0,  0, // 1734-1736
 0,  0,  0, // 1737-1739
 0,  0,  0, // 1740-1742
 0,  0,  0, // 1743-1745
 0,  0,  0, // 1746-1748
 0,  0,  0, // 1749-1751
 0,  0,  0, // 1752-1754
 0,  0,  0, // 1755-1757
 0,  0,  0, // 1758-1760
 0,  0,  0, // 1761-1763
 0,  0,  0, // 1764-1766
 0,  0,  0, // 1767-1769
 0,  0,  0, // 1770-1772
 0,  0,  0, // 1773-1775
 0,  0, // 1776-1777
 0,  0,  0, // 1778-1780
 0,  0,  0, // 1781-1783
 0,  0,  0, // 1784-1786
 0,  0,  0, // 1787-1789
 0,  0,  0, // 1790-1792
 0,  0,  0, // 1793-1795
 0,  0,  0, // 1796-1798
 0,  0,  0, // 1799-1801
 0,  0,  0, // 1802-1804
 0,  0,  0,  0, // 1805-1808
 0,  0,  0,  0, // 1809-1812
 0,  0,  0,  0, // 1813-1816
 0,  0,  0,  0, // 1817-1820
 0,  0,  0, // 1821-1823
 0 // End bypass tables
};

static const llvm::InstrItinerary PPC440Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 6, 1, 4 }, // 1 IIC_IntSimple
  { 1, 1, 6, 4, 7 }, // 2 IIC_IntGeneral
  { 1, 6, 11, 7, 9 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 11, 16, 0, 0 }, // 5 IIC_LdStSync
  { 1, 1, 6, 9, 12 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 6, 11, 12, 15 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 16, 21, 15, 17 }, // 12 IIC_LdStDCBF
  { 1, 21, 26, 17, 20 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 26, 31, 20, 23 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_IntRotateDI
  { 1, 31, 40, 23, 26 }, // 17 IIC_FPGeneral
  { 1, 31, 40, 26, 29 }, // 18 IIC_FPAddSub
  { 1, 31, 40, 29, 32 }, // 19 IIC_FPCompare
  { 1, 40, 49, 32, 35 }, // 20 IIC_FPDivD
  { 1, 49, 58, 35, 38 }, // 21 IIC_FPDivS
  { 1, 31, 40, 38, 42 }, // 22 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 23 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 24 IIC_FPSqrtS
  { 1, 16, 21, 42, 45 }, // 25 IIC_LdStICBI
  { 1, 21, 26, 45, 48 }, // 26 IIC_LdStStore
  { 1, 1, 6, 48, 52 }, // 27 IIC_IntISEL
  { 1, 58, 74, 0, 0 }, // 28 IIC_SprISYNC
  { 1, 74, 81, 52, 55 }, // 29 IIC_LdStLWARX
  { 1, 21, 26, 55, 59 }, // 30 IIC_LdStLoadUpd
  { 1, 21, 26, 59, 63 }, // 31 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLDUX
  { 1, 21, 26, 63, 66 }, // 35 IIC_LdStLFD
  { 1, 16, 21, 66, 70 }, // 36 IIC_LdStLFDU
  { 1, 16, 21, 70, 74 }, // 37 IIC_LdStLFDUX
  { 1, 16, 21, 74, 77 }, // 38 IIC_LdStLHA
  { 1, 16, 21, 77, 80 }, // 39 IIC_LdStLHAU
  { 1, 16, 21, 80, 83 }, // 40 IIC_LdStLHAUX
  { 1, 16, 21, 83, 86 }, // 41 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 42 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 43 IIC_IntMulHD
  { 1, 6, 11, 86, 89 }, // 44 IIC_BrMCR
  { 1, 6, 11, 89, 92 }, // 45 IIC_BrMCRX
  { 1, 6, 11, 92, 94 }, // 46 IIC_SprMFCR
  { 1, 81, 86, 94, 96 }, // 47 IIC_SprMFSPR
  { 1, 6, 11, 96, 99 }, // 48 IIC_IntMFFS
  { 1, 6, 11, 99, 101 }, // 49 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFPMR
  { 1, 6, 11, 101, 103 }, // 52 IIC_SprMFSR
  { 1, 81, 86, 103, 105 }, // 53 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 81, 86, 105, 107 }, // 56 IIC_SprMTSPR
  { 1, 6, 11, 107, 110 }, // 57 IIC_IntMTFSB0
  { 1, 6, 11, 110, 112 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 60 IIC_SprMTPMR
  { 1, 81, 86, 112, 114 }, // 61 IIC_SprMTSR
  { 1, 6, 11, 114, 117 }, // 62 IIC_IntMulHW
  { 1, 6, 11, 117, 120 }, // 63 IIC_IntMulHWU
  { 1, 6, 11, 120, 123 }, // 64 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 65 IIC_VecPerm
  { 1, 16, 21, 123, 126 }, // 66 IIC_LdStSTFD
  { 1, 16, 21, 126, 130 }, // 67 IIC_LdStSTFDU
  { 1, 6, 11, 130, 132 }, // 68 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateD
  { 1, 1, 6, 132, 135 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 1, 6, 135, 138 }, // 79 IIC_IntShift
  { 1, 74, 81, 138, 141 }, // 80 IIC_LdStSTWCX
  { 1, 21, 26, 141, 145 }, // 81 IIC_LdStStoreUpd
  { 1, 21, 26, 145, 148 }, // 82 IIC_LdStSTD
  { 1, 74, 81, 148, 151 }, // 83 IIC_LdStSTDCX
  { 1, 21, 26, 151, 155 }, // 84 IIC_LdStSTDU
  { 1, 21, 26, 155, 159 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 6, 11, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 6, 11, 159, 161 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 1, 31, 40, 161, 164 }, // 98 FCMPUS_FCMPUD
  { 0, 0, 0, 0, 0 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 31, 40, 164, 167 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 6, 11, 167, 170 }, // 103 MCRF
  { 1, 6, 11, 170, 173 }, // 104 MCRXRX
  { 0, 0, 0, 0, 0 }, // 105 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 106 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 0, 0, 0, 0, 0 }, // 108 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 0, 0, 0, 0, 0 }, // 110 XSIEXPDP
  { 1, 31, 40, 173, 176 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 0, 0, 0, 0, 0 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 31, 40, 176, 179 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 117 VSUBFP_VMULUWM
  { 1, 31, 40, 179, 182 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 31, 40, 182, 186 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 31, 40, 186, 190 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 0, 0, 0, 0, 0 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 31, 40, 190, 193 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 129 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 130 XSSQRTQP_XSSQRTQPO
  { 1, 21, 26, 193, 196 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 1, 21, 26, 196, 199 }, // 134 LFIWZX_LFDX_LFD
  { 1, 21, 26, 199, 202 }, // 135 LFIWAX_LFSX_LFS
  { 1, 21, 26, 202, 205 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 1, 21, 26, 205, 208 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 16, 21, 208, 211 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 16, 21, 211, 214 }, // 141 STXVD2X_STXVW4X
  { 1, 26, 31, 214, 217 }, // 142 DIVW_DIVWU_MODSW
  { 1, 26, 31, 217, 220 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 144 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 145 DIVDE_DIVDEU
  { 0, 0, 0, 0, 0 }, // 146 DIVDo_DIVDUo
  { 1, 26, 31, 220, 223 }, // 147 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 148 DIVDEo_DIVDEUo
  { 1, 6, 11, 223, 226 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 6, 11, 226, 229 }, // 150 MCRFS
  { 1, 40, 49, 229, 232 }, // 151 FDIV
  { 1, 40, 49, 232, 235 }, // 152 FDIVo
  { 1, 40, 49, 235, 238 }, // 153 XSDIVDP
  { 1, 49, 58, 238, 241 }, // 154 FDIVS
  { 1, 49, 58, 241, 244 }, // 155 FDIVSo
  { 1, 49, 58, 244, 247 }, // 156 XSDIVSP
  { 1, 49, 58, 247, 250 }, // 157 XVDIVSP
  { 1, 40, 49, 250, 253 }, // 158 XVDIVDP
  { 1, 16, 21, 253, 257 }, // 159 LFSU
  { 1, 16, 21, 257, 261 }, // 160 LFSUX
  { 1, 16, 21, 261, 265 }, // 161 LFDU
  { 1, 16, 21, 265, 269 }, // 162 LFDUX
  { 0, 0, 0, 0, 0 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 86, 87, 0, 0 }, // 1 IIC_IntSimple
  { 1, 86, 87, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 87, 88, 0, 0 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 88, 89, 0, 0 }, // 5 IIC_LdStSync
  { 1, 86, 87, 0, 0 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 89, 90, 0, 0 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 88, 89, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 90, 91, 0, 0 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 91, 92, 0, 0 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_IntRotateDI
  { 1, 92, 93, 0, 0 }, // 17 IIC_FPGeneral
  { 1, 92, 93, 0, 0 }, // 18 IIC_FPAddSub
  { 1, 92, 93, 0, 0 }, // 19 IIC_FPCompare
  { 1, 93, 94, 0, 0 }, // 20 IIC_FPDivD
  { 1, 94, 95, 0, 0 }, // 21 IIC_FPDivS
  { 1, 95, 96, 0, 0 }, // 22 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 23 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 24 IIC_FPSqrtS
  { 1, 88, 89, 0, 0 }, // 25 IIC_LdStICBI
  { 1, 90, 91, 0, 0 }, // 26 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 27 IIC_IntISEL
  { 1, 96, 97, 0, 0 }, // 28 IIC_SprISYNC
  { 1, 88, 89, 0, 0 }, // 29 IIC_LdStLWARX
  { 1, 90, 91, 0, 0 }, // 30 IIC_LdStLoadUpd
  { 1, 90, 91, 0, 0 }, // 31 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLDUX
  { 1, 90, 91, 0, 0 }, // 35 IIC_LdStLFD
  { 1, 90, 91, 0, 0 }, // 36 IIC_LdStLFDU
  { 1, 90, 91, 0, 0 }, // 37 IIC_LdStLFDUX
  { 1, 90, 91, 0, 0 }, // 38 IIC_LdStLHA
  { 1, 90, 91, 0, 0 }, // 39 IIC_LdStLHAU
  { 1, 90, 91, 0, 0 }, // 40 IIC_LdStLHAUX
  { 1, 97, 98, 0, 0 }, // 41 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 42 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 43 IIC_IntMulHD
  { 1, 89, 90, 0, 0 }, // 44 IIC_BrMCR
  { 1, 89, 90, 0, 0 }, // 45 IIC_BrMCRX
  { 1, 89, 90, 0, 0 }, // 46 IIC_SprMFCR
  { 1, 98, 99, 0, 0 }, // 47 IIC_SprMFSPR
  { 1, 92, 93, 0, 0 }, // 48 IIC_IntMFFS
  { 1, 89, 90, 0, 0 }, // 49 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFPMR
  { 1, 98, 99, 0, 0 }, // 52 IIC_SprMFSR
  { 1, 98, 99, 0, 0 }, // 53 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 96, 97, 0, 0 }, // 56 IIC_SprMTSPR
  { 1, 99, 100, 0, 0 }, // 57 IIC_IntMTFSB0
  { 1, 89, 90, 0, 0 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 60 IIC_SprMTPMR
  { 1, 96, 97, 0, 0 }, // 61 IIC_SprMTSR
  { 1, 100, 101, 0, 0 }, // 62 IIC_IntMulHW
  { 1, 101, 102, 0, 0 }, // 63 IIC_IntMulHWU
  { 1, 102, 103, 0, 0 }, // 64 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 65 IIC_VecPerm
  { 1, 90, 91, 0, 0 }, // 66 IIC_LdStSTFD
  { 1, 90, 91, 0, 0 }, // 67 IIC_LdStSTFDU
  { 1, 96, 97, 0, 0 }, // 68 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateD
  { 1, 86, 87, 0, 0 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 86, 87, 0, 0 }, // 79 IIC_IntShift
  { 1, 103, 104, 0, 0 }, // 80 IIC_LdStSTWCX
  { 1, 90, 91, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 82 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 83 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 84 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 98, 99, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 104, 105, 0, 0 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 1, 92, 93, 0, 0 }, // 98 FCMPUS_FCMPUD
  { 0, 0, 0, 0, 0 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 92, 93, 0, 0 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 89, 90, 0, 0 }, // 103 MCRF
  { 1, 89, 90, 0, 0 }, // 104 MCRXRX
  { 0, 0, 0, 0, 0 }, // 105 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 106 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 0, 0, 0, 0, 0 }, // 108 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 0, 0, 0, 0, 0 }, // 110 XSIEXPDP
  { 1, 92, 93, 0, 0 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 0, 0, 0, 0, 0 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 92, 93, 0, 0 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 117 VSUBFP_VMULUWM
  { 1, 92, 93, 0, 0 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 95, 96, 0, 0 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 95, 96, 0, 0 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 0, 0, 0, 0, 0 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 92, 93, 0, 0 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 129 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 130 XSSQRTQP_XSSQRTQPO
  { 1, 90, 91, 0, 0 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 1, 90, 91, 0, 0 }, // 134 LFIWZX_LFDX_LFD
  { 1, 90, 91, 0, 0 }, // 135 LFIWAX_LFSX_LFS
  { 1, 90, 91, 0, 0 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 1, 90, 91, 0, 0 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 90, 91, 0, 0 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 90, 91, 0, 0 }, // 141 STXVD2X_STXVW4X
  { 1, 91, 92, 0, 0 }, // 142 DIVW_DIVWU_MODSW
  { 1, 91, 92, 0, 0 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 144 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 145 DIVDE_DIVDEU
  { 0, 0, 0, 0, 0 }, // 146 DIVDo_DIVDUo
  { 1, 91, 92, 0, 0 }, // 147 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 148 DIVDEo_DIVDEUo
  { 1, 89, 90, 0, 0 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 89, 90, 0, 0 }, // 150 MCRFS
  { 1, 93, 94, 0, 0 }, // 151 FDIV
  { 1, 93, 94, 0, 0 }, // 152 FDIVo
  { 1, 93, 94, 0, 0 }, // 153 XSDIVDP
  { 1, 94, 95, 0, 0 }, // 154 FDIVS
  { 1, 94, 95, 0, 0 }, // 155 FDIVSo
  { 1, 94, 95, 0, 0 }, // 156 XSDIVSP
  { 1, 94, 95, 0, 0 }, // 157 XVDIVSP
  { 1, 93, 94, 0, 0 }, // 158 XVDIVDP
  { 1, 90, 91, 0, 0 }, // 159 LFSU
  { 1, 90, 91, 0, 0 }, // 160 LFSUX
  { 1, 90, 91, 0, 0 }, // 161 LFDU
  { 1, 90, 91, 0, 0 }, // 162 LFDUX
  { 0, 0, 0, 0, 0 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 105, 106, 0, 0 }, // 1 IIC_IntSimple
  { 1, 105, 106, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 106, 107, 0, 0 }, // 3 IIC_BrB
  { 1, 107, 108, 0, 0 }, // 4 IIC_VecFP
  { 1, 108, 109, 0, 0 }, // 5 IIC_LdStSync
  { 1, 105, 106, 0, 0 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 109, 110, 0, 0 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 110, 111, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 110, 111, 0, 0 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 111, 112, 0, 0 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_IntRotateDI
  { 1, 112, 113, 0, 0 }, // 17 IIC_FPGeneral
  { 1, 112, 113, 0, 0 }, // 18 IIC_FPAddSub
  { 1, 112, 113, 0, 0 }, // 19 IIC_FPCompare
  { 1, 113, 114, 0, 0 }, // 20 IIC_FPDivD
  { 1, 114, 115, 0, 0 }, // 21 IIC_FPDivS
  { 1, 112, 113, 0, 0 }, // 22 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 23 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 24 IIC_FPSqrtS
  { 1, 110, 111, 0, 0 }, // 25 IIC_LdStICBI
  { 1, 110, 111, 0, 0 }, // 26 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 27 IIC_IntISEL
  { 1, 115, 116, 0, 0 }, // 28 IIC_SprISYNC
  { 1, 116, 117, 0, 0 }, // 29 IIC_LdStLWARX
  { 1, 110, 111, 0, 0 }, // 30 IIC_LdStLoadUpd
  { 1, 110, 111, 0, 0 }, // 31 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLDUX
  { 1, 110, 111, 0, 0 }, // 35 IIC_LdStLFD
  { 1, 110, 111, 0, 0 }, // 36 IIC_LdStLFDU
  { 1, 110, 111, 0, 0 }, // 37 IIC_LdStLFDUX
  { 1, 110, 111, 0, 0 }, // 38 IIC_LdStLHA
  { 1, 110, 111, 0, 0 }, // 39 IIC_LdStLHAU
  { 1, 110, 111, 0, 0 }, // 40 IIC_LdStLHAUX
  { 1, 117, 118, 0, 0 }, // 41 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 42 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 43 IIC_IntMulHD
  { 1, 109, 110, 0, 0 }, // 44 IIC_BrMCR
  { 1, 109, 110, 0, 0 }, // 45 IIC_BrMCRX
  { 1, 109, 110, 0, 0 }, // 46 IIC_SprMFCR
  { 1, 118, 119, 0, 0 }, // 47 IIC_SprMFSPR
  { 1, 119, 120, 0, 0 }, // 48 IIC_IntMFFS
  { 1, 109, 110, 0, 0 }, // 49 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFPMR
  { 1, 118, 119, 0, 0 }, // 52 IIC_SprMFSR
  { 1, 109, 110, 0, 0 }, // 53 IIC_SprMFTB
  { 1, 120, 121, 0, 0 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 115, 116, 0, 0 }, // 56 IIC_SprMTSPR
  { 1, 119, 120, 0, 0 }, // 57 IIC_IntMTFSB0
  { 1, 109, 110, 0, 0 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 60 IIC_SprMTPMR
  { 1, 115, 116, 0, 0 }, // 61 IIC_SprMTSR
  { 1, 121, 122, 0, 0 }, // 62 IIC_IntMulHW
  { 1, 122, 123, 0, 0 }, // 63 IIC_IntMulHWU
  { 1, 123, 124, 0, 0 }, // 64 IIC_IntMulLI
  { 1, 124, 125, 0, 0 }, // 65 IIC_VecPerm
  { 1, 110, 111, 0, 0 }, // 66 IIC_LdStSTFD
  { 1, 110, 111, 0, 0 }, // 67 IIC_LdStSTFDU
  { 1, 115, 116, 0, 0 }, // 68 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateD
  { 1, 105, 106, 0, 0 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 105, 106, 0, 0 }, // 79 IIC_IntShift
  { 1, 125, 126, 0, 0 }, // 80 IIC_LdStSTWCX
  { 1, 110, 111, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 82 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 83 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 84 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 126, 127, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 127, 128, 0, 0 }, // 92 IIC_IntTrapW
  { 1, 120, 121, 0, 0 }, // 93 IIC_VecFPCompare
  { 1, 107, 108, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 120, 121, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 120, 121, 0, 0 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 1, 124, 125, 0, 0 }, // 97 XXSEL
  { 1, 112, 113, 0, 0 }, // 98 FCMPUS_FCMPUD
  { 1, 107, 108, 0, 0 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 1, 107, 108, 0, 0 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 112, 113, 0, 0 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 109, 110, 0, 0 }, // 103 MCRF
  { 1, 109, 110, 0, 0 }, // 104 MCRXRX
  { 0, 0, 0, 0, 0 }, // 105 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 106 SRADI_RLDIC
  { 1, 107, 108, 0, 0 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 0, 0, 0, 0, 0 }, // 108 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 107, 108, 0, 0 }, // 110 XSIEXPDP
  { 1, 112, 113, 0, 0 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 107, 108, 0, 0 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 120, 121, 0, 0 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 120, 121, 0, 0 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 112, 113, 0, 0 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 107, 108, 0, 0 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 120, 121, 0, 0 }, // 117 VSUBFP_VMULUWM
  { 1, 112, 113, 0, 0 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 112, 113, 0, 0 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 107, 108, 0, 0 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 112, 113, 0, 0 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 1, 107, 108, 0, 0 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 107, 108, 0, 0 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 120, 121, 0, 0 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 124, 125, 0, 0 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 112, 113, 0, 0 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 107, 108, 0, 0 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 107, 108, 0, 0 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 107, 108, 0, 0 }, // 129 XSDIVQP_XSDIVQPO
  { 1, 107, 108, 0, 0 }, // 130 XSSQRTQP_XSSQRTQPO
  { 1, 110, 111, 0, 0 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 1, 110, 111, 0, 0 }, // 134 LFIWZX_LFDX_LFD
  { 1, 110, 111, 0, 0 }, // 135 LFIWAX_LFSX_LFS
  { 1, 110, 111, 0, 0 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 1, 110, 111, 0, 0 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 110, 111, 0, 0 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 110, 111, 0, 0 }, // 141 STXVD2X_STXVW4X
  { 1, 111, 112, 0, 0 }, // 142 DIVW_DIVWU_MODSW
  { 1, 111, 112, 0, 0 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 144 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 145 DIVDE_DIVDEU
  { 0, 0, 0, 0, 0 }, // 146 DIVDo_DIVDUo
  { 1, 111, 112, 0, 0 }, // 147 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 148 DIVDEo_DIVDEUo
  { 1, 109, 110, 0, 0 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 109, 110, 0, 0 }, // 150 MCRFS
  { 1, 113, 114, 0, 0 }, // 151 FDIV
  { 1, 113, 114, 0, 0 }, // 152 FDIVo
  { 1, 113, 114, 0, 0 }, // 153 XSDIVDP
  { 1, 114, 115, 0, 0 }, // 154 FDIVS
  { 1, 114, 115, 0, 0 }, // 155 FDIVSo
  { 1, 114, 115, 0, 0 }, // 156 XSDIVSP
  { 1, 114, 115, 0, 0 }, // 157 XVDIVSP
  { 1, 113, 114, 0, 0 }, // 158 XVDIVDP
  { 1, 110, 111, 0, 0 }, // 159 LFSU
  { 1, 110, 111, 0, 0 }, // 160 LFSUX
  { 1, 110, 111, 0, 0 }, // 161 LFDU
  { 1, 110, 111, 0, 0 }, // 162 LFDUX
  { 1, 107, 108, 0, 0 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 128, 129, 0, 0 }, // 1 IIC_IntSimple
  { 1, 128, 129, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 129, 130, 0, 0 }, // 3 IIC_BrB
  { 1, 130, 131, 0, 0 }, // 4 IIC_VecFP
  { 1, 131, 132, 0, 0 }, // 5 IIC_LdStSync
  { 1, 128, 129, 0, 0 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 132, 133, 0, 0 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 133, 134, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 133, 134, 0, 0 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 134, 135, 0, 0 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_IntRotateDI
  { 1, 135, 136, 0, 0 }, // 17 IIC_FPGeneral
  { 1, 135, 136, 0, 0 }, // 18 IIC_FPAddSub
  { 1, 135, 136, 0, 0 }, // 19 IIC_FPCompare
  { 1, 136, 137, 0, 0 }, // 20 IIC_FPDivD
  { 1, 137, 138, 0, 0 }, // 21 IIC_FPDivS
  { 1, 135, 136, 0, 0 }, // 22 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 23 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 24 IIC_FPSqrtS
  { 1, 138, 139, 0, 0 }, // 25 IIC_LdStICBI
  { 1, 133, 134, 0, 0 }, // 26 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 27 IIC_IntISEL
  { 1, 139, 140, 0, 0 }, // 28 IIC_SprISYNC
  { 1, 133, 134, 0, 0 }, // 29 IIC_LdStLWARX
  { 1, 133, 134, 0, 0 }, // 30 IIC_LdStLoadUpd
  { 1, 133, 134, 0, 0 }, // 31 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLDUX
  { 1, 140, 141, 0, 0 }, // 35 IIC_LdStLFD
  { 1, 140, 141, 0, 0 }, // 36 IIC_LdStLFDU
  { 1, 140, 141, 0, 0 }, // 37 IIC_LdStLFDUX
  { 1, 133, 134, 0, 0 }, // 38 IIC_LdStLHA
  { 1, 133, 134, 0, 0 }, // 39 IIC_LdStLHAU
  { 1, 133, 134, 0, 0 }, // 40 IIC_LdStLHAUX
  { 1, 141, 142, 0, 0 }, // 41 IIC_LdStLMW
  { 1, 133, 134, 0, 0 }, // 42 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 43 IIC_IntMulHD
  { 1, 132, 133, 0, 0 }, // 44 IIC_BrMCR
  { 1, 132, 133, 0, 0 }, // 45 IIC_BrMCRX
  { 1, 132, 133, 0, 0 }, // 46 IIC_SprMFCR
  { 1, 142, 143, 0, 0 }, // 47 IIC_SprMFSPR
  { 1, 135, 136, 0, 0 }, // 48 IIC_IntMFFS
  { 1, 138, 139, 0, 0 }, // 49 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 50 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFPMR
  { 1, 142, 143, 0, 0 }, // 52 IIC_SprMFSR
  { 1, 143, 144, 0, 0 }, // 53 IIC_SprMFTB
  { 1, 144, 145, 0, 0 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 132, 133, 0, 0 }, // 56 IIC_SprMTSPR
  { 1, 135, 136, 0, 0 }, // 57 IIC_IntMTFSB0
  { 1, 132, 133, 0, 0 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 60 IIC_SprMTPMR
  { 1, 132, 133, 0, 0 }, // 61 IIC_SprMTSR
  { 1, 142, 143, 0, 0 }, // 62 IIC_IntMulHW
  { 1, 142, 143, 0, 0 }, // 63 IIC_IntMulHWU
  { 1, 138, 139, 0, 0 }, // 64 IIC_IntMulLI
  { 1, 145, 146, 0, 0 }, // 65 IIC_VecPerm
  { 1, 133, 134, 0, 0 }, // 66 IIC_LdStSTFD
  { 1, 133, 134, 0, 0 }, // 67 IIC_LdStSTFDU
  { 1, 128, 129, 0, 0 }, // 68 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateD
  { 1, 128, 129, 0, 0 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 146, 147, 0, 0 }, // 79 IIC_IntShift
  { 1, 133, 134, 0, 0 }, // 80 IIC_LdStSTWCX
  { 1, 133, 134, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 1, 133, 134, 0, 0 }, // 82 IIC_LdStSTD
  { 1, 133, 134, 0, 0 }, // 83 IIC_LdStSTDCX
  { 1, 133, 134, 0, 0 }, // 84 IIC_LdStSTDU
  { 1, 133, 134, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 133, 134, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 146, 147, 0, 0 }, // 92 IIC_IntTrapW
  { 1, 147, 148, 0, 0 }, // 93 IIC_VecFPCompare
  { 1, 130, 131, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 144, 145, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 147, 148, 0, 0 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 1, 145, 146, 0, 0 }, // 97 XXSEL
  { 1, 135, 136, 0, 0 }, // 98 FCMPUS_FCMPUD
  { 1, 130, 131, 0, 0 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 1, 130, 131, 0, 0 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 135, 136, 0, 0 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 132, 133, 0, 0 }, // 103 MCRF
  { 1, 132, 133, 0, 0 }, // 104 MCRXRX
  { 0, 0, 0, 0, 0 }, // 105 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 106 SRADI_RLDIC
  { 1, 130, 131, 0, 0 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 0, 0, 0, 0, 0 }, // 108 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 130, 131, 0, 0 }, // 110 XSIEXPDP
  { 1, 135, 136, 0, 0 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 130, 131, 0, 0 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 144, 145, 0, 0 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 147, 148, 0, 0 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 135, 136, 0, 0 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 130, 131, 0, 0 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 144, 145, 0, 0 }, // 117 VSUBFP_VMULUWM
  { 1, 135, 136, 0, 0 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 135, 136, 0, 0 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 130, 131, 0, 0 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 135, 136, 0, 0 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 1, 130, 131, 0, 0 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 130, 131, 0, 0 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 144, 145, 0, 0 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 145, 146, 0, 0 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 135, 136, 0, 0 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 130, 131, 0, 0 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 130, 131, 0, 0 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 130, 131, 0, 0 }, // 129 XSDIVQP_XSDIVQPO
  { 1, 130, 131, 0, 0 }, // 130 XSSQRTQP_XSSQRTQPO
  { 1, 140, 141, 0, 0 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 1, 140, 141, 0, 0 }, // 134 LFIWZX_LFDX_LFD
  { 1, 140, 141, 0, 0 }, // 135 LFIWAX_LFSX_LFS
  { 1, 140, 141, 0, 0 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 1, 140, 141, 0, 0 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 133, 134, 0, 0 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 133, 134, 0, 0 }, // 141 STXVD2X_STXVW4X
  { 1, 134, 135, 0, 0 }, // 142 DIVW_DIVWU_MODSW
  { 1, 134, 135, 0, 0 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 144 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 145 DIVDE_DIVDEU
  { 0, 0, 0, 0, 0 }, // 146 DIVDo_DIVDUo
  { 1, 134, 135, 0, 0 }, // 147 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 148 DIVDEo_DIVDEUo
  { 1, 132, 133, 0, 0 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 132, 133, 0, 0 }, // 150 MCRFS
  { 1, 136, 137, 0, 0 }, // 151 FDIV
  { 1, 136, 137, 0, 0 }, // 152 FDIVo
  { 1, 136, 137, 0, 0 }, // 153 XSDIVDP
  { 1, 137, 138, 0, 0 }, // 154 FDIVS
  { 1, 137, 138, 0, 0 }, // 155 FDIVSo
  { 1, 137, 138, 0, 0 }, // 156 XSDIVSP
  { 1, 137, 138, 0, 0 }, // 157 XVDIVSP
  { 1, 136, 137, 0, 0 }, // 158 XVDIVDP
  { 1, 140, 141, 0, 0 }, // 159 LFSU
  { 1, 140, 141, 0, 0 }, // 160 LFSUX
  { 1, 140, 141, 0, 0 }, // 161 LFDU
  { 1, 140, 141, 0, 0 }, // 162 LFDUX
  { 1, 130, 131, 0, 0 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 148, 149, 0, 0 }, // 1 IIC_IntSimple
  { 1, 148, 149, 0, 0 }, // 2 IIC_IntGeneral
  { 1, 149, 150, 0, 0 }, // 3 IIC_BrB
  { 1, 150, 151, 0, 0 }, // 4 IIC_VecFP
  { 1, 151, 152, 0, 0 }, // 5 IIC_LdStSync
  { 1, 152, 153, 0, 0 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 153, 154, 0, 0 }, // 10 IIC_BrCR
  { 1, 154, 155, 0, 0 }, // 11 IIC_LdStLD
  { 1, 154, 155, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 154, 155, 0, 0 }, // 13 IIC_LdStLoad
  { 1, 155, 156, 0, 0 }, // 14 IIC_IntDivD
  { 1, 156, 157, 0, 0 }, // 15 IIC_IntDivW
  { 1, 148, 149, 0, 0 }, // 16 IIC_IntRotateDI
  { 1, 157, 158, 0, 0 }, // 17 IIC_FPGeneral
  { 1, 157, 158, 0, 0 }, // 18 IIC_FPAddSub
  { 1, 158, 159, 0, 0 }, // 19 IIC_FPCompare
  { 1, 159, 160, 0, 0 }, // 20 IIC_FPDivD
  { 1, 159, 160, 0, 0 }, // 21 IIC_FPDivS
  { 1, 157, 158, 0, 0 }, // 22 IIC_FPFused
  { 1, 160, 161, 0, 0 }, // 23 IIC_FPSqrtD
  { 1, 160, 161, 0, 0 }, // 24 IIC_FPSqrtS
  { 1, 161, 162, 0, 0 }, // 25 IIC_LdStICBI
  { 1, 154, 155, 0, 0 }, // 26 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 27 IIC_IntISEL
  { 1, 161, 162, 0, 0 }, // 28 IIC_SprISYNC
  { 1, 162, 163, 0, 0 }, // 29 IIC_LdStLWARX
  { 1, 154, 155, 0, 0 }, // 30 IIC_LdStLoadUpd
  { 1, 154, 155, 0, 0 }, // 31 IIC_LdStLoadUpdX
  { 1, 162, 163, 0, 0 }, // 32 IIC_LdStLDARX
  { 1, 154, 155, 0, 0 }, // 33 IIC_LdStLDU
  { 1, 154, 155, 0, 0 }, // 34 IIC_LdStLDUX
  { 1, 154, 155, 0, 0 }, // 35 IIC_LdStLFD
  { 1, 163, 164, 0, 0 }, // 36 IIC_LdStLFDU
  { 1, 163, 164, 0, 0 }, // 37 IIC_LdStLFDUX
  { 1, 163, 164, 0, 0 }, // 38 IIC_LdStLHA
  { 1, 163, 164, 0, 0 }, // 39 IIC_LdStLHAU
  { 1, 163, 164, 0, 0 }, // 40 IIC_LdStLHAUX
  { 1, 164, 165, 0, 0 }, // 41 IIC_LdStLMW
  { 1, 163, 164, 0, 0 }, // 42 IIC_LdStLWA
  { 1, 165, 166, 0, 0 }, // 43 IIC_IntMulHD
  { 1, 166, 167, 0, 0 }, // 44 IIC_BrMCR
  { 1, 167, 168, 0, 0 }, // 45 IIC_BrMCRX
  { 1, 168, 169, 0, 0 }, // 46 IIC_SprMFCR
  { 1, 169, 170, 0, 0 }, // 47 IIC_SprMFSPR
  { 1, 170, 171, 0, 0 }, // 48 IIC_IntMFFS
  { 1, 169, 170, 0, 0 }, // 49 IIC_SprMFMSR
  { 1, 168, 169, 0, 0 }, // 50 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFPMR
  { 1, 154, 155, 0, 0 }, // 52 IIC_SprMFSR
  { 1, 171, 172, 0, 0 }, // 53 IIC_SprMFTB
  { 1, 172, 173, 0, 0 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 173, 174, 0, 0 }, // 56 IIC_SprMTSPR
  { 1, 157, 158, 0, 0 }, // 57 IIC_IntMTFSB0
  { 1, 154, 155, 0, 0 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 60 IIC_SprMTPMR
  { 1, 154, 155, 0, 0 }, // 61 IIC_SprMTSR
  { 1, 174, 175, 0, 0 }, // 62 IIC_IntMulHW
  { 1, 174, 175, 0, 0 }, // 63 IIC_IntMulHWU
  { 1, 175, 176, 0, 0 }, // 64 IIC_IntMulLI
  { 1, 176, 177, 0, 0 }, // 65 IIC_VecPerm
  { 1, 177, 178, 0, 0 }, // 66 IIC_LdStSTFD
  { 1, 177, 178, 0, 0 }, // 67 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 68 IIC_SprRFI
  { 1, 178, 179, 0, 0 }, // 69 IIC_IntRFID
  { 1, 148, 149, 0, 0 }, // 70 IIC_IntRotateD
  { 1, 175, 176, 0, 0 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 148, 149, 0, 0 }, // 79 IIC_IntShift
  { 1, 162, 163, 0, 0 }, // 80 IIC_LdStSTWCX
  { 1, 154, 155, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 1, 154, 155, 0, 0 }, // 82 IIC_LdStSTD
  { 1, 162, 163, 0, 0 }, // 83 IIC_LdStSTDCX
  { 1, 154, 155, 0, 0 }, // 84 IIC_LdStSTDU
  { 1, 154, 155, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 1, 179, 180, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 154, 155, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 179, 180, 0, 0 }, // 92 IIC_IntTrapW
  { 1, 180, 181, 0, 0 }, // 93 IIC_VecFPCompare
  { 1, 150, 151, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 172, 173, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 180, 181, 0, 0 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 1, 176, 177, 0, 0 }, // 97 XXSEL
  { 1, 158, 159, 0, 0 }, // 98 FCMPUS_FCMPUD
  { 1, 150, 151, 0, 0 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 1, 150, 151, 0, 0 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 158, 159, 0, 0 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 166, 167, 0, 0 }, // 103 MCRF
  { 1, 167, 168, 0, 0 }, // 104 MCRXRX
  { 1, 148, 149, 0, 0 }, // 105 SLD_SRD_SRAD
  { 1, 148, 149, 0, 0 }, // 106 SRADI_RLDIC
  { 1, 150, 151, 0, 0 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 148, 149, 0, 0 }, // 108 RLDCL_RLDCR
  { 1, 148, 149, 0, 0 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 150, 151, 0, 0 }, // 110 XSIEXPDP
  { 1, 157, 158, 0, 0 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 150, 151, 0, 0 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 172, 173, 0, 0 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 180, 181, 0, 0 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 158, 159, 0, 0 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 150, 151, 0, 0 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 172, 173, 0, 0 }, // 117 VSUBFP_VMULUWM
  { 1, 157, 158, 0, 0 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 157, 158, 0, 0 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 150, 151, 0, 0 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 157, 158, 0, 0 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 1, 150, 151, 0, 0 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 150, 151, 0, 0 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 172, 173, 0, 0 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 176, 177, 0, 0 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 158, 159, 0, 0 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 150, 151, 0, 0 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 150, 151, 0, 0 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 150, 151, 0, 0 }, // 129 XSDIVQP_XSDIVQPO
  { 1, 150, 151, 0, 0 }, // 130 XSSQRTQP_XSSQRTQPO
  { 1, 154, 155, 0, 0 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 1, 154, 155, 0, 0 }, // 134 LFIWZX_LFDX_LFD
  { 1, 154, 155, 0, 0 }, // 135 LFIWAX_LFSX_LFS
  { 1, 154, 155, 0, 0 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 1, 154, 155, 0, 0 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 177, 178, 0, 0 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 177, 178, 0, 0 }, // 141 STXVD2X_STXVW4X
  { 1, 156, 157, 0, 0 }, // 142 DIVW_DIVWU_MODSW
  { 1, 156, 157, 0, 0 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 155, 156, 0, 0 }, // 144 DIVD_DIVDU
  { 1, 155, 156, 0, 0 }, // 145 DIVDE_DIVDEU
  { 1, 155, 156, 0, 0 }, // 146 DIVDo_DIVDUo
  { 1, 156, 157, 0, 0 }, // 147 DIVWEo_DIVWEUo
  { 1, 155, 156, 0, 0 }, // 148 DIVDEo_DIVDEUo
  { 1, 167, 168, 0, 0 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 166, 167, 0, 0 }, // 150 MCRFS
  { 1, 159, 160, 0, 0 }, // 151 FDIV
  { 1, 159, 160, 0, 0 }, // 152 FDIVo
  { 1, 159, 160, 0, 0 }, // 153 XSDIVDP
  { 1, 159, 160, 0, 0 }, // 154 FDIVS
  { 1, 159, 160, 0, 0 }, // 155 FDIVSo
  { 1, 159, 160, 0, 0 }, // 156 XSDIVSP
  { 1, 159, 160, 0, 0 }, // 157 XVDIVSP
  { 1, 159, 160, 0, 0 }, // 158 XVDIVDP
  { 1, 163, 164, 0, 0 }, // 159 LFSU
  { 1, 163, 164, 0, 0 }, // 160 LFSUX
  { 1, 163, 164, 0, 0 }, // 161 LFDU
  { 1, 163, 164, 0, 0 }, // 162 LFDUX
  { 1, 150, 151, 0, 0 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCA2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 181, 182, 269, 272 }, // 1 IIC_IntSimple
  { 1, 181, 182, 272, 275 }, // 2 IIC_IntGeneral
  { 1, 181, 182, 275, 278 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 181, 182, 278, 279 }, // 5 IIC_LdStSync
  { 1, 181, 182, 279, 282 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 181, 182, 282, 285 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 181, 182, 285, 288 }, // 12 IIC_LdStDCBF
  { 1, 181, 182, 288, 291 }, // 13 IIC_LdStLoad
  { 1, 181, 182, 291, 294 }, // 14 IIC_IntDivD
  { 1, 181, 182, 294, 297 }, // 15 IIC_IntDivW
  { 1, 181, 182, 297, 300 }, // 16 IIC_IntRotateDI
  { 1, 182, 183, 300, 303 }, // 17 IIC_FPGeneral
  { 1, 182, 183, 303, 306 }, // 18 IIC_FPAddSub
  { 1, 182, 183, 306, 309 }, // 19 IIC_FPCompare
  { 1, 182, 183, 309, 312 }, // 20 IIC_FPDivD
  { 1, 182, 183, 312, 315 }, // 21 IIC_FPDivS
  { 1, 182, 183, 315, 319 }, // 22 IIC_FPFused
  { 1, 182, 183, 319, 322 }, // 23 IIC_FPSqrtD
  { 1, 182, 183, 322, 325 }, // 24 IIC_FPSqrtS
  { 1, 181, 182, 325, 328 }, // 25 IIC_LdStICBI
  { 1, 181, 182, 328, 331 }, // 26 IIC_LdStStore
  { 1, 181, 182, 331, 335 }, // 27 IIC_IntISEL
  { 1, 181, 182, 335, 336 }, // 28 IIC_SprISYNC
  { 1, 181, 182, 336, 339 }, // 29 IIC_LdStLWARX
  { 1, 181, 182, 339, 343 }, // 30 IIC_LdStLoadUpd
  { 1, 181, 182, 343, 347 }, // 31 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDARX
  { 1, 181, 182, 347, 350 }, // 33 IIC_LdStLDU
  { 1, 181, 182, 350, 353 }, // 34 IIC_LdStLDUX
  { 1, 181, 182, 353, 356 }, // 35 IIC_LdStLFD
  { 1, 181, 182, 356, 360 }, // 36 IIC_LdStLFDU
  { 1, 181, 182, 360, 364 }, // 37 IIC_LdStLFDUX
  { 1, 181, 182, 364, 367 }, // 38 IIC_LdStLHA
  { 1, 181, 182, 367, 371 }, // 39 IIC_LdStLHAU
  { 1, 181, 182, 371, 375 }, // 40 IIC_LdStLHAUX
  { 0, 0, 0, 0, 0 }, // 41 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 42 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 43 IIC_IntMulHD
  { 1, 181, 182, 375, 378 }, // 44 IIC_BrMCR
  { 1, 181, 182, 378, 381 }, // 45 IIC_BrMCRX
  { 1, 181, 182, 381, 383 }, // 46 IIC_SprMFCR
  { 1, 181, 182, 383, 385 }, // 47 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 48 IIC_IntMFFS
  { 1, 181, 182, 385, 387 }, // 49 IIC_SprMFMSR
  { 1, 181, 182, 387, 389 }, // 50 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMFSR
  { 1, 181, 182, 389, 391 }, // 53 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 181, 182, 391, 393 }, // 56 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntMTFSB0
  { 1, 181, 182, 393, 395 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 60 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprMTSR
  { 1, 181, 182, 395, 398 }, // 62 IIC_IntMulHW
  { 1, 181, 182, 398, 401 }, // 63 IIC_IntMulHWU
  { 1, 181, 182, 401, 404 }, // 64 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 65 IIC_VecPerm
  { 1, 181, 182, 404, 407 }, // 66 IIC_LdStSTFD
  { 1, 181, 182, 407, 411 }, // 67 IIC_LdStSTFDU
  { 1, 181, 182, 411, 412 }, // 68 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRFID
  { 1, 181, 182, 412, 415 }, // 70 IIC_IntRotateD
  { 1, 181, 182, 415, 418 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 181, 182, 418, 421 }, // 79 IIC_IntShift
  { 1, 181, 182, 421, 424 }, // 80 IIC_LdStSTWCX
  { 1, 181, 182, 424, 428 }, // 81 IIC_LdStStoreUpd
  { 1, 181, 182, 428, 431 }, // 82 IIC_LdStSTD
  { 1, 181, 182, 431, 434 }, // 83 IIC_LdStSTDCX
  { 1, 181, 182, 434, 438 }, // 84 IIC_LdStSTDU
  { 1, 181, 182, 438, 442 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 1, 181, 182, 442, 444 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 181, 182, 444, 446 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 1, 182, 183, 446, 449 }, // 98 FCMPUS_FCMPUD
  { 0, 0, 0, 0, 0 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 182, 183, 449, 452 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 181, 182, 452, 455 }, // 103 MCRF
  { 1, 181, 182, 455, 458 }, // 104 MCRXRX
  { 1, 181, 182, 458, 461 }, // 105 SLD_SRD_SRAD
  { 1, 181, 182, 461, 464 }, // 106 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 181, 182, 464, 467 }, // 108 RLDCL_RLDCR
  { 1, 181, 182, 467, 470 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 0, 0, 0, 0, 0 }, // 110 XSIEXPDP
  { 1, 182, 183, 470, 473 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 0, 0, 0, 0, 0 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 182, 183, 473, 476 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 117 VSUBFP_VMULUWM
  { 1, 182, 183, 476, 479 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 182, 183, 479, 483 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 182, 183, 483, 487 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 0, 0, 0, 0, 0 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 182, 183, 487, 490 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 129 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 130 XSSQRTQP_XSSQRTQPO
  { 1, 181, 182, 490, 493 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 1, 181, 182, 493, 496 }, // 134 LFIWZX_LFDX_LFD
  { 1, 181, 182, 496, 499 }, // 135 LFIWAX_LFSX_LFS
  { 1, 181, 182, 499, 502 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 1, 181, 182, 502, 505 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 181, 182, 505, 508 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 181, 182, 508, 511 }, // 141 STXVD2X_STXVW4X
  { 1, 181, 182, 511, 514 }, // 142 DIVW_DIVWU_MODSW
  { 1, 181, 182, 514, 517 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 181, 182, 517, 520 }, // 144 DIVD_DIVDU
  { 1, 181, 182, 520, 523 }, // 145 DIVDE_DIVDEU
  { 1, 181, 182, 523, 526 }, // 146 DIVDo_DIVDUo
  { 1, 181, 182, 526, 529 }, // 147 DIVWEo_DIVWEUo
  { 1, 181, 182, 529, 532 }, // 148 DIVDEo_DIVDEUo
  { 1, 181, 182, 532, 535 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 181, 182, 535, 538 }, // 150 MCRFS
  { 1, 182, 183, 538, 541 }, // 151 FDIV
  { 1, 182, 183, 541, 544 }, // 152 FDIVo
  { 1, 182, 183, 544, 547 }, // 153 XSDIVDP
  { 1, 182, 183, 547, 550 }, // 154 FDIVS
  { 1, 182, 183, 550, 553 }, // 155 FDIVSo
  { 1, 182, 183, 553, 556 }, // 156 XSDIVSP
  { 1, 182, 183, 556, 559 }, // 157 XVDIVSP
  { 1, 182, 183, 559, 562 }, // 158 XVDIVDP
  { 1, 181, 182, 562, 566 }, // 159 LFSU
  { 1, 181, 182, 566, 570 }, // 160 LFSUX
  { 1, 181, 182, 570, 574 }, // 161 LFDU
  { 1, 181, 182, 574, 578 }, // 162 LFDUX
  { 0, 0, 0, 0, 0 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE500mcItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 183, 185, 578, 581 }, // 1 IIC_IntSimple
  { 1, 183, 185, 581, 584 }, // 2 IIC_IntGeneral
  { 1, 185, 187, 584, 586 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 187, 189, 0, 0 }, // 5 IIC_LdStSync
  { 1, 183, 185, 586, 589 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 185, 187, 589, 592 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 187, 189, 592, 594 }, // 12 IIC_LdStDCBF
  { 1, 187, 189, 594, 596 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 189, 192, 596, 599 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_IntRotateDI
  { 1, 192, 194, 599, 602 }, // 17 IIC_FPGeneral
  { 1, 194, 196, 602, 605 }, // 18 IIC_FPAddSub
  { 1, 192, 194, 605, 608 }, // 19 IIC_FPCompare
  { 1, 196, 198, 608, 611 }, // 20 IIC_FPDivD
  { 1, 198, 200, 611, 614 }, // 21 IIC_FPDivS
  { 1, 194, 196, 614, 618 }, // 22 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 23 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 24 IIC_FPSqrtS
  { 1, 187, 189, 618, 620 }, // 25 IIC_LdStICBI
  { 1, 187, 189, 620, 622 }, // 26 IIC_LdStStore
  { 1, 183, 185, 622, 626 }, // 27 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 28 IIC_SprISYNC
  { 1, 200, 202, 626, 629 }, // 29 IIC_LdStLWARX
  { 2, 202, 205, 629, 631 }, // 30 IIC_LdStLoadUpd
  { 2, 202, 205, 631, 633 }, // 31 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 32 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 33 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 34 IIC_LdStLDUX
  { 1, 187, 189, 633, 636 }, // 35 IIC_LdStLFD
  { 2, 202, 205, 636, 639 }, // 36 IIC_LdStLFDU
  { 2, 202, 205, 639, 642 }, // 37 IIC_LdStLFDUX
  { 1, 187, 189, 642, 644 }, // 38 IIC_LdStLHA
  { 1, 202, 205, 644, 646 }, // 39 IIC_LdStLHAU
  { 1, 202, 205, 646, 648 }, // 40 IIC_LdStLHAUX
  { 1, 187, 189, 648, 650 }, // 41 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 42 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 43 IIC_IntMulHD
  { 1, 185, 187, 650, 652 }, // 44 IIC_BrMCR
  { 1, 183, 185, 652, 655 }, // 45 IIC_BrMCRX
  { 1, 205, 207, 655, 657 }, // 46 IIC_SprMFCR
  { 1, 183, 185, 657, 659 }, // 47 IIC_SprMFSPR
  { 1, 207, 209, 659, 660 }, // 48 IIC_IntMFFS
  { 1, 209, 211, 660, 662 }, // 49 IIC_SprMFMSR
  { 1, 205, 207, 662, 664 }, // 50 IIC_SprMFCRF
  { 1, 209, 211, 664, 666 }, // 51 IIC_SprMFPMR
  { 1, 209, 211, 666, 668 }, // 52 IIC_SprMFSR
  { 1, 209, 211, 668, 670 }, // 53 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 183, 185, 670, 672 }, // 56 IIC_SprMTSPR
  { 1, 207, 209, 672, 675 }, // 57 IIC_IntMTFSB0
  { 1, 211, 213, 675, 677 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 1, 213, 215, 677, 679 }, // 60 IIC_SprMTPMR
  { 1, 213, 215, 679, 681 }, // 61 IIC_SprMTSR
  { 1, 215, 217, 681, 684 }, // 62 IIC_IntMulHW
  { 1, 215, 217, 684, 687 }, // 63 IIC_IntMulHWU
  { 1, 215, 217, 687, 690 }, // 64 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 65 IIC_VecPerm
  { 1, 187, 189, 690, 693 }, // 66 IIC_LdStSTFD
  { 2, 202, 205, 693, 696 }, // 67 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 68 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 70 IIC_IntRotateD
  { 1, 183, 185, 696, 699 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 183, 185, 699, 702 }, // 79 IIC_IntShift
  { 1, 187, 189, 702, 704 }, // 80 IIC_LdStSTWCX
  { 2, 202, 205, 704, 706 }, // 81 IIC_LdStStoreUpd
  { 0, 0, 0, 0, 0 }, // 82 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 83 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 84 IIC_LdStSTDU
  { 0, 0, 0, 0, 0 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 217, 219, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 219, 221, 706, 708 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 1, 192, 194, 708, 711 }, // 98 FCMPUS_FCMPUD
  { 0, 0, 0, 0, 0 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 192, 194, 711, 714 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 185, 187, 714, 716 }, // 103 MCRF
  { 1, 183, 185, 716, 719 }, // 104 MCRXRX
  { 0, 0, 0, 0, 0 }, // 105 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 106 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 0, 0, 0, 0, 0 }, // 108 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 0, 0, 0, 0, 0 }, // 110 XSIEXPDP
  { 1, 192, 194, 719, 722 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 0, 0, 0, 0, 0 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 192, 194, 722, 725 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 117 VSUBFP_VMULUWM
  { 1, 192, 194, 725, 728 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 194, 196, 728, 732 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 194, 196, 732, 736 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 0, 0, 0, 0, 0 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 192, 194, 736, 739 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 129 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 130 XSSQRTQP_XSSQRTQPO
  { 1, 187, 189, 739, 742 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 1, 187, 189, 742, 745 }, // 134 LFIWZX_LFDX_LFD
  { 1, 187, 189, 745, 748 }, // 135 LFIWAX_LFSX_LFS
  { 1, 187, 189, 748, 751 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 1, 187, 189, 751, 754 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 187, 189, 754, 757 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 187, 189, 757, 760 }, // 141 STXVD2X_STXVW4X
  { 1, 189, 192, 760, 763 }, // 142 DIVW_DIVWU_MODSW
  { 1, 189, 192, 763, 766 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 144 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 145 DIVDE_DIVDEU
  { 0, 0, 0, 0, 0 }, // 146 DIVDo_DIVDUo
  { 1, 189, 192, 766, 769 }, // 147 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 148 DIVDEo_DIVDEUo
  { 1, 183, 185, 769, 772 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 185, 187, 772, 774 }, // 150 MCRFS
  { 1, 196, 198, 774, 777 }, // 151 FDIV
  { 1, 196, 198, 777, 780 }, // 152 FDIVo
  { 1, 196, 198, 780, 783 }, // 153 XSDIVDP
  { 1, 198, 200, 783, 786 }, // 154 FDIVS
  { 1, 198, 200, 786, 789 }, // 155 FDIVSo
  { 1, 198, 200, 789, 792 }, // 156 XSDIVSP
  { 1, 198, 200, 792, 795 }, // 157 XVDIVSP
  { 1, 196, 198, 795, 798 }, // 158 XVDIVDP
  { 2, 202, 205, 798, 801 }, // 159 LFSU
  { 2, 202, 205, 801, 804 }, // 160 LFSUX
  { 2, 202, 205, 804, 807 }, // 161 LFDU
  { 2, 202, 205, 807, 810 }, // 162 LFDUX
  { 0, 0, 0, 0, 0 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary PPCE5500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 221, 223, 810, 813 }, // 1 IIC_IntSimple
  { 1, 221, 223, 813, 816 }, // 2 IIC_IntGeneral
  { 1, 223, 225, 816, 818 }, // 3 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 4 IIC_VecFP
  { 1, 225, 227, 0, 0 }, // 5 IIC_LdStSync
  { 1, 221, 223, 818, 821 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 223, 225, 821, 824 }, // 10 IIC_BrCR
  { 1, 225, 227, 824, 826 }, // 11 IIC_LdStLD
  { 1, 225, 227, 826, 828 }, // 12 IIC_LdStDCBF
  { 1, 225, 227, 828, 830 }, // 13 IIC_LdStLoad
  { 1, 227, 230, 830, 833 }, // 14 IIC_IntDivD
  { 1, 230, 233, 833, 836 }, // 15 IIC_IntDivW
  { 1, 221, 223, 836, 839 }, // 16 IIC_IntRotateDI
  { 1, 233, 235, 839, 842 }, // 17 IIC_FPGeneral
  { 1, 233, 235, 842, 845 }, // 18 IIC_FPAddSub
  { 1, 233, 235, 845, 848 }, // 19 IIC_FPCompare
  { 1, 235, 237, 848, 851 }, // 20 IIC_FPDivD
  { 1, 237, 239, 851, 854 }, // 21 IIC_FPDivS
  { 1, 233, 235, 854, 858 }, // 22 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 23 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 24 IIC_FPSqrtS
  { 1, 225, 227, 858, 860 }, // 25 IIC_LdStICBI
  { 1, 225, 227, 860, 862 }, // 26 IIC_LdStStore
  { 1, 221, 223, 862, 866 }, // 27 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 28 IIC_SprISYNC
  { 1, 239, 241, 866, 869 }, // 29 IIC_LdStLWARX
  { 2, 241, 244, 869, 871 }, // 30 IIC_LdStLoadUpd
  { 2, 241, 244, 871, 873 }, // 31 IIC_LdStLoadUpdX
  { 1, 239, 241, 873, 875 }, // 32 IIC_LdStLDARX
  { 2, 241, 244, 875, 877 }, // 33 IIC_LdStLDU
  { 2, 241, 244, 877, 879 }, // 34 IIC_LdStLDUX
  { 2, 225, 227, 879, 882 }, // 35 IIC_LdStLFD
  { 2, 241, 244, 882, 885 }, // 36 IIC_LdStLFDU
  { 2, 241, 244, 885, 888 }, // 37 IIC_LdStLFDUX
  { 1, 225, 227, 888, 890 }, // 38 IIC_LdStLHA
  { 2, 241, 244, 890, 892 }, // 39 IIC_LdStLHAU
  { 2, 241, 244, 892, 894 }, // 40 IIC_LdStLHAUX
  { 1, 244, 246, 894, 896 }, // 41 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 42 IIC_LdStLWA
  { 1, 246, 249, 896, 899 }, // 43 IIC_IntMulHD
  { 1, 223, 225, 899, 901 }, // 44 IIC_BrMCR
  { 1, 249, 251, 901, 904 }, // 45 IIC_BrMCRX
  { 1, 251, 253, 904, 906 }, // 46 IIC_SprMFCR
  { 1, 249, 251, 906, 907 }, // 47 IIC_SprMFSPR
  { 1, 233, 235, 907, 908 }, // 48 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 49 IIC_SprMFMSR
  { 1, 251, 253, 908, 910 }, // 50 IIC_SprMFCRF
  { 1, 253, 255, 910, 912 }, // 51 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMFSR
  { 1, 253, 255, 912, 914 }, // 53 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 249, 251, 914, 915 }, // 56 IIC_SprMTSPR
  { 1, 255, 257, 915, 918 }, // 57 IIC_IntMTFSB0
  { 1, 257, 259, 918, 920 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 1, 249, 251, 920, 921 }, // 60 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprMTSR
  { 1, 259, 262, 921, 924 }, // 62 IIC_IntMulHW
  { 1, 259, 262, 924, 927 }, // 63 IIC_IntMulHWU
  { 1, 246, 249, 927, 930 }, // 64 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 65 IIC_VecPerm
  { 1, 225, 227, 930, 933 }, // 66 IIC_LdStSTFD
  { 2, 241, 244, 933, 936 }, // 67 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 68 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRFID
  { 1, 262, 264, 936, 939 }, // 70 IIC_IntRotateD
  { 1, 221, 223, 939, 942 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 262, 264, 942, 945 }, // 79 IIC_IntShift
  { 1, 225, 227, 945, 947 }, // 80 IIC_LdStSTWCX
  { 2, 241, 244, 947, 949 }, // 81 IIC_LdStStoreUpd
  { 1, 225, 227, 949, 951 }, // 82 IIC_LdStSTD
  { 1, 225, 227, 951, 953 }, // 83 IIC_LdStSTDCX
  { 2, 241, 244, 953, 955 }, // 84 IIC_LdStSTDU
  { 2, 241, 244, 955, 957 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 1, 264, 266, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 266, 268, 957, 959 }, // 92 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 93 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 0, 0, 0, 0, 0 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 0, 0, 0, 0, 0 }, // 97 XXSEL
  { 1, 233, 235, 959, 962 }, // 98 FCMPUS_FCMPUD
  { 0, 0, 0, 0, 0 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 233, 235, 962, 965 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 223, 225, 965, 967 }, // 103 MCRF
  { 1, 249, 251, 967, 970 }, // 104 MCRXRX
  { 1, 262, 264, 970, 973 }, // 105 SLD_SRD_SRAD
  { 1, 221, 223, 973, 976 }, // 106 SRADI_RLDIC
  { 0, 0, 0, 0, 0 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 262, 264, 976, 979 }, // 108 RLDCL_RLDCR
  { 1, 221, 223, 979, 982 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 0, 0, 0, 0, 0 }, // 110 XSIEXPDP
  { 1, 233, 235, 982, 985 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 0, 0, 0, 0, 0 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 233, 235, 985, 988 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 117 VSUBFP_VMULUWM
  { 1, 233, 235, 988, 991 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 233, 235, 991, 995 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 233, 235, 995, 999 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 0, 0, 0, 0, 0 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 0, 0, 0, 0, 0 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 0, 0, 0, 0, 0 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 233, 235, 999, 1002 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 129 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 130 XSSQRTQP_XSSQRTQPO
  { 2, 225, 227, 1002, 1005 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 2, 225, 227, 1005, 1008 }, // 134 LFIWZX_LFDX_LFD
  { 2, 225, 227, 1008, 1011 }, // 135 LFIWAX_LFSX_LFS
  { 2, 225, 227, 1011, 1014 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 2, 225, 227, 1014, 1017 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 225, 227, 1017, 1020 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 225, 227, 1020, 1023 }, // 141 STXVD2X_STXVW4X
  { 1, 230, 233, 1023, 1026 }, // 142 DIVW_DIVWU_MODSW
  { 1, 230, 233, 1026, 1029 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 227, 230, 1029, 1032 }, // 144 DIVD_DIVDU
  { 1, 227, 230, 1032, 1035 }, // 145 DIVDE_DIVDEU
  { 1, 227, 230, 1035, 1038 }, // 146 DIVDo_DIVDUo
  { 1, 230, 233, 1038, 1041 }, // 147 DIVWEo_DIVWEUo
  { 1, 227, 230, 1041, 1044 }, // 148 DIVDEo_DIVDEUo
  { 1, 249, 251, 1044, 1047 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 223, 225, 1047, 1049 }, // 150 MCRFS
  { 1, 235, 237, 1049, 1052 }, // 151 FDIV
  { 1, 235, 237, 1052, 1055 }, // 152 FDIVo
  { 1, 235, 237, 1055, 1058 }, // 153 XSDIVDP
  { 1, 237, 239, 1058, 1061 }, // 154 FDIVS
  { 1, 237, 239, 1061, 1064 }, // 155 FDIVSo
  { 1, 237, 239, 1064, 1067 }, // 156 XSDIVSP
  { 1, 237, 239, 1067, 1070 }, // 157 XVDIVSP
  { 1, 235, 237, 1070, 1073 }, // 158 XVDIVDP
  { 2, 241, 244, 1073, 1076 }, // 159 LFSU
  { 2, 241, 244, 1076, 1079 }, // 160 LFSUX
  { 2, 241, 244, 1079, 1082 }, // 161 LFDU
  { 2, 241, 244, 1082, 1085 }, // 162 LFDUX
  { 0, 0, 0, 0, 0 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary P8Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 268, 270, 1085, 1088 }, // 1 IIC_IntSimple
  { 1, 268, 270, 1088, 1091 }, // 2 IIC_IntGeneral
  { 1, 270, 272, 1091, 1094 }, // 3 IIC_BrB
  { 1, 272, 274, 1094, 1097 }, // 4 IIC_VecFP
  { 0, 0, 0, 0, 0 }, // 5 IIC_LdStSync
  { 1, 274, 276, 1097, 1100 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 276, 278, 1100, 1103 }, // 10 IIC_BrCR
  { 1, 278, 280, 1103, 1106 }, // 11 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 278, 280, 1106, 1109 }, // 13 IIC_LdStLoad
  { 1, 280, 282, 1109, 1112 }, // 14 IIC_IntDivD
  { 1, 282, 284, 1112, 1115 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_IntRotateDI
  { 1, 284, 286, 1115, 1118 }, // 17 IIC_FPGeneral
  { 1, 284, 286, 1118, 1121 }, // 18 IIC_FPAddSub
  { 1, 284, 286, 1121, 1124 }, // 19 IIC_FPCompare
  { 1, 284, 286, 1124, 1127 }, // 20 IIC_FPDivD
  { 1, 284, 286, 1127, 1130 }, // 21 IIC_FPDivS
  { 1, 284, 286, 1130, 1134 }, // 22 IIC_FPFused
  { 1, 284, 286, 1134, 1137 }, // 23 IIC_FPSqrtD
  { 1, 284, 286, 1137, 1140 }, // 24 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStICBI
  { 1, 286, 289, 1140, 1143 }, // 26 IIC_LdStStore
  { 1, 289, 292, 1143, 1147 }, // 27 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 28 IIC_SprISYNC
  { 1, 292, 297, 1147, 1150 }, // 29 IIC_LdStLWARX
  { 1, 297, 301, 1150, 1154 }, // 30 IIC_LdStLoadUpd
  { 1, 297, 301, 1154, 1158 }, // 31 IIC_LdStLoadUpdX
  { 1, 301, 308, 1158, 1161 }, // 32 IIC_LdStLDARX
  { 1, 297, 301, 1161, 1165 }, // 33 IIC_LdStLDU
  { 1, 297, 301, 1165, 1169 }, // 34 IIC_LdStLDUX
  { 1, 308, 310, 1169, 1172 }, // 35 IIC_LdStLFD
  { 1, 310, 314, 1172, 1176 }, // 36 IIC_LdStLFDU
  { 1, 310, 314, 1176, 1180 }, // 37 IIC_LdStLFDUX
  { 1, 314, 318, 1180, 1183 }, // 38 IIC_LdStLHA
  { 1, 318, 323, 1183, 1187 }, // 39 IIC_LdStLHAU
  { 1, 323, 332, 1187, 1191 }, // 40 IIC_LdStLHAUX
  { 1, 278, 280, 1191, 1194 }, // 41 IIC_LdStLMW
  { 1, 332, 336, 1194, 1197 }, // 42 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 43 IIC_IntMulHD
  { 1, 336, 338, 1197, 1200 }, // 44 IIC_BrMCR
  { 1, 338, 340, 1200, 1202 }, // 45 IIC_BrMCRX
  { 1, 276, 278, 1202, 1204 }, // 46 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 47 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 48 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 49 IIC_SprMFMSR
  { 1, 276, 278, 1204, 1206 }, // 50 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMFSR
  { 0, 0, 0, 0, 0 }, // 53 IIC_SprMFTB
  { 1, 272, 274, 1206, 1209 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 338, 340, 1209, 1211 }, // 56 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 60 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprMTSR
  { 1, 274, 276, 1211, 1214 }, // 62 IIC_IntMulHW
  { 1, 274, 276, 1214, 1217 }, // 63 IIC_IntMulHWU
  { 1, 274, 276, 1217, 1220 }, // 64 IIC_IntMulLI
  { 1, 340, 342, 1220, 1223 }, // 65 IIC_VecPerm
  { 1, 342, 345, 1223, 1226 }, // 66 IIC_LdStSTFD
  { 1, 345, 350, 1226, 1230 }, // 67 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 68 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRFID
  { 1, 274, 276, 1230, 1233 }, // 70 IIC_IntRotateD
  { 1, 274, 276, 1233, 1236 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 274, 276, 1236, 1239 }, // 79 IIC_IntShift
  { 1, 350, 358, 1239, 1242 }, // 80 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 1, 358, 361, 0, 0 }, // 82 IIC_LdStSTD
  { 1, 350, 358, 1242, 1245 }, // 83 IIC_LdStSTDCX
  { 1, 361, 365, 1245, 1249 }, // 84 IIC_LdStSTDU
  { 1, 365, 374, 1249, 1253 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 1, 274, 276, 1253, 1255 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 274, 276, 1255, 1257 }, // 92 IIC_IntTrapW
  { 1, 272, 274, 1257, 1260 }, // 93 IIC_VecFPCompare
  { 1, 272, 274, 1260, 1263 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 272, 274, 1263, 1266 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 272, 274, 1266, 1269 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 1, 340, 342, 1269, 1272 }, // 97 XXSEL
  { 1, 284, 286, 1272, 1275 }, // 98 FCMPUS_FCMPUD
  { 1, 272, 274, 1275, 1278 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 1, 272, 274, 1278, 1281 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 284, 286, 1281, 1284 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 336, 338, 1284, 1287 }, // 103 MCRF
  { 1, 338, 340, 1287, 1289 }, // 104 MCRXRX
  { 1, 274, 276, 1289, 1292 }, // 105 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 106 SRADI_RLDIC
  { 1, 272, 274, 1292, 1295 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 274, 276, 1295, 1298 }, // 108 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 272, 274, 1298, 1301 }, // 110 XSIEXPDP
  { 1, 284, 286, 1301, 1304 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 272, 274, 1304, 1307 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 272, 274, 1307, 1310 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 272, 274, 1310, 1313 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 284, 286, 1313, 1316 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 272, 274, 1316, 1319 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 272, 274, 1319, 1322 }, // 117 VSUBFP_VMULUWM
  { 1, 284, 286, 1322, 1325 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 284, 286, 1325, 1329 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 272, 274, 1329, 1332 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 284, 286, 1332, 1336 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 1, 272, 274, 1336, 1339 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 272, 274, 1339, 1342 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 272, 274, 1342, 1345 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 340, 342, 1345, 1348 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 284, 286, 1348, 1351 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 272, 274, 1351, 1354 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 272, 274, 1354, 1357 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 272, 274, 1357, 1360 }, // 129 XSDIVQP_XSDIVQPO
  { 1, 272, 274, 1360, 1363 }, // 130 XSSQRTQP_XSSQRTQPO
  { 1, 308, 310, 1363, 1366 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 1, 308, 310, 1366, 1369 }, // 134 LFIWZX_LFDX_LFD
  { 1, 308, 310, 1369, 1372 }, // 135 LFIWAX_LFSX_LFS
  { 1, 308, 310, 1372, 1375 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 1, 308, 310, 1375, 1378 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 342, 345, 1378, 1381 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 342, 345, 1381, 1384 }, // 141 STXVD2X_STXVW4X
  { 1, 282, 284, 1384, 1387 }, // 142 DIVW_DIVWU_MODSW
  { 1, 282, 284, 1387, 1390 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 280, 282, 1390, 1393 }, // 144 DIVD_DIVDU
  { 1, 280, 282, 1393, 1396 }, // 145 DIVDE_DIVDEU
  { 1, 280, 282, 1396, 1399 }, // 146 DIVDo_DIVDUo
  { 1, 282, 284, 1399, 1402 }, // 147 DIVWEo_DIVWEUo
  { 1, 280, 282, 1402, 1405 }, // 148 DIVDEo_DIVDEUo
  { 1, 338, 340, 1405, 1407 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 336, 338, 1407, 1410 }, // 150 MCRFS
  { 1, 284, 286, 1410, 1413 }, // 151 FDIV
  { 1, 284, 286, 1413, 1416 }, // 152 FDIVo
  { 1, 284, 286, 1416, 1419 }, // 153 XSDIVDP
  { 1, 284, 286, 1419, 1422 }, // 154 FDIVS
  { 1, 284, 286, 1422, 1425 }, // 155 FDIVSo
  { 1, 284, 286, 1425, 1428 }, // 156 XSDIVSP
  { 1, 284, 286, 1428, 1431 }, // 157 XVDIVSP
  { 1, 284, 286, 1431, 1434 }, // 158 XVDIVDP
  { 1, 310, 314, 1434, 1438 }, // 159 LFSU
  { 1, 310, 314, 1438, 1442 }, // 160 LFSUX
  { 1, 310, 314, 1442, 1446 }, // 161 LFDU
  { 1, 310, 314, 1446, 1450 }, // 162 LFDUX
  { 1, 272, 274, 1450, 1453 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary P7Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 374, 376, 1453, 1456 }, // 1 IIC_IntSimple
  { 1, 376, 378, 1456, 1459 }, // 2 IIC_IntGeneral
  { 1, 378, 380, 1459, 1462 }, // 3 IIC_BrB
  { 1, 380, 382, 1462, 1465 }, // 4 IIC_VecFP
  { 0, 0, 0, 0, 0 }, // 5 IIC_LdStSync
  { 1, 376, 378, 1465, 1468 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 382, 384, 1468, 1471 }, // 10 IIC_BrCR
  { 1, 384, 386, 1471, 1474 }, // 11 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 384, 386, 1474, 1477 }, // 13 IIC_LdStLoad
  { 1, 386, 389, 1477, 1480 }, // 14 IIC_IntDivD
  { 1, 389, 392, 1480, 1483 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_IntRotateDI
  { 1, 392, 394, 1483, 1486 }, // 17 IIC_FPGeneral
  { 1, 392, 394, 1486, 1489 }, // 18 IIC_FPAddSub
  { 1, 392, 394, 1489, 1492 }, // 19 IIC_FPCompare
  { 1, 392, 394, 1492, 1495 }, // 20 IIC_FPDivD
  { 1, 392, 394, 1495, 1498 }, // 21 IIC_FPDivS
  { 1, 392, 394, 1498, 1502 }, // 22 IIC_FPFused
  { 1, 392, 394, 1502, 1505 }, // 23 IIC_FPSqrtD
  { 1, 392, 394, 1505, 1508 }, // 24 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 25 IIC_LdStICBI
  { 1, 394, 397, 1508, 1511 }, // 26 IIC_LdStStore
  { 1, 397, 400, 1511, 1515 }, // 27 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 28 IIC_SprISYNC
  { 1, 400, 405, 1515, 1518 }, // 29 IIC_LdStLWARX
  { 1, 405, 409, 1518, 1522 }, // 30 IIC_LdStLoadUpd
  { 1, 409, 416, 1522, 1526 }, // 31 IIC_LdStLoadUpdX
  { 1, 400, 405, 1526, 1529 }, // 32 IIC_LdStLDARX
  { 1, 405, 409, 1529, 1533 }, // 33 IIC_LdStLDU
  { 1, 409, 416, 1533, 1537 }, // 34 IIC_LdStLDUX
  { 1, 384, 386, 1537, 1540 }, // 35 IIC_LdStLFD
  { 1, 405, 409, 1540, 1544 }, // 36 IIC_LdStLFDU
  { 1, 405, 409, 1544, 1548 }, // 37 IIC_LdStLFDUX
  { 1, 416, 420, 1548, 1551 }, // 38 IIC_LdStLHA
  { 1, 420, 425, 1551, 1555 }, // 39 IIC_LdStLHAU
  { 1, 425, 433, 1555, 1559 }, // 40 IIC_LdStLHAUX
  { 1, 384, 386, 1559, 1562 }, // 41 IIC_LdStLMW
  { 1, 416, 420, 1562, 1565 }, // 42 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 43 IIC_IntMulHD
  { 1, 378, 380, 1565, 1568 }, // 44 IIC_BrMCR
  { 1, 433, 439, 1568, 1570 }, // 45 IIC_BrMCRX
  { 1, 382, 384, 1570, 1572 }, // 46 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 47 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 48 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 49 IIC_SprMFMSR
  { 1, 382, 384, 1572, 1574 }, // 50 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 52 IIC_SprMFSR
  { 0, 0, 0, 0, 0 }, // 53 IIC_SprMFTB
  { 1, 439, 441, 1574, 1577 }, // 54 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMSGSYNC
  { 1, 441, 443, 1577, 1579 }, // 56 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 57 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 59 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 60 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprMTSR
  { 1, 376, 378, 1579, 1582 }, // 62 IIC_IntMulHW
  { 1, 376, 378, 1582, 1585 }, // 63 IIC_IntMulHWU
  { 1, 376, 378, 1585, 1588 }, // 64 IIC_IntMulLI
  { 1, 443, 445, 1588, 1591 }, // 65 IIC_VecPerm
  { 1, 445, 448, 1591, 1594 }, // 66 IIC_LdStSTFD
  { 1, 448, 453, 1594, 1598 }, // 67 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 68 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 69 IIC_IntRFID
  { 1, 376, 378, 1598, 1601 }, // 70 IIC_IntRotateD
  { 1, 376, 378, 1601, 1604 }, // 71 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 72 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 73 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 74 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBSYNC
  { 1, 376, 378, 1604, 1607 }, // 79 IIC_IntShift
  { 1, 400, 405, 1607, 1610 }, // 80 IIC_LdStSTWCX
  { 0, 0, 0, 0, 0 }, // 81 IIC_LdStStoreUpd
  { 1, 394, 397, 1610, 1613 }, // 82 IIC_LdStSTD
  { 1, 400, 405, 1613, 1616 }, // 83 IIC_LdStSTDCX
  { 1, 420, 425, 1616, 1620 }, // 84 IIC_LdStSTDU
  { 1, 453, 460, 1620, 1624 }, // 85 IIC_LdStSTDUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_SprSTOP
  { 1, 376, 378, 1624, 1626 }, // 87 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 89 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBSYNC
  { 1, 376, 378, 1626, 1628 }, // 92 IIC_IntTrapW
  { 1, 380, 382, 1628, 1631 }, // 93 IIC_VecFPCompare
  { 1, 380, 382, 1631, 1634 }, // 94 VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 439, 441, 1634, 1637 }, // 95 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR
  { 1, 380, 382, 1637, 1640 }, // 96 VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW
  { 1, 443, 445, 1640, 1643 }, // 97 XXSEL
  { 1, 392, 394, 1643, 1646 }, // 98 FCMPUS_FCMPUD
  { 1, 380, 382, 1646, 1649 }, // 99 XSTSTDCDP_XSTSTDCSP
  { 1, 380, 382, 1649, 1652 }, // 100 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 392, 394, 1652, 1655 }, // 101 XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP
  { 0, 0, 0, 0, 0 }, // 102 ADDIStocHA_ADDItocL
  { 1, 378, 380, 1655, 1658 }, // 103 MCRF
  { 1, 433, 439, 1658, 1660 }, // 104 MCRXRX
  { 1, 376, 378, 1660, 1663 }, // 105 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 106 SRADI_RLDIC
  { 1, 380, 382, 1663, 1666 }, // 107 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 376, 378, 1666, 1669 }, // 108 RLDCL_RLDCR
  { 0, 0, 0, 0, 0 }, // 109 RLDIMI_RLDICL_RLDICR_RLDICL_32_64
  { 1, 380, 382, 1669, 1672 }, // 110 XSIEXPDP
  { 1, 392, 394, 1672, 1675 }, // 111 FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS
  { 1, 380, 382, 1675, 1678 }, // 112 VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 439, 441, 1678, 1681 }, // 113 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 380, 382, 1681, 1684 }, // 114 VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 392, 394, 1684, 1687 }, // 115 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 380, 382, 1687, 1690 }, // 116 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 439, 441, 1690, 1693 }, // 117 VSUBFP_VMULUWM
  { 1, 392, 394, 1693, 1696 }, // 118 FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ
  { 1, 392, 394, 1696, 1700 }, // 119 FMADD_FMSUB_FNMADD_FNMSUB_FMUL
  { 1, 380, 382, 1700, 1703 }, // 120 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 392, 394, 1703, 1707 }, // 121 FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo
  { 1, 380, 382, 1707, 1710 }, // 122 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN
  { 1, 380, 382, 1710, 1713 }, // 123 VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP
  { 1, 439, 441, 1713, 1716 }, // 124 VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 443, 445, 1716, 1719 }, // 125 VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 392, 394, 1719, 1722 }, // 126 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 380, 382, 1722, 1725 }, // 127 XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 380, 382, 1725, 1728 }, // 128 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 380, 382, 1728, 1731 }, // 129 XSDIVQP_XSDIVQPO
  { 1, 380, 382, 1731, 1734 }, // 130 XSSQRTQP_XSSQRTQPO
  { 1, 384, 386, 1734, 1737 }, // 131 LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 132 DFLOADf64_XFLOADf64
  { 0, 0, 0, 0, 0 }, // 133 COPY
  { 1, 384, 386, 1737, 1740 }, // 134 LFIWZX_LFDX_LFD
  { 1, 384, 386, 1740, 1743 }, // 135 LFIWAX_LFSX_LFS
  { 1, 384, 386, 1743, 1746 }, // 136 LXSSPX_LXSIWAX_LXSSP
  { 0, 0, 0, 0, 0 }, // 137 DFLOADf32_XFLOADf32_LIWAX_LIWZX
  { 1, 384, 386, 1746, 1749 }, // 138 LXVDSX_LXVWSX_LXVW4X
  { 1, 445, 448, 1749, 1752 }, // 139 STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX
  { 0, 0, 0, 0, 0 }, // 140 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 445, 448, 1752, 1755 }, // 141 STXVD2X_STXVW4X
  { 1, 389, 392, 1755, 1758 }, // 142 DIVW_DIVWU_MODSW
  { 1, 389, 392, 1758, 1761 }, // 143 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 386, 389, 1761, 1764 }, // 144 DIVD_DIVDU
  { 1, 386, 389, 1764, 1767 }, // 145 DIVDE_DIVDEU
  { 1, 386, 389, 1767, 1770 }, // 146 DIVDo_DIVDUo
  { 1, 389, 392, 1770, 1773 }, // 147 DIVWEo_DIVWEUo
  { 1, 386, 389, 1773, 1776 }, // 148 DIVDEo_DIVDEUo
  { 1, 433, 439, 1776, 1778 }, // 149 MTOCRF_MTOCRF8_MTCRF_MTCRF8
  { 1, 378, 380, 1778, 1781 }, // 150 MCRFS
  { 1, 392, 394, 1781, 1784 }, // 151 FDIV
  { 1, 392, 394, 1784, 1787 }, // 152 FDIVo
  { 1, 392, 394, 1787, 1790 }, // 153 XSDIVDP
  { 1, 392, 394, 1790, 1793 }, // 154 FDIVS
  { 1, 392, 394, 1793, 1796 }, // 155 FDIVSo
  { 1, 392, 394, 1796, 1799 }, // 156 XSDIVSP
  { 1, 392, 394, 1799, 1802 }, // 157 XVDIVSP
  { 1, 392, 394, 1802, 1805 }, // 158 XVDIVDP
  { 1, 405, 409, 1805, 1809 }, // 159 LFSU
  { 1, 405, 409, 1809, 1813 }, // 160 LFSUX
  { 1, 405, 409, 1813, 1817 }, // 161 LFDU
  { 1, 405, 409, 1817, 1821 }, // 162 LFDUX
  { 1, 380, 382, 1821, 1824 }, // 163 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 1,  1}, // #1
  { 7,  2}, // #2
  {13,  1}, // #3
  {18,  1}, // #4
  { 4,  1}, // #5
  { 7,  1}, // #6
  { 7,  3}, // #7
  { 9,  1}, // #8
  {13,  1}, // #9
  {18,  1}, // #10
  { 7,  2}, // #11
  {13,  1}, // #12
  {16,  1}, // #13
  { 1,  1}, // #14
  { 7,  3}, // #15
  {13,  1}, // #16
  {18,  1}, // #17
  { 1,  2}, // #18
  { 2,  1}, // #19
  { 3,  1}, // #20
  { 7,  2}, // #21
  {13,  2}, // #22
  {14,  1}, // #23
  {15,  1}, // #24
  { 9, 10}, // #25
  {13,  1}, // #26
  {18, 10}, // #27
  { 9, 10}, // #28
  {13,  2}, // #29
  {18, 10}, // #30
  { 7,  3}, // #31
  {12,  1}, // #32
  {13,  1}, // #33
  {16,  1}, // #34
  { 1,  1}, // #35
  { 7,  4}, // #36
  {13,  2}, // #37
  {16,  1}, // #38
  {18,  1}, // #39
  { 1,  1}, // #40
  { 7,  4}, // #41
  {13,  2}, // #42
  {14,  1}, // #43
  {15,  1}, // #44
  {16,  1}, // #45
  {18,  1}, // #46
  { 1,  1}, // #47
  { 7,  4}, // #48
  {12,  1}, // #49
  {13,  1}, // #50
  {16,  1}, // #51
  {18,  1}, // #52
  { 1,  2}, // #53
  { 7,  6}, // #54
  {12,  1}, // #55
  {13,  2}, // #56
  {16,  1}, // #57
  {18,  2}, // #58
  { 1,  3}, // #59
  { 7,  9}, // #60
  {13,  3}, // #61
  {18,  3}, // #62
  { 7,  2}, // #63
  { 8,  1}, // #64
  {13,  1}, // #65
  {14,  1}, // #66
  { 1,  1}, // #67
  { 7,  3}, // #68
  {12,  1}, // #69
  {13,  1}, // #70
  {16,  1}, // #71
  {18,  1}, // #72
  { 7,  2}, // #73
  {13,  2}, // #74
  {14,  1}, // #75
  {15,  1}, // #76
  {17,  1}, // #77
  { 1,  1}, // #78
  { 7,  5}, // #79
  {12,  1}, // #80
  {13,  2}, // #81
  {16,  1}, // #82
  {18,  1}, // #83
  { 7,  2}, // #84
  {13,  1}, // #85
  {16,  2}, // #86
  { 1,  2}, // #87
  { 2,  1}, // #88
  { 3,  1}, // #89
  { 7,  3}, // #90
  {13,  2}, // #91
  {14,  1}, // #92
  {15,  1}, // #93
  { 7,  3}, // #94
  { 9,  2}, // #95
  {10,  1}, // #96
  {11,  1}, // #97
  {13,  2}, // #98
  {14,  1}, // #99
  {15,  1}, // #100
  { 1,  1}, // #101
  { 7,  5}, // #102
  { 9,  1}, // #103
  {13,  2}, // #104
  {18,  2}, // #105
  { 7,  2}, // #106
  { 9,  1}, // #107
  {13,  1}, // #108
  {18,  1}, // #109
  { 7,  3}, // #110
  {13,  2}, // #111
  {14,  1}, // #112
  {15,  1}, // #113
  {17,  1}, // #114
  { 6,  1}, // #115
  { 7,  3}, // #116
  {13,  2}, // #117
  {14,  1}, // #118
  {15,  1}, // #119
  { 6, 12}, // #120
  { 7,  3}, // #121
  {13,  2}, // #122
  {14,  1}, // #123
  {15,  1}, // #124
  { 6, 44}, // #125
  { 7,  3}, // #126
  {13,  2}, // #127
  {14,  1}, // #128
  {15,  1}, // #129
  { 6,  1}, // #130
  { 7,  3}, // #131
  {13,  2}, // #132
  {14,  1}, // #133
  {15,  1}, // #134
  {18, 62}, // #135
  { 7,  2}, // #136
  {12,  1}, // #137
  {16,  1}, // #138
  { 7,  3}, // #139
  {12,  1}, // #140
  {16,  1}, // #141
  { 1,  1}, // #142
  { 7,  6}, // #143
  {12,  1}, // #144
  {13,  1}, // #145
  {16,  1}, // #146
  {18,  1}, // #147
  { 7,  5}, // #148
  {12,  1}, // #149
  {13,  2}, // #150
  {14,  1}, // #151
  {15,  1}, // #152
  {16,  1}, // #153
  {17,  1}, // #154
  { 7,  3}, // #155
  {12,  1}, // #156
  {13,  2}, // #157
  {14,  1}, // #158
  {15,  1}, // #159
  {16,  1}, // #160
  { 7,  3}, // #161
  { 8,  8}, // #162
  {13,  2}, // #163
  {14,  1}, // #164
  {15,  1}, // #165
  { 1,  1}, // #166
  { 7,  5}, // #167
  { 8,  8}, // #168
  {13,  3}, // #169
  {14,  1}, // #170
  {15,  1}, // #171
  {18,  1}, // #172
  { 1,  2}, // #173
  { 7,  6}, // #174
  {13,  2}, // #175
  {18,  2}, // #176
  { 1,  2}, // #177
  { 7,  4}, // #178
  {13,  2}, // #179
  {18,  2}, // #180
  { 7,  3}, // #181
  { 9,  8}, // #182
  {13,  1}, // #183
  {18,  8}, // #184
  { 1,  1}, // #185
  { 7,  5}, // #186
  { 9,  8}, // #187
  {13,  2}, // #188
  {18,  9}, // #189
  { 7,  2}, // #190
  { 9,  8}, // #191
  {13,  1}, // #192
  {18,  8}, // #193
  { 7,  3}, // #194
  { 9,  5}, // #195
  {13,  1}, // #196
  {18,  5}, // #197
  { 1,  1}, // #198
  { 7,  5}, // #199
  { 9,  5}, // #200
  {13,  2}, // #201
  {18,  6}, // #202
  { 7,  2}, // #203
  { 9,  5}, // #204
  {13,  1}, // #205
  {18,  5}, // #206
  { 7,  3}, // #207
  { 9, 16}, // #208
  {10,  8}, // #209
  {11,  8}, // #210
  {13,  2}, // #211
  {14,  1}, // #212
  {15,  1}, // #213
  { 1,  2}, // #214
  { 7,  8}, // #215
  {12,  1}, // #216
  {13,  2}, // #217
  {16,  1}, // #218
  {18,  2}, // #219
  { 1,  1}, // #220
  { 7,  5}, // #221
  {12,  1}, // #222
  {13,  1}, // #223
  {16,  1}, // #224
  {18,  1}, // #225
  { 5,  1}, // #226
  { 7,  3}, // #227
  {13,  2}, // #228
  {14,  1}, // #229
  {15,  1} // #230
}; // PPCWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 2,  0}, // #1 P9_ALU_2C_P9_BR_2C
  { 1,  0}, // #2 IP_EXEC_1C_DISP_1C
  { 1,  0}, // #3 DISP_1C
  { 1,  0}, // #4 DISP_1C
  { 7,  0}, // #5 P9_DP_7C
  { 1,  0}, // #6 IP_EXEC_1C
  { 1,  0}, // #7 DISP_1C
  { 1,  0}, // #8 DISP_1C
  { 1,  0}, // #9 DISP_1C
  { 4,  0}, // #10 P9_LS_4C
  { 1,  0}, // #11 IP_EXEC_1C_IP_AGEN_1C
  { 1,  0}, // #12 DISP_1C
  { 1,  0}, // #13 DISP_1C
  { 5,  0}, // #14 P9_ALU_5C_P9_LS_5C_P9_DP_5C_P9_BR_5C
  { 1,  0}, // #15 IP_EXEC_1C_DISP_1C_IP_AGEN_1C
  { 1,  0}, // #16 DISP_1C
  { 1,  0}, // #17 DISP_1C
  { 1,  0}, // #18 DISP_1C
  { 2,  0}, // #19 P9_ALUE_2C
  { 2,  0}, // #20 P9_ALUO_2C_P9_ALU_2C
  { 1,  0}, // #21 IP_EXECE_1C_IP_EXEC_1C
  { 1,  0}, // #22 IP_EXECO_1C_DISP_1C
  { 1,  0}, // #23 DISP_1C
  { 1,  0}, // #24 DISP_1C
  {36,  0}, // #25 P9_DP_36C_10
  { 1,  0}, // #26 IP_EXEC_1C
  {22,  0}, // #27 P9_DP_26C_5
  {22,  0}, // #28 P9_DP_26C_5_P9_DP_22C_5
  { 1,  0}, // #29 IP_EXEC_1C_P9_LS_1C
  { 1,  0}, // #30 IP_EXEC_1C_IP_EXECE_1C_DISP_1C
  { 1,  0}, // #31 P9_LS_1C_IP_AGEN_1C_IP_EXECO_1C_DISP_1C
  { 1,  0}, // #32 IP_EXEC_1C_DISP_1C_IP_AGEN_1C
  { 1,  0}, // #33 IP_AGEN_1C_DISP_1C
  { 1,  0}, // #34 DISP_1C
  { 1,  0}, // #35 DISP_1C
  { 1,  0}, // #36 DISP_1C
  { 4,  0}, // #37 P9_LS_4C
  { 2,  0}, // #38 P9_ALU_2C
  { 1,  0}, // #39 IP_EXEC_1C_IP_EXECE_1C
  { 1,  0}, // #40 IP_EXEC_1C_IP_EXECO_1C
  { 1,  0}, // #41 DISP_1C
  { 1,  0}, // #42 DISP_1C
  { 1,  0}, // #43 DISP_1C
  { 1,  0}, // #44 DISP_1C
  { 6,  0}, // #45 P9_ALU_2C_P9_CY_6C
  { 1,  0}, // #46 IP_AGEN_1C_IP_EXEC_1C_IP_EXECO_1C
  { 1,  0}, // #47 IP_EXEC_1C_IP_AGEN_1C_IP_EXECE_1C
  { 1,  0}, // #48 DISP_1C
  { 1,  0}, // #49 DISP_1C
  { 1,  0}, // #50 DISP_1C
  { 1,  0}, // #51 DISP_1C
  { 6,  0}, // #52 P9_ALU_2C
  { 2,  0}, // #53 P9_ALU_2C
  { 1,  0}, // #54 IP_AGEN_1C
  { 1,  0}, // #55 IP_EXEC_1C
  { 1,  0}, // #56 IP_EXEC_1C
  { 1,  0}, // #57 DISP_1C
  { 1,  0}, // #58 DISP_1C
  { 1,  0}, // #59 DISP_1C
  { 1,  0}, // #60 DISP_1C
  { 1,  0}, // #61 DISP_1C
  { 1,  0}, // #62 DISP_1C
  { 4,  0}, // #63 P9_ALU_2C_P9_LS_4C
  { 2,  0}, // #64 P9_ALU_2C
  { 1,  0}, // #65 IP_EXEC_1C_IP_AGEN_1C
  { 1,  0}, // #66 IP_EXEC_1C
  { 1,  0}, // #67 IP_EXEC_1C_DISP_1C
  { 1,  0}, // #68 DISP_1C
  { 1,  0}, // #69 DISP_1C
  { 1,  0}, // #70 DISP_1C
  { 1,  0}, // #71 DISP_1C
  { 1,  0}, // #72 DISP_1C
  { 1,  0}, // #73 DISP_1C
  { 1,  0}, // #74 DISP_1C
  { 1,  0}, // #75 DISP_1C
  { 1,  0}, // #76 DISP_1C
  {12,  0}, // #77 P9_DIV_12C
  { 1,  0}, // #78 IP_EXECE_1C
  { 1,  0}, // #79 DISP_1C
  { 1,  0}, // #80 DISP_1C
  { 3,  0}, // #81 P9_PM_3C_P9_ALU_3C
  { 1,  0}, // #82 IP_EXECO_1C_IP_EXEC_1C
  { 1,  0}, // #83 IP_EXECE_1C_DISP_1C
  { 1,  0}, // #84 DISP_1C
  { 1,  0}, // #85 DISP_1C
  { 1,  0}, // #86 P9_LS_1C_DISP_1C
  { 2,  0}, // #87 P9_ALU_2C
  { 1,  0}, // #88 IP_EXEC_1C
  { 1,  0}, // #89 IP_EXEC_1C
  { 1,  0}, // #90 IP_AGEN_1C
  { 1,  0}, // #91 DISP_1C
  { 1,  0}, // #92 DISP_1C
  { 1,  0}, // #93 DISP_1C
  { 1,  0}, // #94 DISP_1C
  { 1,  0}, // #95 DISP_1C
  { 8,  0}, // #96 P9_LS_4C
  { 1,  0}, // #97 IP_EXEC_1C
  { 1,  0}, // #98 DISP_1C
  { 1,  0}, // #99 DISP_1C
  { 4,  0}, // #100 P9_ALU_3C_P9_LS_4C
  { 1,  0}, // #101 IP_EXEC_1C_IP_AGEN_1C
  { 1,  0}, // #102 IP_EXEC_1C_DISP_1C
  { 1,  0}, // #103 IP_AGEN_1C_DISP_1C
  { 1,  0}, // #104 DISP_1C
  { 1,  0}, // #105 DISP_1C
  { 1,  0}, // #106 DISP_1C
  { 1,  0}, // #107 DISP_1C
  { 1,  0}, // #108 DISP_1C
  { 3,  0}, // #109 P9_ALUE_3C
  { 3,  0}, // #110 P9_ALUO_3C
  { 1,  0}, // #111 IP_EXECE_1C
  { 1,  0}, // #112 IP_EXECO_1C
  { 1,  0}, // #113 DISP_1C
  { 1,  0}, // #114 DISP_1C
  { 2,  0}, // #115 P9_ALUE_2C
  { 2,  0}, // #116 P9_ALUO_2C
  { 1,  0}, // #117 IP_EXECE_1C
  { 1,  0}, // #118 IP_EXECO_1C
  { 1,  0}, // #119 DISP_1C
  { 1,  0}, // #120 DISP_1C
  { 1,  0}, // #121 DISP_1C
  { 3,  0}, // #122 P9_ALUE_3C
  { 3,  0}, // #123 P9_ALUO_3C
  { 1,  0}, // #124 IP_EXECE_1C
  { 1,  0}, // #125 IP_EXECO_1C
  { 1,  0}, // #126 DISP_1C
  { 1,  0}, // #127 DISP_1C
  { 1,  0}, // #128 DISP_1C
  { 7,  0}, // #129 P9_DPE_7C
  { 7,  0}, // #130 P9_DPO_7C
  { 1,  0}, // #131 IP_EXECE_1C
  { 1,  0}, // #132 IP_EXECO_1C
  { 1,  0}, // #133 DISP_1C
  { 1,  0}, // #134 DISP_1C
  { 1,  0}, // #135 DISP_1C
  { 9,  0}, // #136 P9_ALU_2C
  { 1,  0}, // #137 IP_EXEC_1C
  { 1,  0}, // #138 IP_EXEC_1C
  { 1,  0}, // #139 DISP_1C
  { 1,  0}, // #140 DISP_1C
  { 1,  0}, // #141 DISP_1C
  { 1,  0}, // #142 DISP_1C
  { 1,  0}, // #143 DISP_1C
  {12,  0}, // #144 P9_DFU_12C
  { 1,  0}, // #145 IP_EXECE_1C
  { 1,  0}, // #146 IP_EXECO_1C
  { 1,  0}, // #147 DISP_1C
  { 1,  0}, // #148 DISP_1C
  { 1,  0}, // #149 DISP_1C
  {24,  0}, // #150 P9_DFU_24C_P9_DIV_24C_8
  { 1,  0}, // #151 IP_EXECE_1C_IP_EXECO_1C
  { 1,  0}, // #152 IP_EXECO_1C_IP_EXECE_1C
  { 1,  0}, // #153 DISP_1C
  { 1,  0}, // #154 DISP_1C
  { 1,  0}, // #155 DISP_1C
  {58,  0}, // #156 P9_DFU_58C
  { 1,  0}, // #157 IP_EXECE_1C
  { 1,  0}, // #158 IP_EXECO_1C
  { 1,  0}, // #159 DISP_1C
  { 1,  0}, // #160 DISP_1C
  { 1,  0}, // #161 DISP_1C
  {76,  0}, // #162 P9_DFU_76C
  { 1,  0}, // #163 IP_EXECE_1C
  { 1,  0}, // #164 IP_EXECO_1C
  { 1,  0}, // #165 DISP_1C
  { 1,  0}, // #166 DISP_1C
  { 1,  0}, // #167 DISP_1C
  { 6,  0}, // #168 P9_ALU_2C
  { 1,  0}, // #169 IP_EXEC_1C
  { 1,  0}, // #170 IP_AGEN_1C
  { 1,  0}, // #171 DISP_1C
  { 1,  0}, // #172 DISP_1C
  { 1,  0}, // #173 DISP_1C
  { 1,  0}, // #174 DISP_1C
  { 1,  0}, // #175 DISP_1C
  { 1,  0}, // #176 DISP_1C
  { 7,  0}, // #177 P9_ALU_2C
  { 1,  0}, // #178 IP_AGEN_1C
  { 1,  0}, // #179 IP_EXEC_1C
  { 1,  0}, // #180 DISP_1C
  { 1,  0}, // #181 DISP_1C
  { 1,  0}, // #182 DISP_1C
  { 1,  0}, // #183 DISP_1C
  { 8,  0}, // #184 P9_PM_3C
  { 1,  0}, // #185 IP_AGEN_1C
  { 1,  0}, // #186 IP_EXECE_1C
  { 1,  0}, // #187 IP_EXECO_1C
  { 1,  0}, // #188 DISP_1C
  { 1,  0}, // #189 DISP_1C
  { 1,  0}, // #190 DISP_1C
  { 1,  0}, // #191 DISP_1C
  { 1,  0}, // #192 DISP_1C
  {16,  0}, // #193 P9_DIV_16C_8
  { 1,  0}, // #194 IP_EXECO_1C
  { 1,  0}, // #195 IP_EXECE_1C
  { 1,  0}, // #196 DISP_1C
  { 1,  0}, // #197 DISP_1C
  { 1,  0}, // #198 DISP_1C
  {40,  0}, // #199 P9_DIV_40C_8
  { 1,  0}, // #200 IP_EXECO_1C
  { 1,  0}, // #201 IP_EXECE_1C
  { 1,  0}, // #202 DISP_1C
  { 1,  0}, // #203 DISP_1C
  { 1,  0}, // #204 DISP_1C
  {26,  0}, // #205 P9_ALU_2C
  { 1,  0}, // #206 IP_EXECE_1C
  { 1,  0}, // #207 IP_EXECO_1C
  { 1,  0}, // #208 IP_EXEC_1C
  { 1,  0}, // #209 DISP_1C
  { 1,  0}, // #210 DISP_1C
  { 1,  0}, // #211 DISP_1C
  { 1,  0}, // #212 DISP_1C
  { 1,  0}, // #213 DISP_1C
  {42,  0}, // #214 P9_ALU_2C
  { 1,  0}, // #215 IP_EXECE_1C
  { 1,  0}, // #216 IP_EXECO_1C
  { 1,  0}, // #217 IP_EXEC_1C
  { 1,  0}, // #218 DISP_1C
  { 1,  0}, // #219 DISP_1C
  { 1,  0}, // #220 DISP_1C
  { 1,  0}, // #221 DISP_1C
  { 1,  0}, // #222 DISP_1C
  { 2,  0}, // #223 P9_ALU_2C
  { 2,  0}, // #224 P9_ALU_2C
  { 1,  0}, // #225 IP_EXEC_1C
  { 1,  0}, // #226 IP_EXEC_1C
  { 1,  0}, // #227 DISP_1C
  { 1,  0}, // #228 DISP_1C
  { 1,  0}, // #229 DISP_1C
  { 1,  0}, // #230 DISP_1C
  { 1,  0}, // #231 DISP_1C
  { 1,  0}, // #232 DISP_1C
  { 3,  0}, // #233 P9_ALU_3C
  { 3,  0}, // #234 P9_ALU_3C
  { 1,  0}, // #235 IP_EXEC_1C
  { 1,  0}, // #236 IP_EXEC_1C
  { 1,  0}, // #237 DISP_1C
  { 1,  0}, // #238 DISP_1C
  { 1,  0}, // #239 DISP_1C
  { 1,  0}, // #240 DISP_1C
  {33,  0}, // #241 P9_DP_33C_8
  { 1,  0}, // #242 IP_EXEC_1C
  { 1,  0}, // #243 DISP_1C
  { 1,  0}, // #244 DISP_1C
  { 1,  0}, // #245 DISP_1C
  {35,  0}, // #246 P9_ALU_2C
  { 1,  0}, // #247 IP_EXEC_1C
  { 1,  0}, // #248 IP_EXEC_1C
  { 1,  0}, // #249 DISP_1C
  { 1,  0}, // #250 DISP_1C
  { 1,  0}, // #251 DISP_1C
  { 1,  0}, // #252 DISP_1C
  { 1,  0}, // #253 DISP_1C
  {24,  0}, // #254 P9_ALU_2C
  { 1,  0}, // #255 IP_EXEC_1C
  { 1,  0}, // #256 IP_EXEC_1C
  { 1,  0}, // #257 DISP_1C
  { 1,  0}, // #258 DISP_1C
  { 1,  0}, // #259 DISP_1C
  { 1,  0}, // #260 DISP_1C
  { 1,  0}, // #261 DISP_1C
  {24,  0}, // #262 P9_DPE_24C_8
  {24,  0}, // #263 P9_DPO_24C_8
  { 1,  0}, // #264 IP_EXECE_1C
  { 1,  0}, // #265 IP_EXECO_1C
  { 1,  0}, // #266 DISP_1C
  { 1,  0}, // #267 DISP_1C
  { 1,  0}, // #268 DISP_1C
  {33,  0}, // #269 P9_DPE_33C_8
  {33,  0}, // #270 P9_DPO_33C_8
  { 1,  0}, // #271 IP_EXECE_1C
  { 1,  0}, // #272 IP_EXECO_1C
  { 1,  0}, // #273 DISP_1C
  { 1,  0}, // #274 DISP_1C
  { 1,  0}, // #275 DISP_1C
  { 6,  0}, // #276 P9_ALU_2C
  { 2,  0}, // #277 P9_ALU_2C
  { 1,  0}, // #278 IP_AGEN_1C
  { 1,  0}, // #279 IP_EXEC_1C
  { 1,  0}, // #280 IP_EXEC_1C
  { 1,  0}, // #281 DISP_1C
  { 1,  0}, // #282 DISP_1C
  { 1,  0}, // #283 DISP_1C
  { 1,  0}, // #284 DISP_1C
  { 1,  0}, // #285 DISP_1C
  { 1,  0}, // #286 DISP_1C
  { 1,  0}, // #287 DISP_1C
  { 1,  0} // #288 DISP_1C
}; // PPCWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // PPCReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc P9ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_IntSimple")      1, false, false,  1, 4,  1, 4,  0, 0}, // #1
  {DBGFIELD("IIC_IntGeneral")     1, false, false,  1, 4,  1, 4,  0, 0}, // #2
  {DBGFIELD("IIC_BrB")            1, false, false,  5, 2,  1, 2,  0, 0}, // #3
  {DBGFIELD("IIC_VecFP")          1, false, false,  7, 4,  5, 5,  0, 0}, // #4
  {DBGFIELD("IIC_LdStSync")       1, false, false, 11, 3, 10, 4,  0, 0}, // #5
  {DBGFIELD("IIC_IntCompare")     1, false, false,  1, 4,  1, 4,  0, 0}, // #6
  {DBGFIELD("IIC_SprABORT")       1, false, false, 11, 3, 10, 4,  0, 0}, // #7
  {DBGFIELD("IIC_LdStCOPY")       1, false, false, 11, 3, 10, 4,  0, 0}, // #8
  {DBGFIELD("IIC_LdStPASTE")      1, false, false, 11, 3, 10, 4,  0, 0}, // #9
  {DBGFIELD("IIC_BrCR")           1, false, false, 14, 4, 14, 5,  0, 0}, // #10
  {DBGFIELD("IIC_LdStLD")         1, false, false, 11, 3, 14, 4,  0, 0}, // #11
  {DBGFIELD("IIC_LdStDCBF")       1, false, false, 11, 3, 10, 4,  0, 0}, // #12
  {DBGFIELD("IIC_LdStLoad")       1, false, false, 11, 3, 14, 4,  0, 0}, // #13
  {DBGFIELD("IIC_IntDivD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #14
  {DBGFIELD("IIC_IntDivW")        0, false, false,  0, 0,  0, 0,  0, 0}, // #15
  {DBGFIELD("IIC_IntRotateDI")    1, false, false,  1, 4,  1, 4,  0, 0}, // #16
  {DBGFIELD("IIC_FPGeneral")      1, false, false,  7, 4,  5, 5,  0, 0}, // #17
  {DBGFIELD("IIC_FPAddSub")       1, false, false,  7, 4,  5, 5,  0, 0}, // #18
  {DBGFIELD("IIC_FPCompare")      2, false, false, 18, 7, 19, 6,  0, 0}, // #19
  {DBGFIELD("IIC_FPDivD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #20
  {DBGFIELD("IIC_FPDivS")         0, false, false,  0, 0,  0, 0,  0, 0}, // #21
  {DBGFIELD("IIC_FPFused")        0, false, false,  0, 0,  0, 0,  0, 0}, // #22
  {DBGFIELD("IIC_FPSqrtD")        1, false, false, 25, 3, 25, 2,  0, 0}, // #23
  {DBGFIELD("IIC_FPSqrtS")        2, false, false, 28, 3, 27, 4,  0, 0}, // #24
  {DBGFIELD("IIC_LdStICBI")       1, false, false, 11, 3, 10, 4,  0, 0}, // #25
  {DBGFIELD("IIC_LdStStore")      1, false, false, 31, 4, 31, 6,  0, 0}, // #26
  {DBGFIELD("IIC_IntISEL")        1, false, false, 14, 4, 20, 5,  0, 0}, // #27
  {DBGFIELD("IIC_SprISYNC")       1, false, false, 11, 3, 10, 4,  0, 0}, // #28
  {DBGFIELD("IIC_LdStLWARX")      1, false, false, 11, 3, 10, 4,  0, 0}, // #29
  {DBGFIELD("IIC_LdStLoadUpd")    2, false, false, 35, 5, 37, 8,  0, 0}, // #30
  {DBGFIELD("IIC_LdStLoadUpdX")   2, false, false, 40, 7, 37, 8,  0, 0}, // #31
  {DBGFIELD("IIC_LdStLDARX")      1, false, false, 11, 3, 10, 4,  0, 0}, // #32
  {DBGFIELD("IIC_LdStLDU")        2, false, false, 35, 5, 37, 8,  0, 0}, // #33
  {DBGFIELD("IIC_LdStLDUX")       2, false, false, 40, 7, 37, 8,  0, 0}, // #34
  {DBGFIELD("IIC_LdStLFD")        1, false, false, 11, 3, 14, 4,  0, 0}, // #35
  {DBGFIELD("IIC_LdStLFDU")       0, false, false,  0, 0,  0, 0,  0, 0}, // #36
  {DBGFIELD("IIC_LdStLFDUX")      0, false, false,  0, 0,  0, 0,  0, 0}, // #37
  {DBGFIELD("IIC_LdStLHA")        2, false, false, 47, 6, 45, 7,  0, 0}, // #38
  {DBGFIELD("IIC_LdStLHAU")       3, false, false, 53, 6, 52, 11,  0, 0}, // #39
  {DBGFIELD("IIC_LdStLHAUX")      3, false, false, 53, 6, 52, 11,  0, 0}, // #40
  {DBGFIELD("IIC_LdStLMW")        1, false, false, 11, 3, 10, 4,  0, 0}, // #41
  {DBGFIELD("IIC_LdStLWA")        2, false, false, 47, 6, 45, 7,  0, 0}, // #42
  {DBGFIELD("IIC_IntMulHD")       1, false, false,  7, 4, 14, 5,  0, 0}, // #43
  {DBGFIELD("IIC_BrMCR")          3, false, false, 59, 4, 63, 14,  0, 0}, // #44
  {DBGFIELD("IIC_BrMCRX")         3, false, false, 59, 4, 63, 14,  0, 0}, // #45
  {DBGFIELD("IIC_SprMFCR")        3, false, false, 59, 4, 63, 14,  0, 0}, // #46
  {DBGFIELD("IIC_SprMFSPR")       1, false, false,  5, 2, 14, 2,  0, 0}, // #47
  {DBGFIELD("IIC_IntMFFS")        3, false, false, 59, 4, 63, 14,  0, 0}, // #48
  {DBGFIELD("IIC_SprMFMSR")       1, false, false, 63, 4, 77, 4,  0, 0}, // #49
  {DBGFIELD("IIC_SprMFCRF")       3, false, false, 59, 4, 63, 14,  0, 0}, // #50
  {DBGFIELD("IIC_SprMFPMR")       1, false, false, 63, 4, 77, 4,  0, 0}, // #51
  {DBGFIELD("IIC_SprMFSR")        1, false, false, 63, 4, 77, 4,  0, 0}, // #52
  {DBGFIELD("IIC_SprMFTB")        1, false, false, 63, 4, 77, 4,  0, 0}, // #53
  {DBGFIELD("IIC_VecGeneral")     2, false, false, 18, 7, 19, 6,  0, 0}, // #54
  {DBGFIELD("IIC_SprMSGSYNC")     1, false, false, 11, 3, 10, 4,  0, 0}, // #55
  {DBGFIELD("IIC_SprMTSPR")       2, false, false, 67, 6, 45, 6,  0, 0}, // #56
  {DBGFIELD("IIC_IntMTFSB0")      1, false, false, 14, 4, 14, 5,  0, 0}, // #57
  {DBGFIELD("IIC_SprMTMSR")       1, false, false, 63, 4, 77, 4,  0, 0}, // #58
  {DBGFIELD("IIC_SprMTMSRD")      1, false, false, 63, 4, 77, 4,  0, 0}, // #59
  {DBGFIELD("IIC_SprMTPMR")       1, false, false, 63, 4, 77, 4,  0, 0}, // #60
  {DBGFIELD("IIC_SprMTSR")        1, false, false, 63, 4, 77, 4,  0, 0}, // #61
  {DBGFIELD("IIC_IntMulHW")       1, false, false,  7, 4, 14, 5,  0, 0}, // #62
  {DBGFIELD("IIC_IntMulHWU")      1, false, false,  7, 4, 14, 5,  0, 0}, // #63
  {DBGFIELD("IIC_IntMulLI")       1, false, false,  7, 4, 14, 5,  0, 0}, // #64
  {DBGFIELD("IIC_VecPerm")        1, false, false, 73, 5, 81, 5,  0, 0}, // #65
  {DBGFIELD("IIC_LdStSTFD")       1, false, false, 31, 4, 29, 6,  0, 0}, // #66
  {DBGFIELD("IIC_LdStSTFDU")      2, false, false, 78, 6, 86, 10,  0, 0}, // #67
  {DBGFIELD("IIC_SprRFI")         1, false, false,  1, 4,  1, 4,  0, 0}, // #68
  {DBGFIELD("IIC_IntRFID")        1, false, false,  1, 4,  1, 4,  0, 0}, // #69
  {DBGFIELD("IIC_IntRotateD")     1, false, false,  1, 4,  1, 4,  0, 0}, // #70
  {DBGFIELD("IIC_IntRotate")      1, false, false, 14, 4, 20, 5,  0, 0}, // #71
  {DBGFIELD("IIC_SprSLBIA")       1, false, false, 11, 3, 10, 4,  0, 0}, // #72
  {DBGFIELD("IIC_SprSLBIE")       2, false, false, 84, 3, 96, 4,  0, 0}, // #73
  {DBGFIELD("IIC_SprSLBIEG")      2, false, false, 78, 6, 86, 10,  0, 0}, // #74
  {DBGFIELD("IIC_SprSLBMFEE")     2, false, false, 84, 3, 96, 4,  0, 0}, // #75
  {DBGFIELD("IIC_SprSLBMFEV")     2, false, false, 84, 3, 96, 4,  0, 0}, // #76
  {DBGFIELD("IIC_SprSLBMTE")      2, false, false, 84, 3, 96, 4,  0, 0}, // #77
  {DBGFIELD("IIC_SprSLBSYNC")     1, false, false, 11, 3, 10, 4,  0, 0}, // #78
  {DBGFIELD("IIC_IntShift")       1, false, false, 14, 4, 20, 5,  0, 0}, // #79
  {DBGFIELD("IIC_LdStSTWCX")      2, false, false, 78, 6, 100, 9,  0, 0}, // #80
  {DBGFIELD("IIC_LdStStoreUpd")   2, false, false, 78, 6, 86, 10,  0, 0}, // #81
  {DBGFIELD("IIC_LdStSTD")        1, false, false, 31, 4, 29, 6,  0, 0}, // #82
  {DBGFIELD("IIC_LdStSTDCX")      2, false, false, 78, 6, 100, 9,  0, 0}, // #83
  {DBGFIELD("IIC_LdStSTDU")       2, false, false, 78, 6, 86, 10,  0, 0}, // #84
  {DBGFIELD("IIC_LdStSTDUX")      2, false, false, 78, 6, 86, 10,  0, 0}, // #85
  {DBGFIELD("IIC_SprSTOP")        0, false, false,  0, 0,  0, 0,  0, 0}, // #86
  {DBGFIELD("IIC_IntTrapD")       1, false, false,  1, 4,  1, 4,  0, 0}, // #87
  {DBGFIELD("IIC_SprTLBIA")       2, false, false, 78, 6, 86, 10,  0, 0}, // #88
  {DBGFIELD("IIC_SprTLBIE")       2, false, false, 78, 6, 86, 10,  0, 0}, // #89
  {DBGFIELD("IIC_SprTLBIEL")      2, false, false, 84, 3, 96, 4,  0, 0}, // #90
  {DBGFIELD("IIC_SprTLBSYNC")     1, false, false, 11, 3, 10, 4,  0, 0}, // #91
  {DBGFIELD("IIC_IntTrapW")       1, false, false,  1, 4, 81, 4,  0, 0}, // #92
  {DBGFIELD("IIC_VecFPCompare")   2, false, false, 18, 7, 109, 6,  0, 0}, // #93
  {DBGFIELD("VADDCUW_VAND_VANDC_VRLB_VRLD_VRLDMI_VRLDNM_VRLH_VRLW_VRLWMI_VRLWNM_VSRAB_VSRAH_VSRAW_VSRB_VSRH_VSRW_VSLB_VSLH_VSLW_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_V_SET0B_V_SET0H_V_SET0_XVABSDP_XVABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVNABSDP_XVNABSSP_XVNEGDP_XVNEGSP_XVXEXPDP_XVIEXPSP_XVXEXPSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP") 2, false, false, 87, 7, 115, 7,  0, 0}, // #94
  {DBGFIELD("VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEQV_VEXTSB2D_VEXTSB2W_VEXTSH2D_VEXTSH2W_VEXTSW2D_VSRAD_VSRD_VSLD_VNAND_VNEGD_VNEGW_VORC_VPOPCNTB_VPOPCNTH_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR") 2, false, false, 87, 7, 115, 7,  0, 0}, // #95
  {DBGFIELD("VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPNEZB_VCMPNEZH_VCMPNEZW") 2, false, false, 87, 7, 115, 7,  0, 0}, // #96
  {DBGFIELD("XXSEL")              2, false, false, 87, 7, 115, 7,  0, 0}, // #97
  {DBGFIELD("FCMPUS_FCMPUD")      1, false, false, 14, 4, 81, 5,  0, 0}, // #98
  {DBGFIELD("XSTSTDCDP_XSTSTDCSP") 1, false, false, 14, 4, 81, 5,  0, 0}, // #99
  {DBGFIELD("XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN") 1, false, false,  1, 4, 81, 4,  0, 0}, // #100
  {DBGFIELD("XSTDIVDP_XSTSQRTDP_XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP") 1, false, false,  1, 4, 81, 4,  0, 0}, // #101
  {DBGFIELD("ADDIStocHA_ADDItocL") 1, false, false,  1, 4,  1, 4,  0, 0}, // #102
  {DBGFIELD("MCRF")               1, false, false,  1, 4,  1, 4,  0, 0}, // #103
  {DBGFIELD("MCRXRX")             1, false, false,  1, 4,  1, 4,  0, 0}, // #104
  {DBGFIELD("SLD_SRD_SRAD")       1, false, false,  1, 4,  1, 4,  0, 0}, // #105
  {DBGFIELD("SRADI_RLDIC")        1, false, false,  1, 4,  1, 4,  0, 0}, // #106
  {DBGFIELD("XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP") 1, false, false,  1, 4,  1, 4,  0, 0}, // #107
  {DBGFIELD("RLDCL_RLDCR")        1, false, false, 14, 4, 20, 5,  0, 0}, // #108
  {DBGFIELD("RLDIMI_RLDICL_RLDICR_RLDICL_32_64") 1, false, false, 14, 4, 20, 5,  0, 0}, // #109
  {DBGFIELD("XSIEXPDP")           1, false, false, 14, 4, 20, 5,  0, 0}, // #110
  {DBGFIELD("FMR_FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS") 1, false, false, 14, 4, 20, 5,  0, 0}, // #111
  {DBGFIELD("VBPERMD_VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMINFP_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VMAXFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP") 2, false, false, 87, 7, 122, 7,  0, 0}, // #112
  {DBGFIELD("VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW") 2, false, false, 87, 7, 122, 7,  0, 0}, // #113
  {DBGFIELD("VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPBFP_VCMPBFPo_VCMPGTFP_VCMPGTFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo") 2, false, false, 87, 7, 122, 7,  0, 0}, // #114
  {DBGFIELD("XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP") 2, false, false, 87, 7, 122, 7,  0, 0}, // #115
  {DBGFIELD("VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS") 2, false, false, 94, 7, 129, 7,  0, 0}, // #116
  {DBGFIELD("VSUBFP_VMULUWM")     2, false, false, 94, 7, 129, 7,  0, 0}, // #117
  {DBGFIELD("FRSP_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRIMD_FRIMS_FRE_FRES_FRSQRTE_FRSQRTES_FMADDS_FMSUBS_FNMADDS_FNMSUBS_FSELD_FSELS_FADDS_FMULS_FSUBS_FCFID_FCTID_FCTIDZ_FCFIDU_FCFIDS_FCFIDUS_FCTIDUZ_FCTIWUZ_FCTIW_FCTIWZ") 1, false, false,  7, 4,  5, 5,  0, 0}, // #118
  {DBGFIELD("FMADD_FMSUB_FNMADD_FNMSUB_FMUL") 1, false, false,  7, 4,  5, 5,  0, 0}, // #119
  {DBGFIELD("XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP") 1, false, false,  7, 4,  5, 5,  0, 0}, // #120
  {DBGFIELD("FMULo_FMADDo_FMSUBo_FNMADDo_FNMSUBo") 2, false, false, 101, 5, 136, 8,  0, 0}, // #121
  {DBGFIELD("XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN") 1, false, false, 106, 4,  5, 4,  0, 0}, // #122
  {DBGFIELD("VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP") 1, false, false, 110, 5, 81, 6,  0, 0}, // #123
  {DBGFIELD("VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VINSERTB_VINSERTD_VINSERTH_VINSERTW_VPRTYBQ_VADDUQM_VSUBUQM") 1, false, false, 110, 5, 81, 6,  0, 0}, // #124
  {DBGFIELD("VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTISB_VSPLTISH_VSPLTISW_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs") 1, false, false, 110, 5, 81, 6,  0, 0}, // #125
  {DBGFIELD("XSCMPEXPQP_XSCMPOQP_XSCMPUQP") 1, false, false, 110, 5, 81, 6,  0, 0}, // #126
  {DBGFIELD("XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPXP_XSSUBQP_XSSUBQPO") 1, false, false, 115, 5, 144, 6,  0, 0}, // #127
  {DBGFIELD("XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO") 1, false, false, 120, 5, 150, 6,  0, 0}, // #128
  {DBGFIELD("XSDIVQP_XSDIVQPO")   1, false, false, 125, 5, 156, 6,  0, 0}, // #129
  {DBGFIELD("XSSQRTQP_XSSQRTQPO") 1, false, false, 130, 6, 162, 6,  0, 0}, // #130
  {DBGFIELD("LXSDX_LXVD2X_LXSIWZX_LXV_LXVX_LXSD") 1, false, false, 136, 3, 14, 4,  0, 0}, // #131
  {DBGFIELD("DFLOADf64_XFLOADf64") 1, false, false, 136, 3, 14, 4,  0, 0}, // #132
  {DBGFIELD("COPY")               1, false, false, 136, 3, 10, 4,  0, 0}, // #133
  {DBGFIELD("LFIWZX_LFDX_LFD")    1, false, false, 139, 3, 100, 5,  0, 0}, // #134
  {DBGFIELD("LFIWAX_LFSX_LFS")    2, false, false, 142, 6, 168, 9,  0, 0}, // #135
  {DBGFIELD("LXSSPX_LXSIWAX_LXSSP") 2, false, false, 47, 6, 177, 7,  0, 0}, // #136
  {DBGFIELD("DFLOADf32_XFLOADf32_LIWAX_LIWZX") 2, false, false, 47, 6, 177, 7,  0, 0}, // #137
  {DBGFIELD("LXVDSX_LXVWSX_LXVW4X") 2, false, false, 148, 7, 184, 9,  0, 0}, // #138
  {DBGFIELD("STFS_STFD_STFIWX_STFSX_STFDX_STXSDX_STXSSPX_STXSIWX") 1, false, false, 31, 4, 29, 6,  0, 0}, // #139
  {DBGFIELD("DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX") 1, false, false, 31, 4, 29, 6,  0, 0}, // #140
  {DBGFIELD("STXVD2X_STXVW4X")    1, false, false, 155, 6, 29, 7,  0, 0}, // #141
  {DBGFIELD("DIVW_DIVWU_MODSW")   1, false, false, 161, 5, 193, 6,  0, 0}, // #142
  {DBGFIELD("DIVWE_DIVWEU_MODSD_MODUD_MODUW") 1, false, false, 161, 5, 150, 6,  0, 0}, // #143
  {DBGFIELD("DIVD_DIVDU")         1, false, false, 161, 5, 150, 6,  0, 0}, // #144
  {DBGFIELD("DIVDE_DIVDEU")       1, false, false, 161, 5, 199, 6,  0, 0}, // #145
  {DBGFIELD("DIVDo_DIVDUo")       2, false, false, 166, 7, 205, 9,  0, 0}, // #146
  {DBGFIELD("DIVWEo_DIVWEUo")     2, false, false, 166, 7, 205, 9,  0, 0}, // #147
  {DBGFIELD("DIVDEo_DIVDEUo")     2, false, false, 166, 7, 214, 9,  0, 0}, // #148
  {DBGFIELD("MTOCRF_MTOCRF8_MTCRF_MTCRF8") 2, false, false, 173, 4, 223, 10,  0, 0}, // #149
  {DBGFIELD("MCRFS")              2, false, false, 177, 4, 233, 8,  0, 0}, // #150
  {DBGFIELD("FDIV")               1, false, false, 181, 4, 241, 5,  0, 0}, // #151
  {DBGFIELD("FDIVo")              2, false, false, 185, 5, 246, 8,  0, 0}, // #152
  {DBGFIELD("XSDIVDP")            1, false, false, 190, 4, 241, 4,  0, 0}, // #153
  {DBGFIELD("FDIVS")              1, false, false, 194, 4, 28, 5,  0, 0}, // #154
  {DBGFIELD("FDIVSo")             2, false, false, 198, 5, 254, 8,  0, 0}, // #155
  {DBGFIELD("XSDIVSP")            1, false, false, 203, 4, 28, 4,  0, 0}, // #156
  {DBGFIELD("XVDIVSP")            2, false, false, 207, 7, 262, 7,  0, 0}, // #157
  {DBGFIELD("XVDIVDP")            2, false, false, 207, 7, 269, 7,  0, 0}, // #158
  {DBGFIELD("LFSU")               3, false, false, 214, 6, 276, 13,  0, 0}, // #159
  {DBGFIELD("LFSUX")              3, false, false, 214, 6, 276, 13,  0, 0}, // #160
  {DBGFIELD("LFDU")               2, false, false, 220, 6, 63, 9,  0, 0}, // #161
  {DBGFIELD("LFDUX")              2, false, false, 220, 6, 63, 9,  0, 0}, // #162
  {DBGFIELD("VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX") 1, false, false, 226, 5, 45, 6,  0, 0}, // #163
}; // P9ModelSchedClasses

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr // No Itinerary
};

static const llvm::MCSchedModel PPC440Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPC440Itineraries
};

static const llvm::MCSchedModel G3ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G3Itineraries
};

static const llvm::MCSchedModel G4ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G4Itineraries
};

static const llvm::MCSchedModel G4PlusItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G4PlusItineraries
};

static const llvm::MCSchedModel G5Model = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G5Itineraries
};

static const llvm::MCSchedModel PPCA2Model = {
  1, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  13, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  6, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCA2Itineraries
};

static const llvm::MCSchedModel PPCE500mcModel = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  7, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCE500mcItineraries
};

static const llvm::MCSchedModel PPCE5500Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  8, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCE5500Itineraries
};

static const llvm::MCSchedModel P8Model = {
  8, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  60, // LoopMicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  9, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  P8Itineraries
};

static const llvm::MCSchedModel P7Model = {
  6, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  40, // LoopMicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  10, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  P7Itineraries
};

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc P9ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("ALU")             4, 0, -1}, // #1
  {DBGFIELD("ALUE")            2, 1, -1}, // #2, Super=ALU
  {DBGFIELD("ALUO")            2, 1, -1}, // #3, Super=ALU
  {DBGFIELD("BR")              1, 0, 16}, // #4
  {DBGFIELD("CY")              1, 0, -1}, // #5
  {DBGFIELD("DFU")             1, 0, -1}, // #6
  {DBGFIELD("DISPATCHER")      12, 0, -1}, // #7
  {DBGFIELD("DIV")             2, 0, -1}, // #8
  {DBGFIELD("DP")              4, 0, -1}, // #9
  {DBGFIELD("DPE")             2, 9, -1}, // #10, Super=DP
  {DBGFIELD("DPO")             2, 9, -1}, // #11, Super=DP
  {DBGFIELD("IP_AGEN")         4, 0, -1}, // #12
  {DBGFIELD("IP_EXEC")         4, 0, -1}, // #13
  {DBGFIELD("IP_EXECE")        2, 13, -1}, // #14, Super=IP_EXEC
  {DBGFIELD("IP_EXECO")        2, 13, -1}, // #15, Super=IP_EXEC
  {DBGFIELD("LS")              4, 0, -1}, // #16
  {DBGFIELD("PM")              2, 0, -1}, // #17
  {DBGFIELD("TestGroup")       8, 0, -1}, // #18
};

static const llvm::MCSchedModel P9Model = {
  8, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  60, // LoopMicroOpBufferSize
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  true, // CompleteModel
  11, // Processor ID
  P9ModelProcResources,
  P9ModelSchedClasses,
  19,
  164,
  nullptr // No Itinerary
};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV PPCProcSchedKV[] = {
  { "440", (const void *)&PPC440Model },
  { "450", (const void *)&PPC440Model },
  { "601", (const void *)&G3ItinerariesModel },
  { "602", (const void *)&G3ItinerariesModel },
  { "603", (const void *)&G3ItinerariesModel },
  { "603e", (const void *)&G3ItinerariesModel },
  { "603ev", (const void *)&G3ItinerariesModel },
  { "604", (const void *)&G3ItinerariesModel },
  { "604e", (const void *)&G3ItinerariesModel },
  { "620", (const void *)&G3ItinerariesModel },
  { "7400", (const void *)&G4ItinerariesModel },
  { "7450", (const void *)&G4PlusItinerariesModel },
  { "750", (const void *)&G4ItinerariesModel },
  { "970", (const void *)&G5Model },
  { "a2", (const void *)&PPCA2Model },
  { "a2q", (const void *)&PPCA2Model },
  { "e500mc", (const void *)&PPCE500mcModel },
  { "e5500", (const void *)&PPCE5500Model },
  { "g3", (const void *)&G3ItinerariesModel },
  { "g4", (const void *)&G4ItinerariesModel },
  { "g4+", (const void *)&G4PlusItinerariesModel },
  { "g5", (const void *)&G5Model },
  { "generic", (const void *)&G3ItinerariesModel },
  { "ppc", (const void *)&G3ItinerariesModel },
  { "ppc32", (const void *)&G3ItinerariesModel },
  { "ppc64", (const void *)&G5Model },
  { "ppc64le", (const void *)&P8Model },
  { "pwr3", (const void *)&G5Model },
  { "pwr4", (const void *)&G5Model },
  { "pwr5", (const void *)&G5Model },
  { "pwr5x", (const void *)&G5Model },
  { "pwr6", (const void *)&G5Model },
  { "pwr6x", (const void *)&G5Model },
  { "pwr7", (const void *)&P7Model },
  { "pwr8", (const void *)&P8Model },
  { "pwr9", (const void *)&P9Model },
};

#undef DBGFIELD

static inline MCSubtargetInfo *createPPCMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[PPC::DeprecatedDST]) DeprecatedDST = true;
  if (Bits[PPC::Directive32] && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if (Bits[PPC::Directive64] && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if (Bits[PPC::Directive440] && DarwinDirective < PPC::DIR_440) DarwinDirective = PPC::DIR_440;
  if (Bits[PPC::Directive601] && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if (Bits[PPC::Directive602] && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if (Bits[PPC::Directive603] && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if (Bits[PPC::Directive604] && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if (Bits[PPC::Directive620] && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if (Bits[PPC::Directive750] && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if (Bits[PPC::Directive970] && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if (Bits[PPC::Directive7400] && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if (Bits[PPC::DirectiveA2] && DarwinDirective < PPC::DIR_A2) DarwinDirective = PPC::DIR_A2;
  if (Bits[PPC::DirectiveE500mc] && DarwinDirective < PPC::DIR_E500mc) DarwinDirective = PPC::DIR_E500mc;
  if (Bits[PPC::DirectiveE5500] && DarwinDirective < PPC::DIR_E5500) DarwinDirective = PPC::DIR_E5500;
  if (Bits[PPC::DirectivePwr3] && DarwinDirective < PPC::DIR_PWR3) DarwinDirective = PPC::DIR_PWR3;
  if (Bits[PPC::DirectivePwr4] && DarwinDirective < PPC::DIR_PWR4) DarwinDirective = PPC::DIR_PWR4;
  if (Bits[PPC::DirectivePwr5] && DarwinDirective < PPC::DIR_PWR5) DarwinDirective = PPC::DIR_PWR5;
  if (Bits[PPC::DirectivePwr5x] && DarwinDirective < PPC::DIR_PWR5X) DarwinDirective = PPC::DIR_PWR5X;
  if (Bits[PPC::DirectivePwr6] && DarwinDirective < PPC::DIR_PWR6) DarwinDirective = PPC::DIR_PWR6;
  if (Bits[PPC::DirectivePwr6x] && DarwinDirective < PPC::DIR_PWR6X) DarwinDirective = PPC::DIR_PWR6X;
  if (Bits[PPC::DirectivePwr7] && DarwinDirective < PPC::DIR_PWR7) DarwinDirective = PPC::DIR_PWR7;
  if (Bits[PPC::DirectivePwr8] && DarwinDirective < PPC::DIR_PWR8) DarwinDirective = PPC::DIR_PWR8;
  if (Bits[PPC::DirectivePwr9] && DarwinDirective < PPC::DIR_PWR9) DarwinDirective = PPC::DIR_PWR9;
  if (Bits[PPC::Feature64Bit]) Has64BitSupport = true;
  if (Bits[PPC::Feature64BitRegs]) Use64BitRegs = true;
  if (Bits[PPC::FeatureAltivec]) HasAltivec = true;
  if (Bits[PPC::FeatureBPERMD]) HasBPERMD = true;
  if (Bits[PPC::FeatureBookE]) IsBookE = true;
  if (Bits[PPC::FeatureCMPB]) HasCMPB = true;
  if (Bits[PPC::FeatureCRBits]) UseCRBits = true;
  if (Bits[PPC::FeatureDirectMove]) HasDirectMove = true;
  if (Bits[PPC::FeatureE500]) IsE500 = true;
  if (Bits[PPC::FeatureExtDiv]) HasExtDiv = true;
  if (Bits[PPC::FeatureFCPSGN]) HasFCPSGN = true;
  if (Bits[PPC::FeatureFPCVT]) HasFPCVT = true;
  if (Bits[PPC::FeatureFPRND]) HasFPRND = true;
  if (Bits[PPC::FeatureFRE]) HasFRE = true;
  if (Bits[PPC::FeatureFRES]) HasFRES = true;
  if (Bits[PPC::FeatureFRSQRTE]) HasFRSQRTE = true;
  if (Bits[PPC::FeatureFRSQRTES]) HasFRSQRTES = true;
  if (Bits[PPC::FeatureFSqrt]) HasFSQRT = true;
  if (Bits[PPC::FeatureFloat128]) HasFloat128 = true;
  if (Bits[PPC::FeatureFusion]) HasFusion = true;
  if (Bits[PPC::FeatureHTM]) HasHTM = true;
  if (Bits[PPC::FeatureHardFloat]) HasHardFloat = true;
  if (Bits[PPC::FeatureICBT]) HasICBT = true;
  if (Bits[PPC::FeatureISA3_0]) IsISA3_0 = true;
  if (Bits[PPC::FeatureISEL]) HasISEL = true;
  if (Bits[PPC::FeatureInvariantFunctionDescriptors]) HasInvariantFunctionDescriptors = true;
  if (Bits[PPC::FeatureLDBRX]) HasLDBRX = true;
  if (Bits[PPC::FeatureLFIWAX]) HasLFIWAX = true;
  if (Bits[PPC::FeatureLongCall]) UseLongCalls = true;
  if (Bits[PPC::FeatureMFOCRF]) HasMFOCRF = true;
  if (Bits[PPC::FeatureMFTB]) FeatureMFTB = true;
  if (Bits[PPC::FeatureMSYNC]) HasOnlyMSYNC = true;
  if (Bits[PPC::FeatureP8Altivec]) HasP8Altivec = true;
  if (Bits[PPC::FeatureP8Crypto]) HasP8Crypto = true;
  if (Bits[PPC::FeatureP8Vector]) HasP8Vector = true;
  if (Bits[PPC::FeatureP9Altivec]) HasP9Altivec = true;
  if (Bits[PPC::FeatureP9Vector]) HasP9Vector = true;
  if (Bits[PPC::FeaturePOPCNTD] && HasPOPCNTD < POPCNTD_Fast) HasPOPCNTD = POPCNTD_Fast;
  if (Bits[PPC::FeaturePPC4xx]) IsPPC4xx = true;
  if (Bits[PPC::FeaturePPC6xx]) IsPPC6xx = true;
  if (Bits[PPC::FeaturePartwordAtomic]) HasPartwordAtomics = true;
  if (Bits[PPC::FeatureQPX]) HasQPX = true;
  if (Bits[PPC::FeatureRecipPrec]) HasRecipPrec = true;
  if (Bits[PPC::FeatureSPE]) HasSPE = true;
  if (Bits[PPC::FeatureSTFIWX]) HasSTFIWX = true;
  if (Bits[PPC::FeatureSlowPOPCNTD] && HasPOPCNTD < POPCNTD_Slow) HasPOPCNTD = POPCNTD_Slow;
  if (Bits[PPC::FeatureVSX]) HasVSX = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct PPCGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PPCGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV PPCFeatureKV[];
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[];
extern const llvm::SubtargetInfoKV PPCProcSchedKV[];
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[];
extern const llvm::InstrStage PPCStages[];
extern const unsigned PPCOperandCycles[];
extern const unsigned PPCForwardingPaths[];
PPCGenSubtargetInfo::PPCGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(PPCFeatureKV, 46), makeArrayRef(PPCSubTypeKV, 36), 
                        PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                        PPCStages, PPCOperandCycles, PPCForwardingPaths) {}

unsigned PPCGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // PPCGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

