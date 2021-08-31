// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Joint
#include "UnityEngine/Joint.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SpringJoint
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: DC29A8
  // [NativeHeaderAttribute] Offset: DC29A8
  class SpringJoint : public UnityEngine::Joint {
    public:
    // Creating value type constructor for type: SpringJoint
    SpringJoint() noexcept {}
    // public System.Void set_minDistance(System.Single value)
    // Offset: 0x2407EB8
    void set_minDistance(float value);
    // public System.Void set_maxDistance(System.Single value)
    // Offset: 0x2407F08
    void set_maxDistance(float value);
  }; // UnityEngine.SpringJoint
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SpringJoint*, "UnityEngine", "SpringJoint");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::SpringJoint::set_minDistance
// Il2CppName: set_minDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpringJoint::*)(float)>(&UnityEngine::SpringJoint::set_minDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpringJoint*), "set_minDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::SpringJoint::set_maxDistance
// Il2CppName: set_maxDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::SpringJoint::*)(float)>(&UnityEngine::SpringJoint::set_maxDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::SpringJoint*), "set_maxDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
