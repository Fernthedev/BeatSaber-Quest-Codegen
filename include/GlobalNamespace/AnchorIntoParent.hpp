// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: AnchorIntoParent
  class AnchorIntoParent : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Transform _parentTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* parentTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _positionOffset
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Vector3 positionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: AnchorIntoParent
    AnchorIntoParent(UnityEngine::Transform* parentTransform_ = {}, UnityEngine::Vector3 positionOffset_ = {}) noexcept : parentTransform{parentTransform_}, positionOffset{positionOffset_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x112CD54
    void Start();
    // public System.Void .ctor()
    // Offset: 0x112CE68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnchorIntoParent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AnchorIntoParent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnchorIntoParent*, creationType>()));
    }
  }; // AnchorIntoParent
  #pragma pack(pop)
  static check_size<sizeof(AnchorIntoParent), 32 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_AnchorIntoParentSizeCheck;
  static_assert(sizeof(AnchorIntoParent) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnchorIntoParent*, "", "AnchorIntoParent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AnchorIntoParent::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AnchorIntoParent::*)()>(&GlobalNamespace::AnchorIntoParent::Start)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AnchorIntoParent*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AnchorIntoParent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
