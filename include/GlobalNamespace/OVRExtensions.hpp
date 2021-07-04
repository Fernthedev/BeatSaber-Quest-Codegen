// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRTracker
#include "GlobalNamespace/OVRTracker.hpp"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class OVRExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: OVRExtensions
    OVRExtensions() noexcept {}
    // static public OVRPose ToTrackingSpacePose(UnityEngine.Transform transform, UnityEngine.Camera camera)
    // Offset: 0x1286F6C
    static GlobalNamespace::OVRPose ToTrackingSpacePose(UnityEngine::Transform* transform, UnityEngine::Camera* camera);
    // static public OVRPose ToWorldSpacePose(OVRPose trackingSpacePose)
    // Offset: 0x127E6E4
    static GlobalNamespace::OVRPose ToWorldSpacePose(GlobalNamespace::OVRPose trackingSpacePose);
    // static public OVRPose ToHeadSpacePose(UnityEngine.Transform transform, UnityEngine.Camera camera)
    // Offset: 0x12870D8
    static GlobalNamespace::OVRPose ToHeadSpacePose(UnityEngine::Transform* transform, UnityEngine::Camera* camera);
    // static public OVRPose ToOVRPose(UnityEngine.Transform t, System.Boolean isLocal)
    // Offset: 0x1287170
    static GlobalNamespace::OVRPose ToOVRPose(UnityEngine::Transform* t, bool isLocal);
    // static public System.Void FromOVRPose(UnityEngine.Transform t, OVRPose pose, System.Boolean isLocal)
    // Offset: 0x127CF2C
    static void FromOVRPose(UnityEngine::Transform* t, GlobalNamespace::OVRPose pose, bool isLocal);
    // static public OVRPose ToOVRPose(OVRPlugin/Posef p)
    // Offset: 0x127E8B0
    static GlobalNamespace::OVRPose ToOVRPose(GlobalNamespace::OVRPlugin::Posef p);
    // static public OVRTracker/Frustum ToFrustum(OVRPlugin/Frustumf f)
    // Offset: 0x1287204
    static GlobalNamespace::OVRTracker::Frustum ToFrustum(GlobalNamespace::OVRPlugin::Frustumf f);
    // static public UnityEngine.Color FromColorf(OVRPlugin/Colorf c)
    // Offset: 0x1287218
    static UnityEngine::Color FromColorf(GlobalNamespace::OVRPlugin::Colorf c);
    // static public OVRPlugin/Colorf ToColorf(UnityEngine.Color c)
    // Offset: 0x128721C
    static GlobalNamespace::OVRPlugin::Colorf ToColorf(UnityEngine::Color c);
    // static public UnityEngine.Vector3 FromVector3f(OVRPlugin/Vector3f v)
    // Offset: 0x127BAFC
    static UnityEngine::Vector3 FromVector3f(GlobalNamespace::OVRPlugin::Vector3f v);
    // static public UnityEngine.Vector3 FromFlippedXVector3f(OVRPlugin/Vector3f v)
    // Offset: 0x12840C0
    static UnityEngine::Vector3 FromFlippedXVector3f(GlobalNamespace::OVRPlugin::Vector3f v);
    // static public UnityEngine.Vector3 FromFlippedZVector3f(OVRPlugin/Vector3f v)
    // Offset: 0x127B4D4
    static UnityEngine::Vector3 FromFlippedZVector3f(GlobalNamespace::OVRPlugin::Vector3f v);
    // static public OVRPlugin/Vector3f ToVector3f(UnityEngine.Vector3 v)
    // Offset: 0x1287220
    static GlobalNamespace::OVRPlugin::Vector3f ToVector3f(UnityEngine::Vector3 v);
    // static public OVRPlugin/Vector3f ToFlippedXVector3f(UnityEngine.Vector3 v)
    // Offset: 0x1287224
    static GlobalNamespace::OVRPlugin::Vector3f ToFlippedXVector3f(UnityEngine::Vector3 v);
    // static public OVRPlugin/Vector3f ToFlippedZVector3f(UnityEngine.Vector3 v)
    // Offset: 0x127B5D4
    static GlobalNamespace::OVRPlugin::Vector3f ToFlippedZVector3f(UnityEngine::Vector3 v);
    // static public UnityEngine.Vector4 FromVector4f(OVRPlugin/Vector4f v)
    // Offset: 0x128722C
    static UnityEngine::Vector4 FromVector4f(GlobalNamespace::OVRPlugin::Vector4f v);
    // static public OVRPlugin/Vector4f ToVector4f(UnityEngine.Vector4 v)
    // Offset: 0x1287230
    static GlobalNamespace::OVRPlugin::Vector4f ToVector4f(UnityEngine::Vector4 v);
    // static public UnityEngine.Quaternion FromQuatf(OVRPlugin/Quatf q)
    // Offset: 0x1287234
    static UnityEngine::Quaternion FromQuatf(GlobalNamespace::OVRPlugin::Quatf q);
    // static public UnityEngine.Quaternion FromFlippedXQuatf(OVRPlugin/Quatf q)
    // Offset: 0x12840D4
    static UnityEngine::Quaternion FromFlippedXQuatf(GlobalNamespace::OVRPlugin::Quatf q);
    // static public UnityEngine.Quaternion FromFlippedZQuatf(OVRPlugin/Quatf q)
    // Offset: 0x12840C8
    static UnityEngine::Quaternion FromFlippedZQuatf(GlobalNamespace::OVRPlugin::Quatf q);
    // static public OVRPlugin/Quatf ToQuatf(UnityEngine.Quaternion q)
    // Offset: 0x1287238
    static GlobalNamespace::OVRPlugin::Quatf ToQuatf(UnityEngine::Quaternion q);
    // static public OVRPlugin/Quatf ToFlippedXQuatf(UnityEngine.Quaternion q)
    // Offset: 0x128723C
    static GlobalNamespace::OVRPlugin::Quatf ToFlippedXQuatf(UnityEngine::Quaternion q);
    // static public OVRPlugin/Quatf ToFlippedZQuatf(UnityEngine.Quaternion q)
    // Offset: 0x1287248
    static GlobalNamespace::OVRPlugin::Quatf ToFlippedZQuatf(UnityEngine::Quaternion q);
    // static public OVR.OpenVR.HmdMatrix34_t ConvertToHMDMatrix34(UnityEngine.Matrix4x4 m)
    // Offset: 0x1287254
    static OVR::OpenVR::HmdMatrix34_t ConvertToHMDMatrix34(UnityEngine::Matrix4x4 m);
    // static public UnityEngine.Transform FindChildRecursive(UnityEngine.Transform parent, System.String name)
    // Offset: 0x12873E4
    static UnityEngine::Transform* FindChildRecursive(UnityEngine::Transform* parent, ::Il2CppString* name);
    // static public System.Boolean Equals(UnityEngine.Gradient gradient, UnityEngine.Gradient otherGradient)
    // Offset: 0x1287704
    static bool Equals(UnityEngine::Gradient* gradient, UnityEngine::Gradient* otherGradient);
    // static public System.Void CopyFrom(UnityEngine.Gradient gradient, UnityEngine.Gradient otherGradient)
    // Offset: 0x1287924
    static void CopyFrom(UnityEngine::Gradient* gradient, UnityEngine::Gradient* otherGradient);
  }; // OVRExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRExtensions*, "", "OVRExtensions");
// Writing includes for template specializations
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Camera.hpp"
#include "GlobalNamespace/OVRPose.hpp"
#include "GlobalNamespace/OVRPlugin_Frustumf.hpp"
#include "GlobalNamespace/OVRPlugin_Colorf.hpp"
#include "UnityEngine/Color.hpp"
#include "UnityEngine/Vector3.hpp"
#include "GlobalNamespace/OVRPlugin_Vector4f.hpp"
#include "UnityEngine/Vector4.hpp"
#include "UnityEngine/Quaternion.hpp"
#include "UnityEngine/Matrix4x4.hpp"
#include "UnityEngine/Gradient.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToTrackingSpacePose
// Il2CppName: ToTrackingSpacePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (*)(UnityEngine::Transform*, UnityEngine::Camera*)>(&GlobalNamespace::OVRExtensions::ToTrackingSpacePose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToTrackingSpacePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToWorldSpacePose
// Il2CppName: ToWorldSpacePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (*)(GlobalNamespace::OVRPose)>(&GlobalNamespace::OVRExtensions::ToWorldSpacePose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToWorldSpacePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPose>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToHeadSpacePose
// Il2CppName: ToHeadSpacePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (*)(UnityEngine::Transform*, UnityEngine::Camera*)>(&GlobalNamespace::OVRExtensions::ToHeadSpacePose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToHeadSpacePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Camera*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToOVRPose
// Il2CppName: ToOVRPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (*)(UnityEngine::Transform*, bool)>(&GlobalNamespace::OVRExtensions::ToOVRPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToOVRPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromOVRPose
// Il2CppName: FromOVRPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Transform*, GlobalNamespace::OVRPose, bool)>(&GlobalNamespace::OVRExtensions::FromOVRPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromOVRPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPose>(), ::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToOVRPose
// Il2CppName: ToOVRPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPose (*)(GlobalNamespace::OVRPlugin::Posef)>(&GlobalNamespace::OVRExtensions::ToOVRPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToOVRPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Posef>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFrustum
// Il2CppName: ToFrustum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRTracker::Frustum (*)(GlobalNamespace::OVRPlugin::Frustumf)>(&GlobalNamespace::OVRExtensions::ToFrustum)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFrustum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Frustumf>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromColorf
// Il2CppName: FromColorf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (*)(GlobalNamespace::OVRPlugin::Colorf)>(&GlobalNamespace::OVRExtensions::FromColorf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromColorf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Colorf>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToColorf
// Il2CppName: ToColorf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Colorf (*)(UnityEngine::Color)>(&GlobalNamespace::OVRExtensions::ToColorf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToColorf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Color>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromVector3f
// Il2CppName: FromVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::OVRPlugin::Vector3f)>(&GlobalNamespace::OVRExtensions::FromVector3f)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Vector3f>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromFlippedXVector3f
// Il2CppName: FromFlippedXVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::OVRPlugin::Vector3f)>(&GlobalNamespace::OVRExtensions::FromFlippedXVector3f)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromFlippedXVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Vector3f>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromFlippedZVector3f
// Il2CppName: FromFlippedZVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(GlobalNamespace::OVRPlugin::Vector3f)>(&GlobalNamespace::OVRExtensions::FromFlippedZVector3f)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromFlippedZVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Vector3f>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToVector3f
// Il2CppName: ToVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Vector3f (*)(UnityEngine::Vector3)>(&GlobalNamespace::OVRExtensions::ToVector3f)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFlippedXVector3f
// Il2CppName: ToFlippedXVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Vector3f (*)(UnityEngine::Vector3)>(&GlobalNamespace::OVRExtensions::ToFlippedXVector3f)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFlippedXVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFlippedZVector3f
// Il2CppName: ToFlippedZVector3f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Vector3f (*)(UnityEngine::Vector3)>(&GlobalNamespace::OVRExtensions::ToFlippedZVector3f)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFlippedZVector3f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector3>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromVector4f
// Il2CppName: FromVector4f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector4 (*)(GlobalNamespace::OVRPlugin::Vector4f)>(&GlobalNamespace::OVRExtensions::FromVector4f)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromVector4f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Vector4f>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToVector4f
// Il2CppName: ToVector4f
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Vector4f (*)(UnityEngine::Vector4)>(&GlobalNamespace::OVRExtensions::ToVector4f)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToVector4f", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Vector4>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromQuatf
// Il2CppName: FromQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(GlobalNamespace::OVRPlugin::Quatf)>(&GlobalNamespace::OVRExtensions::FromQuatf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Quatf>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromFlippedXQuatf
// Il2CppName: FromFlippedXQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(GlobalNamespace::OVRPlugin::Quatf)>(&GlobalNamespace::OVRExtensions::FromFlippedXQuatf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromFlippedXQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Quatf>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FromFlippedZQuatf
// Il2CppName: FromFlippedZQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Quaternion (*)(GlobalNamespace::OVRPlugin::Quatf)>(&GlobalNamespace::OVRExtensions::FromFlippedZQuatf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FromFlippedZQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::OVRPlugin::Quatf>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToQuatf
// Il2CppName: ToQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Quatf (*)(UnityEngine::Quaternion)>(&GlobalNamespace::OVRExtensions::ToQuatf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFlippedXQuatf
// Il2CppName: ToFlippedXQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Quatf (*)(UnityEngine::Quaternion)>(&GlobalNamespace::OVRExtensions::ToFlippedXQuatf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFlippedXQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ToFlippedZQuatf
// Il2CppName: ToFlippedZQuatf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::OVRPlugin::Quatf (*)(UnityEngine::Quaternion)>(&GlobalNamespace::OVRExtensions::ToFlippedZQuatf)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ToFlippedZQuatf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Quaternion>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::ConvertToHMDMatrix34
// Il2CppName: ConvertToHMDMatrix34
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::HmdMatrix34_t (*)(UnityEngine::Matrix4x4)>(&GlobalNamespace::OVRExtensions::ConvertToHMDMatrix34)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "ConvertToHMDMatrix34", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Matrix4x4>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::FindChildRecursive
// Il2CppName: FindChildRecursive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Transform* (*)(UnityEngine::Transform*, ::Il2CppString*)>(&GlobalNamespace::OVRExtensions::FindChildRecursive)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "FindChildRecursive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Transform*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Gradient*, UnityEngine::Gradient*)>(&GlobalNamespace::OVRExtensions::Equals)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Gradient*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Gradient*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRExtensions::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Gradient*, UnityEngine::Gradient*)>(&GlobalNamespace::OVRExtensions::CopyFrom)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRExtensions*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Gradient*>(), ::il2cpp_utils::ExtractIndependentType<UnityEngine::Gradient*>()});
  }
};
