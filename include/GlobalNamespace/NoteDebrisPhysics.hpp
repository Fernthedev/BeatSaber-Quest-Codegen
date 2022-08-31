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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NoteDebrisPhysics
  class NoteDebrisPhysics;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NoteDebrisPhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisPhysics*, "", "NoteDebrisPhysics");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebrisPhysics
  // [TokenAttribute] Offset: FFFFFFFF
  class NoteDebrisPhysics : public ::UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Vector3 get_position()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 get_position();
    // protected System.Void .ctor()
    // Offset: 0x14F2284
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebrisPhysics* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NoteDebrisPhysics::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebrisPhysics*, creationType>()));
    }
    // public System.Void Init(UnityEngine.Vector3 force, UnityEngine.Vector3 torque)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Init(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 torque);
    // public System.Void AddVelocity(UnityEngine.Vector3 force)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AddVelocity(::UnityEngine::Vector3 force);
  }; // NoteDebrisPhysics
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisPhysics::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::NoteDebrisPhysics::*)()>(&GlobalNamespace::NoteDebrisPhysics::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisPhysics*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisPhysics::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisPhysics::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisPhysics::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisPhysics::Init)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* torque = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisPhysics*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force, torque});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NoteDebrisPhysics::AddVelocity
// Il2CppName: AddVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NoteDebrisPhysics::*)(::UnityEngine::Vector3)>(&GlobalNamespace::NoteDebrisPhysics::AddVelocity)> {
  static const MethodInfo* get() {
    static auto* force = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NoteDebrisPhysics*), "AddVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{force});
  }
};
