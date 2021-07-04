// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRApplicationProperty
  struct EVRApplicationProperty;
  // Forward declaring type: EVRApplicationError
  struct EVRApplicationError;
}
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
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationPropertyBool
  // [UnmanagedFunctionPointerAttribute] Offset: DD380C
  class IVRApplications::_GetApplicationPropertyBool : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetApplicationPropertyBool
    _GetApplicationPropertyBool() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16D8190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRApplications::_GetApplicationPropertyBool* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRApplications::_GetApplicationPropertyBool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRApplications::_GetApplicationPropertyBool*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError)
    // Offset: 0x16CD8EC
    bool Invoke(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, Valve.VR.EVRApplicationProperty eProperty, ref Valve.VR.EVRApplicationError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16D81A0
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, Valve::VR::EVRApplicationProperty eProperty, Valve::VR::EVRApplicationError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.EVRApplicationError peError, System.IAsyncResult result)
    // Offset: 0x16D825C
    bool EndInvoke(Valve::VR::EVRApplicationError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationPropertyBool
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationPropertyBool*, "Valve.VR", "IVRApplications/_GetApplicationPropertyBool");
// Writing includes for template specializations
#include "Valve/VR/EVRApplicationProperty.hpp"
#include "Valve/VR/EVRApplicationError.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationPropertyBool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationPropertyBool::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRApplications::_GetApplicationPropertyBool::*)(::Il2CppString*, Valve::VR::EVRApplicationProperty, Valve::VR::EVRApplicationError&)>(&Valve::VR::IVRApplications::_GetApplicationPropertyBool::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationPropertyBool*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRApplicationProperty>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRApplicationError&>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationPropertyBool::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRApplications::_GetApplicationPropertyBool::*)(::Il2CppString*, Valve::VR::EVRApplicationProperty, Valve::VR::EVRApplicationError&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRApplications::_GetApplicationPropertyBool::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationPropertyBool*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRApplicationProperty>(), ::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRApplicationError&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRApplications::_GetApplicationPropertyBool::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Valve::VR::IVRApplications::_GetApplicationPropertyBool::*)(Valve::VR::EVRApplicationError&, System::IAsyncResult*)>(&Valve::VR::IVRApplications::_GetApplicationPropertyBool::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRApplications::_GetApplicationPropertyBool*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::EVRApplicationError&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
