// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BloomFogEnvironmentParams
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomFogEnvironmentParams : public GlobalNamespace::PersistentScriptableObject {
    public:
    // public System.Single attenuation
    // Size: 0x4
    // Offset: 0x18
    float attenuation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single offset
    // Size: 0x4
    // Offset: 0x1C
    float offset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single heightFogStartY
    // Size: 0x4
    // Offset: 0x20
    float heightFogStartY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single heightFogHeight
    // Size: 0x4
    // Offset: 0x24
    float heightFogHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BloomFogEnvironmentParams
    BloomFogEnvironmentParams(float attenuation_ = {}, float offset_ = {}, float heightFogStartY_ = {}, float heightFogHeight_ = {}) noexcept : attenuation{attenuation_}, offset{offset_}, heightFogStartY{heightFogStartY_}, heightFogHeight{heightFogHeight_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field: public System.Single attenuation
    float _get_attenuation();
    // Set instance field: public System.Single attenuation
    void _set_attenuation(float value);
    // Get instance field: public System.Single offset
    float _get_offset();
    // Set instance field: public System.Single offset
    void _set_offset(float value);
    // Get instance field: public System.Single heightFogStartY
    float _get_heightFogStartY();
    // Set instance field: public System.Single heightFogStartY
    void _set_heightFogStartY(float value);
    // Get instance field: public System.Single heightFogHeight
    float _get_heightFogHeight();
    // Set instance field: public System.Single heightFogHeight
    void _set_heightFogHeight(float value);
    // public System.Void .ctor()
    // Offset: 0x1E11118
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomFogEnvironmentParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomFogEnvironmentParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomFogEnvironmentParams*, creationType>()));
    }
  }; // BloomFogEnvironmentParams
  #pragma pack(pop)
  static check_size<sizeof(BloomFogEnvironmentParams), 36 + sizeof(float)> __GlobalNamespace_BloomFogEnvironmentParamsSizeCheck;
  static_assert(sizeof(BloomFogEnvironmentParams) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogEnvironmentParams*, "", "BloomFogEnvironmentParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomFogEnvironmentParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
