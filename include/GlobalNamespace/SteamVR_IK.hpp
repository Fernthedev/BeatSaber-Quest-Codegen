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
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_IK
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_IK : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Transform target
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* target;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform start
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* start;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform joint
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* joint;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform end
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* end;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform poleVector
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* poleVector;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform upVector
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Transform* upVector;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public System.Single blendPct
    // Size: 0x4
    // Offset: 0x48
    float blendPct;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: blendPct and: startXform
    char __padding6[0x4] = {};
    // public UnityEngine.Transform startXform
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Transform* startXform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform jointXform
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::Transform* jointXform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform endXform
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::Transform* endXform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: SteamVR_IK
    SteamVR_IK(UnityEngine::Transform* target_ = {}, UnityEngine::Transform* start_ = {}, UnityEngine::Transform* joint_ = {}, UnityEngine::Transform* end_ = {}, UnityEngine::Transform* poleVector_ = {}, UnityEngine::Transform* upVector_ = {}, float blendPct_ = {}, UnityEngine::Transform* startXform_ = {}, UnityEngine::Transform* jointXform_ = {}, UnityEngine::Transform* endXform_ = {}) noexcept : target{target_}, start{start_}, joint{joint_}, end{end_}, poleVector{poleVector_}, upVector{upVector_}, blendPct{blendPct_}, startXform{startXform_}, jointXform{jointXform_}, endXform{endXform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Transform target
    UnityEngine::Transform*& dyn_target();
    // Get instance field reference: public UnityEngine.Transform start
    UnityEngine::Transform*& dyn_start();
    // Get instance field reference: public UnityEngine.Transform joint
    UnityEngine::Transform*& dyn_joint();
    // Get instance field reference: public UnityEngine.Transform end
    UnityEngine::Transform*& dyn_end();
    // Get instance field reference: public UnityEngine.Transform poleVector
    UnityEngine::Transform*& dyn_poleVector();
    // Get instance field reference: public UnityEngine.Transform upVector
    UnityEngine::Transform*& dyn_upVector();
    // Get instance field reference: public System.Single blendPct
    float& dyn_blendPct();
    // Get instance field reference: public UnityEngine.Transform startXform
    UnityEngine::Transform*& dyn_startXform();
    // Get instance field reference: public UnityEngine.Transform jointXform
    UnityEngine::Transform*& dyn_jointXform();
    // Get instance field reference: public UnityEngine.Transform endXform
    UnityEngine::Transform*& dyn_endXform();
    // private System.Void LateUpdate()
    // Offset: 0x1424F08
    void LateUpdate();
    // static public System.Boolean Solve(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Vector3 poleVector, System.Single jointDist, System.Single targetDist, ref UnityEngine.Vector3 result, out UnityEngine.Vector3 forward, out UnityEngine.Vector3 up)
    // Offset: 0x14258B0
    static bool Solve(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Vector3 poleVector, float jointDist, float targetDist, ByRef<UnityEngine::Vector3> result, ByRef<UnityEngine::Vector3> forward, ByRef<UnityEngine::Vector3> up);
    // public System.Void .ctor()
    // Offset: 0x1425DC8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_IK* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_IK::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_IK*, creationType>()));
    }
  }; // SteamVR_IK
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_IK), 96 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_SteamVR_IKSizeCheck;
  static_assert(sizeof(SteamVR_IK) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_IK*, "", "SteamVR_IK");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_IK::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_IK::*)()>(&GlobalNamespace::SteamVR_IK::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_IK*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_IK::Solve
// Il2CppName: Solve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, float, float, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>)>(&GlobalNamespace::SteamVR_IK::Solve)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* poleVector = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* jointDist = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* targetDist = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* forward = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* up = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_IK*), "Solve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, poleVector, jointDist, targetDist, result, forward, up});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_IK::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
