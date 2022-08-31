// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SteamVR_TrackedCamera
#include "GlobalNamespace/SteamVR_TrackedCamera.hpp"
// Including type: Valve.VR.VRTextureBounds_t
#include "Valve/VR/VRTextureBounds_t.hpp"
// Including type: Valve.VR.CameraVideoStreamFrameHeader_t
#include "Valve/VR/CameraVideoStreamFrameHeader_t.hpp"
// Including type: SteamVR_Utils
#include "GlobalNamespace/SteamVR_Utils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Skipping declaration: EVRTrackedCameraFrameType because it is already included!
  // Skipping declaration: TrackedDevicePose_t because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*, "", "SteamVR_TrackedCamera/VideoStreamTexture");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA2
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_TrackedCamera/VideoStreamTexture
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_TrackedCamera::VideoStreamTexture : public ::Il2CppObject {
    public:
    public:
    // private System.Boolean <undistorted>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool undistorted;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: undistorted and: frameBounds
    char __padding0[0x3] = {};
    // private Valve.VR.VRTextureBounds_t <frameBounds>k__BackingField
    // Size: 0x10
    // Offset: 0x14
    ::Valve::VR::VRTextureBounds_t frameBounds;
    // Field size check
    static_assert(sizeof(::Valve::VR::VRTextureBounds_t) == 0x10);
    // Padding between fields: frameBounds and: texture
    char __padding1[0x4] = {};
    // private UnityEngine.Texture2D _texture
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Texture2D* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // private System.Int32 prevFrameCount
    // Size: 0x4
    // Offset: 0x30
    int prevFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 glTextureId
    // Size: 0x4
    // Offset: 0x34
    uint glTextureId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private SteamVR_TrackedCamera/VideoStream videostream
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::SteamVR_TrackedCamera::VideoStream* videostream;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SteamVR_TrackedCamera::VideoStream*) == 0x8);
    // private Valve.VR.CameraVideoStreamFrameHeader_t header
    // Size: 0x62
    // Offset: 0x40
    ::Valve::VR::CameraVideoStreamFrameHeader_t header;
    // Field size check
    static_assert(sizeof(::Valve::VR::CameraVideoStreamFrameHeader_t) == 0x62);
    public:
    // Get instance field reference: private System.Boolean <undistorted>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$undistorted$k__BackingField();
    // Get instance field reference: private Valve.VR.VRTextureBounds_t <frameBounds>k__BackingField
    [[deprecated("Use field access instead!")]] ::Valve::VR::VRTextureBounds_t& dyn_$frameBounds$k__BackingField();
    // Get instance field reference: private UnityEngine.Texture2D _texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn__texture();
    // Get instance field reference: private System.Int32 prevFrameCount
    [[deprecated("Use field access instead!")]] int& dyn_prevFrameCount();
    // Get instance field reference: private System.UInt32 glTextureId
    [[deprecated("Use field access instead!")]] uint& dyn_glTextureId();
    // Get instance field reference: private SteamVR_TrackedCamera/VideoStream videostream
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SteamVR_TrackedCamera::VideoStream*& dyn_videostream();
    // Get instance field reference: private Valve.VR.CameraVideoStreamFrameHeader_t header
    [[deprecated("Use field access instead!")]] ::Valve::VR::CameraVideoStreamFrameHeader_t& dyn_header();
    // public System.Boolean get_undistorted()
    // Offset: 0x1BCC46C
    bool get_undistorted();
    // private System.Void set_undistorted(System.Boolean value)
    // Offset: 0x1BCC474
    void set_undistorted(bool value);
    // public System.UInt32 get_deviceIndex()
    // Offset: 0x1BCC480
    uint get_deviceIndex();
    // public System.Boolean get_hasCamera()
    // Offset: 0x1BCC49C
    bool get_hasCamera();
    // public System.Boolean get_hasTracking()
    // Offset: 0x1BCC4B8
    bool get_hasTracking();
    // public System.UInt32 get_frameId()
    // Offset: 0x1BCC83C
    uint get_frameId();
    // public Valve.VR.VRTextureBounds_t get_frameBounds()
    // Offset: 0x1BCC860
    ::Valve::VR::VRTextureBounds_t get_frameBounds();
    // private System.Void set_frameBounds(Valve.VR.VRTextureBounds_t value)
    // Offset: 0x1BCC86C
    void set_frameBounds(::Valve::VR::VRTextureBounds_t value);
    // public Valve.VR.EVRTrackedCameraFrameType get_frameType()
    // Offset: 0x1BCC878
    ::Valve::VR::EVRTrackedCameraFrameType get_frameType();
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x1BCC880
    ::UnityEngine::Texture2D* get_texture();
    // public SteamVR_Utils/RigidTransform get_transform()
    // Offset: 0x1BCC8A4
    ::GlobalNamespace::SteamVR_Utils::RigidTransform get_transform();
    // public UnityEngine.Vector3 get_velocity()
    // Offset: 0x1BCCB18
    ::UnityEngine::Vector3 get_velocity();
    // public UnityEngine.Vector3 get_angularVelocity()
    // Offset: 0x1BCCB68
    ::UnityEngine::Vector3 get_angularVelocity();
    // public System.Void .ctor(System.UInt32 deviceIndex, System.Boolean undistorted)
    // Offset: 0x1BCBF14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TrackedCamera::VideoStreamTexture* New_ctor(uint deviceIndex, bool undistorted) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TrackedCamera::VideoStreamTexture*, creationType>(deviceIndex, undistorted)));
    }
    // public Valve.VR.TrackedDevicePose_t GetPose()
    // Offset: 0x1BCCBBC
    ::Valve::VR::TrackedDevicePose_t GetPose();
    // public System.UInt64 Acquire()
    // Offset: 0x1BCCBEC
    uint64_t Acquire();
    // public System.UInt64 Release()
    // Offset: 0x1BCCC04
    uint64_t Release();
    // private System.Void Update()
    // Offset: 0x1BCC4DC
    void Update();
  }; // SteamVR_TrackedCamera/VideoStreamTexture
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_TrackedCamera::VideoStreamTexture), 64 + sizeof(::Valve::VR::CameraVideoStreamFrameHeader_t)> __GlobalNamespace_SteamVR_TrackedCamera_VideoStreamTextureSizeCheck;
  static_assert(sizeof(SteamVR_TrackedCamera::VideoStreamTexture) == 0xA2);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_undistorted
// Il2CppName: get_undistorted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_undistorted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_undistorted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::set_undistorted
// Il2CppName: set_undistorted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)(bool)>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::set_undistorted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "set_undistorted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_deviceIndex
// Il2CppName: get_deviceIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_deviceIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_deviceIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_hasCamera
// Il2CppName: get_hasCamera
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_hasCamera)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_hasCamera", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_hasTracking
// Il2CppName: get_hasTracking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_hasTracking)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_hasTracking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameId
// Il2CppName: get_frameId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_frameId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameBounds
// Il2CppName: get_frameBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::VRTextureBounds_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameBounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_frameBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::set_frameBounds
// Il2CppName: set_frameBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)(::Valve::VR::VRTextureBounds_t)>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::set_frameBounds)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Valve.VR", "VRTextureBounds_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "set_frameBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameType
// Il2CppName: get_frameType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::EVRTrackedCameraFrameType (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_frameType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_frameType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_texture
// Il2CppName: get_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_texture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_Utils::RigidTransform (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_velocity
// Il2CppName: get_velocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_velocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_velocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_angularVelocity
// Il2CppName: get_angularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::get_angularVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "get_angularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::GetPose
// Il2CppName: GetPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Valve::VR::TrackedDevicePose_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::GetPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "GetPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Acquire
// Il2CppName: Acquire
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Acquire)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "Acquire", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::*)()>(&GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
