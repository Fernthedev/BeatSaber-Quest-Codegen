// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: SaberModelController
  class SaberModelController;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SaberModelContainer
  class SaberModelContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SaberModelContainer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberModelContainer*, "", "SaberModelContainer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: SaberModelContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class SaberModelContainer : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Saber _saber
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::Saber* saber;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Saber*) == 0x8);
    // private SaberModelController _saberModelControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::SaberModelController* saberModelControllerPrefab;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SaberModelController*) == 0x8);
    // [InjectAttribute] Offset: 0x10ECE8C
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x28
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Saber _saber
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Saber*& dyn__saber();
    // Get instance field reference: private SaberModelController _saberModelControllerPrefab
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SaberModelController*& dyn__saberModelControllerPrefab();
    // Get instance field reference: private readonly Zenject.DiContainer _container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn__container();
    // public System.Void .ctor()
    // Offset: 0x14AE874
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberModelContainer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SaberModelContainer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberModelContainer*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x14AE538
    void Start();
  }; // SaberModelContainer
  #pragma pack(pop)
  static check_size<sizeof(SaberModelContainer), 40 + sizeof(::Zenject::DiContainer*)> __GlobalNamespace_SaberModelContainerSizeCheck;
  static_assert(sizeof(SaberModelContainer) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberModelContainer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SaberModelContainer::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SaberModelContainer::*)()>(&GlobalNamespace::SaberModelContainer::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberModelContainer*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
