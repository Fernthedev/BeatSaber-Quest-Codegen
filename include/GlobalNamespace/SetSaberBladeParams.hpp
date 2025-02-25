// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: SetSaberBladeParams
  // [TokenAttribute] Offset: FFFFFFFF
  class SetSaberBladeParams : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair
    class PropertyTintColorPair;
    // private SaberTypeObject _saber
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberTypeObject* saber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTypeObject*) == 0x8);
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // [NullAllowed] Offset: 0xE4232C
    // private SetSaberBladeParams/PropertyTintColorPair[] _propertyTintColorPairs
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>* propertyTintColorPairs;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE42364
    // private ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // Creating value type constructor for type: SetSaberBladeParams
    SetSaberBladeParams(GlobalNamespace::SaberTypeObject* saber_ = {}, UnityEngine::MeshRenderer* meshRenderer_ = {}, ::Array<GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>* propertyTintColorPairs_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}) noexcept : saber{saber_}, meshRenderer{meshRenderer_}, propertyTintColorPairs{propertyTintColorPairs_}, colorManager{colorManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private SaberTypeObject _saber
    GlobalNamespace::SaberTypeObject*& dyn__saber();
    // Get instance field reference: private UnityEngine.MeshRenderer _meshRenderer
    UnityEngine::MeshRenderer*& dyn__meshRenderer();
    // Get instance field reference: private SetSaberBladeParams/PropertyTintColorPair[] _propertyTintColorPairs
    ::Array<GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>*& dyn__propertyTintColorPairs();
    // Get instance field reference: private ColorManager _colorManager
    GlobalNamespace::ColorManager*& dyn__colorManager();
    // protected System.Void Start()
    // Offset: 0x10942D0
    void Start();
    // public System.Void .ctor()
    // Offset: 0x10943DC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSaberBladeParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetSaberBladeParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSaberBladeParams*, creationType>()));
    }
  }; // SetSaberBladeParams
  #pragma pack(pop)
  static check_size<sizeof(SetSaberBladeParams), 48 + sizeof(GlobalNamespace::ColorManager*)> __GlobalNamespace_SetSaberBladeParamsSizeCheck;
  static_assert(sizeof(SetSaberBladeParams) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberBladeParams*, "", "SetSaberBladeParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SetSaberBladeParams::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SetSaberBladeParams::*)()>(&GlobalNamespace::SetSaberBladeParams::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SetSaberBladeParams*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SetSaberBladeParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
