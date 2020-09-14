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
namespace Hexagon {
enum {
  ArchV4 = 0,
  ArchV5 = 1,
  ArchV55 = 2,
  ArchV60 = 3,
  ArchV62 = 4,
  ArchV65 = 5,
  ExtensionHVX = 6,
  ExtensionHVX64B = 7,
  ExtensionHVX128B = 8,
  ExtensionHVXDbl = 9,
  ExtensionHVXV60 = 10,
  ExtensionHVXV62 = 11,
  ExtensionHVXV65 = 12,
  FeatureDuplex = 13,
  FeatureLongCalls = 14,
  FeatureMemNoShuf = 15,
};
} // end namespace Hexagon
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "duplex", "Enable generation of duplex instruction", { Hexagon::FeatureDuplex }, { } },
  { "hvx", "Hexagon HVX instructions", { Hexagon::ExtensionHVX }, { } },
  { "hvx-double", "Hexagon HVX 128B instructions", { Hexagon::ExtensionHVXDbl }, { Hexagon::ExtensionHVX128B } },
  { "hvx-length128b", "Hexagon HVX 128B instructions", { Hexagon::ExtensionHVX128B }, { Hexagon::ExtensionHVX } },
  { "hvx-length64b", "Hexagon HVX 64B instructions", { Hexagon::ExtensionHVX64B }, { Hexagon::ExtensionHVX } },
  { "hvxv60", "Hexagon HVX instructions", { Hexagon::ExtensionHVXV60 }, { Hexagon::ExtensionHVX } },
  { "hvxv62", "Hexagon HVX instructions", { Hexagon::ExtensionHVXV62 }, { Hexagon::ExtensionHVX, Hexagon::ExtensionHVXV60 } },
  { "hvxv65", "Hexagon HVX instructions", { Hexagon::ExtensionHVXV65 }, { Hexagon::ExtensionHVX, Hexagon::ExtensionHVXV60, Hexagon::ExtensionHVXV62 } },
  { "long-calls", "Use constant-extended calls", { Hexagon::FeatureLongCalls }, { } },
  { "mem_noshuf", "Supports mem_noshuf feature", { Hexagon::FeatureMemNoShuf }, { } },
  { "v4", "Enable Hexagon V4 architecture", { Hexagon::ArchV4 }, { } },
  { "v5", "Enable Hexagon V5 architecture", { Hexagon::ArchV5 }, { } },
  { "v55", "Enable Hexagon V55 architecture", { Hexagon::ArchV55 }, { } },
  { "v60", "Enable Hexagon V60 architecture", { Hexagon::ArchV60 }, { } },
  { "v62", "Enable Hexagon V62 architecture", { Hexagon::ArchV62 }, { } },
  { "v65", "Enable Hexagon V65 architecture", { Hexagon::ArchV65 }, { } },
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[] = {
  { "hexagonv4", "Select the hexagonv4 processor", { Hexagon::ArchV4, Hexagon::FeatureDuplex }, { } },
  { "hexagonv5", "Select the hexagonv5 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::FeatureDuplex }, { } },
  { "hexagonv55", "Select the hexagonv55 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::FeatureDuplex }, { } },
  { "hexagonv60", "Select the hexagonv60 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::FeatureDuplex }, { } },
  { "hexagonv62", "Select the hexagonv62 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ArchV62, Hexagon::FeatureDuplex }, { } },
  { "hexagonv65", "Select the hexagonv65 processor", { Hexagon::ArchV4, Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ArchV62, Hexagon::ArchV65, Hexagon::FeatureMemNoShuf, Hexagon::FeatureDuplex }, { } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV4"
namespace HexagonItinerariesV4FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV4FU

// Pipeline forwarding pathes for itineraries "HexagonItinerariesV4"
namespace HexagonItinerariesV4Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV4Bypass

// Functional units for "HexagonItinerariesV55"
namespace HexagonItinerariesV55FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV55FU

// Pipeline forwarding pathes for itineraries "HexagonItinerariesV55"
namespace HexagonItinerariesV55Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV55Bypass

// Functional units for "HexagonItinerariesV60"
namespace HexagonItinerariesV60FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
} // end namespace HexagonItinerariesV60FU

// Pipeline forwarding pathes for itineraries "HexagonItinerariesV60"
namespace HexagonItinerariesV60Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV60Bypass

// Functional units for "HexagonItinerariesV62"
namespace HexagonItinerariesV62FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
} // end namespace HexagonItinerariesV62FU

// Pipeline forwarding pathes for itineraries "HexagonItinerariesV62"
namespace HexagonItinerariesV62Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV62Bypass

// Functional units for "HexagonItinerariesV65"
namespace HexagonItinerariesV65FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
} // end namespace HexagonItinerariesV65FU

// Pipeline forwarding pathes for itineraries "HexagonItinerariesV65"
namespace HexagonItinerariesV65Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV65Bypass

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1 | HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV4FU::SLOT0 | HexagonItinerariesV4FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV4FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV4FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV4FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV4FU::SLOT2 | HexagonItinerariesV4FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8-9
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1 | HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 1, HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 1, HexagonItinerariesV55FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14
  { 1, HexagonItinerariesV55FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 15
  { 1, HexagonItinerariesV55FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 17-18
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 19
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20
  { 1, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 22
  { 1, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23
  { 1, HexagonItinerariesV60FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 24
  { 1, HexagonItinerariesV60FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 25
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-28
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29-32
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 33-34
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35-36
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 37-39
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-43
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-45
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46-47
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-49
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50-51
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 52-53
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 54-55
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56-57
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-59
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60-61
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 62-63
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 64-66
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 67-70
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71-73
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74-75
  { 1, HexagonItinerariesV60FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76-77
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 78-80
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81-83
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85
  { 1, HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 1, HexagonItinerariesV62FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 1, HexagonItinerariesV62FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 1, HexagonItinerariesV62FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91-93
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94-97
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98-99
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100-101
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102-104
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105-108
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109-110
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111-112
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113-114
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115-116
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117-118
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119-120
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121-122
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123-124
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125-126
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127-128
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129-131
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132-135
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136-138
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139-140
  { 1, HexagonItinerariesV62FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141-142
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143-145
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146-148
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 1, HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 1, HexagonItinerariesV65FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 1, HexagonItinerariesV65FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 1, HexagonItinerariesV65FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156-158
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159-162
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163-164
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165-166
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167-169
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170-173
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174-175
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176-177
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178-179
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180-181
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182-183
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184-185
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 186-187
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188-189
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 190-191
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-193
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-196
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 197-200
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 201-203
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 204-205
  { 1, HexagonItinerariesV65FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 206-207
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 208-210
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 211-213
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  4,   2, // 1-2
  3,   2,   2, // 3-5
  3,   2,   2, // 6-8
  4,   2,   2, // 9-11
  3,   2,   2, // 12-14
  3,   2,   2, // 15-17
  4,   2,   2, // 18-20
  3,   2, // 21-22
  1,   1,   1, // 23-25
  3,   2, // 26-27
  3,   2,   2,   2, // 28-31
  3,   3,   2,   2, // 32-35
  4,   2,   2, // 36-38
  4,   2, // 39-40
  3,   3,   2, // 41-43
  4,   1, // 44-45
  4,   2,   2, // 46-48
  4,   2,   2, // 49-51
  3,   1,   1, // 52-54
  4,   1,   1, // 55-57
  4,   2,   1,   1, // 58-61
  4,   4,   1,   1,   2, // 62-66
  3,   1,   2, // 67-69
  2, // 70
  4,   1,   1, // 71-73
  4,   1,   1,   1, // 74-77
  4,   4,   1,   1,   1, // 78-82
  3,   2,   2, // 83-85
  4,   4,   2,   2, // 86-89
  3,   2, // 90-91
  3,   2,   2, // 92-94
  3,   1,   1, // 95-97
  3,   1,   2, // 98-100
  3,   1, // 101-102
  3,   2,   2,   2, // 103-106
  4,   2, // 107-108
  3,   2,   2,   2, // 109-112
  2, // 113
  2,   1, // 114-115
  1,   1,   1, // 116-118
  1, // 119
  2, // 120
  4,   1, // 121-122
  4,   2, // 123-124
  4,   1,   1, // 125-127
  4,   1,   1,   1, // 128-131
  4,   1,   1,   1,   2, // 132-136
  4,   4,   1, // 137-139
  4,   1,   1, // 140-142
  4,   4,   1,   1, // 143-146
  2,   2, // 147-148
  1, // 149
  2,   1, // 150-151
  2, // 152
  2,   2, // 153-154
  3,   2, // 155-156
  2,   2, // 157-158
  2,   1, // 159-160
  3,   1, // 161-162
  2,   1, // 163-164
  1,   2, // 165-166
  2,   2, // 167-168
  2,   1, // 169-170
  2, // 171
  2,   2, // 172-173
  2,   1, // 174-175
  2, // 176
  3,   1,   2, // 177-179
  1,   1,   2, // 180-182
  3,   2,   2, // 183-185
  1,   2,   2, // 186-188
  1,   3,   2, // 189-191
  3,   2,   2, // 192-194
  3,   2, // 195-196
  1,   2, // 197-198
  4,   2, // 199-200
  4,   2,   1,   2, // 201-204
  4,   3,   2,   1,   2, // 205-209
  4,   3,   2,   1,   2,   2, // 210-215
  4,   1,   2, // 216-218
  4,   3,   1,   2, // 219-222
  4,   3,   1,   2,   2, // 223-227
  4,   2, // 228-229
  4,   1, // 230-231
  4,   3,   3,   1,   2, // 232-236
  1,   2,   2, // 237-239
  4,   3,   2,   2, // 240-243
  4,   2,   1,   2,   2, // 244-248
  4,   3,   2, // 249-251
  4,   1,   2,   2, // 252-255
  4,   1,   1,   2, // 256-259
  4,   2,   2, // 260-262
  4,   2,   1,   1,   2, // 263-267
  4,   3,   1,   1,   2, // 268-272
  4,   2, // 273-274
  4,   2,   1, // 275-277
  4,   3,   1, // 278-280
  2, // 281
  3, // 282
  4,   2,   2,   2, // 283-286
  4,   2,   1,   2, // 287-290
  4,   1,   2, // 291-293
  3,   2,   2,   2, // 294-297
  4,   2,   2,   1, // 298-301
  4,   2,   2, // 302-304
  2,   2, // 305-306
  2,   3, // 307-308
  1,   1,   1, // 309-311
  4,   2,   2, // 312-314
  3,   2, // 315-316
  4,   1,   1, // 317-319
  3,   2,   2,   2,   2, // 320-324
  2,   1,   2,   2, // 325-328
  3,   2,   1,   2,   2, // 329-333
  3,   3,   1,   2,   2, // 334-338
  2,   1,   2,   3, // 339-342
  3,   2,   1,   2,   3, // 343-347
  3,   3,   1,   2,   3, // 348-352
  1,   2,   2, // 353-355
  3,   1,   2,   2, // 356-359
  3,   1,   2,   2,   2, // 360-364
  1,   2,   3, // 365-367
  3,   1,   2,   3, // 368-371
  3,   1,   2,   2,   3, // 372-376
  4,   1,   1, // 377-379
  2,   2,   2, // 380-382
  2,   1,   1,   2,   2, // 383-387
  3,   2,   2, // 388-390
  3,   1,   1,   2,   2, // 391-395
  2,   2,   3, // 396-398
  2,   1,   1,   2,   3, // 399-403
  3,   2,   3, // 404-406
  3,   1,   1,   2,   3, // 407-411
  1,   1,   2,   2, // 412-415
  1,   2,   2,   2, // 416-419
  1,   1,   2,   3, // 420-423
  1,   2,   2,   3, // 424-427
  4,   1,   1,   2, // 428-431
  4,   2,   1,   1,   2, // 432-436
  4,   2, // 437-438
  4,   2,   2,   2, // 439-442
  3,   2, // 443-444
  3,   2,   2, // 445-447
  3,   2, // 448-449
  3, // 450
  3, // 451
  1,   2, // 452-453
  2, // 454
  1,   2, // 455-456
  1,   1,   1, // 457-459
  1, // 460
  1, // 461
  1,   2, // 462-463
  1, // 464
  1,   1, // 465-466
  1, // 467
  4,   2, // 468-469
  3,   2,   2, // 470-472
  3,   2,   2, // 473-475
  4,   2,   2, // 476-478
  4,   2,   2, // 479-481
  3,   2,   2, // 482-484
  4,   2,   2, // 485-487
  3,   2, // 488-489
  1,   1,   1, // 490-492
  3,   2, // 493-494
  3,   2,   2,   2, // 495-498
  3,   3,   2,   2, // 499-502
  3,   2,   2, // 503-505
  4,   2, // 506-507
  3,   3,   2, // 508-510
  4,   1, // 511-512
  4,   2,   2, // 513-515
  3,   2,   2, // 516-518
  3,   1,   1, // 519-521
  4,   1,   1, // 522-524
  4,   2,   1,   1, // 525-528
  4,   4,   1,   1,   2, // 529-533
  3,   1,   2, // 534-536
  2, // 537
  4,   1,   1, // 538-540
  4,   1,   1,   2, // 541-544
  4,   4,   1,   1,   1, // 545-549
  3,   2,   2, // 550-552
  4,   4,   2,   2, // 553-556
  3,   2, // 557-558
  3,   2,   2, // 559-561
  3,   1,   1, // 562-564
  3,   1,   2, // 565-567
  3,   1, // 568-569
  3,   2,   2,   2, // 570-573
  4,   2, // 574-575
  3,   2,   2,   2, // 576-579
  2, // 580
  3,   1, // 581-582
  1,   1,   1, // 583-585
  1, // 586
  2, // 587
  5,   1, // 588-589
  4,   2, // 590-591
  5,   1,   1, // 592-594
  5,   2,   1,   1, // 595-598
  5,   2,   1,   1,   2, // 599-603
  5,   5,   1, // 604-606
  4,   2,   2, // 607-609
  5,   5,   1,   1, // 610-613
  2,   2, // 614-615
  1, // 616
  2,   1, // 617-618
  2, // 619
  2,   2, // 620-621
  3,   2, // 622-623
  2,   2, // 624-625
  2,   1, // 626-627
  3,   1, // 628-629
  2,   1, // 630-631
  1,   2, // 632-633
  2,   2, // 634-635
  2,   1, // 636-637
  2, // 638
  2,   2, // 639-640
  2,   1, // 641-642
  2, // 643
  3,   2,   2, // 644-646
  1,   1,   2, // 647-649
  3,   2,   2, // 650-652
  1,   2,   2, // 653-655
  2,   3,   2, // 656-658
  3,   2,   2, // 659-661
  3,   2, // 662-663
  1,   2, // 664-665
  4,   2, // 666-667
  4,   2,   1,   2, // 668-671
  4,   3,   2,   1,   2, // 672-676
  4,   3,   2,   1,   2,   2, // 677-682
  4,   1,   2, // 683-685
  4,   3,   1,   2, // 686-689
  4,   3,   1,   2,   2, // 690-694
  4,   2, // 695-696
  4,   1, // 697-698
  4,   3,   3,   1,   2, // 699-703
  1,   2,   2, // 704-706
  4,   3,   2,   2, // 707-710
  4,   2,   1,   2,   2, // 711-715
  4,   3,   2, // 716-718
  4,   1,   2,   2, // 719-722
  4,   1,   1,   2, // 723-726
  4,   2,   2, // 727-729
  4,   2,   1,   1,   2, // 730-734
  4,   3,   1,   1,   2, // 735-739
  3,   2, // 740-741
  3,   2,   2, // 742-744
  3,   3,   2, // 745-747
  2, // 748
  3, // 749
  4,   2,   2,   2, // 750-753
  4,   2,   1,   2, // 754-757
  4,   1,   2, // 758-760
  4,   2,   2,   2, // 761-764
  4,   2,   2,   1, // 765-768
  4,   2,   2, // 769-771
  2,   2, // 772-773
  2,   3, // 774-775
  9,   1,   2, // 776-778
  9,   1,   2, // 779-781
  1,   1,   1, // 782-784
  9,   2,   7, // 785-787
  1,   2,   7, // 788-790
  1,   2,   5, // 791-793
  9,   2,   7,   7, // 794-797
  4,   2,   2, // 798-800
  4,   2, // 801-802
  4,   1,   1, // 803-805
  4,   2,   2,   2,   2, // 806-810
  2,   1,   2,   2, // 811-814
  3,   2,   1,   2,   2, // 815-819
  3,   3,   1,   2,   2, // 820-824
  2,   1,   2,   3, // 825-828
  3,   2,   1,   2,   3, // 829-833
  3,   3,   1,   2,   3, // 834-838
  1,   2,   2, // 839-841
  3,   1,   2,   2, // 842-845
  3,   1,   2,   2,   2, // 846-850
  1,   2,   3, // 851-853
  3,   1,   2,   3, // 854-857
  3,   1,   2,   2,   3, // 858-862
  4,   1,   1, // 863-865
  2,   2,   2, // 866-868
  2,   1,   1,   2,   2, // 869-873
  3,   2,   2, // 874-876
  3,   1,   1,   2,   2, // 877-881
  2,   2,   3, // 882-884
  2,   1,   1,   2,   3, // 885-889
  3,   2,   3, // 890-892
  3,   1,   1,   2,   3, // 893-897
  1,   1,   2,   2, // 898-901
  1,   2,   2,   2, // 902-905
  1,   1,   2,   3, // 906-909
  1,   2,   2,   3, // 910-913
  4,   1,   1,   2, // 914-917
  4,   2,   1,   1,   2, // 918-922
  4,   2, // 923-924
  4,   2,   2,   2, // 925-928
  3,   2, // 929-930
  3,   2,   2, // 931-933
  3,   2, // 934-935
  3, // 936
  3, // 937
  1,   2, // 938-939
  2, // 940
  1,   2, // 941-942
  1,   1,   1, // 943-945
  4,   7,   1, // 946-948
  9,   7,   7,   7, // 949-952
  9,   2, // 953-954
  9,   7,   7, // 955-957
  9,   7, // 958-959
  9,   2, // 960-961
  9,   3,   1,   2, // 962-965
  9,   2,   1,   2, // 966-969
  9,   3,   2,   1,   2, // 970-974
  9,   3,   1,   2, // 975-978
  9,   1,   2, // 979-981
  9,   2,   1,   2, // 982-985
  9,   3,   2,   1,   2, // 986-990
  9,   3,   1,   2, // 991-994
  2,   1,   2,   5, // 995-998
  3,   2,   1,   2,   5, // 999-1003
  3,   1,   2,   5, // 1004-1007
  1,   2,   5, // 1008-1010
  2,   1,   2,   5, // 1011-1014
  3,   2,   1,   2,   5, // 1015-1019
  3,   1,   2,   5, // 1020-1023
  2,   1,   2,   7, // 1024-1027
  3,   2,   1,   2,   7, // 1028-1032
  7,   1,   2,   7, // 1033-1036
  3,   7,   1,   2,   7, // 1037-1041
  3,   1,   2,   7, // 1042-1045
  1,   2, // 1046-1047
  3,   1,   2, // 1048-1050
  9,   5,   5, // 1051-1053
  9,   7,   7, // 1054-1056
  9,   7,   7,   7, // 1057-1060
  9,   9,   7,   7,   7, // 1061-1065
  9,   5,   5, // 1066-1068
  9,   5,   5, // 1069-1071
  9,   7,   5,   5, // 1072-1075
  9,   5,   5,   2, // 1076-1079
  9,   7,   2, // 1080-1082
  9,   7,   7,   2, // 1083-1086
  9,   5,   2, // 1087-1089
  9,   7,   5,   2, // 1090-1093
  9,   5,   5,   2, // 1094-1097
  9,   5, // 1098-1099
  9, // 1100
  9,   9,   5,   5,   2, // 1101-1105
  9,   5, // 1106-1107
  9,   5,   5, // 1108-1110
  9,   5,   5,   2, // 1111-1114
  9,   5,   2, // 1115-1117
  9,   7,   5,   2, // 1118-1121
  9,   5,   2, // 1122-1124
  9,   7,   5,   2, // 1125-1128
  1,   2,   7, // 1129-1131
  7,   1,   2,   7, // 1132-1135
  1,   2,   7, // 1136-1138
  7,   1,   2,   7, // 1139-1142
  3, // 1143
  9,   5,   2, // 1144-1146
  9,   7,   5,   5,   2, // 1147-1151
  9,   5,   5,   2, // 1152-1155
  9,   5,   2, // 1156-1158
  9,   7,   5,   2, // 1159-1162
  9,   5,   2,   2, // 1163-1166
  9,   7,   5,   2,   2, // 1167-1171
  9,   5,   2, // 1172-1174
  9,   5,   5, // 1175-1177
  9,   7, // 1178-1179
  1,   2,   7,   7, // 1180-1183
  7,   1,   2,   7,   7, // 1184-1188
  1,   2,   7,   7, // 1189-1192
  7,   1,   2,   7,   7, // 1193-1197
  9,   7,   7,   7, // 1198-1201
  9,   5, // 1202-1203
  9,   7,   5, // 1204-1206
  2, // 1207
  3,   2, // 1208-1209
  1, // 1210
  1, // 1211
  1,   2, // 1212-1213
  1, // 1214
  1,   1, // 1215-1216
  1, // 1217
  4,   2, // 1218-1219
  3,   2,   2, // 1220-1222
  4,   2,   2, // 1223-1225
  4,   2,   2, // 1226-1228
  4,   2,   2, // 1229-1231
  3,   2,   2, // 1232-1234
  4,   2,   2, // 1235-1237
  3,   2, // 1238-1239
  1,   1,   1, // 1240-1242
  3,   2, // 1243-1244
  3,   2,   2,   2, // 1245-1248
  3,   3,   2,   2, // 1249-1252
  3,   2,   2, // 1253-1255
  4,   2, // 1256-1257
  3,   3,   2, // 1258-1260
  4,   1, // 1261-1262
  4,   2,   2, // 1263-1265
  3,   2,   2, // 1266-1268
  3,   1,   1, // 1269-1271
  4,   1,   1, // 1272-1274
  4,   2,   1,   1, // 1275-1278
  3,   4,   2,   2,   2, // 1279-1283
  3,   1,   2, // 1284-1286
  2, // 1287
  4,   1,   1, // 1288-1290
  4,   1,   1,   2, // 1291-1294
  4,   4,   2,   1,   1, // 1295-1299
  3,   2,   2, // 1300-1302
  4,   4,   2,   2, // 1303-1306
  3,   2, // 1307-1308
  3,   2,   2, // 1309-1311
  3,   1,   1, // 1312-1314
  3,   1,   2, // 1315-1317
  3,   1, // 1318-1319
  3,   2,   2,   2, // 1320-1323
  4,   2, // 1324-1325
  3,   2,   2,   2, // 1326-1329
  2, // 1330
  3,   1, // 1331-1332
  1,   1,   1, // 1333-1335
  1, // 1336
  2, // 1337
  5,   1, // 1338-1339
  4,   2, // 1340-1341
  5,   1,   1, // 1342-1344
  5,   2,   1,   1, // 1345-1348
  5,   2,   1,   1,   2, // 1349-1353
  5,   5,   1, // 1354-1356
  4,   2,   2, // 1357-1359
  5,   5,   1,   1, // 1360-1363
  2,   2, // 1364-1365
  1, // 1366
  2,   1, // 1367-1368
  2, // 1369
  2,   2, // 1370-1371
  3,   2, // 1372-1373
  2,   2, // 1374-1375
  2,   1, // 1376-1377
  3,   1, // 1378-1379
  2,   1, // 1380-1381
  1,   2, // 1382-1383
  2,   2, // 1384-1385
  2,   1, // 1386-1387
  2, // 1388
  2,   2, // 1389-1390
  2,   1, // 1391-1392
  2, // 1393
  3,   2,   2, // 1394-1396
  1,   1,   2, // 1397-1399
  3,   2,   2, // 1400-1402
  1,   2,   2, // 1403-1405
  2,   3,   2, // 1406-1408
  3,   2,   2, // 1409-1411
  3,   2, // 1412-1413
  1,   2, // 1414-1415
  4,   2, // 1416-1417
  4,   2,   1,   2, // 1418-1421
  4,   3,   2,   1,   2, // 1422-1426
  4,   3,   2,   1,   2,   2, // 1427-1432
  4,   1,   2, // 1433-1435
  4,   3,   1,   2, // 1436-1439
  4,   3,   1,   2,   2, // 1440-1444
  4,   2, // 1445-1446
  4,   1, // 1447-1448
  4,   3,   3,   1,   2, // 1449-1453
  1,   2,   2, // 1454-1456
  4,   3,   2,   2, // 1457-1460
  4,   2,   1,   2,   2, // 1461-1465
  4,   3,   2, // 1466-1468
  4,   1,   2,   2, // 1469-1472
  4,   1,   1,   2, // 1473-1476
  4,   2,   2, // 1477-1479
  4,   2,   1,   1,   2, // 1480-1484
  4,   3,   1,   1,   2, // 1485-1489
  3,   2, // 1490-1491
  3,   2,   2, // 1492-1494
  3,   3,   2, // 1495-1497
  2, // 1498
  3, // 1499
  4,   2,   2,   2, // 1500-1503
  4,   2,   1,   2, // 1504-1507
  4,   1,   2, // 1508-1510
  4,   2,   2,   2, // 1511-1514
  4,   2,   2,   1, // 1515-1518
  4,   2,   2, // 1519-1521
  2,   2, // 1522-1523
  2,   3, // 1524-1525
  9,   1,   2, // 1526-1528
  9,   1,   2, // 1529-1531
  1,   1,   1, // 1532-1534
  9,   2,   7, // 1535-1537
  1,   2,   7, // 1538-1540
  1,   2,   5, // 1541-1543
  9,   2,   7,   7, // 1544-1547
  4,   2,   2, // 1548-1550
  4,   2, // 1551-1552
  4,   1,   1, // 1553-1555
  4,   2,   2,   2,   2, // 1556-1560
  2,   1,   2,   2, // 1561-1564
  3,   2,   1,   2,   2, // 1565-1569
  3,   3,   1,   2,   2, // 1570-1574
  2,   1,   2,   3, // 1575-1578
  3,   2,   1,   2,   3, // 1579-1583
  3,   3,   1,   2,   3, // 1584-1588
  1,   2,   2, // 1589-1591
  3,   1,   2,   2, // 1592-1595
  3,   1,   2,   2,   2, // 1596-1600
  1,   2,   3, // 1601-1603
  3,   1,   2,   3, // 1604-1607
  3,   1,   2,   2,   3, // 1608-1612
  4,   1,   1, // 1613-1615
  2,   2,   2, // 1616-1618
  2,   1,   1,   2,   2, // 1619-1623
  3,   2,   2, // 1624-1626
  3,   1,   1,   2,   2, // 1627-1631
  2,   2,   3, // 1632-1634
  2,   1,   1,   2,   3, // 1635-1639
  3,   2,   3, // 1640-1642
  3,   1,   1,   2,   3, // 1643-1647
  1,   1,   2,   2, // 1648-1651
  1,   2,   2,   2, // 1652-1655
  1,   1,   2,   3, // 1656-1659
  1,   2,   2,   3, // 1660-1663
  4,   1,   1,   2, // 1664-1667
  4,   2,   1,   1,   2, // 1668-1672
  4,   2, // 1673-1674
  4,   2,   2,   2, // 1675-1678
  3,   2, // 1679-1680
  3,   2,   2, // 1681-1683
  3,   2, // 1684-1685
  3, // 1686
  3, // 1687
  1,   2, // 1688-1689
  2, // 1690
  1,   2, // 1691-1692
  1,   1,   1, // 1693-1695
  4,   7,   1, // 1696-1698
  9,   7,   7,   7, // 1699-1702
  9,   2, // 1703-1704
  9,   7,   7, // 1705-1707
  9,   7, // 1708-1709
  9,   2, // 1710-1711
  9,   3,   1,   2, // 1712-1715
  9,   2,   1,   2, // 1716-1719
  9,   3,   2,   1,   2, // 1720-1724
  9,   3,   1,   2, // 1725-1728
  9,   1,   2, // 1729-1731
  9,   2,   1,   2, // 1732-1735
  9,   3,   2,   1,   2, // 1736-1740
  9,   3,   1,   2, // 1741-1744
  2,   1,   2,   5, // 1745-1748
  3,   2,   1,   2,   5, // 1749-1753
  3,   1,   2,   5, // 1754-1757
  1,   2,   5, // 1758-1760
  2,   1,   2,   5, // 1761-1764
  3,   2,   1,   2,   5, // 1765-1769
  3,   1,   2,   5, // 1770-1773
  2,   1,   2,   7, // 1774-1777
  3,   2,   1,   2,   7, // 1778-1782
  7,   1,   2,   7, // 1783-1786
  3,   7,   1,   2,   7, // 1787-1791
  3,   1,   2,   7, // 1792-1795
  1,   2, // 1796-1797
  3,   1,   2, // 1798-1800
  9,   5,   5, // 1801-1803
  9,   7,   7, // 1804-1806
  9,   7,   7,   7, // 1807-1810
  9,   9,   7,   7,   7, // 1811-1815
  9,   5,   5, // 1816-1818
  9,   5,   5, // 1819-1821
  9,   7,   5,   5, // 1822-1825
  9,   5,   5,   2, // 1826-1829
  9,   7,   2, // 1830-1832
  9,   7,   7,   2, // 1833-1836
  9,   5,   2, // 1837-1839
  9,   7,   5,   2, // 1840-1843
  9,   5,   5,   2, // 1844-1847
  9,   5, // 1848-1849
  9, // 1850
  9,   9,   5,   5,   2, // 1851-1855
  9,   5, // 1856-1857
  9,   5,   5, // 1858-1860
  9,   5,   5,   2, // 1861-1864
  9,   5,   2, // 1865-1867
  9,   7,   5,   2, // 1868-1871
  9,   5,   2, // 1872-1874
  9,   7,   5,   2, // 1875-1878
  1,   2,   7, // 1879-1881
  7,   1,   2,   7, // 1882-1885
  1,   2,   7, // 1886-1888
  7,   1,   2,   7, // 1889-1892
  3, // 1893
  9,   5,   2, // 1894-1896
  9,   7,   5,   5,   2, // 1897-1901
  9,   5,   5,   2, // 1902-1905
  9,   5,   2, // 1906-1908
  9,   7,   5,   2, // 1909-1912
  9,   5,   2,   2, // 1913-1916
  9,   7,   5,   2,   2, // 1917-1921
  9,   5,   2, // 1922-1924
  9,   7,   7, // 1925-1927
  9,   7, // 1928-1929
  1,   2,   7,   7, // 1930-1933
  7,   1,   2,   7,   7, // 1934-1938
  1,   2,   7,   7, // 1939-1942
  7,   1,   2,   7,   7, // 1943-1947
  9,   7,   7,   7, // 1948-1951
  9,   5, // 1952-1953
  9,   7,   5, // 1954-1956
  2, // 1957
  3,   2, // 1958-1959
  1, // 1960
  1, // 1961
  1,   2, // 1962-1963
  1, // 1964
  1,   1, // 1965-1966
  1, // 1967
  4,   2, // 1968-1969
  3,   2,   2, // 1970-1972
  4,   2,   2, // 1973-1975
  4,   2,   2, // 1976-1978
  4,   2,   2, // 1979-1981
  3,   2,   2, // 1982-1984
  4,   2,   2, // 1985-1987
  3,   2, // 1988-1989
  1,   1,   1, // 1990-1992
  3,   2, // 1993-1994
  3,   2,   2,   2, // 1995-1998
  4,   3,   2,   2, // 1999-2002
  3,   2,   2, // 2003-2005
  4,   2, // 2006-2007
  4,   3,   2, // 2008-2010
  4,   1, // 2011-2012
  4,   2,   2, // 2013-2015
  3,   2,   2, // 2016-2018
  3,   2,   2, // 2019-2021
  4,   1,   1, // 2022-2024
  4,   2,   1,   1, // 2025-2028
  3,   4,   2,   2,   2, // 2029-2033
  3,   2,   2, // 2034-2036
  2, // 2037
  4,   1,   1, // 2038-2040
  4,   1,   1,   2, // 2041-2044
  4,   4,   2,   1,   1, // 2045-2049
  3,   2,   2, // 2050-2052
  4,   4,   2,   2, // 2053-2056
  3,   2, // 2057-2058
  3,   2,   2, // 2059-2061
  3,   2,   2, // 2062-2064
  3,   2,   2, // 2065-2067
  3,   2, // 2068-2069
  3,   2,   2,   2, // 2070-2073
  4,   2, // 2074-2075
  3,   2,   2,   2, // 2076-2079
  2, // 2080
  3,   1, // 2081-2082
  1,   1,   1, // 2083-2085
  2, // 2086
  2, // 2087
  5,   1, // 2088-2089
  4,   2, // 2090-2091
  5,   1,   1, // 2092-2094
  5,   2,   1,   1, // 2095-2098
  5,   2,   1,   1,   2, // 2099-2103
  5,   5,   1, // 2104-2106
  4,   2,   2, // 2107-2109
  5,   5,   1,   1, // 2110-2113
  2,   2, // 2114-2115
  1, // 2116
  2,   1, // 2117-2118
  2, // 2119
  2,   2, // 2120-2121
  3,   2, // 2122-2123
  2,   2, // 2124-2125
  2,   2, // 2126-2127
  3,   2, // 2128-2129
  2,   2, // 2130-2131
  2,   2, // 2132-2133
  2,   2, // 2134-2135
  2,   1, // 2136-2137
  2, // 2138
  2,   2, // 2139-2140
  2,   1, // 2141-2142
  2, // 2143
  3,   2,   2, // 2144-2146
  2,   2,   2, // 2147-2149
  3,   2,   2, // 2150-2152
  2,   2,   2, // 2153-2155
  2,   3,   2, // 2156-2158
  3,   2,   2, // 2159-2161
  3,   2, // 2162-2163
  2,   2, // 2164-2165
  4,   1, // 2166-2167
  4,   2,   1,   2, // 2168-2171
  4,   3,   2,   1,   2, // 2172-2176
  4,   3,   2,   1,   2,   2, // 2177-2182
  4,   1,   2, // 2183-2185
  4,   3,   1,   2, // 2186-2189
  4,   3,   1,   2,   2, // 2190-2194
  4,   2, // 2195-2196
  4,   1, // 2197-2198
  4,   4,   3,   1,   2, // 2199-2203
  1,   2,   2, // 2204-2206
  4,   3,   2,   2, // 2207-2210
  4,   2,   1,   2,   2, // 2211-2215
  4,   3,   2, // 2216-2218
  4,   1,   2,   2, // 2219-2222
  4,   1,   1,   2, // 2223-2226
  4,   2,   2, // 2227-2229
  4,   2,   1,   1,   2, // 2230-2234
  4,   3,   1,   1,   2, // 2235-2239
  3,   1, // 2240-2241
  3,   2,   1, // 2242-2244
  3,   3,   1, // 2245-2247
  2, // 2248
  3, // 2249
  4,   2,   2,   2, // 2250-2253
  4,   2,   1,   2, // 2254-2257
  4,   1,   2, // 2258-2260
  4,   2,   2,   2, // 2261-2264
  4,   2,   2,   1, // 2265-2268
  4,   2,   2, // 2269-2271
  2,   2, // 2272-2273
  2,   3, // 2274-2275
  9,   1,   2, // 2276-2278
  9,   1,   2, // 2279-2281
  1,   1,   1, // 2282-2284
  9,   2,   7, // 2285-2287
  1,   2,   7, // 2288-2290
  1,   2,   5, // 2291-2293
  9,   2,   7,   7, // 2294-2297
  3,   1,   2, // 2298-2300
  4,   2, // 2301-2302
  4,   1,   1, // 2303-2305
  4,   2,   2,   2,   2, // 2306-2310
  2,   1,   2,   2, // 2311-2314
  3,   2,   1,   2,   2, // 2315-2319
  4,   3,   1,   2,   1, // 2320-2324
  2,   1,   2,   3, // 2325-2328
  3,   2,   1,   2,   3, // 2329-2333
  4,   3,   1,   2,   3, // 2334-2338
  1,   2,   2, // 2339-2341
  3,   1,   2,   2, // 2342-2345
  3,   1,   2,   2,   2, // 2346-2350
  1,   2,   3, // 2351-2353
  3,   1,   2,   3, // 2354-2357
  3,   1,   2,   2,   3, // 2358-2362
  4,   1,   1, // 2363-2365
  2,   2,   2, // 2366-2368
  2,   1,   1,   2,   2, // 2369-2373
  3,   2,   2, // 2374-2376
  3,   1,   1,   2,   2, // 2377-2381
  2,   2,   3, // 2382-2384
  2,   1,   1,   2,   3, // 2385-2389
  3,   2,   3, // 2390-2392
  3,   1,   1,   2,   3, // 2393-2397
  1,   1,   2,   2, // 2398-2401
  1,   2,   2,   2, // 2402-2405
  1,   1,   2,   3, // 2406-2409
  1,   2,   2,   3, // 2410-2413
  4,   1,   1,   2, // 2414-2417
  4,   2,   1,   1,   2, // 2418-2422
  4,   2, // 2423-2424
  4,   2,   2,   2, // 2425-2428
  3,   2, // 2429-2430
  3,   2,   2, // 2431-2433
  3,   2, // 2434-2435
  3, // 2436
  4, // 2437
  2,   2, // 2438-2439
  2, // 2440
  1,   2, // 2441-2442
  1,   1,   1, // 2443-2445
  4,   7,   1, // 2446-2448
  9,   7,   7,   7, // 2449-2452
  9,   2, // 2453-2454
  9,   7,   7, // 2455-2457
  9,   7, // 2458-2459
  9,   2, // 2460-2461
  9,   3,   1,   2, // 2462-2465
  9,   2,   1,   2, // 2466-2469
  9,   3,   2,   1,   2, // 2470-2474
  9,   3,   1,   2, // 2475-2478
  9,   1,   2, // 2479-2481
  9,   2,   1,   2, // 2482-2485
  9,   3,   2,   1,   2, // 2486-2490
  9,   3,   1,   2, // 2491-2494
  2,   1,   2,   5, // 2495-2498
  3,   2,   1,   2,   5, // 2499-2503
  3,   1,   2,   5, // 2504-2507
  1,   2,   5, // 2508-2510
  2,   1,   2,   5, // 2511-2514
  3,   2,   1,   2,   5, // 2515-2519
  3,   1,   2,   5, // 2520-2523
  2,   1,   2,   7, // 2524-2527
  3,   2,   1,   2,   7, // 2528-2532
  7,   1,   2,   7, // 2533-2536
  3,   7,   1,   2,   7, // 2537-2541
  3,   1,   2,   7, // 2542-2545
  1,   2, // 2546-2547
  3,   1,   2, // 2548-2550
  9,   5,   5, // 2551-2553
  9,   7,   7, // 2554-2556
  9,   7,   7,   7, // 2557-2560
  9,   9,   7,   7,   7, // 2561-2565
  9,   5,   5, // 2566-2568
  9,   5,   5, // 2569-2571
  9,   7,   5,   5, // 2572-2575
  9,   5,   5,   2, // 2576-2579
  9,   7,   2, // 2580-2582
  9,   7,   7,   2, // 2583-2586
  9,   5,   2, // 2587-2589
  9,   7,   5,   2, // 2590-2593
  9,   5,   5,   2, // 2594-2597
  9,   5, // 2598-2599
  9, // 2600
  9,   9,   5,   5,   2, // 2601-2605
  9,   5, // 2606-2607
  9,   5,   5, // 2608-2610
  9,   5,   5,   2, // 2611-2614
  9,   5,   2, // 2615-2617
  9,   7,   5,   2, // 2618-2621
  9,   5,   2, // 2622-2624
  9,   7,   5,   2, // 2625-2628
  1,   2,   7, // 2629-2631
  7,   1,   2,   7, // 2632-2635
  1,   2,   7, // 2636-2638
  7,   1,   2,   7, // 2639-2642
  3, // 2643
  9,   5,   2, // 2644-2646
  9,   7,   5,   5,   2, // 2647-2651
  9,   5,   5,   2, // 2652-2655
  9,   5,   2, // 2656-2658
  9,   7,   5,   2, // 2659-2662
  9,   5,   2,   2, // 2663-2666
  9,   7,   5,   2,   2, // 2667-2671
  9,   5,   2, // 2672-2674
  9,   7,   7, // 2675-2677
  9,   7, // 2678-2679
  1,   2,   7,   7, // 2680-2683
  7,   1,   2,   7,   7, // 2684-2688
  1,   2,   7,   7, // 2689-2692
  7,   1,   2,   7,   7, // 2693-2697
  9,   7,   7,   7, // 2698-2701
  9,   5, // 2702-2703
  9,   7,   5, // 2704-2706
  2, // 2707
  3,   2, // 2708-2709
  1, // 2710
  1, // 2711
  1,   2, // 2712-2713
  1, // 2714
  1,   1, // 2715-2716
  1, // 2717
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1-2
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 3-5
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 6-8
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 9-11
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 12-14
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 15-17
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 18-20
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 21-22
 0,  0,  0, // 23-25
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 26-27
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 28-31
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 32-35
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 36-38
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 39-40
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 41-43
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 44-45
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 46-48
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 49-51
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 52-54
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 55-57
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 58-61
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 62-66
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 67-69
HexagonItinerariesV55Bypass::Hex_FWD, // 70
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 71-73
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 74-77
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 78-82
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 83-85
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 86-89
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 90-91
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 92-94
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 95-97
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 98-100
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 101-102
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 103-106
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 107-108
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 109-112
HexagonItinerariesV55Bypass::Hex_FWD, // 113
 0,  0, // 114-115
 0,  0,  0, // 116-118
HexagonItinerariesV55Bypass::Hex_FWD, // 119
 0, // 120
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 121-122
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 123-124
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 125-127
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 128-131
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 132-136
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 137-139
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 140-142
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 143-146
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 147-148
HexagonItinerariesV55Bypass::Hex_FWD, // 149
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 150-151
HexagonItinerariesV55Bypass::Hex_FWD, // 152
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 153-154
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 155-156
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 157-158
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 159-160
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 161-162
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 163-164
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 165-166
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 167-168
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 169-170
HexagonItinerariesV55Bypass::Hex_FWD, // 171
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 172-173
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 174-175
HexagonItinerariesV55Bypass::Hex_FWD, // 176
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 177-179
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 180-182
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 183-185
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 186-188
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 189-191
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 192-194
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 195-196
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 197-198
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 199-200
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 201-204
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 205-209
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 210-215
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 216-218
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 219-222
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 223-227
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 228-229
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 230-231
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 232-236
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 237-239
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 240-243
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 244-248
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 249-251
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 252-255
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 256-259
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 260-262
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 263-267
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 268-272
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 273-274
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 275-277
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 278-280
HexagonItinerariesV55Bypass::Hex_FWD, // 281
HexagonItinerariesV55Bypass::Hex_FWD, // 282
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 283-286
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 287-290
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 291-293
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 294-297
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 298-301
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 302-304
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 305-306
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 307-308
 0,  0,  0, // 309-311
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 312-314
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 315-316
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 317-319
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 320-324
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 325-328
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 329-333
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 334-338
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 339-342
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 343-347
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 348-352
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 353-355
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 356-359
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 360-364
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 365-367
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 368-371
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 372-376
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 377-379
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 380-382
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 383-387
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 388-390
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 391-395
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 396-398
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 399-403
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 404-406
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 407-411
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 412-415
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 416-419
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 420-423
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 424-427
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 428-431
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 432-436
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 437-438
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 439-442
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 443-444
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 445-447
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 448-449
HexagonItinerariesV55Bypass::Hex_FWD, // 450
HexagonItinerariesV55Bypass::Hex_FWD, // 451
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 452-453
HexagonItinerariesV55Bypass::Hex_FWD, // 454
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 455-456
 0,  0,  0, // 457-459
HexagonItinerariesV55Bypass::Hex_FWD, // 460
HexagonItinerariesV55Bypass::Hex_FWD, // 461
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 462-463
HexagonItinerariesV55Bypass::Hex_FWD, // 464
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 465-466
HexagonItinerariesV55Bypass::Hex_FWD, // 467
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 468-469
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 470-472
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 473-475
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 476-478
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 479-481
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 482-484
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 485-487
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 488-489
 0,  0,  0, // 490-492
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 493-494
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 495-498
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 499-502
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 503-505
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 506-507
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 508-510
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 511-512
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 513-515
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 516-518
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 519-521
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 522-524
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 525-528
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 529-533
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 534-536
HexagonItinerariesV60Bypass::Hex_FWD, // 537
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 538-540
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 541-544
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 545-549
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 550-552
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 553-556
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 557-558
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 559-561
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 562-564
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 565-567
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 568-569
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 570-573
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 574-575
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 576-579
HexagonItinerariesV60Bypass::Hex_FWD, // 580
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 581-582
 0,  0,  0, // 583-585
HexagonItinerariesV60Bypass::Hex_FWD, // 586
 0, // 587
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 588-589
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 590-591
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 592-594
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 595-598
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 599-603
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 604-606
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 607-609
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 610-613
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 614-615
HexagonItinerariesV60Bypass::Hex_FWD, // 616
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 617-618
HexagonItinerariesV60Bypass::Hex_FWD, // 619
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 620-621
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 622-623
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 624-625
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 626-627
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 628-629
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 630-631
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 632-633
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 634-635
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 636-637
HexagonItinerariesV60Bypass::Hex_FWD, // 638
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 639-640
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 641-642
HexagonItinerariesV60Bypass::Hex_FWD, // 643
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 644-646
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 647-649
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 650-652
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 653-655
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 656-658
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 659-661
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 662-663
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 664-665
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 666-667
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 668-671
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 672-676
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 677-682
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 683-685
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 686-689
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 690-694
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 695-696
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 697-698
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 699-703
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 704-706
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 707-710
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 711-715
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 716-718
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 719-722
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 723-726
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 727-729
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 730-734
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 735-739
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 740-741
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 742-744
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 745-747
HexagonItinerariesV60Bypass::Hex_FWD, // 748
HexagonItinerariesV60Bypass::Hex_FWD, // 749
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 750-753
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 754-757
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 758-760
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 761-764
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 765-768
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 769-771
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 772-773
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 774-775
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 776-778
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 779-781
 0,  0,  0, // 782-784
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 785-787
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 788-790
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 791-793
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 794-797
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 798-800
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 801-802
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 803-805
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 806-810
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 811-814
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 815-819
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 820-824
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 825-828
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 829-833
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 834-838
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 839-841
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 842-845
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 846-850
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 851-853
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 854-857
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 858-862
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 863-865
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 866-868
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 869-873
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 874-876
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 877-881
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 882-884
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 885-889
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 890-892
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 893-897
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 898-901
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 902-905
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 906-909
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 910-913
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 914-917
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 918-922
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 923-924
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 925-928
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 929-930
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 931-933
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 934-935
HexagonItinerariesV60Bypass::Hex_FWD, // 936
HexagonItinerariesV60Bypass::Hex_FWD, // 937
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 938-939
HexagonItinerariesV60Bypass::Hex_FWD, // 940
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 941-942
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 943-945
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 946-948
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD,  0, // 949-952
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 953-954
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 955-957
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 958-959
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 960-961
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 962-965
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 966-969
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 970-974
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 975-978
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 979-981
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 982-985
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 986-990
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 991-994
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 995-998
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 999-1003
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1004-1007
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1008-1010
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1011-1014
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1015-1019
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1020-1023
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1024-1027
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1028-1032
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1033-1036
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1037-1041
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1042-1045
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1046-1047
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1048-1050
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1051-1053
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1054-1056
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1057-1060
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1061-1065
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1066-1068
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1069-1071
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1072-1075
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1076-1079
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1080-1082
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1083-1086
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1087-1089
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1090-1093
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1094-1097
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1098-1099
HexagonItinerariesV60Bypass::HVX_FWD, // 1100
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1101-1105
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1106-1107
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1108-1110
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1111-1114
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1115-1117
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1118-1121
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1122-1124
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1125-1128
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1129-1131
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1132-1135
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1136-1138
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1139-1142
HexagonItinerariesV60Bypass::HVX_FWD, // 1143
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1144-1146
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1147-1151
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1152-1155
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1156-1158
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1159-1162
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1163-1166
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1167-1171
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1172-1174
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1175-1177
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1178-1179
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1180-1183
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1184-1188
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1189-1192
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1193-1197
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1198-1201
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1202-1203
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 1204-1206
HexagonItinerariesV60Bypass::Hex_FWD, // 1207
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1208-1209
HexagonItinerariesV60Bypass::Hex_FWD, // 1210
HexagonItinerariesV60Bypass::Hex_FWD, // 1211
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1212-1213
HexagonItinerariesV60Bypass::Hex_FWD, // 1214
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1215-1216
HexagonItinerariesV60Bypass::Hex_FWD, // 1217
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1218-1219
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1220-1222
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1223-1225
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1226-1228
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1229-1231
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1232-1234
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1235-1237
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1238-1239
 0,  0,  0, // 1240-1242
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1243-1244
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1245-1248
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1249-1252
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1253-1255
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1256-1257
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1258-1260
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1261-1262
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1263-1265
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1266-1268
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1269-1271
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1272-1274
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1275-1278
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1279-1283
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1284-1286
HexagonItinerariesV62Bypass::Hex_FWD, // 1287
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1288-1290
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1291-1294
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1295-1299
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1300-1302
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1303-1306
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1307-1308
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1309-1311
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1312-1314
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1315-1317
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1318-1319
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1320-1323
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1324-1325
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1326-1329
HexagonItinerariesV62Bypass::Hex_FWD, // 1330
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1331-1332
 0,  0,  0, // 1333-1335
HexagonItinerariesV62Bypass::Hex_FWD, // 1336
 0, // 1337
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1338-1339
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1340-1341
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1342-1344
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1345-1348
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1349-1353
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1354-1356
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1357-1359
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1360-1363
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1364-1365
HexagonItinerariesV62Bypass::Hex_FWD, // 1366
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1367-1368
HexagonItinerariesV62Bypass::Hex_FWD, // 1369
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1370-1371
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1372-1373
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1374-1375
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1376-1377
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1378-1379
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1380-1381
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1382-1383
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1384-1385
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1386-1387
HexagonItinerariesV62Bypass::Hex_FWD, // 1388
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1389-1390
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1391-1392
HexagonItinerariesV62Bypass::Hex_FWD, // 1393
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1394-1396
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1397-1399
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1400-1402
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1403-1405
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1406-1408
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1409-1411
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1412-1413
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1414-1415
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1416-1417
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1418-1421
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1422-1426
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1427-1432
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1433-1435
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1436-1439
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1440-1444
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1445-1446
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1447-1448
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1449-1453
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1454-1456
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1457-1460
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1461-1465
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1466-1468
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1469-1472
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1473-1476
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1477-1479
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1480-1484
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1485-1489
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1490-1491
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1492-1494
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1495-1497
HexagonItinerariesV62Bypass::Hex_FWD, // 1498
HexagonItinerariesV62Bypass::Hex_FWD, // 1499
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1500-1503
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1504-1507
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1508-1510
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1511-1514
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1515-1518
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1519-1521
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1522-1523
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1524-1525
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1526-1528
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1529-1531
 0,  0,  0, // 1532-1534
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1535-1537
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1538-1540
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1541-1543
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1544-1547
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1548-1550
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1551-1552
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1553-1555
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1556-1560
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1561-1564
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1565-1569
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1570-1574
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1575-1578
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1579-1583
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1584-1588
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1589-1591
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1592-1595
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1596-1600
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1601-1603
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1604-1607
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1608-1612
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1613-1615
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1616-1618
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1619-1623
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1624-1626
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1627-1631
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1632-1634
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1635-1639
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1640-1642
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1643-1647
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1648-1651
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1652-1655
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1656-1659
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1660-1663
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1664-1667
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1668-1672
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1673-1674
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1675-1678
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1679-1680
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1681-1683
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1684-1685
HexagonItinerariesV62Bypass::Hex_FWD, // 1686
HexagonItinerariesV62Bypass::Hex_FWD, // 1687
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1688-1689
HexagonItinerariesV62Bypass::Hex_FWD, // 1690
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1691-1692
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1693-1695
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1696-1698
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD,  0, // 1699-1702
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1703-1704
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1705-1707
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1708-1709
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1710-1711
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1712-1715
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1716-1719
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1720-1724
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1725-1728
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1729-1731
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1732-1735
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1736-1740
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1741-1744
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1745-1748
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1749-1753
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1754-1757
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1758-1760
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1761-1764
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1765-1769
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1770-1773
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1774-1777
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1778-1782
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1783-1786
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1787-1791
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1792-1795
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1796-1797
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1798-1800
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1801-1803
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1804-1806
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1807-1810
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1811-1815
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1816-1818
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1819-1821
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1822-1825
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1826-1829
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1830-1832
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1833-1836
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1837-1839
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1840-1843
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1844-1847
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1848-1849
HexagonItinerariesV62Bypass::HVX_FWD, // 1850
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1851-1855
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1856-1857
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1858-1860
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1861-1864
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1865-1867
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1868-1871
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1872-1874
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1875-1878
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1879-1881
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1882-1885
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1886-1888
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1889-1892
HexagonItinerariesV62Bypass::HVX_FWD, // 1893
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1894-1896
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1897-1901
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1902-1905
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1906-1908
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1909-1912
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1913-1916
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1917-1921
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1922-1924
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1925-1927
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1928-1929
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1930-1933
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1934-1938
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1939-1942
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1943-1947
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1948-1951
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1952-1953
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1954-1956
HexagonItinerariesV62Bypass::Hex_FWD, // 1957
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1958-1959
HexagonItinerariesV62Bypass::Hex_FWD, // 1960
HexagonItinerariesV62Bypass::Hex_FWD, // 1961
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1962-1963
HexagonItinerariesV62Bypass::Hex_FWD, // 1964
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1965-1966
HexagonItinerariesV62Bypass::Hex_FWD, // 1967
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1968-1969
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1970-1972
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1973-1975
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1976-1978
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1979-1981
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1982-1984
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1985-1987
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1988-1989
 0,  0,  0, // 1990-1992
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1993-1994
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1995-1998
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 1999-2002
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2003-2005
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2006-2007
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2008-2010
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2011-2012
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2013-2015
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2016-2018
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2019-2021
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2022-2024
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2025-2028
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2029-2033
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2034-2036
HexagonItinerariesV65Bypass::Hex_FWD, // 2037
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2038-2040
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2041-2044
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2045-2049
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2050-2052
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2053-2056
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2057-2058
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2059-2061
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2062-2064
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2065-2067
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2068-2069
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2070-2073
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2074-2075
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2076-2079
HexagonItinerariesV65Bypass::Hex_FWD, // 2080
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2081-2082
 0,  0,  0, // 2083-2085
HexagonItinerariesV65Bypass::Hex_FWD, // 2086
 0, // 2087
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2088-2089
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2090-2091
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2092-2094
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2095-2098
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2099-2103
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2104-2106
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2107-2109
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2110-2113
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2114-2115
HexagonItinerariesV65Bypass::Hex_FWD, // 2116
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2117-2118
HexagonItinerariesV65Bypass::Hex_FWD, // 2119
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2120-2121
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2122-2123
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2124-2125
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2126-2127
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2128-2129
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2130-2131
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2132-2133
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2134-2135
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2136-2137
HexagonItinerariesV65Bypass::Hex_FWD, // 2138
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2139-2140
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2141-2142
HexagonItinerariesV65Bypass::Hex_FWD, // 2143
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2144-2146
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2147-2149
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2150-2152
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2153-2155
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2156-2158
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2159-2161
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2162-2163
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2164-2165
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2166-2167
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2168-2171
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2172-2176
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2177-2182
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2183-2185
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2186-2189
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2190-2194
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2195-2196
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2197-2198
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2199-2203
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2204-2206
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2207-2210
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2211-2215
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2216-2218
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2219-2222
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2223-2226
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2227-2229
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2230-2234
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2235-2239
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2240-2241
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2242-2244
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2245-2247
HexagonItinerariesV65Bypass::Hex_FWD, // 2248
HexagonItinerariesV65Bypass::Hex_FWD, // 2249
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2250-2253
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2254-2257
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2258-2260
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2261-2264
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2265-2268
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2269-2271
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2272-2273
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2274-2275
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2276-2278
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2279-2281
 0,  0,  0, // 2282-2284
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2285-2287
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2288-2290
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2291-2293
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2294-2297
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2298-2300
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2301-2302
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2303-2305
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2306-2310
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2311-2314
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2315-2319
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2320-2324
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2325-2328
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2329-2333
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2334-2338
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2339-2341
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2342-2345
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2346-2350
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2351-2353
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2354-2357
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2358-2362
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2363-2365
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2366-2368
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2369-2373
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2374-2376
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2377-2381
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2382-2384
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2385-2389
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2390-2392
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2393-2397
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2398-2401
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2402-2405
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2406-2409
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2410-2413
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2414-2417
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2418-2422
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2423-2424
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2425-2428
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2429-2430
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2431-2433
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2434-2435
HexagonItinerariesV65Bypass::Hex_FWD, // 2436
HexagonItinerariesV65Bypass::Hex_FWD, // 2437
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2438-2439
HexagonItinerariesV65Bypass::Hex_FWD, // 2440
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2441-2442
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2443-2445
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2446-2448
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD,  0, // 2449-2452
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2453-2454
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2455-2457
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2458-2459
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2460-2461
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2462-2465
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2466-2469
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2470-2474
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2475-2478
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2479-2481
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2482-2485
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2486-2490
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2491-2494
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2495-2498
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2499-2503
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2504-2507
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2508-2510
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2511-2514
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2515-2519
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2520-2523
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2524-2527
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2528-2532
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2533-2536
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2537-2541
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2542-2545
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2546-2547
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2548-2550
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2551-2553
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2554-2556
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2557-2560
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2561-2565
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2566-2568
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2569-2571
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2572-2575
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2576-2579
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2580-2582
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2583-2586
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2587-2589
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2590-2593
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2594-2597
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2598-2599
HexagonItinerariesV65Bypass::HVX_FWD, // 2600
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2601-2605
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2606-2607
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2608-2610
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2611-2614
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2615-2617
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2618-2621
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2622-2624
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2625-2628
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2629-2631
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2632-2635
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2636-2638
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2639-2642
HexagonItinerariesV65Bypass::HVX_FWD, // 2643
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2644-2646
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2647-2651
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2652-2655
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2656-2658
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2659-2662
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2663-2666
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2667-2671
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2672-2674
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2675-2677
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2678-2679
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2680-2683
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2684-2688
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2689-2692
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2693-2697
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2698-2701
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2702-2703
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2704-2706
HexagonItinerariesV65Bypass::Hex_FWD, // 2707
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2708-2709
HexagonItinerariesV65Bypass::Hex_FWD, // 2710
HexagonItinerariesV65Bypass::Hex_FWD, // 2711
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2712-2713
HexagonItinerariesV65Bypass::Hex_FWD, // 2714
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2715-2716
HexagonItinerariesV65Bypass::Hex_FWD, // 2717
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV4[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 tc_c2f7d806
  { 1, 2, 3, 0, 0 }, // 2 tc_b9488031
  { 1, 1, 2, 0, 0 }, // 3 tc_897d1a9d
  { 1, 1, 2, 0, 0 }, // 4 tc_b44c6e2a
  { 1, 1, 2, 0, 0 }, // 5 tc_1b9c9ee5
  { 1, 1, 2, 0, 0 }, // 6 tc_540fdfbc
  { 1, 2, 3, 0, 0 }, // 7 tc_5ba5997d
  { 1, 2, 3, 0, 0 }, // 8 tc_68cb12ce
  { 1, 2, 3, 0, 0 }, // 9 PSEUDO
  { 1, 1, 2, 0, 0 }, // 10 tc_cde8b071
  { 1, 2, 3, 0, 0 }, // 11 tc_6efc556e
  { 1, 2, 3, 0, 0 }, // 12 tc_d6bf0472
  { 1, 2, 3, 0, 0 }, // 13 tc_2b2f4060
  { 1, 2, 3, 0, 0 }, // 14 tc_8fe6b782
  { 1, 3, 4, 0, 0 }, // 15 tc_29175780
  { 1, 2, 3, 0, 0 }, // 16 tc_5f6847a1
  { 1, 3, 4, 0, 0 }, // 17 tc_a21dc435
  { 1, 1, 2, 0, 0 }, // 18 tc_2b6f77c6
  { 1, 1, 2, 0, 0 }, // 19 tc_dbdffe3d
  { 1, 1, 2, 0, 0 }, // 20 tc_1e856f58
  { 1, 1, 2, 0, 0 }, // 21 tc_8fd5f294
  { 1, 1, 2, 0, 0 }, // 22 tc_e913dc32
  { 1, 1, 2, 0, 0 }, // 23 tc_523fcf30
  { 1, 1, 2, 0, 0 }, // 24 tc_7a830544
  { 1, 2, 3, 0, 0 }, // 25 tc_452f85af
  { 1, 1, 2, 0, 0 }, // 26 tc_04c9decc
  { 1, 1, 2, 0, 0 }, // 27 tc_c6ce9b3f
  { 1, 1, 2, 0, 0 }, // 28 tc_caaebcba
  { 1, 1, 2, 0, 0 }, // 29 tc_55050d58
  { 1, 1, 2, 0, 0 }, // 30 tc_ef84f62f
  { 1, 1, 2, 0, 0 }, // 31 tc_f2704b9a
  { 1, 1, 2, 0, 0 }, // 32 tc_53bc8a6a
  { 1, 2, 3, 0, 0 }, // 33 tc_c6aa82f7
  { 1, 2, 3, 0, 0 }, // 34 tc_6ebb4a12
  { 1, 1, 2, 0, 0 }, // 35 tc_351fed2d
  { 1, 1, 2, 0, 0 }, // 36 tc_f8eeed7a
  { 1, 3, 4, 0, 0 }, // 37 tc_b9c4623f
  { 1, 1, 2, 0, 0 }, // 38 tc_481e5e5c
  { 1, 1, 2, 0, 0 }, // 39 tc_a27582fa
  { 1, 4, 5, 0, 0 }, // 40 LD_tc_ld_SLOT01
  { 1, 5, 6, 0, 0 }, // 41 DUPLEX
  { 1, 6, 7, 0, 0 }, // 42 tc_9faf76ae
  { 1, 7, 8, 0, 0 }, // 43 tc_ENDLOOP
  { 1, 1, 2, 0, 0 }, // 44 tc_f3eaa14b
  { 1, 1, 2, 0, 0 }, // 45 tc_234a11a5
  { 1, 1, 2, 0, 0 }, // 46 tc_6792d5ff
  { 1, 1, 2, 0, 0 }, // 47 tc_d580173f
  { 1, 1, 2, 0, 0 }, // 48 tc_038a1342
  { 1, 1, 2, 0, 0 }, // 49 tc_4d99bca9
  { 1, 1, 2, 0, 0 }, // 50 tc_976ddc4f
  { 1, 1, 2, 0, 0 }, // 51 tc_9c00ce8d
  { 1, 1, 2, 0, 0 }, // 52 tc_2f185f5c
  { 1, 6, 7, 0, 0 }, // 53 tc_15411484
  { 1, 6, 7, 0, 0 }, // 54 tc_10b97e27
  { 1, 2, 3, 0, 0 }, // 55 tc_52d7bbea
  { 1, 1, 2, 0, 0 }, // 56 tc_3669266a
  { 1, 1, 2, 0, 0 }, // 57 tc_e9fae2d6
  { 1, 1, 2, 0, 0 }, // 58 tc_a46f0df5
  { 1, 1, 2, 0, 0 }, // 59 tc_e1e99bfa
  { 1, 6, 7, 0, 0 }, // 60 tc_e0739b8c
  { 1, 6, 7, 0, 0 }, // 61 tc_181af5d0
  { 1, 6, 7, 0, 0 }, // 62 tc_97743097
  { 1, 3, 4, 0, 0 }, // 63 tc_73043bf4
  { 1, 3, 4, 0, 0 }, // 64 tc_cf59f215
  { 1, 3, 4, 0, 0 }, // 65 tc_7934b9df
  { 1, 6, 7, 0, 0 }, // 66 tc_681a2300
  { 1, 3, 4, 0, 0 }, // 67 tc_c5e2426d
  { 1, 3, 4, 0, 0 }, // 68 tc_4f7cd700
  { 1, 6, 7, 0, 0 }, // 69 tc_14cd4cfa
  { 1, 5, 6, 0, 0 }, // 70 tc_51b866be
  { 1, 1, 2, 0, 0 }, // 71 tc_855b0b61
  { 1, 5, 6, 0, 0 }, // 72 tc_bde7aaf4
  { 1, 1, 2, 0, 0 }, // 73 tc_99be14ca
  { 1, 5, 6, 0, 0 }, // 74 tc_5eb851fc
  { 1, 1, 2, 0, 0 }, // 75 tc_49eb22c8
  { 1, 5, 6, 0, 0 }, // 76 tc_746baa8e
  { 1, 1, 2, 0, 0 }, // 77 tc_3cb8ea06
  { 1, 4, 5, 0, 0 }, // 78 tc_d1090e34
  { 1, 4, 5, 0, 0 }, // 79 tc_ef52ed71
  { 1, 4, 5, 0, 0 }, // 80 tc_bad2bcaf
  { 1, 4, 5, 0, 0 }, // 81 tc_03220ffa
  { 1, 4, 5, 0, 0 }, // 82 tc_7f881c76
  { 1, 4, 5, 0, 0 }, // 83 tc_2fc0c436
  { 1, 4, 5, 0, 0 }, // 84 tc_4403ca65
  { 1, 4, 5, 0, 0 }, // 85 tc_9c98e8af
  { 1, 5, 6, 0, 0 }, // 86 tc_6aa5711a
  { 1, 4, 5, 0, 0 }, // 87 tc_63fe3df7
  { 1, 5, 6, 0, 0 }, // 88 tc_44126683
  { 1, 4, 5, 0, 0 }, // 89 tc_5acef64a
  { 1, 4, 5, 0, 0 }, // 90 tc_0cd51c76
  { 1, 4, 5, 0, 0 }, // 91 tc_b77c481f
  { 1, 4, 5, 0, 0 }, // 92 tc_cf47a43f
  { 1, 4, 5, 0, 0 }, // 93 tc_f47d212f
  { 1, 4, 5, 0, 0 }, // 94 tc_1d5a38a8
  { 1, 4, 5, 0, 0 }, // 95 tc_9ef61e5c
  { 1, 4, 5, 0, 0 }, // 96 tc_b7dd427e
  { 1, 5, 6, 0, 0 }, // 97 tc_3d04548d
  { 1, 5, 6, 0, 0 }, // 98 tc_513bef45
  { 1, 5, 6, 0, 0 }, // 99 tc_395dc00f
  { 1, 5, 6, 0, 0 }, // 100 tc_3bc2c5d3
  { 1, 5, 6, 0, 0 }, // 101 tc_e7624c08
  { 1, 1, 2, 0, 0 }, // 102 tc_c74f796f
  { 1, 1, 2, 0, 0 }, // 103 tc_16d0d8d5
  { 1, 1, 2, 0, 0 }, // 104 tc_1853ea6d
  { 1, 1, 2, 0, 0 }, // 105 tc_84df2cd3
  { 1, 1, 2, 0, 0 }, // 106 tc_bcc96cee
  { 1, 1, 2, 0, 0 }, // 107 tc_f49e76f4
  { 1, 4, 5, 0, 0 }, // 108 tc_a788683e
  { 1, 5, 6, 0, 0 }, // 109 tc_ff9ee76e
  { 0, 0, 0, 0, 0 }, // 110 tc_b712833a
  { 0, 0, 0, 0, 0 }, // 111 tc_35e92f8e
  { 1, 8, 10, 0, 0 }, // 112 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 113 tc_b06ab583
  { 0, 0, 0, 0, 0 }, // 114 tc_e3748cdf
  { 0, 0, 0, 0, 0 }, // 115 tc_354299ad
  { 0, 0, 0, 0, 0 }, // 116 tc_2171ebae
  { 1, 5, 6, 0, 0 }, // 117 tc_e216a5db
  { 1, 1, 2, 0, 0 }, // 118 tc_d088982c
  { 1, 1, 2, 0, 0 }, // 119 tc_c6ebf8dd
  { 1, 1, 2, 0, 0 }, // 120 tc_87735c3b
  { 1, 4, 5, 0, 0 }, // 121 tc_8b15472a
  { 1, 4, 5, 0, 0 }, // 122 tc_cd7374a0
  { 1, 4, 5, 0, 0 }, // 123 tc_74e47fd9
  { 1, 5, 6, 0, 0 }, // 124 tc_594ab548
  { 1, 5, 6, 0, 0 }, // 125 tc_d9f95eef
  { 1, 5, 6, 0, 0 }, // 126 tc_d24b2d85
  { 1, 4, 5, 0, 0 }, // 127 tc_05b6c987
  { 1, 4, 5, 0, 0 }, // 128 tc_f86c328a
  { 1, 4, 5, 0, 0 }, // 129 tc_9fdb5406
  { 1, 5, 6, 0, 0 }, // 130 tc_f7dd9c9f
  { 1, 5, 6, 0, 0 }, // 131 tc_e7d02c66
  { 1, 5, 6, 0, 0 }, // 132 tc_9d5941c7
  { 1, 5, 6, 0, 0 }, // 133 tc_1372bca1
  { 1, 4, 5, 0, 0 }, // 134 tc_238d91d2
  { 1, 4, 5, 0, 0 }, // 135 tc_5274e61a
  { 1, 4, 5, 0, 0 }, // 136 tc_66888ded
  { 1, 4, 5, 0, 0 }, // 137 tc_3e07fb90
  { 1, 5, 6, 0, 0 }, // 138 tc_6ac37025
  { 1, 5, 6, 0, 0 }, // 139 tc_adb14c66
  { 1, 5, 6, 0, 0 }, // 140 tc_53bdb2f6
  { 1, 5, 6, 0, 0 }, // 141 tc_e421e012
  { 1, 4, 5, 0, 0 }, // 142 tc_d9709180
  { 1, 4, 5, 0, 0 }, // 143 tc_0dc560de
  { 1, 5, 6, 0, 0 }, // 144 tc_b166348b
  { 1, 5, 6, 0, 0 }, // 145 tc_a8acdac0
  { 1, 1, 2, 0, 0 }, // 146 tc_b9c0b731
  { 1, 1, 2, 0, 0 }, // 147 tc_60571023
  { 1, 1, 2, 0, 0 }, // 148 tc_00afc57e
  { 1, 1, 2, 0, 0 }, // 149 tc_41d5298e
  { 1, 1, 2, 0, 0 }, // 150 tc_be706f30
  { 1, 4, 5, 0, 0 }, // 151 tc_609d2efe
  { 1, 4, 5, 0, 0 }, // 152 tc_a904d137
  { 1, 4, 5, 0, 0 }, // 153 tc_1b82a277
  { 1, 4, 5, 0, 0 }, // 154 tc_e9c822f7
  { 1, 4, 5, 0, 0 }, // 155 tc_90f3e30c
  { 1, 4, 5, 0, 0 }, // 156 tc_36c68ad1
  { 1, 5, 6, 0, 0 }, // 157 tc_2a160009
  { 1, 5, 6, 0, 0 }, // 158 tc_fcab4871
  { 1, 5, 6, 0, 0 }, // 159 tc_0fc1ae07
  { 1, 4, 5, 0, 0 }, // 160 tc_57288781
  { 1, 4, 5, 0, 0 }, // 161 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 162 tc_9777e6bf
  { 0, 0, 0, 0, 0 }, // 163 CVI_VA
  { 0, 0, 0, 0, 0 }, // 164 tc_6b78cf13
  { 0, 0, 0, 0, 0 }, // 165 tc_97c165b9
  { 0, 0, 0, 0, 0 }, // 166 tc_71337255
  { 0, 0, 0, 0, 0 }, // 167 tc_4105d6b5
  { 0, 0, 0, 0, 0 }, // 168 tc_4fd8566e
  { 0, 0, 0, 0, 0 }, // 169 tc_5cbf490b
  { 0, 0, 0, 0, 0 }, // 170 tc_da979fb3
  { 0, 0, 0, 0, 0 }, // 171 tc_eb669007
  { 0, 0, 0, 0, 0 }, // 172 tc_77a4c701
  { 0, 0, 0, 0, 0 }, // 173 tc_51cd3aab
  { 0, 0, 0, 0, 0 }, // 174 tc_38208312
  { 0, 0, 0, 0, 0 }, // 175 tc_9c267309
  { 0, 0, 0, 0, 0 }, // 176 tc_d642eff3
  { 0, 0, 0, 0, 0 }, // 177 tc_6fd9ad30
  { 0, 0, 0, 0, 0 }, // 178 tc_7fa82b08
  { 0, 0, 0, 0, 0 }, // 179 tc_1b93bdc6
  { 0, 0, 0, 0, 0 }, // 180 tc_d5090f3e
  { 0, 0, 0, 0, 0 }, // 181 tc_8b6a873f
  { 0, 0, 0, 0, 0 }, // 182 tc_db5b9e2f
  { 0, 0, 0, 0, 0 }, // 183 tc_85d237e3
  { 0, 0, 0, 0, 0 }, // 184 tc_0317c6ca
  { 0, 0, 0, 0, 0 }, // 185 tc_aedb9f9e
  { 0, 0, 0, 0, 0 }, // 186 tc_99093773
  { 0, 0, 0, 0, 0 }, // 187 tc_a4c9df3b
  { 0, 0, 0, 0, 0 }, // 188 tc_29841470
  { 0, 0, 0, 0, 0 }, // 189 tc_5c03dc63
  { 0, 0, 0, 0, 0 }, // 190 tc_908a4c8c
  { 0, 0, 0, 0, 0 }, // 191 tc_bbaf280e
  { 0, 0, 0, 0, 0 }, // 192 tc_a3127e12
  { 0, 0, 0, 0, 0 }, // 193 tc_5a9fc4ec
  { 0, 0, 0, 0, 0 }, // 194 tc_45453b98
  { 0, 0, 0, 0, 0 }, // 195 tc_eda67dcd
  { 0, 0, 0, 0, 0 }, // 196 tc_e172d86a
  { 0, 0, 0, 0, 0 }, // 197 tc_c4b515c5
  { 0, 0, 0, 0, 0 }, // 198 tc_e231aa4f
  { 0, 0, 0, 0, 0 }, // 199 tc_9311da3f
  { 0, 0, 0, 0, 0 }, // 200 tc_41f4b64e
  { 0, 0, 0, 0, 0 }, // 201 tc_c00bf9c9
  { 0, 0, 0, 0, 0 }, // 202 tc_7fa8b40f
  { 0, 0, 0, 0, 0 }, // 203 tc_d2cb81ea
  { 0, 0, 0, 0, 0 }, // 204 tc_8a6eb39a
  { 0, 0, 0, 0, 0 }, // 205 tc_5c120602
  { 0, 0, 0, 0, 0 }, // 206 tc_e6299d16
  { 0, 0, 0, 0, 0 }, // 207 tc_f3fc3f83
  { 0, 0, 0, 0, 0 }, // 208 tc_4e2a5159
  { 0, 0, 0, 0, 0 }, // 209 tc_69b6dd20
  { 0, 0, 0, 0, 0 }, // 210 tc_d725e5b0
  { 0, 0, 0, 0, 0 }, // 211 tc_7c3f55c4
  { 0, 0, 0, 0, 0 }, // 212 tc_d98f4d63
  { 0, 0, 0, 0, 0 }, // 213 tc_66bb62ea
  { 0, 0, 0, 0, 0 }, // 214 CVI_GATHER_PSEUDO
  { 0, 0, 0, 0, 0 }, // 215 tc_63e3d94c
  { 0, 0, 0, 0, 0 }, // 216 tc_bfe309d5
  { 0, 0, 0, 0, 0 }, // 217 tc_98733e9d
  { 0, 0, 0, 0, 0 }, // 218 tc_e5053c8f
  { 0, 0, 0, 0, 0 }, // 219 tc_cedf314b
  { 0, 0, 0, 0, 0 }, // 220 tc_fa99dc24
  { 0, 0, 0, 0, 0 }, // 221 tc_cbf6d1dc
  { 0, 0, 0, 0, 0 }, // 222 tc_7474003e
  { 0, 0, 0, 0, 0 }, // 223 tc_a807365d
  { 0, 0, 0, 0, 0 }, // 224 tc_ee927c0e
  { 0, 0, 0, 0, 0 }, // 225 tc_7e9f581b
  { 0, 0, 0, 0, 0 }, // 226 tc_41f99e1c
  { 0, 0, 0, 0, 0 }, // 227 tc_bf142ae2
  { 0, 0, 0, 0, 0 }, // 228 tc_9b9642a1
  { 0, 0, 0, 0, 0 }, // 229 tc_644584f8
  { 0, 0, 0, 0, 0 }, // 230 tc_4f190ba3
  { 0, 0, 0, 0, 0 }, // 231 tc_df54ad52
  { 0, 0, 0, 0, 0 }, // 232 tc_ec58f88a
  { 0, 0, 0, 0, 0 }, // 233 tc_94f43c04
  { 0, 0, 0, 0, 0 }, // 234 tc_316c637c
  { 0, 0, 0, 0, 0 }, // 235 tc_d7bea0ec
  { 0, 0, 0, 0, 0 }, // 236 tc_72ad7b54
  { 0, 0, 0, 0, 0 }, // 237 tc_b77635b4
  { 0, 0, 0, 0, 0 }, // 238 tc_28978789
  { 1, 5, 6, 0, 0 }, // 239 tc_367f7f3d
  { 1, 3, 4, 0, 0 }, // 240 tc_4ca572d4
  { 1, 5, 6, 0, 0 }, // 241 tc_00e7c26e
  { 1, 5, 6, 0, 0 }, // 242 tc_3da80ba5
  { 1, 5, 6, 0, 0 }, // 243 tc_4d9914c9
  { 1, 6, 7, 0, 0 }, // 244 tc_999d32db
  { 1, 6, 7, 0, 0 }, // 245 tc_b13761ae
  { 1, 5, 6, 0, 0 }, // 246 tc_daa058fa
  { 1, 3, 4, 0, 0 }, // 247 tc_c82dc1ff
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV55[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 10, 11, 1, 3 }, // 1 tc_c2f7d806
  { 1, 11, 12, 3, 6 }, // 2 tc_b9488031
  { 1, 10, 11, 6, 9 }, // 3 tc_897d1a9d
  { 1, 10, 11, 9, 12 }, // 4 tc_b44c6e2a
  { 1, 10, 11, 12, 15 }, // 5 tc_1b9c9ee5
  { 1, 10, 11, 15, 18 }, // 6 tc_540fdfbc
  { 1, 11, 12, 18, 21 }, // 7 tc_5ba5997d
  { 1, 11, 12, 21, 23 }, // 8 tc_68cb12ce
  { 1, 11, 12, 23, 26 }, // 9 PSEUDO
  { 1, 10, 11, 26, 28 }, // 10 tc_cde8b071
  { 1, 11, 12, 0, 0 }, // 11 tc_6efc556e
  { 1, 11, 12, 28, 32 }, // 12 tc_d6bf0472
  { 1, 11, 12, 32, 36 }, // 13 tc_2b2f4060
  { 1, 11, 12, 36, 39 }, // 14 tc_8fe6b782
  { 1, 12, 13, 39, 41 }, // 15 tc_29175780
  { 1, 11, 12, 41, 44 }, // 16 tc_5f6847a1
  { 1, 12, 13, 44, 46 }, // 17 tc_a21dc435
  { 1, 10, 11, 46, 49 }, // 18 tc_2b6f77c6
  { 1, 10, 11, 49, 52 }, // 19 tc_dbdffe3d
  { 1, 10, 11, 52, 55 }, // 20 tc_1e856f58
  { 1, 10, 11, 55, 58 }, // 21 tc_8fd5f294
  { 1, 10, 11, 58, 62 }, // 22 tc_e913dc32
  { 1, 10, 11, 62, 67 }, // 23 tc_523fcf30
  { 1, 10, 11, 67, 70 }, // 24 tc_7a830544
  { 1, 11, 12, 70, 71 }, // 25 tc_452f85af
  { 1, 10, 11, 71, 74 }, // 26 tc_04c9decc
  { 1, 10, 11, 74, 78 }, // 27 tc_c6ce9b3f
  { 1, 10, 11, 78, 83 }, // 28 tc_caaebcba
  { 1, 10, 11, 83, 86 }, // 29 tc_55050d58
  { 1, 10, 11, 86, 90 }, // 30 tc_ef84f62f
  { 1, 10, 11, 90, 92 }, // 31 tc_f2704b9a
  { 1, 10, 11, 92, 95 }, // 32 tc_53bc8a6a
  { 1, 11, 12, 95, 98 }, // 33 tc_c6aa82f7
  { 1, 11, 12, 98, 101 }, // 34 tc_6ebb4a12
  { 1, 10, 11, 101, 103 }, // 35 tc_351fed2d
  { 1, 10, 11, 103, 107 }, // 36 tc_f8eeed7a
  { 1, 12, 13, 107, 109 }, // 37 tc_b9c4623f
  { 1, 10, 11, 109, 113 }, // 38 tc_481e5e5c
  { 1, 10, 11, 113, 114 }, // 39 tc_a27582fa
  { 1, 13, 14, 114, 116 }, // 40 LD_tc_ld_SLOT01
  { 1, 14, 15, 116, 119 }, // 41 DUPLEX
  { 1, 15, 16, 119, 120 }, // 42 tc_9faf76ae
  { 1, 16, 17, 120, 121 }, // 43 tc_ENDLOOP
  { 1, 10, 11, 121, 123 }, // 44 tc_f3eaa14b
  { 1, 10, 11, 123, 125 }, // 45 tc_234a11a5
  { 1, 10, 11, 125, 128 }, // 46 tc_6792d5ff
  { 1, 10, 11, 128, 132 }, // 47 tc_d580173f
  { 1, 10, 11, 132, 137 }, // 48 tc_038a1342
  { 1, 10, 11, 137, 140 }, // 49 tc_4d99bca9
  { 1, 10, 11, 140, 143 }, // 50 tc_976ddc4f
  { 1, 10, 11, 143, 147 }, // 51 tc_9c00ce8d
  { 1, 10, 11, 147, 149 }, // 52 tc_2f185f5c
  { 1, 15, 16, 149, 150 }, // 53 tc_15411484
  { 1, 15, 16, 150, 152 }, // 54 tc_10b97e27
  { 1, 11, 12, 0, 0 }, // 55 tc_52d7bbea
  { 1, 10, 11, 152, 153 }, // 56 tc_3669266a
  { 1, 10, 11, 153, 155 }, // 57 tc_e9fae2d6
  { 1, 10, 11, 155, 157 }, // 58 tc_a46f0df5
  { 1, 10, 11, 157, 159 }, // 59 tc_e1e99bfa
  { 1, 15, 16, 159, 161 }, // 60 tc_e0739b8c
  { 1, 15, 16, 161, 163 }, // 61 tc_181af5d0
  { 1, 15, 16, 163, 165 }, // 62 tc_97743097
  { 1, 12, 13, 165, 167 }, // 63 tc_73043bf4
  { 1, 12, 13, 167, 169 }, // 64 tc_cf59f215
  { 1, 12, 13, 169, 171 }, // 65 tc_7934b9df
  { 1, 15, 16, 171, 172 }, // 66 tc_681a2300
  { 1, 12, 13, 172, 174 }, // 67 tc_c5e2426d
  { 1, 12, 13, 174, 176 }, // 68 tc_4f7cd700
  { 1, 15, 16, 176, 177 }, // 69 tc_14cd4cfa
  { 1, 14, 15, 177, 180 }, // 70 tc_51b866be
  { 1, 10, 11, 180, 183 }, // 71 tc_855b0b61
  { 1, 14, 15, 183, 186 }, // 72 tc_bde7aaf4
  { 1, 10, 11, 186, 189 }, // 73 tc_99be14ca
  { 1, 14, 15, 189, 192 }, // 74 tc_5eb851fc
  { 1, 10, 11, 192, 195 }, // 75 tc_49eb22c8
  { 1, 14, 15, 195, 197 }, // 76 tc_746baa8e
  { 1, 10, 11, 197, 199 }, // 77 tc_3cb8ea06
  { 1, 13, 14, 199, 201 }, // 78 tc_d1090e34
  { 1, 13, 14, 201, 205 }, // 79 tc_ef52ed71
  { 1, 13, 14, 205, 210 }, // 80 tc_bad2bcaf
  { 1, 13, 14, 210, 216 }, // 81 tc_03220ffa
  { 1, 13, 14, 216, 219 }, // 82 tc_7f881c76
  { 1, 13, 14, 219, 223 }, // 83 tc_2fc0c436
  { 1, 13, 14, 223, 228 }, // 84 tc_4403ca65
  { 1, 13, 14, 228, 230 }, // 85 tc_9c98e8af
  { 1, 14, 15, 230, 232 }, // 86 tc_6aa5711a
  { 1, 13, 14, 232, 237 }, // 87 tc_63fe3df7
  { 1, 14, 15, 237, 240 }, // 88 tc_44126683
  { 1, 13, 14, 240, 244 }, // 89 tc_5acef64a
  { 1, 13, 14, 244, 249 }, // 90 tc_0cd51c76
  { 1, 13, 14, 249, 252 }, // 91 tc_b77c481f
  { 1, 13, 14, 252, 256 }, // 92 tc_cf47a43f
  { 1, 13, 14, 256, 260 }, // 93 tc_f47d212f
  { 1, 13, 14, 260, 263 }, // 94 tc_1d5a38a8
  { 1, 13, 14, 263, 268 }, // 95 tc_9ef61e5c
  { 1, 13, 14, 268, 273 }, // 96 tc_b7dd427e
  { 1, 14, 15, 273, 275 }, // 97 tc_3d04548d
  { 1, 14, 15, 275, 278 }, // 98 tc_513bef45
  { 1, 14, 15, 278, 281 }, // 99 tc_395dc00f
  { 1, 14, 15, 281, 282 }, // 100 tc_3bc2c5d3
  { 1, 14, 15, 282, 283 }, // 101 tc_e7624c08
  { 1, 10, 11, 283, 287 }, // 102 tc_c74f796f
  { 1, 10, 11, 287, 291 }, // 103 tc_16d0d8d5
  { 1, 10, 11, 291, 294 }, // 104 tc_1853ea6d
  { 1, 10, 11, 294, 298 }, // 105 tc_84df2cd3
  { 1, 10, 11, 298, 302 }, // 106 tc_bcc96cee
  { 1, 10, 11, 302, 305 }, // 107 tc_f49e76f4
  { 1, 13, 14, 305, 307 }, // 108 tc_a788683e
  { 1, 14, 15, 307, 309 }, // 109 tc_ff9ee76e
  { 0, 0, 0, 0, 0 }, // 110 tc_b712833a
  { 0, 0, 0, 0, 0 }, // 111 tc_35e92f8e
  { 1, 17, 19, 309, 312 }, // 112 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 113 tc_b06ab583
  { 0, 0, 0, 0, 0 }, // 114 tc_e3748cdf
  { 0, 0, 0, 0, 0 }, // 115 tc_354299ad
  { 0, 0, 0, 0, 0 }, // 116 tc_2171ebae
  { 1, 14, 15, 312, 315 }, // 117 tc_e216a5db
  { 1, 10, 11, 315, 317 }, // 118 tc_d088982c
  { 1, 10, 11, 317, 320 }, // 119 tc_c6ebf8dd
  { 1, 10, 11, 320, 325 }, // 120 tc_87735c3b
  { 1, 13, 14, 325, 329 }, // 121 tc_8b15472a
  { 1, 13, 14, 329, 334 }, // 122 tc_cd7374a0
  { 1, 13, 14, 334, 339 }, // 123 tc_74e47fd9
  { 1, 14, 15, 339, 343 }, // 124 tc_594ab548
  { 1, 14, 15, 343, 348 }, // 125 tc_d9f95eef
  { 1, 14, 15, 348, 353 }, // 126 tc_d24b2d85
  { 1, 13, 14, 353, 356 }, // 127 tc_05b6c987
  { 1, 13, 14, 356, 360 }, // 128 tc_f86c328a
  { 1, 13, 14, 360, 365 }, // 129 tc_9fdb5406
  { 1, 14, 15, 365, 368 }, // 130 tc_f7dd9c9f
  { 1, 14, 15, 368, 372 }, // 131 tc_e7d02c66
  { 1, 14, 15, 372, 377 }, // 132 tc_9d5941c7
  { 1, 14, 15, 377, 380 }, // 133 tc_1372bca1
  { 1, 13, 14, 380, 383 }, // 134 tc_238d91d2
  { 1, 13, 14, 383, 388 }, // 135 tc_5274e61a
  { 1, 13, 14, 388, 391 }, // 136 tc_66888ded
  { 1, 13, 14, 391, 396 }, // 137 tc_3e07fb90
  { 1, 14, 15, 396, 399 }, // 138 tc_6ac37025
  { 1, 14, 15, 399, 404 }, // 139 tc_adb14c66
  { 1, 14, 15, 404, 407 }, // 140 tc_53bdb2f6
  { 1, 14, 15, 407, 412 }, // 141 tc_e421e012
  { 1, 13, 14, 412, 416 }, // 142 tc_d9709180
  { 1, 13, 14, 416, 420 }, // 143 tc_0dc560de
  { 1, 14, 15, 420, 424 }, // 144 tc_b166348b
  { 1, 14, 15, 424, 428 }, // 145 tc_a8acdac0
  { 1, 10, 11, 428, 432 }, // 146 tc_b9c0b731
  { 1, 10, 11, 432, 437 }, // 147 tc_60571023
  { 1, 10, 11, 437, 439 }, // 148 tc_00afc57e
  { 1, 10, 11, 439, 443 }, // 149 tc_41d5298e
  { 1, 10, 11, 443, 445 }, // 150 tc_be706f30
  { 1, 13, 14, 445, 448 }, // 151 tc_609d2efe
  { 1, 13, 14, 448, 450 }, // 152 tc_a904d137
  { 1, 13, 14, 450, 451 }, // 153 tc_1b82a277
  { 1, 13, 14, 451, 452 }, // 154 tc_e9c822f7
  { 1, 13, 14, 452, 454 }, // 155 tc_90f3e30c
  { 1, 13, 14, 0, 0 }, // 156 tc_36c68ad1
  { 1, 14, 15, 0, 0 }, // 157 tc_2a160009
  { 1, 14, 15, 0, 0 }, // 158 tc_fcab4871
  { 1, 14, 15, 454, 455 }, // 159 tc_0fc1ae07
  { 1, 13, 14, 455, 457 }, // 160 tc_57288781
  { 1, 13, 14, 457, 460 }, // 161 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 162 tc_9777e6bf
  { 0, 0, 0, 0, 0 }, // 163 CVI_VA
  { 0, 0, 0, 0, 0 }, // 164 tc_6b78cf13
  { 0, 0, 0, 0, 0 }, // 165 tc_97c165b9
  { 0, 0, 0, 0, 0 }, // 166 tc_71337255
  { 0, 0, 0, 0, 0 }, // 167 tc_4105d6b5
  { 0, 0, 0, 0, 0 }, // 168 tc_4fd8566e
  { 0, 0, 0, 0, 0 }, // 169 tc_5cbf490b
  { 0, 0, 0, 0, 0 }, // 170 tc_da979fb3
  { 0, 0, 0, 0, 0 }, // 171 tc_eb669007
  { 0, 0, 0, 0, 0 }, // 172 tc_77a4c701
  { 0, 0, 0, 0, 0 }, // 173 tc_51cd3aab
  { 0, 0, 0, 0, 0 }, // 174 tc_38208312
  { 0, 0, 0, 0, 0 }, // 175 tc_9c267309
  { 0, 0, 0, 0, 0 }, // 176 tc_d642eff3
  { 0, 0, 0, 0, 0 }, // 177 tc_6fd9ad30
  { 0, 0, 0, 0, 0 }, // 178 tc_7fa82b08
  { 0, 0, 0, 0, 0 }, // 179 tc_1b93bdc6
  { 0, 0, 0, 0, 0 }, // 180 tc_d5090f3e
  { 0, 0, 0, 0, 0 }, // 181 tc_8b6a873f
  { 0, 0, 0, 0, 0 }, // 182 tc_db5b9e2f
  { 0, 0, 0, 0, 0 }, // 183 tc_85d237e3
  { 0, 0, 0, 0, 0 }, // 184 tc_0317c6ca
  { 0, 0, 0, 0, 0 }, // 185 tc_aedb9f9e
  { 0, 0, 0, 0, 0 }, // 186 tc_99093773
  { 0, 0, 0, 0, 0 }, // 187 tc_a4c9df3b
  { 0, 0, 0, 0, 0 }, // 188 tc_29841470
  { 0, 0, 0, 0, 0 }, // 189 tc_5c03dc63
  { 0, 0, 0, 0, 0 }, // 190 tc_908a4c8c
  { 0, 0, 0, 0, 0 }, // 191 tc_bbaf280e
  { 0, 0, 0, 0, 0 }, // 192 tc_a3127e12
  { 0, 0, 0, 0, 0 }, // 193 tc_5a9fc4ec
  { 0, 0, 0, 0, 0 }, // 194 tc_45453b98
  { 0, 0, 0, 0, 0 }, // 195 tc_eda67dcd
  { 0, 0, 0, 0, 0 }, // 196 tc_e172d86a
  { 0, 0, 0, 0, 0 }, // 197 tc_c4b515c5
  { 0, 0, 0, 0, 0 }, // 198 tc_e231aa4f
  { 0, 0, 0, 0, 0 }, // 199 tc_9311da3f
  { 0, 0, 0, 0, 0 }, // 200 tc_41f4b64e
  { 0, 0, 0, 0, 0 }, // 201 tc_c00bf9c9
  { 0, 0, 0, 0, 0 }, // 202 tc_7fa8b40f
  { 0, 0, 0, 0, 0 }, // 203 tc_d2cb81ea
  { 0, 0, 0, 0, 0 }, // 204 tc_8a6eb39a
  { 0, 0, 0, 0, 0 }, // 205 tc_5c120602
  { 0, 0, 0, 0, 0 }, // 206 tc_e6299d16
  { 0, 0, 0, 0, 0 }, // 207 tc_f3fc3f83
  { 0, 0, 0, 0, 0 }, // 208 tc_4e2a5159
  { 0, 0, 0, 0, 0 }, // 209 tc_69b6dd20
  { 0, 0, 0, 0, 0 }, // 210 tc_d725e5b0
  { 0, 0, 0, 0, 0 }, // 211 tc_7c3f55c4
  { 0, 0, 0, 0, 0 }, // 212 tc_d98f4d63
  { 0, 0, 0, 0, 0 }, // 213 tc_66bb62ea
  { 0, 0, 0, 0, 0 }, // 214 CVI_GATHER_PSEUDO
  { 0, 0, 0, 0, 0 }, // 215 tc_63e3d94c
  { 0, 0, 0, 0, 0 }, // 216 tc_bfe309d5
  { 0, 0, 0, 0, 0 }, // 217 tc_98733e9d
  { 0, 0, 0, 0, 0 }, // 218 tc_e5053c8f
  { 0, 0, 0, 0, 0 }, // 219 tc_cedf314b
  { 0, 0, 0, 0, 0 }, // 220 tc_fa99dc24
  { 0, 0, 0, 0, 0 }, // 221 tc_cbf6d1dc
  { 0, 0, 0, 0, 0 }, // 222 tc_7474003e
  { 0, 0, 0, 0, 0 }, // 223 tc_a807365d
  { 0, 0, 0, 0, 0 }, // 224 tc_ee927c0e
  { 0, 0, 0, 0, 0 }, // 225 tc_7e9f581b
  { 0, 0, 0, 0, 0 }, // 226 tc_41f99e1c
  { 0, 0, 0, 0, 0 }, // 227 tc_bf142ae2
  { 0, 0, 0, 0, 0 }, // 228 tc_9b9642a1
  { 0, 0, 0, 0, 0 }, // 229 tc_644584f8
  { 0, 0, 0, 0, 0 }, // 230 tc_4f190ba3
  { 0, 0, 0, 0, 0 }, // 231 tc_df54ad52
  { 0, 0, 0, 0, 0 }, // 232 tc_ec58f88a
  { 0, 0, 0, 0, 0 }, // 233 tc_94f43c04
  { 0, 0, 0, 0, 0 }, // 234 tc_316c637c
  { 0, 0, 0, 0, 0 }, // 235 tc_d7bea0ec
  { 0, 0, 0, 0, 0 }, // 236 tc_72ad7b54
  { 0, 0, 0, 0, 0 }, // 237 tc_b77635b4
  { 0, 0, 0, 0, 0 }, // 238 tc_28978789
  { 1, 14, 15, 0, 0 }, // 239 tc_367f7f3d
  { 1, 12, 13, 0, 0 }, // 240 tc_4ca572d4
  { 1, 14, 15, 460, 461 }, // 241 tc_00e7c26e
  { 1, 14, 15, 461, 462 }, // 242 tc_3da80ba5
  { 1, 14, 15, 462, 464 }, // 243 tc_4d9914c9
  { 1, 15, 16, 464, 465 }, // 244 tc_999d32db
  { 1, 15, 16, 0, 0 }, // 245 tc_b13761ae
  { 1, 14, 15, 465, 467 }, // 246 tc_daa058fa
  { 1, 12, 13, 467, 468 }, // 247 tc_c82dc1ff
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV60[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 19, 20, 468, 470 }, // 1 tc_c2f7d806
  { 1, 20, 21, 470, 473 }, // 2 tc_b9488031
  { 1, 19, 20, 473, 476 }, // 3 tc_897d1a9d
  { 1, 19, 20, 476, 479 }, // 4 tc_b44c6e2a
  { 1, 19, 20, 479, 482 }, // 5 tc_1b9c9ee5
  { 1, 19, 20, 482, 485 }, // 6 tc_540fdfbc
  { 1, 20, 21, 485, 488 }, // 7 tc_5ba5997d
  { 1, 20, 21, 488, 490 }, // 8 tc_68cb12ce
  { 1, 20, 21, 490, 493 }, // 9 PSEUDO
  { 1, 19, 20, 493, 495 }, // 10 tc_cde8b071
  { 1, 20, 21, 0, 0 }, // 11 tc_6efc556e
  { 1, 20, 21, 495, 499 }, // 12 tc_d6bf0472
  { 1, 20, 21, 499, 503 }, // 13 tc_2b2f4060
  { 1, 20, 21, 503, 506 }, // 14 tc_8fe6b782
  { 1, 21, 22, 506, 508 }, // 15 tc_29175780
  { 1, 20, 21, 508, 511 }, // 16 tc_5f6847a1
  { 1, 21, 22, 511, 513 }, // 17 tc_a21dc435
  { 1, 19, 20, 513, 516 }, // 18 tc_2b6f77c6
  { 1, 19, 20, 516, 519 }, // 19 tc_dbdffe3d
  { 1, 19, 20, 519, 522 }, // 20 tc_1e856f58
  { 1, 19, 20, 522, 525 }, // 21 tc_8fd5f294
  { 1, 19, 20, 525, 529 }, // 22 tc_e913dc32
  { 1, 19, 20, 529, 534 }, // 23 tc_523fcf30
  { 1, 19, 20, 534, 537 }, // 24 tc_7a830544
  { 1, 20, 21, 537, 538 }, // 25 tc_452f85af
  { 1, 19, 20, 538, 541 }, // 26 tc_04c9decc
  { 1, 19, 20, 541, 545 }, // 27 tc_c6ce9b3f
  { 1, 19, 20, 545, 550 }, // 28 tc_caaebcba
  { 1, 19, 20, 550, 553 }, // 29 tc_55050d58
  { 1, 19, 20, 553, 557 }, // 30 tc_ef84f62f
  { 1, 19, 20, 557, 559 }, // 31 tc_f2704b9a
  { 1, 19, 20, 559, 562 }, // 32 tc_53bc8a6a
  { 1, 20, 21, 562, 565 }, // 33 tc_c6aa82f7
  { 1, 20, 21, 565, 568 }, // 34 tc_6ebb4a12
  { 1, 19, 20, 568, 570 }, // 35 tc_351fed2d
  { 1, 19, 20, 570, 574 }, // 36 tc_f8eeed7a
  { 1, 21, 22, 574, 576 }, // 37 tc_b9c4623f
  { 1, 19, 20, 576, 580 }, // 38 tc_481e5e5c
  { 1, 19, 20, 580, 581 }, // 39 tc_a27582fa
  { 1, 22, 23, 581, 583 }, // 40 LD_tc_ld_SLOT01
  { 1, 23, 24, 583, 586 }, // 41 DUPLEX
  { 1, 24, 25, 586, 587 }, // 42 tc_9faf76ae
  { 1, 25, 26, 587, 588 }, // 43 tc_ENDLOOP
  { 1, 19, 20, 588, 590 }, // 44 tc_f3eaa14b
  { 1, 19, 20, 590, 592 }, // 45 tc_234a11a5
  { 1, 19, 20, 592, 595 }, // 46 tc_6792d5ff
  { 1, 19, 20, 595, 599 }, // 47 tc_d580173f
  { 1, 19, 20, 599, 604 }, // 48 tc_038a1342
  { 1, 19, 20, 604, 607 }, // 49 tc_4d99bca9
  { 1, 19, 20, 607, 610 }, // 50 tc_976ddc4f
  { 1, 19, 20, 610, 614 }, // 51 tc_9c00ce8d
  { 1, 19, 20, 614, 616 }, // 52 tc_2f185f5c
  { 1, 24, 25, 616, 617 }, // 53 tc_15411484
  { 1, 24, 25, 617, 619 }, // 54 tc_10b97e27
  { 1, 20, 21, 0, 0 }, // 55 tc_52d7bbea
  { 1, 19, 20, 619, 620 }, // 56 tc_3669266a
  { 1, 19, 20, 620, 622 }, // 57 tc_e9fae2d6
  { 1, 19, 20, 622, 624 }, // 58 tc_a46f0df5
  { 1, 19, 20, 624, 626 }, // 59 tc_e1e99bfa
  { 1, 24, 25, 626, 628 }, // 60 tc_e0739b8c
  { 1, 24, 25, 628, 630 }, // 61 tc_181af5d0
  { 1, 24, 25, 630, 632 }, // 62 tc_97743097
  { 1, 21, 22, 632, 634 }, // 63 tc_73043bf4
  { 1, 21, 22, 634, 636 }, // 64 tc_cf59f215
  { 1, 21, 22, 636, 638 }, // 65 tc_7934b9df
  { 1, 24, 25, 638, 639 }, // 66 tc_681a2300
  { 1, 21, 22, 639, 641 }, // 67 tc_c5e2426d
  { 1, 21, 22, 641, 643 }, // 68 tc_4f7cd700
  { 1, 24, 25, 643, 644 }, // 69 tc_14cd4cfa
  { 1, 23, 24, 644, 647 }, // 70 tc_51b866be
  { 1, 19, 20, 647, 650 }, // 71 tc_855b0b61
  { 1, 23, 24, 650, 653 }, // 72 tc_bde7aaf4
  { 1, 19, 20, 653, 656 }, // 73 tc_99be14ca
  { 1, 23, 24, 656, 659 }, // 74 tc_5eb851fc
  { 1, 19, 20, 659, 662 }, // 75 tc_49eb22c8
  { 1, 23, 24, 662, 664 }, // 76 tc_746baa8e
  { 1, 19, 20, 664, 666 }, // 77 tc_3cb8ea06
  { 1, 22, 23, 666, 668 }, // 78 tc_d1090e34
  { 1, 22, 23, 668, 672 }, // 79 tc_ef52ed71
  { 1, 22, 23, 672, 677 }, // 80 tc_bad2bcaf
  { 1, 22, 23, 677, 683 }, // 81 tc_03220ffa
  { 1, 22, 23, 683, 686 }, // 82 tc_7f881c76
  { 1, 22, 23, 686, 690 }, // 83 tc_2fc0c436
  { 1, 22, 23, 690, 695 }, // 84 tc_4403ca65
  { 1, 22, 23, 695, 697 }, // 85 tc_9c98e8af
  { 1, 23, 24, 697, 699 }, // 86 tc_6aa5711a
  { 1, 22, 23, 699, 704 }, // 87 tc_63fe3df7
  { 1, 23, 24, 704, 707 }, // 88 tc_44126683
  { 1, 22, 23, 707, 711 }, // 89 tc_5acef64a
  { 1, 22, 23, 711, 716 }, // 90 tc_0cd51c76
  { 1, 22, 23, 716, 719 }, // 91 tc_b77c481f
  { 1, 22, 23, 719, 723 }, // 92 tc_cf47a43f
  { 1, 22, 23, 723, 727 }, // 93 tc_f47d212f
  { 1, 22, 23, 727, 730 }, // 94 tc_1d5a38a8
  { 1, 22, 23, 730, 735 }, // 95 tc_9ef61e5c
  { 1, 22, 23, 735, 740 }, // 96 tc_b7dd427e
  { 1, 23, 24, 740, 742 }, // 97 tc_3d04548d
  { 1, 23, 24, 742, 745 }, // 98 tc_513bef45
  { 1, 23, 24, 745, 748 }, // 99 tc_395dc00f
  { 1, 23, 24, 748, 749 }, // 100 tc_3bc2c5d3
  { 1, 23, 24, 749, 750 }, // 101 tc_e7624c08
  { 1, 19, 20, 750, 754 }, // 102 tc_c74f796f
  { 1, 19, 20, 754, 758 }, // 103 tc_16d0d8d5
  { 1, 19, 20, 758, 761 }, // 104 tc_1853ea6d
  { 1, 19, 20, 761, 765 }, // 105 tc_84df2cd3
  { 1, 19, 20, 765, 769 }, // 106 tc_bcc96cee
  { 1, 19, 20, 769, 772 }, // 107 tc_f49e76f4
  { 1, 22, 23, 772, 774 }, // 108 tc_a788683e
  { 1, 23, 24, 774, 776 }, // 109 tc_ff9ee76e
  { 1, 26, 29, 776, 779 }, // 110 tc_b712833a
  { 1, 29, 33, 779, 782 }, // 111 tc_35e92f8e
  { 1, 33, 35, 782, 785 }, // 112 PSEUDOM
  { 1, 35, 37, 785, 788 }, // 113 tc_b06ab583
  { 1, 37, 40, 788, 791 }, // 114 tc_e3748cdf
  { 1, 40, 44, 791, 794 }, // 115 tc_354299ad
  { 1, 44, 46, 794, 798 }, // 116 tc_2171ebae
  { 1, 23, 24, 798, 801 }, // 117 tc_e216a5db
  { 1, 19, 20, 801, 803 }, // 118 tc_d088982c
  { 1, 19, 20, 803, 806 }, // 119 tc_c6ebf8dd
  { 1, 19, 20, 806, 811 }, // 120 tc_87735c3b
  { 1, 22, 23, 811, 815 }, // 121 tc_8b15472a
  { 1, 22, 23, 815, 820 }, // 122 tc_cd7374a0
  { 1, 22, 23, 820, 825 }, // 123 tc_74e47fd9
  { 1, 23, 24, 825, 829 }, // 124 tc_594ab548
  { 1, 23, 24, 829, 834 }, // 125 tc_d9f95eef
  { 1, 23, 24, 834, 839 }, // 126 tc_d24b2d85
  { 1, 22, 23, 839, 842 }, // 127 tc_05b6c987
  { 1, 22, 23, 842, 846 }, // 128 tc_f86c328a
  { 1, 22, 23, 846, 851 }, // 129 tc_9fdb5406
  { 1, 23, 24, 851, 854 }, // 130 tc_f7dd9c9f
  { 1, 23, 24, 854, 858 }, // 131 tc_e7d02c66
  { 1, 23, 24, 858, 863 }, // 132 tc_9d5941c7
  { 1, 23, 24, 863, 866 }, // 133 tc_1372bca1
  { 1, 22, 23, 866, 869 }, // 134 tc_238d91d2
  { 1, 22, 23, 869, 874 }, // 135 tc_5274e61a
  { 1, 22, 23, 874, 877 }, // 136 tc_66888ded
  { 1, 22, 23, 877, 882 }, // 137 tc_3e07fb90
  { 1, 23, 24, 882, 885 }, // 138 tc_6ac37025
  { 1, 23, 24, 885, 890 }, // 139 tc_adb14c66
  { 1, 23, 24, 890, 893 }, // 140 tc_53bdb2f6
  { 1, 23, 24, 893, 898 }, // 141 tc_e421e012
  { 1, 22, 23, 898, 902 }, // 142 tc_d9709180
  { 1, 22, 23, 902, 906 }, // 143 tc_0dc560de
  { 1, 23, 24, 906, 910 }, // 144 tc_b166348b
  { 1, 23, 24, 910, 914 }, // 145 tc_a8acdac0
  { 1, 19, 20, 914, 918 }, // 146 tc_b9c0b731
  { 1, 19, 20, 918, 923 }, // 147 tc_60571023
  { 1, 19, 20, 923, 925 }, // 148 tc_00afc57e
  { 1, 19, 20, 925, 929 }, // 149 tc_41d5298e
  { 1, 19, 20, 929, 931 }, // 150 tc_be706f30
  { 1, 22, 23, 931, 934 }, // 151 tc_609d2efe
  { 1, 22, 23, 934, 936 }, // 152 tc_a904d137
  { 1, 22, 23, 936, 937 }, // 153 tc_1b82a277
  { 1, 22, 23, 937, 938 }, // 154 tc_e9c822f7
  { 1, 22, 23, 938, 940 }, // 155 tc_90f3e30c
  { 1, 22, 23, 0, 0 }, // 156 tc_36c68ad1
  { 1, 23, 24, 0, 0 }, // 157 tc_2a160009
  { 1, 23, 24, 0, 0 }, // 158 tc_fcab4871
  { 1, 23, 24, 940, 941 }, // 159 tc_0fc1ae07
  { 1, 22, 23, 941, 943 }, // 160 tc_57288781
  { 1, 22, 23, 943, 946 }, // 161 ST_tc_st_SLOT01
  { 1, 46, 48, 946, 949 }, // 162 tc_9777e6bf
  { 1, 48, 50, 949, 953 }, // 163 CVI_VA
  { 1, 50, 52, 953, 955 }, // 164 tc_6b78cf13
  { 1, 44, 46, 955, 958 }, // 165 tc_97c165b9
  { 1, 35, 37, 958, 960 }, // 166 tc_71337255
  { 1, 52, 54, 960, 962 }, // 167 tc_4105d6b5
  { 1, 29, 33, 962, 966 }, // 168 tc_4fd8566e
  { 1, 26, 29, 966, 970 }, // 169 tc_5cbf490b
  { 1, 26, 29, 970, 975 }, // 170 tc_da979fb3
  { 1, 26, 29, 975, 979 }, // 171 tc_eb669007
  { 1, 54, 56, 979, 982 }, // 172 tc_77a4c701
  { 1, 54, 56, 982, 986 }, // 173 tc_51cd3aab
  { 1, 54, 56, 986, 991 }, // 174 tc_38208312
  { 1, 54, 56, 991, 995 }, // 175 tc_9c267309
  { 1, 40, 44, 995, 999 }, // 176 tc_d642eff3
  { 1, 40, 44, 999, 1004 }, // 177 tc_6fd9ad30
  { 1, 40, 44, 1004, 1008 }, // 178 tc_7fa82b08
  { 1, 56, 58, 1008, 1011 }, // 179 tc_1b93bdc6
  { 1, 56, 58, 1011, 1015 }, // 180 tc_d5090f3e
  { 1, 56, 58, 1015, 1020 }, // 181 tc_8b6a873f
  { 1, 56, 58, 1020, 1024 }, // 182 tc_db5b9e2f
  { 1, 37, 40, 1024, 1028 }, // 183 tc_85d237e3
  { 1, 37, 40, 1028, 1033 }, // 184 tc_0317c6ca
  { 1, 37, 40, 1033, 1037 }, // 185 tc_aedb9f9e
  { 1, 37, 40, 1037, 1042 }, // 186 tc_99093773
  { 1, 37, 40, 1042, 1046 }, // 187 tc_a4c9df3b
  { 1, 56, 58, 1046, 1048 }, // 188 tc_29841470
  { 1, 56, 58, 1048, 1051 }, // 189 tc_5c03dc63
  { 1, 50, 52, 1051, 1054 }, // 190 tc_908a4c8c
  { 1, 35, 37, 1054, 1057 }, // 191 tc_bbaf280e
  { 1, 35, 37, 1057, 1061 }, // 192 tc_a3127e12
  { 1, 35, 37, 1061, 1066 }, // 193 tc_5a9fc4ec
  { 1, 58, 60, 1066, 1069 }, // 194 tc_45453b98
  { 1, 60, 62, 1069, 1072 }, // 195 tc_eda67dcd
  { 1, 60, 62, 1072, 1076 }, // 196 tc_e172d86a
  { 1, 52, 54, 1076, 1080 }, // 197 tc_c4b515c5
  { 1, 50, 52, 1080, 1083 }, // 198 tc_e231aa4f
  { 1, 50, 52, 1083, 1087 }, // 199 tc_9311da3f
  { 1, 58, 60, 1087, 1090 }, // 200 tc_41f4b64e
  { 1, 58, 60, 1090, 1094 }, // 201 tc_c00bf9c9
  { 1, 58, 60, 1094, 1098 }, // 202 tc_7fa8b40f
  { 1, 58, 60, 1098, 1100 }, // 203 tc_d2cb81ea
  { 1, 44, 46, 1100, 1101 }, // 204 tc_8a6eb39a
  { 1, 62, 64, 1101, 1106 }, // 205 tc_5c120602
  { 1, 52, 54, 1106, 1108 }, // 206 tc_e6299d16
  { 1, 52, 54, 1108, 1111 }, // 207 tc_f3fc3f83
  { 1, 62, 64, 1111, 1115 }, // 208 tc_4e2a5159
  { 1, 50, 52, 1115, 1118 }, // 209 tc_69b6dd20
  { 1, 50, 52, 1118, 1122 }, // 210 tc_d725e5b0
  { 1, 60, 62, 1122, 1125 }, // 211 tc_7c3f55c4
  { 1, 60, 62, 1125, 1129 }, // 212 tc_d98f4d63
  { 1, 64, 67, 1129, 1132 }, // 213 tc_66bb62ea
  { 1, 67, 71, 0, 0 }, // 214 CVI_GATHER_PSEUDO
  { 1, 64, 67, 1132, 1136 }, // 215 tc_63e3d94c
  { 1, 71, 74, 1136, 1139 }, // 216 tc_bfe309d5
  { 1, 71, 74, 1139, 1143 }, // 217 tc_98733e9d
  { 1, 74, 76, 0, 0 }, // 218 tc_e5053c8f
  { 1, 74, 76, 1143, 1144 }, // 219 tc_cedf314b
  { 1, 76, 78, 1144, 1147 }, // 220 tc_fa99dc24
  { 1, 62, 64, 1147, 1152 }, // 221 tc_cbf6d1dc
  { 1, 76, 78, 1152, 1156 }, // 222 tc_7474003e
  { 1, 78, 81, 1156, 1159 }, // 223 tc_a807365d
  { 1, 78, 81, 1159, 1163 }, // 224 tc_ee927c0e
  { 1, 60, 62, 1163, 1167 }, // 225 tc_7e9f581b
  { 1, 60, 62, 1167, 1172 }, // 226 tc_41f99e1c
  { 1, 52, 54, 1172, 1175 }, // 227 tc_bf142ae2
  { 1, 58, 60, 1175, 1178 }, // 228 tc_9b9642a1
  { 1, 44, 46, 1178, 1180 }, // 229 tc_644584f8
  { 1, 37, 40, 1180, 1184 }, // 230 tc_4f190ba3
  { 1, 37, 40, 1184, 1189 }, // 231 tc_df54ad52
  { 1, 81, 84, 1189, 1193 }, // 232 tc_ec58f88a
  { 1, 81, 84, 1193, 1198 }, // 233 tc_94f43c04
  { 1, 44, 46, 1198, 1202 }, // 234 tc_316c637c
  { 1, 62, 64, 1202, 1204 }, // 235 tc_d7bea0ec
  { 1, 62, 64, 1204, 1207 }, // 236 tc_72ad7b54
  { 1, 74, 76, 1207, 1208 }, // 237 tc_b77635b4
  { 1, 74, 76, 1208, 1210 }, // 238 tc_28978789
  { 1, 23, 24, 0, 0 }, // 239 tc_367f7f3d
  { 1, 21, 22, 0, 0 }, // 240 tc_4ca572d4
  { 1, 23, 24, 1210, 1211 }, // 241 tc_00e7c26e
  { 1, 23, 24, 1211, 1212 }, // 242 tc_3da80ba5
  { 1, 23, 24, 1212, 1214 }, // 243 tc_4d9914c9
  { 1, 24, 25, 1214, 1215 }, // 244 tc_999d32db
  { 1, 24, 25, 0, 0 }, // 245 tc_b13761ae
  { 1, 23, 24, 1215, 1217 }, // 246 tc_daa058fa
  { 1, 21, 22, 1217, 1218 }, // 247 tc_c82dc1ff
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV62[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 84, 85, 1218, 1220 }, // 1 tc_c2f7d806
  { 1, 85, 86, 1220, 1223 }, // 2 tc_b9488031
  { 1, 84, 85, 1223, 1226 }, // 3 tc_897d1a9d
  { 1, 84, 85, 1226, 1229 }, // 4 tc_b44c6e2a
  { 1, 84, 85, 1229, 1232 }, // 5 tc_1b9c9ee5
  { 1, 84, 85, 1232, 1235 }, // 6 tc_540fdfbc
  { 1, 85, 86, 1235, 1238 }, // 7 tc_5ba5997d
  { 1, 85, 86, 1238, 1240 }, // 8 tc_68cb12ce
  { 1, 85, 86, 1240, 1243 }, // 9 PSEUDO
  { 1, 84, 85, 1243, 1245 }, // 10 tc_cde8b071
  { 1, 85, 86, 0, 0 }, // 11 tc_6efc556e
  { 1, 85, 86, 1245, 1249 }, // 12 tc_d6bf0472
  { 1, 85, 86, 1249, 1253 }, // 13 tc_2b2f4060
  { 1, 85, 86, 1253, 1256 }, // 14 tc_8fe6b782
  { 1, 86, 87, 1256, 1258 }, // 15 tc_29175780
  { 1, 85, 86, 1258, 1261 }, // 16 tc_5f6847a1
  { 1, 86, 87, 1261, 1263 }, // 17 tc_a21dc435
  { 1, 84, 85, 1263, 1266 }, // 18 tc_2b6f77c6
  { 1, 84, 85, 1266, 1269 }, // 19 tc_dbdffe3d
  { 1, 84, 85, 1269, 1272 }, // 20 tc_1e856f58
  { 1, 84, 85, 1272, 1275 }, // 21 tc_8fd5f294
  { 1, 84, 85, 1275, 1279 }, // 22 tc_e913dc32
  { 1, 84, 85, 1279, 1284 }, // 23 tc_523fcf30
  { 1, 84, 85, 1284, 1287 }, // 24 tc_7a830544
  { 1, 85, 86, 1287, 1288 }, // 25 tc_452f85af
  { 1, 84, 85, 1288, 1291 }, // 26 tc_04c9decc
  { 1, 84, 85, 1291, 1295 }, // 27 tc_c6ce9b3f
  { 1, 84, 85, 1295, 1300 }, // 28 tc_caaebcba
  { 1, 84, 85, 1300, 1303 }, // 29 tc_55050d58
  { 1, 84, 85, 1303, 1307 }, // 30 tc_ef84f62f
  { 1, 84, 85, 1307, 1309 }, // 31 tc_f2704b9a
  { 1, 84, 85, 1309, 1312 }, // 32 tc_53bc8a6a
  { 1, 85, 86, 1312, 1315 }, // 33 tc_c6aa82f7
  { 1, 85, 86, 1315, 1318 }, // 34 tc_6ebb4a12
  { 1, 84, 85, 1318, 1320 }, // 35 tc_351fed2d
  { 1, 84, 85, 1320, 1324 }, // 36 tc_f8eeed7a
  { 1, 86, 87, 1324, 1326 }, // 37 tc_b9c4623f
  { 1, 84, 85, 1326, 1330 }, // 38 tc_481e5e5c
  { 1, 84, 85, 1330, 1331 }, // 39 tc_a27582fa
  { 1, 87, 88, 1331, 1333 }, // 40 LD_tc_ld_SLOT01
  { 1, 88, 89, 1333, 1336 }, // 41 DUPLEX
  { 1, 89, 90, 1336, 1337 }, // 42 tc_9faf76ae
  { 1, 90, 91, 1337, 1338 }, // 43 tc_ENDLOOP
  { 1, 84, 85, 1338, 1340 }, // 44 tc_f3eaa14b
  { 1, 84, 85, 1340, 1342 }, // 45 tc_234a11a5
  { 1, 84, 85, 1342, 1345 }, // 46 tc_6792d5ff
  { 1, 84, 85, 1345, 1349 }, // 47 tc_d580173f
  { 1, 84, 85, 1349, 1354 }, // 48 tc_038a1342
  { 1, 84, 85, 1354, 1357 }, // 49 tc_4d99bca9
  { 1, 84, 85, 1357, 1360 }, // 50 tc_976ddc4f
  { 1, 84, 85, 1360, 1364 }, // 51 tc_9c00ce8d
  { 1, 84, 85, 1364, 1366 }, // 52 tc_2f185f5c
  { 1, 89, 90, 1366, 1367 }, // 53 tc_15411484
  { 1, 89, 90, 1367, 1369 }, // 54 tc_10b97e27
  { 1, 85, 86, 0, 0 }, // 55 tc_52d7bbea
  { 1, 85, 86, 1369, 1370 }, // 56 tc_3669266a
  { 1, 85, 86, 1370, 1372 }, // 57 tc_e9fae2d6
  { 1, 85, 86, 1372, 1374 }, // 58 tc_a46f0df5
  { 1, 85, 86, 1374, 1376 }, // 59 tc_e1e99bfa
  { 1, 89, 90, 1376, 1378 }, // 60 tc_e0739b8c
  { 1, 89, 90, 1378, 1380 }, // 61 tc_181af5d0
  { 1, 89, 90, 1380, 1382 }, // 62 tc_97743097
  { 1, 86, 87, 1382, 1384 }, // 63 tc_73043bf4
  { 1, 86, 87, 1384, 1386 }, // 64 tc_cf59f215
  { 1, 86, 87, 1386, 1388 }, // 65 tc_7934b9df
  { 1, 89, 90, 1388, 1389 }, // 66 tc_681a2300
  { 1, 86, 87, 1389, 1391 }, // 67 tc_c5e2426d
  { 1, 86, 87, 1391, 1393 }, // 68 tc_4f7cd700
  { 1, 89, 90, 1393, 1394 }, // 69 tc_14cd4cfa
  { 1, 88, 89, 1394, 1397 }, // 70 tc_51b866be
  { 1, 85, 86, 1397, 1400 }, // 71 tc_855b0b61
  { 1, 88, 89, 1400, 1403 }, // 72 tc_bde7aaf4
  { 1, 85, 86, 1403, 1406 }, // 73 tc_99be14ca
  { 1, 88, 89, 1406, 1409 }, // 74 tc_5eb851fc
  { 1, 84, 85, 1409, 1412 }, // 75 tc_49eb22c8
  { 1, 88, 89, 1412, 1414 }, // 76 tc_746baa8e
  { 1, 85, 86, 1414, 1416 }, // 77 tc_3cb8ea06
  { 1, 87, 88, 1416, 1418 }, // 78 tc_d1090e34
  { 1, 87, 88, 1418, 1422 }, // 79 tc_ef52ed71
  { 1, 87, 88, 1422, 1427 }, // 80 tc_bad2bcaf
  { 1, 87, 88, 1427, 1433 }, // 81 tc_03220ffa
  { 1, 87, 88, 1433, 1436 }, // 82 tc_7f881c76
  { 1, 87, 88, 1436, 1440 }, // 83 tc_2fc0c436
  { 1, 87, 88, 1440, 1445 }, // 84 tc_4403ca65
  { 1, 87, 88, 1445, 1447 }, // 85 tc_9c98e8af
  { 1, 88, 89, 1447, 1449 }, // 86 tc_6aa5711a
  { 1, 87, 88, 1449, 1454 }, // 87 tc_63fe3df7
  { 1, 88, 89, 1454, 1457 }, // 88 tc_44126683
  { 1, 87, 88, 1457, 1461 }, // 89 tc_5acef64a
  { 1, 87, 88, 1461, 1466 }, // 90 tc_0cd51c76
  { 1, 87, 88, 1466, 1469 }, // 91 tc_b77c481f
  { 1, 87, 88, 1469, 1473 }, // 92 tc_cf47a43f
  { 1, 87, 88, 1473, 1477 }, // 93 tc_f47d212f
  { 1, 87, 88, 1477, 1480 }, // 94 tc_1d5a38a8
  { 1, 87, 88, 1480, 1485 }, // 95 tc_9ef61e5c
  { 1, 87, 88, 1485, 1490 }, // 96 tc_b7dd427e
  { 1, 88, 89, 1490, 1492 }, // 97 tc_3d04548d
  { 1, 88, 89, 1492, 1495 }, // 98 tc_513bef45
  { 1, 88, 89, 1495, 1498 }, // 99 tc_395dc00f
  { 1, 88, 89, 1498, 1499 }, // 100 tc_3bc2c5d3
  { 1, 88, 89, 1499, 1500 }, // 101 tc_e7624c08
  { 1, 84, 85, 1500, 1504 }, // 102 tc_c74f796f
  { 1, 84, 85, 1504, 1508 }, // 103 tc_16d0d8d5
  { 1, 84, 85, 1508, 1511 }, // 104 tc_1853ea6d
  { 1, 84, 85, 1511, 1515 }, // 105 tc_84df2cd3
  { 1, 84, 85, 1515, 1519 }, // 106 tc_bcc96cee
  { 1, 84, 85, 1519, 1522 }, // 107 tc_f49e76f4
  { 1, 87, 88, 1522, 1524 }, // 108 tc_a788683e
  { 1, 88, 89, 1524, 1526 }, // 109 tc_ff9ee76e
  { 1, 91, 94, 1526, 1529 }, // 110 tc_b712833a
  { 1, 94, 98, 1529, 1532 }, // 111 tc_35e92f8e
  { 1, 98, 100, 1532, 1535 }, // 112 PSEUDOM
  { 1, 100, 102, 1535, 1538 }, // 113 tc_b06ab583
  { 1, 102, 105, 1538, 1541 }, // 114 tc_e3748cdf
  { 1, 105, 109, 1541, 1544 }, // 115 tc_354299ad
  { 1, 109, 111, 1544, 1548 }, // 116 tc_2171ebae
  { 1, 88, 89, 1548, 1551 }, // 117 tc_e216a5db
  { 1, 84, 85, 1551, 1553 }, // 118 tc_d088982c
  { 1, 84, 85, 1553, 1556 }, // 119 tc_c6ebf8dd
  { 1, 84, 85, 1556, 1561 }, // 120 tc_87735c3b
  { 1, 87, 88, 1561, 1565 }, // 121 tc_8b15472a
  { 1, 87, 88, 1565, 1570 }, // 122 tc_cd7374a0
  { 1, 87, 88, 1570, 1575 }, // 123 tc_74e47fd9
  { 1, 88, 89, 1575, 1579 }, // 124 tc_594ab548
  { 1, 88, 89, 1579, 1584 }, // 125 tc_d9f95eef
  { 1, 88, 89, 1584, 1589 }, // 126 tc_d24b2d85
  { 1, 87, 88, 1589, 1592 }, // 127 tc_05b6c987
  { 1, 87, 88, 1592, 1596 }, // 128 tc_f86c328a
  { 1, 87, 88, 1596, 1601 }, // 129 tc_9fdb5406
  { 1, 88, 89, 1601, 1604 }, // 130 tc_f7dd9c9f
  { 1, 88, 89, 1604, 1608 }, // 131 tc_e7d02c66
  { 1, 88, 89, 1608, 1613 }, // 132 tc_9d5941c7
  { 1, 88, 89, 1613, 1616 }, // 133 tc_1372bca1
  { 1, 87, 88, 1616, 1619 }, // 134 tc_238d91d2
  { 1, 87, 88, 1619, 1624 }, // 135 tc_5274e61a
  { 1, 87, 88, 1624, 1627 }, // 136 tc_66888ded
  { 1, 87, 88, 1627, 1632 }, // 137 tc_3e07fb90
  { 1, 88, 89, 1632, 1635 }, // 138 tc_6ac37025
  { 1, 88, 89, 1635, 1640 }, // 139 tc_adb14c66
  { 1, 88, 89, 1640, 1643 }, // 140 tc_53bdb2f6
  { 1, 88, 89, 1643, 1648 }, // 141 tc_e421e012
  { 1, 87, 88, 1648, 1652 }, // 142 tc_d9709180
  { 1, 87, 88, 1652, 1656 }, // 143 tc_0dc560de
  { 1, 88, 89, 1656, 1660 }, // 144 tc_b166348b
  { 1, 88, 89, 1660, 1664 }, // 145 tc_a8acdac0
  { 1, 84, 85, 1664, 1668 }, // 146 tc_b9c0b731
  { 1, 84, 85, 1668, 1673 }, // 147 tc_60571023
  { 1, 84, 85, 1673, 1675 }, // 148 tc_00afc57e
  { 1, 84, 85, 1675, 1679 }, // 149 tc_41d5298e
  { 1, 84, 85, 1679, 1681 }, // 150 tc_be706f30
  { 1, 87, 88, 1681, 1684 }, // 151 tc_609d2efe
  { 1, 87, 88, 1684, 1686 }, // 152 tc_a904d137
  { 1, 87, 88, 1686, 1687 }, // 153 tc_1b82a277
  { 1, 87, 88, 1687, 1688 }, // 154 tc_e9c822f7
  { 1, 87, 88, 1688, 1690 }, // 155 tc_90f3e30c
  { 1, 87, 88, 0, 0 }, // 156 tc_36c68ad1
  { 1, 88, 89, 0, 0 }, // 157 tc_2a160009
  { 1, 88, 89, 0, 0 }, // 158 tc_fcab4871
  { 1, 88, 89, 1690, 1691 }, // 159 tc_0fc1ae07
  { 1, 87, 88, 1691, 1693 }, // 160 tc_57288781
  { 1, 87, 88, 1693, 1696 }, // 161 ST_tc_st_SLOT01
  { 1, 111, 113, 1696, 1699 }, // 162 tc_9777e6bf
  { 1, 113, 115, 1699, 1703 }, // 163 CVI_VA
  { 1, 115, 117, 1703, 1705 }, // 164 tc_6b78cf13
  { 1, 109, 111, 1705, 1708 }, // 165 tc_97c165b9
  { 1, 100, 102, 1708, 1710 }, // 166 tc_71337255
  { 1, 117, 119, 1710, 1712 }, // 167 tc_4105d6b5
  { 1, 94, 98, 1712, 1716 }, // 168 tc_4fd8566e
  { 1, 91, 94, 1716, 1720 }, // 169 tc_5cbf490b
  { 1, 91, 94, 1720, 1725 }, // 170 tc_da979fb3
  { 1, 91, 94, 1725, 1729 }, // 171 tc_eb669007
  { 1, 119, 121, 1729, 1732 }, // 172 tc_77a4c701
  { 1, 119, 121, 1732, 1736 }, // 173 tc_51cd3aab
  { 1, 119, 121, 1736, 1741 }, // 174 tc_38208312
  { 1, 119, 121, 1741, 1745 }, // 175 tc_9c267309
  { 1, 105, 109, 1745, 1749 }, // 176 tc_d642eff3
  { 1, 105, 109, 1749, 1754 }, // 177 tc_6fd9ad30
  { 1, 105, 109, 1754, 1758 }, // 178 tc_7fa82b08
  { 1, 121, 123, 1758, 1761 }, // 179 tc_1b93bdc6
  { 1, 121, 123, 1761, 1765 }, // 180 tc_d5090f3e
  { 1, 121, 123, 1765, 1770 }, // 181 tc_8b6a873f
  { 1, 121, 123, 1770, 1774 }, // 182 tc_db5b9e2f
  { 1, 102, 105, 1774, 1778 }, // 183 tc_85d237e3
  { 1, 102, 105, 1778, 1783 }, // 184 tc_0317c6ca
  { 1, 102, 105, 1783, 1787 }, // 185 tc_aedb9f9e
  { 1, 102, 105, 1787, 1792 }, // 186 tc_99093773
  { 1, 102, 105, 1792, 1796 }, // 187 tc_a4c9df3b
  { 1, 121, 123, 1796, 1798 }, // 188 tc_29841470
  { 1, 121, 123, 1798, 1801 }, // 189 tc_5c03dc63
  { 1, 115, 117, 1801, 1804 }, // 190 tc_908a4c8c
  { 1, 100, 102, 1804, 1807 }, // 191 tc_bbaf280e
  { 1, 100, 102, 1807, 1811 }, // 192 tc_a3127e12
  { 1, 100, 102, 1811, 1816 }, // 193 tc_5a9fc4ec
  { 1, 123, 125, 1816, 1819 }, // 194 tc_45453b98
  { 1, 125, 127, 1819, 1822 }, // 195 tc_eda67dcd
  { 1, 125, 127, 1822, 1826 }, // 196 tc_e172d86a
  { 1, 117, 119, 1826, 1830 }, // 197 tc_c4b515c5
  { 1, 115, 117, 1830, 1833 }, // 198 tc_e231aa4f
  { 1, 115, 117, 1833, 1837 }, // 199 tc_9311da3f
  { 1, 123, 125, 1837, 1840 }, // 200 tc_41f4b64e
  { 1, 123, 125, 1840, 1844 }, // 201 tc_c00bf9c9
  { 1, 123, 125, 1844, 1848 }, // 202 tc_7fa8b40f
  { 1, 123, 125, 1848, 1850 }, // 203 tc_d2cb81ea
  { 1, 109, 111, 1850, 1851 }, // 204 tc_8a6eb39a
  { 1, 127, 129, 1851, 1856 }, // 205 tc_5c120602
  { 1, 117, 119, 1856, 1858 }, // 206 tc_e6299d16
  { 1, 117, 119, 1858, 1861 }, // 207 tc_f3fc3f83
  { 1, 127, 129, 1861, 1865 }, // 208 tc_4e2a5159
  { 1, 115, 117, 1865, 1868 }, // 209 tc_69b6dd20
  { 1, 115, 117, 1868, 1872 }, // 210 tc_d725e5b0
  { 1, 125, 127, 1872, 1875 }, // 211 tc_7c3f55c4
  { 1, 125, 127, 1875, 1879 }, // 212 tc_d98f4d63
  { 1, 129, 132, 1879, 1882 }, // 213 tc_66bb62ea
  { 1, 132, 136, 0, 0 }, // 214 CVI_GATHER_PSEUDO
  { 1, 129, 132, 1882, 1886 }, // 215 tc_63e3d94c
  { 1, 136, 139, 1886, 1889 }, // 216 tc_bfe309d5
  { 1, 136, 139, 1889, 1893 }, // 217 tc_98733e9d
  { 1, 139, 141, 0, 0 }, // 218 tc_e5053c8f
  { 1, 139, 141, 1893, 1894 }, // 219 tc_cedf314b
  { 1, 141, 143, 1894, 1897 }, // 220 tc_fa99dc24
  { 1, 127, 129, 1897, 1902 }, // 221 tc_cbf6d1dc
  { 1, 141, 143, 1902, 1906 }, // 222 tc_7474003e
  { 1, 143, 146, 1906, 1909 }, // 223 tc_a807365d
  { 1, 143, 146, 1909, 1913 }, // 224 tc_ee927c0e
  { 1, 125, 127, 1913, 1917 }, // 225 tc_7e9f581b
  { 1, 125, 127, 1917, 1922 }, // 226 tc_41f99e1c
  { 1, 117, 119, 1922, 1925 }, // 227 tc_bf142ae2
  { 1, 100, 102, 1925, 1928 }, // 228 tc_9b9642a1
  { 1, 109, 111, 1928, 1930 }, // 229 tc_644584f8
  { 1, 102, 105, 1930, 1934 }, // 230 tc_4f190ba3
  { 1, 102, 105, 1934, 1939 }, // 231 tc_df54ad52
  { 1, 146, 149, 1939, 1943 }, // 232 tc_ec58f88a
  { 1, 146, 149, 1943, 1948 }, // 233 tc_94f43c04
  { 1, 109, 111, 1948, 1952 }, // 234 tc_316c637c
  { 1, 127, 129, 1952, 1954 }, // 235 tc_d7bea0ec
  { 1, 127, 129, 1954, 1957 }, // 236 tc_72ad7b54
  { 1, 139, 141, 1957, 1958 }, // 237 tc_b77635b4
  { 1, 139, 141, 1958, 1960 }, // 238 tc_28978789
  { 1, 88, 89, 0, 0 }, // 239 tc_367f7f3d
  { 1, 86, 87, 0, 0 }, // 240 tc_4ca572d4
  { 1, 88, 89, 1960, 1961 }, // 241 tc_00e7c26e
  { 1, 88, 89, 1961, 1962 }, // 242 tc_3da80ba5
  { 1, 88, 89, 1962, 1964 }, // 243 tc_4d9914c9
  { 1, 89, 90, 1964, 1965 }, // 244 tc_999d32db
  { 1, 89, 90, 0, 0 }, // 245 tc_b13761ae
  { 1, 88, 89, 1965, 1967 }, // 246 tc_daa058fa
  { 1, 86, 87, 1967, 1968 }, // 247 tc_c82dc1ff
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

static const llvm::InstrItinerary HexagonItinerariesV65[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 149, 150, 1968, 1970 }, // 1 tc_c2f7d806
  { 1, 150, 151, 1970, 1973 }, // 2 tc_b9488031
  { 1, 149, 150, 1973, 1976 }, // 3 tc_897d1a9d
  { 1, 149, 150, 1976, 1979 }, // 4 tc_b44c6e2a
  { 1, 149, 150, 1979, 1982 }, // 5 tc_1b9c9ee5
  { 1, 149, 150, 1982, 1985 }, // 6 tc_540fdfbc
  { 1, 150, 151, 1985, 1988 }, // 7 tc_5ba5997d
  { 1, 150, 151, 1988, 1990 }, // 8 tc_68cb12ce
  { 1, 150, 151, 1990, 1993 }, // 9 PSEUDO
  { 1, 149, 150, 1993, 1995 }, // 10 tc_cde8b071
  { 1, 150, 151, 0, 0 }, // 11 tc_6efc556e
  { 1, 150, 151, 1995, 1999 }, // 12 tc_d6bf0472
  { 1, 150, 151, 1999, 2003 }, // 13 tc_2b2f4060
  { 1, 150, 151, 2003, 2006 }, // 14 tc_8fe6b782
  { 1, 151, 152, 2006, 2008 }, // 15 tc_29175780
  { 1, 150, 151, 2008, 2011 }, // 16 tc_5f6847a1
  { 1, 151, 152, 2011, 2013 }, // 17 tc_a21dc435
  { 1, 149, 150, 2013, 2016 }, // 18 tc_2b6f77c6
  { 1, 149, 150, 2016, 2019 }, // 19 tc_dbdffe3d
  { 1, 149, 150, 2019, 2022 }, // 20 tc_1e856f58
  { 1, 149, 150, 2022, 2025 }, // 21 tc_8fd5f294
  { 1, 149, 150, 2025, 2029 }, // 22 tc_e913dc32
  { 1, 149, 150, 2029, 2034 }, // 23 tc_523fcf30
  { 1, 149, 150, 2034, 2037 }, // 24 tc_7a830544
  { 1, 150, 151, 2037, 2038 }, // 25 tc_452f85af
  { 1, 149, 150, 2038, 2041 }, // 26 tc_04c9decc
  { 1, 149, 150, 2041, 2045 }, // 27 tc_c6ce9b3f
  { 1, 149, 150, 2045, 2050 }, // 28 tc_caaebcba
  { 1, 149, 150, 2050, 2053 }, // 29 tc_55050d58
  { 1, 149, 150, 2053, 2057 }, // 30 tc_ef84f62f
  { 1, 149, 150, 2057, 2059 }, // 31 tc_f2704b9a
  { 1, 149, 150, 2059, 2062 }, // 32 tc_53bc8a6a
  { 1, 150, 151, 2062, 2065 }, // 33 tc_c6aa82f7
  { 1, 150, 151, 2065, 2068 }, // 34 tc_6ebb4a12
  { 1, 149, 150, 2068, 2070 }, // 35 tc_351fed2d
  { 1, 149, 150, 2070, 2074 }, // 36 tc_f8eeed7a
  { 1, 151, 152, 2074, 2076 }, // 37 tc_b9c4623f
  { 1, 149, 150, 2076, 2080 }, // 38 tc_481e5e5c
  { 1, 149, 150, 2080, 2081 }, // 39 tc_a27582fa
  { 1, 152, 153, 2081, 2083 }, // 40 LD_tc_ld_SLOT01
  { 1, 153, 154, 2083, 2086 }, // 41 DUPLEX
  { 1, 154, 155, 2086, 2087 }, // 42 tc_9faf76ae
  { 1, 155, 156, 2087, 2088 }, // 43 tc_ENDLOOP
  { 1, 149, 150, 2088, 2090 }, // 44 tc_f3eaa14b
  { 1, 149, 150, 2090, 2092 }, // 45 tc_234a11a5
  { 1, 149, 150, 2092, 2095 }, // 46 tc_6792d5ff
  { 1, 149, 150, 2095, 2099 }, // 47 tc_d580173f
  { 1, 149, 150, 2099, 2104 }, // 48 tc_038a1342
  { 1, 149, 150, 2104, 2107 }, // 49 tc_4d99bca9
  { 1, 149, 150, 2107, 2110 }, // 50 tc_976ddc4f
  { 1, 149, 150, 2110, 2114 }, // 51 tc_9c00ce8d
  { 1, 149, 150, 2114, 2116 }, // 52 tc_2f185f5c
  { 1, 154, 155, 2116, 2117 }, // 53 tc_15411484
  { 1, 154, 155, 2117, 2119 }, // 54 tc_10b97e27
  { 1, 150, 151, 0, 0 }, // 55 tc_52d7bbea
  { 1, 150, 151, 2119, 2120 }, // 56 tc_3669266a
  { 1, 150, 151, 2120, 2122 }, // 57 tc_e9fae2d6
  { 1, 150, 151, 2122, 2124 }, // 58 tc_a46f0df5
  { 1, 150, 151, 2124, 2126 }, // 59 tc_e1e99bfa
  { 1, 154, 155, 2126, 2128 }, // 60 tc_e0739b8c
  { 1, 154, 155, 2128, 2130 }, // 61 tc_181af5d0
  { 1, 154, 155, 2130, 2132 }, // 62 tc_97743097
  { 1, 151, 152, 2132, 2134 }, // 63 tc_73043bf4
  { 1, 151, 152, 2134, 2136 }, // 64 tc_cf59f215
  { 1, 151, 152, 2136, 2138 }, // 65 tc_7934b9df
  { 1, 154, 155, 2138, 2139 }, // 66 tc_681a2300
  { 1, 151, 152, 2139, 2141 }, // 67 tc_c5e2426d
  { 1, 151, 152, 2141, 2143 }, // 68 tc_4f7cd700
  { 1, 154, 155, 2143, 2144 }, // 69 tc_14cd4cfa
  { 1, 153, 154, 2144, 2147 }, // 70 tc_51b866be
  { 1, 150, 151, 2147, 2150 }, // 71 tc_855b0b61
  { 1, 153, 154, 2150, 2153 }, // 72 tc_bde7aaf4
  { 1, 150, 151, 2153, 2156 }, // 73 tc_99be14ca
  { 1, 153, 154, 2156, 2159 }, // 74 tc_5eb851fc
  { 1, 149, 150, 2159, 2162 }, // 75 tc_49eb22c8
  { 1, 153, 154, 2162, 2164 }, // 76 tc_746baa8e
  { 1, 150, 151, 2164, 2166 }, // 77 tc_3cb8ea06
  { 1, 152, 153, 2166, 2168 }, // 78 tc_d1090e34
  { 1, 152, 153, 2168, 2172 }, // 79 tc_ef52ed71
  { 1, 152, 153, 2172, 2177 }, // 80 tc_bad2bcaf
  { 1, 152, 153, 2177, 2183 }, // 81 tc_03220ffa
  { 1, 152, 153, 2183, 2186 }, // 82 tc_7f881c76
  { 1, 152, 153, 2186, 2190 }, // 83 tc_2fc0c436
  { 1, 152, 153, 2190, 2195 }, // 84 tc_4403ca65
  { 1, 152, 153, 2195, 2197 }, // 85 tc_9c98e8af
  { 1, 153, 154, 2197, 2199 }, // 86 tc_6aa5711a
  { 1, 152, 153, 2199, 2204 }, // 87 tc_63fe3df7
  { 1, 153, 154, 2204, 2207 }, // 88 tc_44126683
  { 1, 152, 153, 2207, 2211 }, // 89 tc_5acef64a
  { 1, 152, 153, 2211, 2216 }, // 90 tc_0cd51c76
  { 1, 152, 153, 2216, 2219 }, // 91 tc_b77c481f
  { 1, 152, 153, 2219, 2223 }, // 92 tc_cf47a43f
  { 1, 152, 153, 2223, 2227 }, // 93 tc_f47d212f
  { 1, 152, 153, 2227, 2230 }, // 94 tc_1d5a38a8
  { 1, 152, 153, 2230, 2235 }, // 95 tc_9ef61e5c
  { 1, 152, 153, 2235, 2240 }, // 96 tc_b7dd427e
  { 1, 153, 154, 2240, 2242 }, // 97 tc_3d04548d
  { 1, 153, 154, 2242, 2245 }, // 98 tc_513bef45
  { 1, 153, 154, 2245, 2248 }, // 99 tc_395dc00f
  { 1, 153, 154, 2248, 2249 }, // 100 tc_3bc2c5d3
  { 1, 153, 154, 2249, 2250 }, // 101 tc_e7624c08
  { 1, 149, 150, 2250, 2254 }, // 102 tc_c74f796f
  { 1, 149, 150, 2254, 2258 }, // 103 tc_16d0d8d5
  { 1, 149, 150, 2258, 2261 }, // 104 tc_1853ea6d
  { 1, 149, 150, 2261, 2265 }, // 105 tc_84df2cd3
  { 1, 149, 150, 2265, 2269 }, // 106 tc_bcc96cee
  { 1, 149, 150, 2269, 2272 }, // 107 tc_f49e76f4
  { 1, 152, 153, 2272, 2274 }, // 108 tc_a788683e
  { 1, 153, 154, 2274, 2276 }, // 109 tc_ff9ee76e
  { 1, 156, 159, 2276, 2279 }, // 110 tc_b712833a
  { 1, 159, 163, 2279, 2282 }, // 111 tc_35e92f8e
  { 1, 163, 165, 2282, 2285 }, // 112 PSEUDOM
  { 1, 165, 167, 2285, 2288 }, // 113 tc_b06ab583
  { 1, 167, 170, 2288, 2291 }, // 114 tc_e3748cdf
  { 1, 170, 174, 2291, 2294 }, // 115 tc_354299ad
  { 1, 174, 176, 2294, 2298 }, // 116 tc_2171ebae
  { 1, 153, 154, 2298, 2301 }, // 117 tc_e216a5db
  { 1, 149, 150, 2301, 2303 }, // 118 tc_d088982c
  { 1, 149, 150, 2303, 2306 }, // 119 tc_c6ebf8dd
  { 1, 149, 150, 2306, 2311 }, // 120 tc_87735c3b
  { 1, 152, 153, 2311, 2315 }, // 121 tc_8b15472a
  { 1, 152, 153, 2315, 2320 }, // 122 tc_cd7374a0
  { 1, 152, 153, 2320, 2325 }, // 123 tc_74e47fd9
  { 1, 153, 154, 2325, 2329 }, // 124 tc_594ab548
  { 1, 153, 154, 2329, 2334 }, // 125 tc_d9f95eef
  { 1, 153, 154, 2334, 2339 }, // 126 tc_d24b2d85
  { 1, 152, 153, 2339, 2342 }, // 127 tc_05b6c987
  { 1, 152, 153, 2342, 2346 }, // 128 tc_f86c328a
  { 1, 152, 153, 2346, 2351 }, // 129 tc_9fdb5406
  { 1, 153, 154, 2351, 2354 }, // 130 tc_f7dd9c9f
  { 1, 153, 154, 2354, 2358 }, // 131 tc_e7d02c66
  { 1, 153, 154, 2358, 2363 }, // 132 tc_9d5941c7
  { 1, 153, 154, 2363, 2366 }, // 133 tc_1372bca1
  { 1, 152, 153, 2366, 2369 }, // 134 tc_238d91d2
  { 1, 152, 153, 2369, 2374 }, // 135 tc_5274e61a
  { 1, 152, 153, 2374, 2377 }, // 136 tc_66888ded
  { 1, 152, 153, 2377, 2382 }, // 137 tc_3e07fb90
  { 1, 153, 154, 2382, 2385 }, // 138 tc_6ac37025
  { 1, 153, 154, 2385, 2390 }, // 139 tc_adb14c66
  { 1, 153, 154, 2390, 2393 }, // 140 tc_53bdb2f6
  { 1, 153, 154, 2393, 2398 }, // 141 tc_e421e012
  { 1, 152, 153, 2398, 2402 }, // 142 tc_d9709180
  { 1, 152, 153, 2402, 2406 }, // 143 tc_0dc560de
  { 1, 153, 154, 2406, 2410 }, // 144 tc_b166348b
  { 1, 153, 154, 2410, 2414 }, // 145 tc_a8acdac0
  { 1, 149, 150, 2414, 2418 }, // 146 tc_b9c0b731
  { 1, 149, 150, 2418, 2423 }, // 147 tc_60571023
  { 1, 149, 150, 2423, 2425 }, // 148 tc_00afc57e
  { 1, 149, 150, 2425, 2429 }, // 149 tc_41d5298e
  { 1, 149, 150, 2429, 2431 }, // 150 tc_be706f30
  { 1, 152, 153, 2431, 2434 }, // 151 tc_609d2efe
  { 1, 152, 153, 2434, 2436 }, // 152 tc_a904d137
  { 1, 152, 153, 2436, 2437 }, // 153 tc_1b82a277
  { 1, 152, 153, 2437, 2438 }, // 154 tc_e9c822f7
  { 1, 152, 153, 2438, 2440 }, // 155 tc_90f3e30c
  { 1, 152, 153, 0, 0 }, // 156 tc_36c68ad1
  { 1, 153, 154, 0, 0 }, // 157 tc_2a160009
  { 1, 153, 154, 0, 0 }, // 158 tc_fcab4871
  { 1, 153, 154, 2440, 2441 }, // 159 tc_0fc1ae07
  { 1, 152, 153, 2441, 2443 }, // 160 tc_57288781
  { 1, 152, 153, 2443, 2446 }, // 161 ST_tc_st_SLOT01
  { 1, 176, 178, 2446, 2449 }, // 162 tc_9777e6bf
  { 1, 178, 180, 2449, 2453 }, // 163 CVI_VA
  { 1, 180, 182, 2453, 2455 }, // 164 tc_6b78cf13
  { 1, 174, 176, 2455, 2458 }, // 165 tc_97c165b9
  { 1, 165, 167, 2458, 2460 }, // 166 tc_71337255
  { 1, 182, 184, 2460, 2462 }, // 167 tc_4105d6b5
  { 1, 159, 163, 2462, 2466 }, // 168 tc_4fd8566e
  { 1, 156, 159, 2466, 2470 }, // 169 tc_5cbf490b
  { 1, 156, 159, 2470, 2475 }, // 170 tc_da979fb3
  { 1, 156, 159, 2475, 2479 }, // 171 tc_eb669007
  { 1, 184, 186, 2479, 2482 }, // 172 tc_77a4c701
  { 1, 184, 186, 2482, 2486 }, // 173 tc_51cd3aab
  { 1, 184, 186, 2486, 2491 }, // 174 tc_38208312
  { 1, 184, 186, 2491, 2495 }, // 175 tc_9c267309
  { 1, 170, 174, 2495, 2499 }, // 176 tc_d642eff3
  { 1, 170, 174, 2499, 2504 }, // 177 tc_6fd9ad30
  { 1, 170, 174, 2504, 2508 }, // 178 tc_7fa82b08
  { 1, 186, 188, 2508, 2511 }, // 179 tc_1b93bdc6
  { 1, 186, 188, 2511, 2515 }, // 180 tc_d5090f3e
  { 1, 186, 188, 2515, 2520 }, // 181 tc_8b6a873f
  { 1, 186, 188, 2520, 2524 }, // 182 tc_db5b9e2f
  { 1, 167, 170, 2524, 2528 }, // 183 tc_85d237e3
  { 1, 167, 170, 2528, 2533 }, // 184 tc_0317c6ca
  { 1, 167, 170, 2533, 2537 }, // 185 tc_aedb9f9e
  { 1, 167, 170, 2537, 2542 }, // 186 tc_99093773
  { 1, 167, 170, 2542, 2546 }, // 187 tc_a4c9df3b
  { 1, 186, 188, 2546, 2548 }, // 188 tc_29841470
  { 1, 186, 188, 2548, 2551 }, // 189 tc_5c03dc63
  { 1, 180, 182, 2551, 2554 }, // 190 tc_908a4c8c
  { 1, 165, 167, 2554, 2557 }, // 191 tc_bbaf280e
  { 1, 165, 167, 2557, 2561 }, // 192 tc_a3127e12
  { 1, 165, 167, 2561, 2566 }, // 193 tc_5a9fc4ec
  { 1, 188, 190, 2566, 2569 }, // 194 tc_45453b98
  { 1, 190, 192, 2569, 2572 }, // 195 tc_eda67dcd
  { 1, 190, 192, 2572, 2576 }, // 196 tc_e172d86a
  { 1, 182, 184, 2576, 2580 }, // 197 tc_c4b515c5
  { 1, 180, 182, 2580, 2583 }, // 198 tc_e231aa4f
  { 1, 180, 182, 2583, 2587 }, // 199 tc_9311da3f
  { 1, 188, 190, 2587, 2590 }, // 200 tc_41f4b64e
  { 1, 188, 190, 2590, 2594 }, // 201 tc_c00bf9c9
  { 1, 188, 190, 2594, 2598 }, // 202 tc_7fa8b40f
  { 1, 188, 190, 2598, 2600 }, // 203 tc_d2cb81ea
  { 1, 174, 176, 2600, 2601 }, // 204 tc_8a6eb39a
  { 1, 192, 194, 2601, 2606 }, // 205 tc_5c120602
  { 1, 182, 184, 2606, 2608 }, // 206 tc_e6299d16
  { 1, 182, 184, 2608, 2611 }, // 207 tc_f3fc3f83
  { 1, 192, 194, 2611, 2615 }, // 208 tc_4e2a5159
  { 1, 180, 182, 2615, 2618 }, // 209 tc_69b6dd20
  { 1, 180, 182, 2618, 2622 }, // 210 tc_d725e5b0
  { 1, 190, 192, 2622, 2625 }, // 211 tc_7c3f55c4
  { 1, 190, 192, 2625, 2629 }, // 212 tc_d98f4d63
  { 1, 194, 197, 2629, 2632 }, // 213 tc_66bb62ea
  { 1, 197, 201, 0, 0 }, // 214 CVI_GATHER_PSEUDO
  { 1, 194, 197, 2632, 2636 }, // 215 tc_63e3d94c
  { 1, 201, 204, 2636, 2639 }, // 216 tc_bfe309d5
  { 1, 201, 204, 2639, 2643 }, // 217 tc_98733e9d
  { 1, 204, 206, 0, 0 }, // 218 tc_e5053c8f
  { 1, 204, 206, 2643, 2644 }, // 219 tc_cedf314b
  { 1, 206, 208, 2644, 2647 }, // 220 tc_fa99dc24
  { 1, 192, 194, 2647, 2652 }, // 221 tc_cbf6d1dc
  { 1, 206, 208, 2652, 2656 }, // 222 tc_7474003e
  { 1, 208, 211, 2656, 2659 }, // 223 tc_a807365d
  { 1, 208, 211, 2659, 2663 }, // 224 tc_ee927c0e
  { 1, 190, 192, 2663, 2667 }, // 225 tc_7e9f581b
  { 1, 190, 192, 2667, 2672 }, // 226 tc_41f99e1c
  { 1, 182, 184, 2672, 2675 }, // 227 tc_bf142ae2
  { 1, 165, 167, 2675, 2678 }, // 228 tc_9b9642a1
  { 1, 174, 176, 2678, 2680 }, // 229 tc_644584f8
  { 1, 167, 170, 2680, 2684 }, // 230 tc_4f190ba3
  { 1, 167, 170, 2684, 2689 }, // 231 tc_df54ad52
  { 1, 211, 214, 2689, 2693 }, // 232 tc_ec58f88a
  { 1, 211, 214, 2693, 2698 }, // 233 tc_94f43c04
  { 1, 174, 176, 2698, 2702 }, // 234 tc_316c637c
  { 1, 192, 194, 2702, 2704 }, // 235 tc_d7bea0ec
  { 1, 192, 194, 2704, 2707 }, // 236 tc_72ad7b54
  { 1, 204, 206, 2707, 2708 }, // 237 tc_b77635b4
  { 1, 204, 206, 2708, 2710 }, // 238 tc_28978789
  { 1, 153, 154, 0, 0 }, // 239 tc_367f7f3d
  { 1, 151, 152, 0, 0 }, // 240 tc_4ca572d4
  { 1, 153, 154, 2710, 2711 }, // 241 tc_00e7c26e
  { 1, 153, 154, 2711, 2712 }, // 242 tc_3da80ba5
  { 1, 153, 154, 2712, 2714 }, // 243 tc_4d9914c9
  { 1, 154, 155, 2714, 2715 }, // 244 tc_999d32db
  { 1, 154, 155, 0, 0 }, // 245 tc_b13761ae
  { 1, 153, 154, 2715, 2717 }, // 246 tc_daa058fa
  { 1, 151, 152, 2717, 2718 }, // 247 tc_c82dc1ff
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

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

static const llvm::MCSchedModel HexagonModelV4 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV4
};

static const llvm::MCSchedModel HexagonModelV55 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV55
};

static const llvm::MCSchedModel HexagonModelV60 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV60
};

static const llvm::MCSchedModel HexagonModelV62 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV62
};

static const llvm::MCSchedModel HexagonModelV65 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV65
};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[] = {
  { "hexagonv4", (const void *)&HexagonModelV4 },
  { "hexagonv5", (const void *)&HexagonModelV4 },
  { "hexagonv55", (const void *)&HexagonModelV55 },
  { "hexagonv60", (const void *)&HexagonModelV60 },
  { "hexagonv62", (const void *)&HexagonModelV62 },
  { "hexagonv65", (const void *)&HexagonModelV65 },
};

#undef DBGFIELD

static inline MCSubtargetInfo *createHexagonMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV4] && HexagonArchVersion < Hexagon::ArchEnum::V4) HexagonArchVersion = Hexagon::ArchEnum::V4;
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < Hexagon::ArchEnum::V5) HexagonArchVersion = Hexagon::ArchEnum::V5;
  if (Bits[Hexagon::ArchV55] && HexagonArchVersion < Hexagon::ArchEnum::V55) HexagonArchVersion = Hexagon::ArchEnum::V55;
  if (Bits[Hexagon::ArchV60] && HexagonArchVersion < Hexagon::ArchEnum::V60) HexagonArchVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ArchV62] && HexagonArchVersion < Hexagon::ArchEnum::V62) HexagonArchVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ArchV65] && HexagonArchVersion < Hexagon::ArchEnum::V65) HexagonArchVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ExtensionHVX] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVX64B]) UseHVX64BOps = true;
  if (Bits[Hexagon::ExtensionHVX128B]) UseHVX128BOps = true;
  if (Bits[Hexagon::ExtensionHVXDbl]) UseHVX128BOps = true;
  if (Bits[Hexagon::ExtensionHVXV60] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVXV62] && HexagonHVXVersion < Hexagon::ArchEnum::V62) HexagonHVXVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ExtensionHVXV65] && HexagonHVXVersion < Hexagon::ArchEnum::V65) HexagonHVXVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::FeatureDuplex]) EnableDuplex = true;
  if (Bits[Hexagon::FeatureLongCalls]) UseLongCalls = true;
  if (Bits[Hexagon::FeatureMemNoShuf]) HasMemNoShuf = false;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
  unsigned getHwMode() const override;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[];
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(HexagonFeatureKV, 16), makeArrayRef(HexagonSubTypeKV, 6), 
                        HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                        HexagonStages, HexagonOperandCycles, HexagonForwardingPaths) {}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass
unsigned HexagonGenSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-double")) return 2;
  if (checkFeatures("+hvx-length64b")) return 3;
  if (checkFeatures("-hvx-double")) return 4;
  return 0;
}
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

