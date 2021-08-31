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
// Including type: UnityEngine.RaycastHit2D
#include "UnityEngine/RaycastHit2D.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
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
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache/UnityEngine.UI.GetRayIntersectionAllCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class ReflectionMethodsCache::GetRayIntersectionAllCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: GetRayIntersectionAllCallback
    GetRayIntersectionAllCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19D723C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionMethodsCache::GetRayIntersectionAllCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionMethodsCache::GetRayIntersectionAllCallback*, creationType>(object, method)));
    }
    // public UnityEngine.RaycastHit2D[] Invoke(UnityEngine.Ray r, System.Single f, System.Int32 i)
    // Offset: 0x19D724C
    ::Array<UnityEngine::RaycastHit2D>* Invoke(UnityEngine::Ray r, float f, int i);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Ray r, System.Single f, System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19D75A8
    System::IAsyncResult* BeginInvoke(UnityEngine::Ray r, float f, int i, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.RaycastHit2D[] EndInvoke(System.IAsyncResult result)
    // Offset: 0x19D767C
    ::Array<UnityEngine::RaycastHit2D>* EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.ReflectionMethodsCache/UnityEngine.UI.GetRayIntersectionAllCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/GetRayIntersectionAllCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::RaycastHit2D>* (UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::*)(UnityEngine::Ray, float, int)>(&UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, f, i});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::*)(UnityEngine::Ray, float, int, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, f, i, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::RaycastHit2D>* (UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::*)(System::IAsyncResult*)>(&UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
