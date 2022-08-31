// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AudioClip::PCMSetPositionCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioClip::PCMSetPositionCallback*, "UnityEngine", "AudioClip/PCMSetPositionCallback");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioClip::PCMSetPositionCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2AFE45C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClip::PCMSetPositionCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AudioClip::PCMSetPositionCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClip::PCMSetPositionCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 position)
    // Offset: 0x2AFE1BC
    void Invoke(int position);
    // public System.IAsyncResult BeginInvoke(System.Int32 position, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2AFE46C
    ::System::IAsyncResult* BeginInvoke(int position, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2AFE4F8
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.AudioClip/UnityEngine.PCMSetPositionCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AudioClip::PCMSetPositionCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AudioClip::PCMSetPositionCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::PCMSetPositionCallback::*)(int)>(&UnityEngine::AudioClip::PCMSetPositionCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip::PCMSetPositionCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::PCMSetPositionCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::AudioClip::PCMSetPositionCallback::*)(int, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::AudioClip::PCMSetPositionCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip::PCMSetPositionCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::AudioClip::PCMSetPositionCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AudioClip::PCMSetPositionCallback::*)(::System::IAsyncResult*)>(&UnityEngine::AudioClip::PCMSetPositionCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AudioClip::PCMSetPositionCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
