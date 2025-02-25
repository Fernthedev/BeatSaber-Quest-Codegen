// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.ReflectionMethodsCache
#include "UnityEngine/UI/ReflectionMethodsCache.hpp"
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
  // Forward declaring type: RaycastHit2D
  struct RaycastHit2D;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache/UnityEngine.UI.Raycast2DCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectionMethodsCache::Raycast2DCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: Raycast2DCallback
    Raycast2DCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19DD7D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionMethodsCache::Raycast2DCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionMethodsCache::Raycast2DCallback*, creationType>(object, method)));
    }
    // public UnityEngine.RaycastHit2D Invoke(UnityEngine.Vector2 p1, UnityEngine.Vector2 p2, System.Single f, System.Int32 i)
    // Offset: 0x19DD7E4
    UnityEngine::RaycastHit2D Invoke(UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, float f, int i);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Vector2 p1, UnityEngine.Vector2 p2, System.Single f, System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19DDB38
    System::IAsyncResult* BeginInvoke(UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, float f, int i, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.RaycastHit2D EndInvoke(System.IAsyncResult result)
    // Offset: 0x19DDC1C
    UnityEngine::RaycastHit2D EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.ReflectionMethodsCache/UnityEngine.UI.Raycast2DCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback*, "UnityEngine.UI", "ReflectionMethodsCache/Raycast2DCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit2D (UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::*)(UnityEngine::Vector2, UnityEngine::Vector2, float, int)>(&UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2, f, i});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::*)(UnityEngine::Vector2, UnityEngine::Vector2, float, int, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* p1 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* p2 = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p1, p2, f, i, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RaycastHit2D (UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::*)(System::IAsyncResult*)>(&UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
