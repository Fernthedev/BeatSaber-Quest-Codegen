// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.Inertia
#include "RootMotion/FinalIK/Inertia.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body
  // [TokenAttribute] Offset: FFFFFFFF
  class Inertia::Body : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Inertia::Body::EffectorLink
    class EffectorLink;
    // [TooltipAttribute] Offset: 0xE2ACAC
    // public UnityEngine.Transform transform
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2ACE4
    // public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    // Size: 0x8
    // Offset: 0x18
    ::Array<RootMotion::FinalIK::Inertia::Body::EffectorLink*>* effectorLinks;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::Inertia::Body::EffectorLink*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xE2AD1C
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x20
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2AD54
    // public System.Single acceleration
    // Size: 0x4
    // Offset: 0x24
    float acceleration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2AD8C
    // [RangeAttribute] Offset: 0xE2AD8C
    // public System.Single matchVelocity
    // Size: 0x4
    // Offset: 0x28
    float matchVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xE2ADE0
    // public System.Single gravity
    // Size: 0x4
    // Offset: 0x2C
    float gravity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Vector3 delta
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 delta;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lazyPoint
    // Size: 0xC
    // Offset: 0x3C
    UnityEngine::Vector3 lazyPoint;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 direction
    // Size: 0xC
    // Offset: 0x48
    UnityEngine::Vector3 direction;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 lastPosition
    // Size: 0xC
    // Offset: 0x54
    UnityEngine::Vector3 lastPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean firstUpdate
    // Size: 0x1
    // Offset: 0x60
    bool firstUpdate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Body
    Body(UnityEngine::Transform* transform_ = {}, ::Array<RootMotion::FinalIK::Inertia::Body::EffectorLink*>* effectorLinks_ = {}, float speed_ = {}, float acceleration_ = {}, float matchVelocity_ = {}, float gravity_ = {}, UnityEngine::Vector3 delta_ = {}, UnityEngine::Vector3 lazyPoint_ = {}, UnityEngine::Vector3 direction_ = {}, UnityEngine::Vector3 lastPosition_ = {}, bool firstUpdate_ = {}) noexcept : transform{transform_}, effectorLinks{effectorLinks_}, speed{speed_}, acceleration{acceleration_}, matchVelocity{matchVelocity_}, gravity{gravity_}, delta{delta_}, lazyPoint{lazyPoint_}, direction{direction_}, lastPosition{lastPosition_}, firstUpdate{firstUpdate_} {}
    // Get instance field: public UnityEngine.Transform transform
    UnityEngine::Transform* _get_transform();
    // Set instance field: public UnityEngine.Transform transform
    void _set_transform(UnityEngine::Transform* value);
    // Get instance field: public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    ::Array<RootMotion::FinalIK::Inertia::Body::EffectorLink*>* _get_effectorLinks();
    // Set instance field: public RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body/RootMotion.FinalIK.EffectorLink[] effectorLinks
    void _set_effectorLinks(::Array<RootMotion::FinalIK::Inertia::Body::EffectorLink*>* value);
    // Get instance field: public System.Single speed
    float _get_speed();
    // Set instance field: public System.Single speed
    void _set_speed(float value);
    // Get instance field: public System.Single acceleration
    float _get_acceleration();
    // Set instance field: public System.Single acceleration
    void _set_acceleration(float value);
    // Get instance field: public System.Single matchVelocity
    float _get_matchVelocity();
    // Set instance field: public System.Single matchVelocity
    void _set_matchVelocity(float value);
    // Get instance field: public System.Single gravity
    float _get_gravity();
    // Set instance field: public System.Single gravity
    void _set_gravity(float value);
    // Get instance field: private UnityEngine.Vector3 delta
    UnityEngine::Vector3 _get_delta();
    // Set instance field: private UnityEngine.Vector3 delta
    void _set_delta(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 lazyPoint
    UnityEngine::Vector3 _get_lazyPoint();
    // Set instance field: private UnityEngine.Vector3 lazyPoint
    void _set_lazyPoint(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 direction
    UnityEngine::Vector3 _get_direction();
    // Set instance field: private UnityEngine.Vector3 direction
    void _set_direction(UnityEngine::Vector3 value);
    // Get instance field: private UnityEngine.Vector3 lastPosition
    UnityEngine::Vector3 _get_lastPosition();
    // Set instance field: private UnityEngine.Vector3 lastPosition
    void _set_lastPosition(UnityEngine::Vector3 value);
    // Get instance field: private System.Boolean firstUpdate
    bool _get_firstUpdate();
    // Set instance field: private System.Boolean firstUpdate
    void _set_firstUpdate(bool value);
    // public System.Void Reset()
    // Offset: 0x1E8A214
    void Reset();
    // public System.Void Update(RootMotion.FinalIK.IKSolverFullBodyBiped solver, System.Single weight, System.Single deltaTime)
    // Offset: 0x1E8A3AC
    void Update(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x1E8A72C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Inertia::Body* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::Inertia::Body::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Inertia::Body*, creationType>()));
    }
  }; // RootMotion.FinalIK.Inertia/RootMotion.FinalIK.Body
  #pragma pack(pop)
  static check_size<sizeof(Inertia::Body), 96 + sizeof(bool)> __RootMotion_FinalIK_Inertia_BodySizeCheck;
  static_assert(sizeof(Inertia::Body) == 0x61);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Inertia::Body*, "RootMotion.FinalIK", "Inertia/Body");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::Body::*)()>(&RootMotion::FinalIK::Inertia::Body::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia::Body*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::Inertia::Body::*)(RootMotion::FinalIK::IKSolverFullBodyBiped*, float, float)>(&RootMotion::FinalIK::Inertia::Body::Update)> {
  static const MethodInfo* get() {
    static auto* solver = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "IKSolverFullBodyBiped")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::Inertia::Body*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solver, weight, deltaTime});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::Inertia::Body::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
