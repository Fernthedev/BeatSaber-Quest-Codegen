// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: PersistentScriptableObject
  class PersistentScriptableObject : public UnityEngine::ScriptableObject {
    public:
    // Creating value type constructor for type: PersistentScriptableObject
    PersistentScriptableObject() noexcept {}
    // protected System.Void OnEnable()
    // Offset: 0x123F270
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x12515F8
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PersistentScriptableObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentScriptableObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PersistentScriptableObject*, creationType>()));
    }
  }; // PersistentScriptableObject
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PersistentScriptableObject*, "", "PersistentScriptableObject");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::PersistentScriptableObject::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PersistentScriptableObject::*)()>(&GlobalNamespace::PersistentScriptableObject::OnEnable)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PersistentScriptableObject*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PersistentScriptableObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
