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
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebrisPhysics
  class NoteDebrisPhysics : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: NoteDebrisPhysics
    NoteDebrisPhysics() noexcept {}
    // public UnityEngine.Vector3 get_position()
    // Offset: 0xFFFFFFFF
    UnityEngine::Vector3 get_position();
    // public System.Void Init(UnityEngine.Vector3 force, UnityEngine.Vector3 torque)
    // Offset: 0xFFFFFFFF
    void Init(UnityEngine::Vector3 force, UnityEngine::Vector3 torque);
    // public System.Void AddVelocity(UnityEngine.Vector3 force)
    // Offset: 0xFFFFFFFF
    void AddVelocity(UnityEngine::Vector3 force);
    // protected System.Void .ctor()
    // Offset: 0x11D76A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebrisPhysics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteDebrisPhysics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebrisPhysics*, creationType>()));
    }
  }; // NoteDebrisPhysics
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisPhysics*, "", "NoteDebrisPhysics");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisPhysics::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (GlobalNamespace::NoteDebrisPhysics::*)()>(&GlobalNamespace::NoteDebrisPhysics::get_position)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisPhysics*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisPhysics::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisPhysics::*)(UnityEngine::Vector3, UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisPhysics::Init)> {
  const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* torque = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisPhysics*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, torque});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisPhysics::AddVelocity
// Il2CppName: AddVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisPhysics::*)(UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisPhysics::AddVelocity)> {
  const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisPhysics*), "AddVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisPhysics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
