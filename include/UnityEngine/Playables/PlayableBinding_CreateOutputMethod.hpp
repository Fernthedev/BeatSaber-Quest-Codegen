// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableBinding/UnityEngine.Playables.CreateOutputMethod
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class PlayableBinding::CreateOutputMethod : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: CreateOutputMethod
    CreateOutputMethod() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D0C2C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableBinding::CreateOutputMethod* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableBinding::CreateOutputMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableBinding::CreateOutputMethod*, creationType>(object, method)));
    }
    // public UnityEngine.Playables.PlayableOutput Invoke(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0x1D0BF34
    UnityEngine::Playables::PlayableOutput Invoke(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Playables.PlayableGraph graph, System.String name, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D0C2D4
    System::IAsyncResult* BeginInvoke(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.Playables.PlayableOutput EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D0C36C
    UnityEngine::Playables::PlayableOutput EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Playables.PlayableBinding/UnityEngine.Playables.CreateOutputMethod
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableBinding::CreateOutputMethod*, "UnityEngine.Playables", "PlayableBinding/CreateOutputMethod");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBinding::CreateOutputMethod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBinding::CreateOutputMethod::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutput (UnityEngine::Playables::PlayableBinding::CreateOutputMethod::*)(UnityEngine::Playables::PlayableGraph, ::Il2CppString*)>(&UnityEngine::Playables::PlayableBinding::CreateOutputMethod::Invoke)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBinding::CreateOutputMethod*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBinding::CreateOutputMethod::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::Playables::PlayableBinding::CreateOutputMethod::*)(UnityEngine::Playables::PlayableGraph, ::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Playables::PlayableBinding::CreateOutputMethod::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* graph = &::il2cpp_utils::GetClassFromName("UnityEngine.Playables", "PlayableGraph")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBinding::CreateOutputMethod*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{graph, name, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Playables::PlayableBinding::CreateOutputMethod::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableOutput (UnityEngine::Playables::PlayableBinding::CreateOutputMethod::*)(System::IAsyncResult*)>(&UnityEngine::Playables::PlayableBinding::CreateOutputMethod::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Playables::PlayableBinding::CreateOutputMethod*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
