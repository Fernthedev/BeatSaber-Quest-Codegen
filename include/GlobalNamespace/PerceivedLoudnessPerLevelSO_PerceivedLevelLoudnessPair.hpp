// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PerceivedLoudnessPerLevelSO
#include "GlobalNamespace/PerceivedLoudnessPerLevelSO.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair*, "", "PerceivedLoudnessPerLevelSO/PerceivedLevelLoudnessPair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PerceivedLoudnessPerLevelSO/PerceivedLevelLoudnessPair
  // [TokenAttribute] Offset: FFFFFFFF
  class PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair : public ::Il2CppObject {
    public:
    public:
    // private System.String _levelId
    // Size: 0x8
    // Offset: 0x10
    ::StringW levelId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Single _perceivedLoudness
    // Size: 0x4
    // Offset: 0x18
    float perceivedLoudness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.String _levelId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__levelId();
    // Get instance field reference: private System.Single _perceivedLoudness
    [[deprecated("Use field access instead!")]] float& dyn__perceivedLoudness();
    // public System.String get_levelId()
    // Offset: 0x134817C
    ::StringW get_levelId();
    // public System.Single get_perceivedLoudness()
    // Offset: 0x1348184
    float get_perceivedLoudness();
    // public System.Void .ctor(System.String levelId, System.Single perceivedLoudness)
    // Offset: 0x134818C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair* New_ctor(::StringW levelId, float perceivedLoudness) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair*, creationType>(levelId, perceivedLoudness)));
    }
  }; // PerceivedLoudnessPerLevelSO/PerceivedLevelLoudnessPair
  #pragma pack(pop)
  static check_size<sizeof(PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair), 24 + sizeof(float)> __GlobalNamespace_PerceivedLoudnessPerLevelSO_PerceivedLevelLoudnessPairSizeCheck;
  static_assert(sizeof(PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair::get_levelId
// Il2CppName: get_levelId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair::*)()>(&GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair::get_levelId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair*), "get_levelId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair::get_perceivedLoudness
// Il2CppName: get_perceivedLoudness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair::*)()>(&GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair::get_perceivedLoudness)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair*), "get_perceivedLoudness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PerceivedLoudnessPerLevelSO::PerceivedLevelLoudnessPair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
