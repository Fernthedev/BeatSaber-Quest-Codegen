// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: AvatarPoseController
#include "GlobalNamespace/AvatarPoseController.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPoseController/PositionsWillBeSetDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarPoseController::PositionsWillBeSetDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: PositionsWillBeSetDelegate
    PositionsWillBeSetDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x117C298
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPoseController::PositionsWillBeSetDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPoseController::PositionsWillBeSetDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition)
    // Offset: 0x117B570
    void Invoke(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition, System.AsyncCallback callback, System.Object object)
    // Offset: 0x117C2A8
    System::IAsyncResult* BeginInvoke(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition, System.IAsyncResult result)
    // Offset: 0x117C3D0
    void EndInvoke(ByRef<UnityEngine::Vector3> newHeadPosition, ByRef<UnityEngine::Vector3> newLeftHandPosition, ByRef<UnityEngine::Vector3> newRightHandPosition, System::IAsyncResult* result);
  }; // AvatarPoseController/PositionsWillBeSetDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate*, "", "AvatarPoseController/PositionsWillBeSetDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>)>(&GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* headPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* leftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* newHeadPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newLeftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newRightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::*)(UnityEngine::Vector3, UnityEngine::Vector3, UnityEngine::Vector3, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* headPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* leftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* newHeadPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newLeftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newRightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition, newRightHandPosition, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::*)(ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, ByRef<UnityEngine::Vector3>, System::IAsyncResult*)>(&GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* newHeadPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newLeftHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* newRightHandPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newHeadPosition, newLeftHandPosition, newRightHandPosition, result});
  }
};
