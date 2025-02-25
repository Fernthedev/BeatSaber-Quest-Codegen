// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: MaterialLightWithId
  // [TokenAttribute] Offset: FFFFFFFF
  class MaterialLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private System.Boolean _alphaIntoColor
    // Size: 0x1
    // Offset: 0x38
    bool alphaIntoColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _setColorOnly
    // Size: 0x1
    // Offset: 0x39
    bool setColorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: setColorOnly and: colorProperty
    char __padding2[0x6] = {};
    // private System.String _colorProperty
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* colorProperty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DrawIfAttribute] Offset: 0xE19D30
    // private System.Single _alphaIntensity
    // Size: 0x4
    // Offset: 0x48
    float alphaIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _multiplyColorWithAlpha
    // Size: 0x1
    // Offset: 0x4C
    bool multiplyColorWithAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _multiplyColor
    // Size: 0x1
    // Offset: 0x4D
    bool multiplyColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: multiplyColor and: colorMultiplier
    char __padding6[0x2] = {};
    // [DrawIfAttribute] Offset: 0xE19DF4
    // private System.Single _colorMultiplier
    // Size: 0x4
    // Offset: 0x50
    float colorMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x54
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _alpha
    // Size: 0x4
    // Offset: 0x64
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _propertyId
    // Size: 0x4
    // Offset: 0x68
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MaterialLightWithId
    MaterialLightWithId(UnityEngine::MeshRenderer* meshRenderer_ = {}, bool alphaIntoColor_ = {}, bool setColorOnly_ = {}, ::Il2CppString* colorProperty_ = {}, float alphaIntensity_ = {}, bool multiplyColorWithAlpha_ = {}, bool multiplyColor_ = {}, float colorMultiplier_ = {}, UnityEngine::Color color_ = {}, float alpha_ = {}, int propertyId_ = {}) noexcept : meshRenderer{meshRenderer_}, alphaIntoColor{alphaIntoColor_}, setColorOnly{setColorOnly_}, colorProperty{colorProperty_}, alphaIntensity{alphaIntensity_}, multiplyColorWithAlpha{multiplyColorWithAlpha_}, multiplyColor{multiplyColor_}, colorMultiplier{colorMultiplier_}, color{color_}, alpha{alpha_}, propertyId{propertyId_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE19E9C
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // Get instance field reference: private UnityEngine.MeshRenderer _meshRenderer
    UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // Get instance field reference: private System.Boolean _alphaIntoColor
    bool& dyn__alphaIntoColor();
    // Get instance field reference: private System.Boolean _setColorOnly
    bool& dyn__setColorOnly();
    // Get instance field reference: private System.String _colorProperty
    ::Il2CppString*& dyn__colorProperty();
    // Get instance field reference: private System.Single _alphaIntensity
    float& dyn__alphaIntensity();
    // Get instance field reference: private System.Boolean _multiplyColorWithAlpha
    bool& dyn__multiplyColorWithAlpha();
    // Get instance field reference: private System.Boolean _multiplyColor
    bool& dyn__multiplyColor();
    // Get instance field reference: private System.Single _colorMultiplier
    float& dyn__colorMultiplier();
    // Get instance field reference: private UnityEngine.Color _color
    UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Single _alpha
    float& dyn__alpha();
    // Get instance field reference: private System.Int32 _propertyId
    int& dyn__propertyId();
    // public UnityEngine.Color get_color()
    // Offset: 0x1E1B9FC
    UnityEngine::Color get_color();
    // protected System.Void Awake()
    // Offset: 0x1E1BA08
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x1E1BC48
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialLightWithId*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1E1BCB4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1E1BA64
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
  }; // MaterialLightWithId
  #pragma pack(pop)
  static check_size<sizeof(MaterialLightWithId), 104 + sizeof(int)> __GlobalNamespace_MaterialLightWithIdSizeCheck;
  static_assert(sizeof(MaterialLightWithId) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialLightWithId*, "", "MaterialLightWithId");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MaterialLightWithId::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::MaterialLightWithId::*)()>(&GlobalNamespace::MaterialLightWithId::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialLightWithId*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialLightWithId::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialLightWithId::*)()>(&GlobalNamespace::MaterialLightWithId::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialLightWithId*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MaterialLightWithId::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MaterialLightWithId::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialLightWithId*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MaterialLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialLightWithId::*)(UnityEngine::Color)>(&GlobalNamespace::MaterialLightWithId::ColorWasSet)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MaterialLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
