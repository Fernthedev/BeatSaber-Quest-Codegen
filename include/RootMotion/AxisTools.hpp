// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: Axis
  struct Axis;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.AxisTools
  class AxisTools : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AxisTools
    AxisTools() noexcept {}
    // static public UnityEngine.Vector3 ToVector3(RootMotion.Axis axis)
    // Offset: 0x1CA2B94
    static UnityEngine::Vector3 ToVector3(RootMotion::Axis axis);
    // static public RootMotion.Axis ToAxis(UnityEngine.Vector3 v)
    // Offset: 0x1CA2C4C
    static RootMotion::Axis ToAxis(UnityEngine::Vector3 v);
    // static public RootMotion.Axis GetAxisToPoint(UnityEngine.Transform t, UnityEngine.Vector3 worldPosition)
    // Offset: 0x1CA2CF8
    static RootMotion::Axis GetAxisToPoint(UnityEngine::Transform* t, UnityEngine::Vector3 worldPosition);
    // static public RootMotion.Axis GetAxisToDirection(UnityEngine.Transform t, UnityEngine.Vector3 direction)
    // Offset: 0x1CA2EDC
    static RootMotion::Axis GetAxisToDirection(UnityEngine::Transform* t, UnityEngine::Vector3 direction);
    // static public UnityEngine.Vector3 GetAxisVectorToPoint(UnityEngine.Transform t, UnityEngine.Vector3 worldPosition)
    // Offset: 0x1CA2E14
    static UnityEngine::Vector3 GetAxisVectorToPoint(UnityEngine::Transform* t, UnityEngine::Vector3 worldPosition);
    // static public UnityEngine.Vector3 GetAxisVectorToDirection(UnityEngine.Transform t, UnityEngine.Vector3 direction)
    // Offset: 0x1CA2FF8
    static UnityEngine::Vector3 GetAxisVectorToDirection(UnityEngine::Transform* t, UnityEngine::Vector3 direction);
    // static public UnityEngine.Vector3 GetAxisVectorToDirection(UnityEngine.Quaternion r, UnityEngine.Vector3 direction)
    // Offset: 0x1CA3040
    static UnityEngine::Vector3 GetAxisVectorToDirection(UnityEngine::Quaternion r, UnityEngine::Vector3 direction);
    // public System.Void .ctor()
    // Offset: 0x1CA3308
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AxisTools* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::AxisTools::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AxisTools*, creationType>()));
    }
  }; // RootMotion.AxisTools
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::AxisTools*, "RootMotion", "AxisTools");
// Writing includes for template specializations
#include "RootMotion/Axis.hpp"
#include "UnityEngine/Vector3.hpp"
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Quaternion.hpp"
// Writing MetadataGetter for method: RootMotion::AxisTools::ToVector3
// Il2CppName: ToVector3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(RootMotion::Axis)>(&RootMotion::AxisTools::ToVector3)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AxisTools*), "ToVector3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<RootMotion::Axis>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AxisTools::ToAxis
// Il2CppName: ToAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::Axis (*)(UnityEngine::Vector3)>(&RootMotion::AxisTools::ToAxis)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AxisTools*), "ToAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AxisTools::GetAxisToPoint
// Il2CppName: GetAxisToPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::Axis (*)(UnityEngine::Transform*, UnityEngine::Vector3)>(&RootMotion::AxisTools::GetAxisToPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AxisTools*), "GetAxisToPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AxisTools::GetAxisToDirection
// Il2CppName: GetAxisToDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<RootMotion::Axis (*)(UnityEngine::Transform*, UnityEngine::Vector3)>(&RootMotion::AxisTools::GetAxisToDirection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AxisTools*), "GetAxisToDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AxisTools::GetAxisVectorToPoint
// Il2CppName: GetAxisVectorToPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Transform*, UnityEngine::Vector3)>(&RootMotion::AxisTools::GetAxisVectorToPoint)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AxisTools*), "GetAxisVectorToPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AxisTools::GetAxisVectorToDirection
// Il2CppName: GetAxisVectorToDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Transform*, UnityEngine::Vector3)>(&RootMotion::AxisTools::GetAxisVectorToDirection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AxisTools*), "GetAxisVectorToDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AxisTools::GetAxisVectorToDirection
// Il2CppName: GetAxisVectorToDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::Quaternion, UnityEngine::Vector3)>(&RootMotion::AxisTools::GetAxisVectorToDirection)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(RootMotion::AxisTools*), "GetAxisVectorToDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: RootMotion::AxisTools::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
