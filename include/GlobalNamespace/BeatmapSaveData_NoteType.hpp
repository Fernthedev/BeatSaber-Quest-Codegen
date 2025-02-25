// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSaveData/NoteType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BeatmapSaveData::NoteType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NoteType
    constexpr NoteType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public BeatmapSaveData/NoteType NoteA
    static constexpr const int NoteA = 0;
    // Get static field: static public BeatmapSaveData/NoteType NoteA
    static GlobalNamespace::BeatmapSaveData::NoteType _get_NoteA();
    // Set static field: static public BeatmapSaveData/NoteType NoteA
    static void _set_NoteA(GlobalNamespace::BeatmapSaveData::NoteType value);
    // static field const value: static public BeatmapSaveData/NoteType NoteB
    static constexpr const int NoteB = 1;
    // Get static field: static public BeatmapSaveData/NoteType NoteB
    static GlobalNamespace::BeatmapSaveData::NoteType _get_NoteB();
    // Set static field: static public BeatmapSaveData/NoteType NoteB
    static void _set_NoteB(GlobalNamespace::BeatmapSaveData::NoteType value);
    // static field const value: static public BeatmapSaveData/NoteType GhostNote
    static constexpr const int GhostNote = 2;
    // Get static field: static public BeatmapSaveData/NoteType GhostNote
    static GlobalNamespace::BeatmapSaveData::NoteType _get_GhostNote();
    // Set static field: static public BeatmapSaveData/NoteType GhostNote
    static void _set_GhostNote(GlobalNamespace::BeatmapSaveData::NoteType value);
    // static field const value: static public BeatmapSaveData/NoteType Bomb
    static constexpr const int Bomb = 3;
    // Get static field: static public BeatmapSaveData/NoteType Bomb
    static GlobalNamespace::BeatmapSaveData::NoteType _get_Bomb();
    // Set static field: static public BeatmapSaveData/NoteType Bomb
    static void _set_Bomb(GlobalNamespace::BeatmapSaveData::NoteType value);
    // static field const value: static public BeatmapSaveData/NoteType None
    static constexpr const int None = -1;
    // Get static field: static public BeatmapSaveData/NoteType None
    static GlobalNamespace::BeatmapSaveData::NoteType _get_None();
    // Set static field: static public BeatmapSaveData/NoteType None
    static void _set_None(GlobalNamespace::BeatmapSaveData::NoteType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // BeatmapSaveData/NoteType
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSaveData::NoteType), 0 + sizeof(int)> __GlobalNamespace_BeatmapSaveData_NoteTypeSizeCheck;
  static_assert(sizeof(BeatmapSaveData::NoteType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::NoteType, "", "BeatmapSaveData/NoteType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
