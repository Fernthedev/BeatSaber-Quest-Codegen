// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RuntimeLightWithIds
#include "GlobalNamespace/RuntimeLightWithIds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BloomPrePassBackgroundColorsGradientTintColorWithLightId
  class BloomPrePassBackgroundColorsGradientTintColorWithLightId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*, "", "BloomPrePassBackgroundColorsGradientTintColorWithLightId");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradientTintColorWithLightId
  // [TokenAttribute] Offset: FFFFFFFF
  class BloomPrePassBackgroundColorsGradientTintColorWithLightId : public ::GlobalNamespace::RuntimeLightWithIds {
    public:
    public:
    // private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::BloomPrePassBackgroundColorsGradient* bloomPrePassBackgroundColorsGradient;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BloomPrePassBackgroundColorsGradient*) == 0x8);
    // private System.Boolean _useGrayscale
    // Size: 0x1
    // Offset: 0x50
    bool useGrayscale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useGrayscale and: grayscaleFactor
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0x10CE0FC
    // private System.Single grayscaleFactor
    // Size: 0x4
    // Offset: 0x54
    float grayscaleFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private BloomPrePassBackgroundColorsGradient _bloomPrePassBackgroundColorsGradient
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BloomPrePassBackgroundColorsGradient*& dyn__bloomPrePassBackgroundColorsGradient();
    // Get instance field reference: private System.Boolean _useGrayscale
    [[deprecated("Use field access instead!")]] bool& dyn__useGrayscale();
    // Get instance field reference: private System.Single grayscaleFactor
    [[deprecated("Use field access instead!")]] float& dyn_grayscaleFactor();
    // public System.Void .ctor()
    // Offset: 0x1E6A510
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::.ctor()
    // Base method: System.Void LightWithIds::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradientTintColorWithLightId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientTintColorWithLightId*, creationType>()));
    }
    // protected override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1E6A3B0
    // Implemented from: RuntimeLightWithIds
    // Base method: System.Void RuntimeLightWithIds::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(::UnityEngine::Color color);
  }; // BloomPrePassBackgroundColorsGradientTintColorWithLightId
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradientTintColorWithLightId), 84 + sizeof(float)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientTintColorWithLightIdSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradientTintColorWithLightId) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::*)(::UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
