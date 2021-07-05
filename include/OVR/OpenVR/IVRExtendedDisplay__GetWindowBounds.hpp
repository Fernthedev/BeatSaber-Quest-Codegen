// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRExtendedDisplay
#include "OVR/OpenVR/IVRExtendedDisplay.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRExtendedDisplay/_GetWindowBounds
  // [UnmanagedFunctionPointerAttribute] Offset: DCD4B8
  class IVRExtendedDisplay::_GetWindowBounds : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetWindowBounds
    _GetWindowBounds() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EE5BF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRExtendedDisplay::_GetWindowBounds* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRExtendedDisplay::_GetWindowBounds*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1EE5C04
    void Invoke(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight);
    // public System.IAsyncResult BeginInvoke(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EE5EA4
    System::IAsyncResult* BeginInvoke(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x1EE5F90
    void EndInvoke(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRExtendedDisplay/_GetWindowBounds
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds*, "OVR.OpenVR", "IVRExtendedDisplay/_GetWindowBounds");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::*)(int&, int&, uint&, uint&)>(&OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::Invoke)> {
  const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::*)(int&, int&, uint&, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::*)(int&, int&, uint&, uint&, System::IAsyncResult*)>(&OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pnX = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnY = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* pnWidth = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* pnHeight = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRExtendedDisplay::_GetWindowBounds*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnX, pnY, pnWidth, pnHeight, result});
  }
};
