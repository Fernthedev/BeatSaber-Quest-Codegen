// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.ReflectionMethodsCache
#include "UnityEngine/UI/ReflectionMethodsCache.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
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
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
  class ReflectionMethodsCache::RaycastAllCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: RaycastAllCallback
    RaycastAllCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19B3540
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionMethodsCache::RaycastAllCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionMethodsCache::RaycastAllCallback*, creationType>(object, method)));
    }
    // public UnityEngine.RaycastHit[] Invoke(UnityEngine.Ray r, System.Single f, System.Int32 i)
    // Offset: 0x19B3550
    ::Array<UnityEngine::RaycastHit>* Invoke(UnityEngine::Ray r, float f, int i);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Ray r, System.Single f, System.Int32 i, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19B38AC
    System::IAsyncResult* BeginInvoke(UnityEngine::Ray r, float f, int i, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.RaycastHit[] EndInvoke(System.IAsyncResult result)
    // Offset: 0x19B3980
    ::Array<UnityEngine::RaycastHit>* EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback*, "UnityEngine.UI", "ReflectionMethodsCache/RaycastAllCallback");
// Writing includes for template specializations
#include "UnityEngine/Ray.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::RaycastHit>* (UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::*)(UnityEngine::Ray, float, int)>(&UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::*)(UnityEngine::Ray, float, int, System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<UnityEngine::Ray>(), ::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<UnityEngine::RaycastHit>* (UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::*)(System::IAsyncResult*)>(&UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
