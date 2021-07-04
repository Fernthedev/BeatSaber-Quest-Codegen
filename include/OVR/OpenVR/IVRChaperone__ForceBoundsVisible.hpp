// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_ForceBoundsVisible
  // [UnmanagedFunctionPointerAttribute] Offset: DCD8DC
  class IVRChaperone::_ForceBoundsVisible : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ForceBoundsVisible
    _ForceBoundsVisible() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B54BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_ForceBoundsVisible* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_ForceBoundsVisible*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Boolean bForce)
    // Offset: 0x15AB8FC
    void Invoke(bool bForce);
    // public System.IAsyncResult BeginInvoke(System.Boolean bForce, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B54CC
    System::IAsyncResult* BeginInvoke(bool bForce, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15B555C
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_ForceBoundsVisible
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_ForceBoundsVisible*, "OVR.OpenVR", "IVRChaperone/_ForceBoundsVisible");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::*)(bool)>(&OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_ForceBoundsVisible*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::*)(bool, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_ForceBoundsVisible*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperone::_ForceBoundsVisible::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_ForceBoundsVisible*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
