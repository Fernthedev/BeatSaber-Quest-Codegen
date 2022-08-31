// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_TrackedCamera
  class SteamVR_TrackedCamera;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_TrackedCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_TrackedCamera*, "", "SteamVR_TrackedCamera");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_TrackedCamera
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_TrackedCamera : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture
    class VideoStreamTexture;
    // Nested type: ::GlobalNamespace::SteamVR_TrackedCamera::VideoStream
    class VideoStream;
    // Get static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] distorted
    static ::ArrayW<::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*> _get_distorted();
    // Set static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] distorted
    static void _set_distorted(::ArrayW<::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*> value);
    // Get static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] undistorted
    static ::ArrayW<::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*> _get_undistorted();
    // Set static field: static private SteamVR_TrackedCamera/VideoStreamTexture[] undistorted
    static void _set_undistorted(::ArrayW<::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture*> value);
    // Get static field: static private SteamVR_TrackedCamera/VideoStream[] videostreams
    static ::ArrayW<::GlobalNamespace::SteamVR_TrackedCamera::VideoStream*> _get_videostreams();
    // Set static field: static private SteamVR_TrackedCamera/VideoStream[] videostreams
    static void _set_videostreams(::ArrayW<::GlobalNamespace::SteamVR_TrackedCamera::VideoStream*> value);
    // public System.Void .ctor()
    // Offset: 0x1BCC29C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_TrackedCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_TrackedCamera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_TrackedCamera*, creationType>()));
    }
    // static public SteamVR_TrackedCamera/VideoStreamTexture Distorted(System.Int32 deviceIndex)
    // Offset: 0x1BCBDC4
    static ::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* Distorted(int deviceIndex);
    // static public SteamVR_TrackedCamera/VideoStreamTexture Undistorted(System.Int32 deviceIndex)
    // Offset: 0x1BCBF64
    static ::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* Undistorted(int deviceIndex);
    // static public SteamVR_TrackedCamera/VideoStreamTexture Source(System.Boolean undistorted, System.Int32 deviceIndex)
    // Offset: 0x1BCC0B4
    static ::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* Source(bool undistorted, int deviceIndex);
    // static private SteamVR_TrackedCamera/VideoStream Stream(System.UInt32 deviceIndex)
    // Offset: 0x1BCC0C8
    static ::GlobalNamespace::SteamVR_TrackedCamera::VideoStream* Stream(uint deviceIndex);
  }; // SteamVR_TrackedCamera
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::Distorted
// Il2CppName: Distorted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* (*)(int)>(&GlobalNamespace::SteamVR_TrackedCamera::Distorted)> {
  static const MethodInfo* get() {
    static auto* deviceIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera*), "Distorted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::Undistorted
// Il2CppName: Undistorted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* (*)(int)>(&GlobalNamespace::SteamVR_TrackedCamera::Undistorted)> {
  static const MethodInfo* get() {
    static auto* deviceIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera*), "Undistorted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::Source
// Il2CppName: Source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_TrackedCamera::VideoStreamTexture* (*)(bool, int)>(&GlobalNamespace::SteamVR_TrackedCamera::Source)> {
  static const MethodInfo* get() {
    static auto* undistorted = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* deviceIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera*), "Source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{undistorted, deviceIndex});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_TrackedCamera::Stream
// Il2CppName: Stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SteamVR_TrackedCamera::VideoStream* (*)(uint)>(&GlobalNamespace::SteamVR_TrackedCamera::Stream)> {
  static const MethodInfo* get() {
    static auto* deviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_TrackedCamera*), "Stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceIndex});
  }
};
