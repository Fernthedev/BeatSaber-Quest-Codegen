// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Cubemap
  class Cubemap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: OVRCubemapCapture
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRCubemapCapture : public UnityEngine::MonoBehaviour {
    public:
    // public System.Boolean autoTriggerAfterLaunch
    // Size: 0x1
    // Offset: 0x18
    bool autoTriggerAfterLaunch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: autoTriggerAfterLaunch and: autoTriggerDelay
    char __padding0[0x3] = {};
    // public System.Single autoTriggerDelay
    // Size: 0x4
    // Offset: 0x1C
    float autoTriggerDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single autoTriggerElapse
    // Size: 0x4
    // Offset: 0x20
    float autoTriggerElapse;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.KeyCode triggeredByKey
    // Size: 0x4
    // Offset: 0x24
    UnityEngine::KeyCode triggeredByKey;
    // Field size check
    static_assert(sizeof(UnityEngine::KeyCode) == 0x4);
    // public System.String pathName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* pathName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 cubemapSize
    // Size: 0x4
    // Offset: 0x30
    int cubemapSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: OVRCubemapCapture
    OVRCubemapCapture(bool autoTriggerAfterLaunch_ = {}, float autoTriggerDelay_ = {}, float autoTriggerElapse_ = {}, UnityEngine::KeyCode triggeredByKey_ = {}, ::Il2CppString* pathName_ = {}, int cubemapSize_ = {}) noexcept : autoTriggerAfterLaunch{autoTriggerAfterLaunch_}, autoTriggerDelay{autoTriggerDelay_}, autoTriggerElapse{autoTriggerElapse_}, triggeredByKey{triggeredByKey_}, pathName{pathName_}, cubemapSize{cubemapSize_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean autoTriggerAfterLaunch
    bool& dyn_autoTriggerAfterLaunch();
    // Get instance field reference: public System.Single autoTriggerDelay
    float& dyn_autoTriggerDelay();
    // Get instance field reference: private System.Single autoTriggerElapse
    float& dyn_autoTriggerElapse();
    // Get instance field reference: public UnityEngine.KeyCode triggeredByKey
    UnityEngine::KeyCode& dyn_triggeredByKey();
    // Get instance field reference: public System.String pathName
    ::Il2CppString*& dyn_pathName();
    // Get instance field reference: public System.Int32 cubemapSize
    int& dyn_cubemapSize();
    // private System.Void Update()
    // Offset: 0x12B37E4
    void Update();
    // static public System.Void TriggerCubemapCapture(UnityEngine.Vector3 capturePos, System.Int32 cubemapSize, System.String pathName)
    // Offset: 0x12B389C
    static void TriggerCubemapCapture(UnityEngine::Vector3 capturePos, int cubemapSize, ::Il2CppString* pathName);
    // static public System.Void RenderIntoCubemap(UnityEngine.Camera ownerCamera, UnityEngine.Cubemap outCubemap)
    // Offset: 0x12B3B08
    static void RenderIntoCubemap(UnityEngine::Camera* ownerCamera, UnityEngine::Cubemap* outCubemap);
    // static public System.Boolean SaveCubemapCapture(UnityEngine.Cubemap cubemap, System.String pathName)
    // Offset: 0x12B4164
    static bool SaveCubemapCapture(UnityEngine::Cubemap* cubemap, ::Il2CppString* pathName);
    // public System.Void .ctor()
    // Offset: 0x12B485C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCubemapCapture* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRCubemapCapture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCubemapCapture*, creationType>()));
    }
  }; // OVRCubemapCapture
  #pragma pack(pop)
  static check_size<sizeof(OVRCubemapCapture), 48 + sizeof(int)> __GlobalNamespace_OVRCubemapCaptureSizeCheck;
  static_assert(sizeof(OVRCubemapCapture) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCubemapCapture*, "", "OVRCubemapCapture");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRCubemapCapture::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCubemapCapture::*)()>(&GlobalNamespace::OVRCubemapCapture::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCubemapCapture*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture
// Il2CppName: TriggerCubemapCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Vector3, int, ::Il2CppString*)>(&GlobalNamespace::OVRCubemapCapture::TriggerCubemapCapture)> {
  static const MethodInfo* get() {
    static auto* capturePos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* cubemapSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pathName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCubemapCapture*), "TriggerCubemapCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capturePos, cubemapSize, pathName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap
// Il2CppName: RenderIntoCubemap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Camera*, UnityEngine::Cubemap*)>(&GlobalNamespace::OVRCubemapCapture::RenderIntoCubemap)> {
  static const MethodInfo* get() {
    static auto* ownerCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* outCubemap = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cubemap")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCubemapCapture*), "RenderIntoCubemap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ownerCamera, outCubemap});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture
// Il2CppName: SaveCubemapCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::Cubemap*, ::Il2CppString*)>(&GlobalNamespace::OVRCubemapCapture::SaveCubemapCapture)> {
  static const MethodInfo* get() {
    static auto* cubemap = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cubemap")->byval_arg;
    static auto* pathName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCubemapCapture*), "SaveCubemapCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cubemap, pathName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCubemapCapture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
