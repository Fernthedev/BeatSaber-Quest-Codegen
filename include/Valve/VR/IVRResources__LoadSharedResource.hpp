// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRResources
#include "Valve/VR/IVRResources.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRResources/_LoadSharedResource
  // [UnmanagedFunctionPointerAttribute] Offset: DD484C
  class IVRResources::_LoadSharedResource : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _LoadSharedResource
    _LoadSharedResource() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8E688
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRResources::_LoadSharedResource* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRResources::_LoadSharedResource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRResources::_LoadSharedResource*, creationType>(object, method)));
    }
    // public System.UInt32 Invoke(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen)
    // Offset: 0x1C8E698
    uint Invoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen);
    // public System.IAsyncResult BeginInvoke(System.String pchResourceName, System.String pchBuffer, System.UInt32 unBufferLen, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C8EAB0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchResourceName, ::Il2CppString* pchBuffer, uint unBufferLen, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C8EB50
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRResources/_LoadSharedResource
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRResources::_LoadSharedResource*, "Valve.VR", "IVRResources/_LoadSharedResource");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRResources::_LoadSharedResource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRResources::_LoadSharedResource::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRResources::_LoadSharedResource::*)(::Il2CppString*, ::Il2CppString*, uint)>(&Valve::VR::IVRResources::_LoadSharedResource::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRResources::_LoadSharedResource*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRResources::_LoadSharedResource::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRResources::_LoadSharedResource::*)(::Il2CppString*, ::Il2CppString*, uint, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRResources::_LoadSharedResource::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRResources::_LoadSharedResource*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRResources::_LoadSharedResource::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Valve::VR::IVRResources::_LoadSharedResource::*)(System::IAsyncResult*)>(&Valve::VR::IVRResources::_LoadSharedResource::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRResources::_LoadSharedResource*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
