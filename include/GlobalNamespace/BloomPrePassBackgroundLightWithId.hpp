// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColor
  class BloomPrePassBackgroundColor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundLightWithId
  class BloomPrePassBackgroundLightWithId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundLightWithId*, "", "BloomPrePassBackgroundLightWithId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundLightWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    public:
    // private BloomPrePassBackgroundColor _bloomPrePassBackgroundColor
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BloomPrePassBackgroundColor* bloomPrePassBackgroundColor;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassBackgroundColor*) == 0x8);
    public:
    // Get instance field reference: private BloomPrePassBackgroundColor _bloomPrePassBackgroundColor
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassBackgroundColor*& dyn__bloomPrePassBackgroundColor();
    // public UnityEngine.Color get_color()
    // Offset: 0x1E6A64C
    ::UnityEngine::Color get_color();
    // public System.Void .ctor()
    // Offset: 0x1E6A68C
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundLightWithId*, creationType>()));
    }
    // public override System.Void ColorWasSet(UnityEngine.Color newColor)
    // Offset: 0x1E6A66C
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color newColor)
    void ColorWasSet(::UnityEngine::Color newColor);
  }; // BloomPrePassBackgroundLightWithId
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundLightWithId), 48 + sizeof(::GlobalNamespace::BloomPrePassBackgroundColor*)> __GlobalNamespace_BloomPrePassBackgroundLightWithIdSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundLightWithId) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundLightWithId::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::BloomPrePassBackgroundLightWithId::*)()>(&GlobalNamespace::BloomPrePassBackgroundLightWithId::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundLightWithId*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundLightWithId::*)(::UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundLightWithId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor});
  }
};
