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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: ConditionalMaterialSwitcher
  // [TokenAttribute] Offset: FFFFFFFF
  class ConditionalMaterialSwitcher : public UnityEngine::MonoBehaviour {
    public:
    // [HeaderAttribute] Offset: 0xE3D03C
    // private UnityEngine.Material _material0
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Material* material0;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // [HeaderAttribute] Offset: 0xE3D088
    // private UnityEngine.Material _material1
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* material1;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // [SpaceAttribute] Offset: 0xE3D0D4
    // private BoolSO _value
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BoolSO* value;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // Creating value type constructor for type: ConditionalMaterialSwitcher
    ConditionalMaterialSwitcher(UnityEngine::Material* material0_ = {}, UnityEngine::Material* material1_ = {}, GlobalNamespace::BoolSO* value_ = {}, UnityEngine::Renderer* renderer_ = {}) noexcept : material0{material0_}, material1{material1_}, value{value_}, renderer{renderer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.Material _material0
    UnityEngine::Material*& dyn__material0();
    // Get instance field reference: private UnityEngine.Material _material1
    UnityEngine::Material*& dyn__material1();
    // Get instance field reference: private BoolSO _value
    GlobalNamespace::BoolSO*& dyn__value();
    // Get instance field reference: private UnityEngine.Renderer _renderer
    UnityEngine::Renderer*& dyn__renderer();
    // public System.Void Awake()
    // Offset: 0x10F2608
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x10F2684
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionalMaterialSwitcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConditionalMaterialSwitcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionalMaterialSwitcher*, creationType>()));
    }
  }; // ConditionalMaterialSwitcher
  #pragma pack(pop)
  static check_size<sizeof(ConditionalMaterialSwitcher), 48 + sizeof(UnityEngine::Renderer*)> __GlobalNamespace_ConditionalMaterialSwitcherSizeCheck;
  static_assert(sizeof(ConditionalMaterialSwitcher) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalMaterialSwitcher*, "", "ConditionalMaterialSwitcher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ConditionalMaterialSwitcher::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ConditionalMaterialSwitcher::*)()>(&GlobalNamespace::ConditionalMaterialSwitcher::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ConditionalMaterialSwitcher*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ConditionalMaterialSwitcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
