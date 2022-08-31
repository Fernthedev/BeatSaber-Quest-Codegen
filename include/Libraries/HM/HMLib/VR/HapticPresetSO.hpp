// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Libraries.HM.HMLib.VR
namespace Libraries::HM::HMLib::VR {
  // Forward declaring type: HapticPresetSO
  class HapticPresetSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Libraries::HM::HMLib::VR::HapticPresetSO);
DEFINE_IL2CPP_ARG_TYPE(::Libraries::HM::HMLib::VR::HapticPresetSO*, "Libraries.HM.HMLib.VR", "HapticPresetSO");
// Type namespace: Libraries.HM.HMLib.VR
namespace Libraries::HM::HMLib::VR {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Libraries.HM.HMLib.VR.HapticPresetSO
  // [TokenAttribute] Offset: FFFFFFFF
  class HapticPresetSO : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // [DrawIfAttribute] Offset: 0x10BCA18
    // public System.Single _duration
    // Size: 0x4
    // Offset: 0x18
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _strength
    // Size: 0x4
    // Offset: 0x1C
    float strength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _frequency
    // Size: 0x4
    // Offset: 0x20
    float frequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean _continuous
    // Size: 0x1
    // Offset: 0x24
    bool continuous;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Single _duration
    [[deprecated("Use field access instead!")]] float& dyn__duration();
    // Get instance field reference: public System.Single _strength
    [[deprecated("Use field access instead!")]] float& dyn__strength();
    // Get instance field reference: public System.Single _frequency
    [[deprecated("Use field access instead!")]] float& dyn__frequency();
    // Get instance field reference: public System.Boolean _continuous
    [[deprecated("Use field access instead!")]] bool& dyn__continuous();
    // public System.Void .ctor()
    // Offset: 0x15CC680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HapticPresetSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Libraries::HM::HMLib::VR::HapticPresetSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HapticPresetSO*, creationType>()));
    }
    // public System.Void CopyFrom(Libraries.HM.HMLib.VR.HapticPresetSO hapticPreset)
    // Offset: 0x15CC64C
    void CopyFrom(::Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);
  }; // Libraries.HM.HMLib.VR.HapticPresetSO
  #pragma pack(pop)
  static check_size<sizeof(HapticPresetSO), 36 + sizeof(bool)> __Libraries_HM_HMLib_VR_HapticPresetSOSizeCheck;
  static_assert(sizeof(HapticPresetSO) == 0x25);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Libraries::HM::HMLib::VR::HapticPresetSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Libraries::HM::HMLib::VR::HapticPresetSO::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Libraries::HM::HMLib::VR::HapticPresetSO::*)(::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&Libraries::HM::HMLib::VR::HapticPresetSO::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* hapticPreset = &::il2cpp_utils::GetClassFromName("Libraries.HM.HMLib.VR", "HapticPresetSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Libraries::HM::HMLib::VR::HapticPresetSO*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hapticPreset});
  }
};
