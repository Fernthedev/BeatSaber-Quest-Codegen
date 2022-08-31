// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RootMotion.FinalIK.InteractionSystem
#include "RootMotion/FinalIK/InteractionSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
  // Forward declaring type: InteractionObject
  class InteractionObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::RootMotion::FinalIK::InteractionSystem::InteractionDelegate);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionSystem::InteractionDelegate*, "RootMotion.FinalIK", "InteractionSystem/InteractionDelegate");
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionSystem/RootMotion.FinalIK.InteractionDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionSystem::InteractionDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x23C8230
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionSystem::InteractionDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::RootMotion::FinalIK::InteractionSystem::InteractionDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionSystem::InteractionDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x23C1DF4
    void Invoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject);
    // public System.IAsyncResult BeginInvoke(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject, System.AsyncCallback callback, System.Object object)
    // Offset: 0x23C96B0
    ::System::IAsyncResult* BeginInvoke(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x23C9748
    void EndInvoke(::System::IAsyncResult* result);
  }; // RootMotion.FinalIK.InteractionSystem/RootMotion.FinalIK.InteractionDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionSystem::InteractionDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionSystem::InteractionDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionSystem::InteractionDelegate::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*)>(&RootMotion::FinalIK::InteractionSystem::InteractionDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* effectorType = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FullBodyBipedEffector")->byval_arg;
    static auto* interactionObject = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionSystem::InteractionDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effectorType, interactionObject});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionSystem::InteractionDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (RootMotion::FinalIK::InteractionSystem::InteractionDelegate::*)(::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&RootMotion::FinalIK::InteractionSystem::InteractionDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* effectorType = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "FullBodyBipedEffector")->byval_arg;
    static auto* interactionObject = &::il2cpp_utils::GetClassFromName("RootMotion.FinalIK", "InteractionObject")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionSystem::InteractionDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effectorType, interactionObject, callback, object});
  }
};
// Writing MetadataGetter for method: RootMotion::FinalIK::InteractionSystem::InteractionDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::FinalIK::InteractionSystem::InteractionDelegate::*)(::System::IAsyncResult*)>(&RootMotion::FinalIK::InteractionSystem::InteractionDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::FinalIK::InteractionSystem::InteractionDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
