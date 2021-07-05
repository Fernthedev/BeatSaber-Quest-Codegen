// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MaterialPropertyBlockAnimator
#include "GlobalNamespace/MaterialPropertyBlockAnimator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockFloatAnimator
  // [ExecuteAlways] Offset: DF5A80
  class MaterialPropertyBlockFloatAnimator : public GlobalNamespace::MaterialPropertyBlockAnimator {
    public:
    // Writing base type padding for base size: 0x2D to desired offset: 0x30
    char ___base_padding[0x3] = {};
    // [SpaceAttribute] Offset: 0xDF7108
    // private System.Single _value
    // Size: 0x4
    // Offset: 0x30
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: MaterialPropertyBlockFloatAnimator
    MaterialPropertyBlockFloatAnimator(float value_ = {}) noexcept : value{value_} {}
    // protected override System.Void SetProperty()
    // Offset: 0x1D8F0A4
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::SetProperty()
    void SetProperty();
    // public System.Void .ctor()
    // Offset: 0x1D8F0E0
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockFloatAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyBlockFloatAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockFloatAnimator*, creationType>()));
    }
  }; // MaterialPropertyBlockFloatAnimator
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockFloatAnimator), 48 + sizeof(float)> __GlobalNamespace_MaterialPropertyBlockFloatAnimatorSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockFloatAnimator) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockFloatAnimator*, "", "MaterialPropertyBlockFloatAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockFloatAnimator::SetProperty
// Il2CppName: SetProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockFloatAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockFloatAnimator::SetProperty)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockFloatAnimator*), "SetProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockFloatAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
