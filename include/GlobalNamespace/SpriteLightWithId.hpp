// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4E
  #pragma pack(push, 1)
  // Autogenerated type: SpriteLightWithId
  class SpriteLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // [SpaceAttribute] Offset: 0xDF6CB8
    // private System.Boolean _hideIfAlphaOutOfRange
    // Size: 0x1
    // Offset: 0x38
    bool hideIfAlphaOutOfRange;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hideIfAlphaOutOfRange and: hideAlphaRangeMin
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0xDF6CF0
    // private System.Single _hideAlphaRangeMin
    // Size: 0x4
    // Offset: 0x3C
    float hideAlphaRangeMin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0xDF6D98
    // private System.Single _hideAlphaRangeMax
    // Size: 0x4
    // Offset: 0x40
    float hideAlphaRangeMax;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDF6E40
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x44
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x48
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _setColorOnly
    // Size: 0x1
    // Offset: 0x4C
    bool setColorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [SpaceAttribute] Offset: 0xDF6E98
    // private System.Boolean _setOnlyOnce
    // Size: 0x1
    // Offset: 0x4D
    bool setOnlyOnce;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SpriteLightWithId
    SpriteLightWithId(UnityEngine::SpriteRenderer* spriteRenderer_ = {}, bool hideIfAlphaOutOfRange_ = {}, float hideAlphaRangeMin_ = {}, float hideAlphaRangeMax_ = {}, float intensity_ = {}, float minAlpha_ = {}, bool setColorOnly_ = {}, bool setOnlyOnce_ = {}) noexcept : spriteRenderer{spriteRenderer_}, hideIfAlphaOutOfRange{hideIfAlphaOutOfRange_}, hideAlphaRangeMin{hideAlphaRangeMin_}, hideAlphaRangeMax{hideAlphaRangeMax_}, intensity{intensity_}, minAlpha{minAlpha_}, setColorOnly{setColorOnly_}, setOnlyOnce{setOnlyOnce_} {}
    // public UnityEngine.Color get_color()
    // Offset: 0x1D923D4
    UnityEngine::Color get_color();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1D923F0
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1D9254C
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpriteLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SpriteLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpriteLightWithId*, creationType>()));
    }
  }; // SpriteLightWithId
  #pragma pack(pop)
  static check_size<sizeof(SpriteLightWithId), 77 + sizeof(bool)> __GlobalNamespace_SpriteLightWithIdSizeCheck;
  static_assert(sizeof(SpriteLightWithId) == 0x4E);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpriteLightWithId*, "", "SpriteLightWithId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SpriteLightWithId::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::SpriteLightWithId::*)()>(&GlobalNamespace::SpriteLightWithId::get_color)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpriteLightWithId*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpriteLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SpriteLightWithId::*)(UnityEngine::Color)>(&GlobalNamespace::SpriteLightWithId::ColorWasSet)> {
  const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SpriteLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SpriteLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
