// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MaterialPropertyBlockAnimator
#include "GlobalNamespace/MaterialPropertyBlockAnimator.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockColorAnimator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class MaterialPropertyBlockColorAnimator : public GlobalNamespace::MaterialPropertyBlockAnimator {
    public:
    // Writing base type padding for base size: 0x2D to desired offset: 0x30
    char ___base_padding[0x3] = {};
    // [SpaceAttribute] Offset: 0xE1A38C
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: MaterialPropertyBlockColorAnimator
    MaterialPropertyBlockColorAnimator(UnityEngine::Color color_ = {}) noexcept : color{color_} {}
    // Get instance field reference: private UnityEngine.Color _color
    UnityEngine::Color& dyn__color();
    // public UnityEngine.Color get_color()
    // Offset: 0x1E1BF44
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1E1BF50
    void set_color(UnityEngine::Color value);
    // public System.Void .ctor()
    // Offset: 0x1E1C008
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockColorAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyBlockColorAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockColorAnimator*, creationType>()));
    }
    // protected override System.Void SetProperty()
    // Offset: 0x1E1BF5C
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::SetProperty()
    void SetProperty();
  }; // MaterialPropertyBlockColorAnimator
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockColorAnimator), 48 + sizeof(UnityEngine::Color)> __GlobalNamespace_MaterialPropertyBlockColorAnimatorSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockColorAnimator) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockColorAnimator*, "", "MaterialPropertyBlockColorAnimator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockColorAnimator::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::MaterialPropertyBlockColorAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockColorAnimator::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockColorAnimator*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockColorAnimator::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockColorAnimator::*)(UnityEngine::Color)>(&GlobalNamespace::MaterialPropertyBlockColorAnimator::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockColorAnimator*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockColorAnimator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MaterialPropertyBlockColorAnimator::SetProperty
// Il2CppName: SetProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialPropertyBlockColorAnimator::*)()>(&GlobalNamespace::MaterialPropertyBlockColorAnimator::SetProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialPropertyBlockColorAnimator*), "SetProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
