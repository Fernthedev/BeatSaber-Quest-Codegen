// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x55
  #pragma pack(push, 1)
  // Autogenerated type: InstancedMaterialLightWithId
  class InstancedMaterialLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private MaterialPropertyBlockColorSetter _materialPropertyBlockColorSetter
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MaterialPropertyBlockColorSetter* materialPropertyBlockColorSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockColorSetter*) == 0x8);
    // private System.Boolean _setColorOnly
    // Size: 0x1
    // Offset: 0x38
    bool setColorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: setColorOnly and: intensity
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0xDF676C
    // private System.Single _intensity
    // Size: 0x4
    // Offset: 0x3C
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0xDF6810
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x40
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x44
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Boolean _startColorWasSet
    // Size: 0x1
    // Offset: 0x54
    bool startColorWasSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InstancedMaterialLightWithId
    InstancedMaterialLightWithId(GlobalNamespace::MaterialPropertyBlockColorSetter* materialPropertyBlockColorSetter_ = {}, bool setColorOnly_ = {}, float intensity_ = {}, float minAlpha_ = {}, UnityEngine::Color color_ = {}, bool startColorWasSet_ = {}) noexcept : materialPropertyBlockColorSetter{materialPropertyBlockColorSetter_}, setColorOnly{setColorOnly_}, intensity{intensity_}, minAlpha{minAlpha_}, color{color_}, startColorWasSet{startColorWasSet_} {}
    // public override System.Void ColorWasSet(UnityEngine.Color newColor)
    // Offset: 0x1D89E78
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color newColor)
    void ColorWasSet(UnityEngine::Color newColor);
    // public System.Void .ctor()
    // Offset: 0x1D89F78
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstancedMaterialLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::InstancedMaterialLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstancedMaterialLightWithId*, creationType>()));
    }
  }; // InstancedMaterialLightWithId
  #pragma pack(pop)
  static check_size<sizeof(InstancedMaterialLightWithId), 84 + sizeof(bool)> __GlobalNamespace_InstancedMaterialLightWithIdSizeCheck;
  static_assert(sizeof(InstancedMaterialLightWithId) == 0x55);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstancedMaterialLightWithId*, "", "InstancedMaterialLightWithId");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet
// Il2CppName: ColorWasSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstancedMaterialLightWithId::*)(UnityEngine::Color)>(&GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InstancedMaterialLightWithId*), "ColorWasSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InstancedMaterialLightWithId::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
