// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CommandBufferGOCore
#include "GlobalNamespace/CommandBufferGOCore.hpp"
// Including type: UnityEngine.Rendering.CameraEvent
#include "UnityEngine/Rendering/CameraEvent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CommandBufferOwners
  class CommandBufferOwners;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CommandBufferGrabPass
  class CommandBufferGrabPass;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(GlobalNamespace::CommandBufferGrabPass);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CommandBufferGrabPass*, "", "CommandBufferGrabPass");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: CommandBufferGrabPass
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class CommandBufferGrabPass : public GlobalNamespace::CommandBufferGOCore {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String _textureName
    // Size: 0x8
    // Offset: 0x28
    ::StringW textureName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Rendering.CameraEvent _cameraEvent
    // Size: 0x4
    // Offset: 0x30
    UnityEngine::Rendering::CameraEvent cameraEvent;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::CameraEvent) == 0x4);
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
    static System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* _get__cameras();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
    static void _set__cameras(System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* value);
    // Get instance field reference: private System.String _textureName
    ::StringW& dyn__textureName();
    // Get instance field reference: private UnityEngine.Rendering.CameraEvent _cameraEvent
    UnityEngine::Rendering::CameraEvent& dyn__cameraEvent();
    // public System.Void .ctor()
    // Offset: 0x2E0B970
    // Implemented from: CommandBufferGOCore
    // Base method: System.Void CommandBufferGOCore::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommandBufferGrabPass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CommandBufferGrabPass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommandBufferGrabPass*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2E0B9D0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
    // protected override UnityEngine.Rendering.CommandBuffer CreateCommandBuffer(UnityEngine.Camera camera)
    // Offset: 0x2E0B724
    // Implemented from: CommandBufferGOCore
    // Base method: UnityEngine.Rendering.CommandBuffer CommandBufferGOCore::CreateCommandBuffer(UnityEngine.Camera camera)
    UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(UnityEngine::Camera* camera);
    // protected override System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> CamerasDict()
    // Offset: 0x2E0B900
    // Implemented from: CommandBufferGOCore
    // Base method: System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> CommandBufferGOCore::CamerasDict()
    System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* CamerasDict();
    // protected override UnityEngine.Rendering.CameraEvent CommandBufferCameraEvent()
    // Offset: 0x2E0B968
    // Implemented from: CommandBufferGOCore
    // Base method: UnityEngine.Rendering.CameraEvent CommandBufferGOCore::CommandBufferCameraEvent()
    UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();
  }; // CommandBufferGrabPass
  #pragma pack(pop)
  static check_size<sizeof(CommandBufferGrabPass), 48 + sizeof(UnityEngine::Rendering::CameraEvent)> __GlobalNamespace_CommandBufferGrabPassSizeCheck;
  static_assert(sizeof(CommandBufferGrabPass) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CommandBufferGrabPass::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CommandBufferGrabPass*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer
// Il2CppName: CreateCommandBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::CommandBuffer* (GlobalNamespace::CommandBufferGrabPass::*)(UnityEngine::Camera*)>(&GlobalNamespace::CommandBufferGrabPass::CreateCommandBuffer)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CommandBufferGrabPass*), "CreateCommandBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::CamerasDict
// Il2CppName: CamerasDict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* (GlobalNamespace::CommandBufferGrabPass::*)()>(&GlobalNamespace::CommandBufferGrabPass::CamerasDict)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CommandBufferGrabPass*), "CamerasDict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent
// Il2CppName: CommandBufferCameraEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Rendering::CameraEvent (GlobalNamespace::CommandBufferGrabPass::*)()>(&GlobalNamespace::CommandBufferGrabPass::CommandBufferCameraEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CommandBufferGrabPass*), "CommandBufferCameraEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
