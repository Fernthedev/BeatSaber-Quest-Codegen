// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ScoreMultiplierCounter
  class ScoreMultiplierCounter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ScoreMultiplierCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreMultiplierCounter*, "", "ScoreMultiplierCounter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: ScoreMultiplierCounter
  // [TokenAttribute] Offset: FFFFFFFF
  class ScoreMultiplierCounter : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType
    struct MultiplierEventType;
    public:
    // private System.Int32 _multiplier
    // Size: 0x4
    // Offset: 0x10
    int multiplier;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplierIncreaseProgress
    // Size: 0x4
    // Offset: 0x14
    int multiplierIncreaseProgress;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _multiplierIncreaseMaxProgress
    // Size: 0x4
    // Offset: 0x18
    int multiplierIncreaseMaxProgress;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 _multiplier
    [[deprecated("Use field access instead!")]] int& dyn__multiplier();
    // Get instance field reference: private System.Int32 _multiplierIncreaseProgress
    [[deprecated("Use field access instead!")]] int& dyn__multiplierIncreaseProgress();
    // Get instance field reference: private System.Int32 _multiplierIncreaseMaxProgress
    [[deprecated("Use field access instead!")]] int& dyn__multiplierIncreaseMaxProgress();
    // public System.Int32 get_multiplier()
    // Offset: 0x14B69BC
    int get_multiplier();
    // public System.Single get_normalizedProgress()
    // Offset: 0x14B4F84
    float get_normalizedProgress();
    // public System.Void .ctor()
    // Offset: 0x14B5774
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScoreMultiplierCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ScoreMultiplierCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScoreMultiplierCounter*, creationType>()));
    }
    // public System.Void Reset()
    // Offset: 0x14B65B4
    void Reset();
    // public System.Boolean ProcessMultiplierEvent(ScoreMultiplierCounter/MultiplierEventType multiplierEventType)
    // Offset: 0x14B4EE8
    bool ProcessMultiplierEvent(::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType multiplierEventType);
  }; // ScoreMultiplierCounter
  #pragma pack(pop)
  static check_size<sizeof(ScoreMultiplierCounter), 24 + sizeof(int)> __GlobalNamespace_ScoreMultiplierCounterSizeCheck;
  static_assert(sizeof(ScoreMultiplierCounter) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierCounter::get_multiplier
// Il2CppName: get_multiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::ScoreMultiplierCounter::*)()>(&GlobalNamespace::ScoreMultiplierCounter::get_multiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierCounter*), "get_multiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierCounter::get_normalizedProgress
// Il2CppName: get_normalizedProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::ScoreMultiplierCounter::*)()>(&GlobalNamespace::ScoreMultiplierCounter::get_normalizedProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierCounter*), "get_normalizedProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierCounter::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ScoreMultiplierCounter::*)()>(&GlobalNamespace::ScoreMultiplierCounter::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierCounter*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ScoreMultiplierCounter::ProcessMultiplierEvent
// Il2CppName: ProcessMultiplierEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ScoreMultiplierCounter::*)(::GlobalNamespace::ScoreMultiplierCounter::MultiplierEventType)>(&GlobalNamespace::ScoreMultiplierCounter::ProcessMultiplierEvent)> {
  static const MethodInfo* get() {
    static auto* multiplierEventType = &::il2cpp_utils::GetClassFromName("", "ScoreMultiplierCounter/MultiplierEventType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ScoreMultiplierCounter*), "ProcessMultiplierEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{multiplierEventType});
  }
};
