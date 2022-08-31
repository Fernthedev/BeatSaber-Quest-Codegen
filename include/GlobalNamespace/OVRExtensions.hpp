// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRTracker
#include "GlobalNamespace/OVRTracker.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPose
  struct OVRPose;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Gradient
  class Gradient;
}
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRExtensions
  class OVRExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRExtensions*, "", "OVRExtensions");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class OVRExtensions : public ::Il2CppObject {
    public:
    // static public OVRPose ToTrackingSpacePose(UnityEngine.Transform transform, UnityEngine.Camera camera)
    // Offset: 0x1657184
    static ::GlobalNamespace::OVRPose ToTrackingSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera);
    // static public OVRPose ToWorldSpacePose(OVRPose trackingSpacePose)
    // Offset: 0x1657388
    static ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose);
    // static public OVRPose ToWorldSpacePose(OVRPose trackingSpacePose, UnityEngine.Camera mainCamera)
    // Offset: 0x164E8C8
    static ::GlobalNamespace::OVRPose ToWorldSpacePose(::GlobalNamespace::OVRPose trackingSpacePose, ::UnityEngine::Camera* mainCamera);
    // static public OVRPose ToHeadSpacePose(UnityEngine.Transform transform, UnityEngine.Camera camera)
    // Offset: 0x16572F0
    static ::GlobalNamespace::OVRPose ToHeadSpacePose(::UnityEngine::Transform* transform, ::UnityEngine::Camera* camera);
    // static public OVRPose ToOVRPose(UnityEngine.Transform t, System.Boolean isLocal)
    // Offset: 0x16573D4
    static ::GlobalNamespace::OVRPose ToOVRPose(::UnityEngine::Transform* t, bool isLocal);
    // static public System.Void FromOVRPose(UnityEngine.Transform t, OVRPose pose, System.Boolean isLocal)
    // Offset: 0x164D108
    static void FromOVRPose(::UnityEngine::Transform* t, ::GlobalNamespace::OVRPose pose, bool isLocal);
    // static public OVRPose ToOVRPose(OVRPlugin/Posef p)
    // Offset: 0x164EA94
    static ::GlobalNamespace::OVRPose ToOVRPose(::GlobalNamespace::OVRPlugin::Posef p);
    // static public OVRTracker/Frustum ToFrustum(OVRPlugin/Frustumf f)
    // Offset: 0x1657468
    static ::GlobalNamespace::OVRTracker::Frustum ToFrustum(::GlobalNamespace::OVRPlugin::Frustumf f);
    // static public UnityEngine.Color FromColorf(OVRPlugin/Colorf c)
    // Offset: 0x165747C
    static ::UnityEngine::Color FromColorf(::GlobalNamespace::OVRPlugin::Colorf c);
    // static public OVRPlugin/Colorf ToColorf(UnityEngine.Color c)
    // Offset: 0x1657480
    static ::GlobalNamespace::OVRPlugin::Colorf ToColorf(::UnityEngine::Color c);
    // static public UnityEngine.Vector3 FromVector3f(OVRPlugin/Vector3f v)
    // Offset: 0x164BCD8
    static ::UnityEngine::Vector3 FromVector3f(::GlobalNamespace::OVRPlugin::Vector3f v);
    // static public UnityEngine.Vector3 FromFlippedXVector3f(OVRPlugin/Vector3f v)
    // Offset: 0x16542B0
    static ::UnityEngine::Vector3 FromFlippedXVector3f(::GlobalNamespace::OVRPlugin::Vector3f v);
    // static public UnityEngine.Vector3 FromFlippedZVector3f(OVRPlugin/Vector3f v)
    // Offset: 0x164B6B0
    static ::UnityEngine::Vector3 FromFlippedZVector3f(::GlobalNamespace::OVRPlugin::Vector3f v);
    // static public OVRPlugin/Vector3f ToVector3f(UnityEngine.Vector3 v)
    // Offset: 0x1657484
    static ::GlobalNamespace::OVRPlugin::Vector3f ToVector3f(::UnityEngine::Vector3 v);
    // static public OVRPlugin/Vector3f ToFlippedXVector3f(UnityEngine.Vector3 v)
    // Offset: 0x1657488
    static ::GlobalNamespace::OVRPlugin::Vector3f ToFlippedXVector3f(::UnityEngine::Vector3 v);
    // static public OVRPlugin/Vector3f ToFlippedZVector3f(UnityEngine.Vector3 v)
    // Offset: 0x164B7B0
    static ::GlobalNamespace::OVRPlugin::Vector3f ToFlippedZVector3f(::UnityEngine::Vector3 v);
    // static public UnityEngine.Vector4 FromVector4f(OVRPlugin/Vector4f v)
    // Offset: 0x1657490
    static ::UnityEngine::Vector4 FromVector4f(::GlobalNamespace::OVRPlugin::Vector4f v);
    // static public OVRPlugin/Vector4f ToVector4f(UnityEngine.Vector4 v)
    // Offset: 0x1657494
    static ::GlobalNamespace::OVRPlugin::Vector4f ToVector4f(::UnityEngine::Vector4 v);
    // static public UnityEngine.Quaternion FromQuatf(OVRPlugin/Quatf q)
    // Offset: 0x1657498
    static ::UnityEngine::Quaternion FromQuatf(::GlobalNamespace::OVRPlugin::Quatf q);
    // static public UnityEngine.Quaternion FromFlippedXQuatf(OVRPlugin/Quatf q)
    // Offset: 0x16542C4
    static ::UnityEngine::Quaternion FromFlippedXQuatf(::GlobalNamespace::OVRPlugin::Quatf q);
    // static public UnityEngine.Quaternion FromFlippedZQuatf(OVRPlugin/Quatf q)
    // Offset: 0x16542B8
    static ::UnityEngine::Quaternion FromFlippedZQuatf(::GlobalNamespace::OVRPlugin::Quatf q);
    // static public OVRPlugin/Quatf ToQuatf(UnityEngine.Quaternion q)
    // Offset: 0x165749C
    static ::GlobalNamespace::OVRPlugin::Quatf ToQuatf(::UnityEngine::Quaternion q);
    // static public OVRPlugin/Quatf ToFlippedXQuatf(UnityEngine.Quaternion q)
    // Offset: 0x16574A0
    static ::GlobalNamespace::OVRPlugin::Quatf ToFlippedXQuatf(::UnityEngine::Quaternion q);
    // static public OVRPlugin/Quatf ToFlippedZQuatf(UnityEngine.Quaternion q)
    // Offset: 0x16574AC
    static ::GlobalNamespace::OVRPlugin::Quatf ToFlippedZQuatf(::UnityEngine::Quaternion q);
    // static public OVR.OpenVR.HmdMatrix34_t ConvertToHMDMatrix34(UnityEngine.Matrix4x4 m)
    // Offset: 0x16574B8
    static ::OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(::UnityEngine::Matrix4x4 m);
    // static public UnityEngine.Transform FindChildRecursive(UnityEngine.Transform parent, System.String name)
    // Offset: 0x1657648
    static ::UnityEngine::Transform* FindChildRecursive(::UnityEngine::Transform* parent, ::StringW name);
    // static public System.Boolean Equals(UnityEngine.Gradient gradient, UnityEngine.Gradient otherGradient)
    // Offset: 0x1657968
    static bool Equals(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient);
    // static public System.Void CopyFrom(UnityEngine.Gradient gradient, UnityEngine.Gradient otherGradient)
    // Offset: 0x1657B88
    static void CopyFrom(::UnityEngine::Gradient* gradient, ::UnityEngine::Gradient* otherGradient);
  }; // OVRExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToTrackingSpacePose
// Il2CppName: ToTrackingSpacePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::Transform*, ::UnityEngine::Camera*)>(&GlobalNamespace::OVRExtensions::ToTrackingSpacePose)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToTrackingSpacePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, camera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToWorldSpacePose
// Il2CppName: ToWorldSpacePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (*)(::GlobalNamespace::OVRPose)>(&GlobalNamespace::OVRExtensions::ToWorldSpacePose)> {
  static const MethodInfo* get() {
    static auto* trackingSpacePose = &::il2cpp_utils::GetClassFromName("", "OVRPose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToWorldSpacePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackingSpacePose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToWorldSpacePose
// Il2CppName: ToWorldSpacePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (*)(::GlobalNamespace::OVRPose, ::UnityEngine::Camera*)>(&GlobalNamespace::OVRExtensions::ToWorldSpacePose)> {
  static const MethodInfo* get() {
    static auto* trackingSpacePose = &::il2cpp_utils::GetClassFromName("", "OVRPose")->byval_arg;
    static auto* mainCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToWorldSpacePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{trackingSpacePose, mainCamera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToHeadSpacePose
// Il2CppName: ToHeadSpacePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::Transform*, ::UnityEngine::Camera*)>(&GlobalNamespace::OVRExtensions::ToHeadSpacePose)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToHeadSpacePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, camera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToOVRPose
// Il2CppName: ToOVRPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (*)(::UnityEngine::Transform*, bool)>(&GlobalNamespace::OVRExtensions::ToOVRPose)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* isLocal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToOVRPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, isLocal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromOVRPose
// Il2CppName: FromOVRPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Transform*, ::GlobalNamespace::OVRPose, bool)>(&GlobalNamespace::OVRExtensions::FromOVRPose)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("", "OVRPose")->byval_arg;
    static auto* isLocal = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromOVRPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, pose, isLocal});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToOVRPose
// Il2CppName: ToOVRPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPose (*)(::GlobalNamespace::OVRPlugin::Posef)>(&GlobalNamespace::OVRExtensions::ToOVRPose)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToOVRPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFrustum
// Il2CppName: ToFrustum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTracker::Frustum (*)(::GlobalNamespace::OVRPlugin::Frustumf)>(&GlobalNamespace::OVRExtensions::ToFrustum)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Frustumf")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFrustum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromColorf
// Il2CppName: FromColorf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::GlobalNamespace::OVRPlugin::Colorf)>(&GlobalNamespace::OVRExtensions::FromColorf)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Colorf")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromColorf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToColorf
// Il2CppName: ToColorf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Colorf (*)(::UnityEngine::Color)>(&GlobalNamespace::OVRExtensions::ToColorf)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToColorf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromVector3f
// Il2CppName: FromVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRPlugin::Vector3f)>(&GlobalNamespace::OVRExtensions::FromVector3f)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector3f")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromFlippedXVector3f
// Il2CppName: FromFlippedXVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRPlugin::Vector3f)>(&GlobalNamespace::OVRExtensions::FromFlippedXVector3f)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector3f")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromFlippedXVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromFlippedZVector3f
// Il2CppName: FromFlippedZVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::OVRPlugin::Vector3f)>(&GlobalNamespace::OVRExtensions::FromFlippedZVector3f)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector3f")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromFlippedZVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToVector3f
// Il2CppName: ToVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Vector3f (*)(::UnityEngine::Vector3)>(&GlobalNamespace::OVRExtensions::ToVector3f)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFlippedXVector3f
// Il2CppName: ToFlippedXVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Vector3f (*)(::UnityEngine::Vector3)>(&GlobalNamespace::OVRExtensions::ToFlippedXVector3f)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFlippedXVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFlippedZVector3f
// Il2CppName: ToFlippedZVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Vector3f (*)(::UnityEngine::Vector3)>(&GlobalNamespace::OVRExtensions::ToFlippedZVector3f)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFlippedZVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromVector4f
// Il2CppName: FromVector4f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::GlobalNamespace::OVRPlugin::Vector4f)>(&GlobalNamespace::OVRExtensions::FromVector4f)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Vector4f")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromVector4f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToVector4f
// Il2CppName: ToVector4f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Vector4f (*)(::UnityEngine::Vector4)>(&GlobalNamespace::OVRExtensions::ToVector4f)> {
  static const MethodInfo* get() {
    static auto* v = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToVector4f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromQuatf
// Il2CppName: FromQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::OVRPlugin::Quatf)>(&GlobalNamespace::OVRExtensions::FromQuatf)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Quatf")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromFlippedXQuatf
// Il2CppName: FromFlippedXQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::OVRPlugin::Quatf)>(&GlobalNamespace::OVRExtensions::FromFlippedXQuatf)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Quatf")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromFlippedXQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromFlippedZQuatf
// Il2CppName: FromFlippedZQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::OVRPlugin::Quatf)>(&GlobalNamespace::OVRExtensions::FromFlippedZQuatf)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Quatf")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromFlippedZQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToQuatf
// Il2CppName: ToQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Quatf (*)(::UnityEngine::Quaternion)>(&GlobalNamespace::OVRExtensions::ToQuatf)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFlippedXQuatf
// Il2CppName: ToFlippedXQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Quatf (*)(::UnityEngine::Quaternion)>(&GlobalNamespace::OVRExtensions::ToFlippedXQuatf)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFlippedXQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFlippedZQuatf
// Il2CppName: ToFlippedZQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Quatf (*)(::UnityEngine::Quaternion)>(&GlobalNamespace::OVRExtensions::ToFlippedZQuatf)> {
  static const MethodInfo* get() {
    static auto* q = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFlippedZQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{q});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ConvertToHMDMatrix34
// Il2CppName: ConvertToHMDMatrix34
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::HmdMatrix34_t (*)(::UnityEngine::Matrix4x4)>(&GlobalNamespace::OVRExtensions::ConvertToHMDMatrix34)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ConvertToHMDMatrix34", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FindChildRecursive
// Il2CppName: FindChildRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)(::UnityEngine::Transform*, ::StringW)>(&GlobalNamespace::OVRExtensions::FindChildRecursive)> {
  static const MethodInfo* get() {
    static auto* parent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FindChildRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parent, name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*)>(&GlobalNamespace::OVRExtensions::Equals)> {
  static const MethodInfo* get() {
    static auto* gradient = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    static auto* otherGradient = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gradient, otherGradient});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Gradient*, ::UnityEngine::Gradient*)>(&GlobalNamespace::OVRExtensions::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* gradient = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    static auto* otherGradient = &::il2cpp_utils::GetClassFromName("UnityEngine", "Gradient")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gradient, otherGradient});
  }
};
