// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: SaberTypeObject
  class SaberTypeObject : public UnityEngine::MonoBehaviour {
    public:
    // private SaberType _saberType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::SaberType saberType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberType) == 0x4);
    // Creating value type constructor for type: SaberTypeObject
    SaberTypeObject(GlobalNamespace::SaberType saberType_ = {}) noexcept : saberType{saberType_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public SaberType get_saberType()
    // Offset: 0x10D2E58
    GlobalNamespace::SaberType get_saberType();
    // public System.Void .ctor()
    // Offset: 0x10D2E60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberTypeObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberTypeObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberTypeObject*, creationType>()));
    }
  }; // SaberTypeObject
  #pragma pack(pop)
  static check_size<sizeof(SaberTypeObject), 24 + sizeof(GlobalNamespace::SaberType)> __GlobalNamespace_SaberTypeObjectSizeCheck;
  static_assert(sizeof(SaberTypeObject) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberTypeObject*, "", "SaberTypeObject");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SaberTypeObject::get_saberType
// Il2CppName: get_saberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SaberType (GlobalNamespace::SaberTypeObject::*)()>(&GlobalNamespace::SaberTypeObject::get_saberType)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SaberTypeObject*), "get_saberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SaberTypeObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
