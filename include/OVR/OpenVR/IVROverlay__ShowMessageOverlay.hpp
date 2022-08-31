// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: VRMessageOverlayResponse
  struct VRMessageOverlayResponse;
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
NEED_NO_BOX(::OVR::OpenVR::IVROverlay::_ShowMessageOverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay::_ShowMessageOverlay*, "OVR.OpenVR", "IVROverlay/_ShowMessageOverlay");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._ShowMessageOverlay
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 109B170
  class IVROverlay::_ShowMessageOverlay : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2748D2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_ShowMessageOverlay* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVROverlay::_ShowMessageOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_ShowMessageOverlay*, creationType>(object, method)));
    }
    // public OVR.OpenVR.VRMessageOverlayResponse Invoke(System.String pchText, System.String pchCaption, System.String pchButton0Text, System.String pchButton1Text, System.String pchButton2Text, System.String pchButton3Text)
    // Offset: 0x2748D3C
    ::OVR::OpenVR::VRMessageOverlayResponse Invoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text);
    // public System.IAsyncResult BeginInvoke(System.String pchText, System.String pchCaption, System.String pchButton0Text, System.String pchButton1Text, System.String pchButton2Text, System.String pchButton3Text, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27491E0
    ::System::IAsyncResult* BeginInvoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text, ::StringW pchButton3Text, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.VRMessageOverlayResponse EndInvoke(System.IAsyncResult result)
    // Offset: 0x274921C
    ::OVR::OpenVR::VRMessageOverlayResponse EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._ShowMessageOverlay
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ShowMessageOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ShowMessageOverlay::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (OVR::OpenVR::IVROverlay::_ShowMessageOverlay::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&OVR::OpenVR::IVROverlay::_ShowMessageOverlay::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchCaption = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchButton0Text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchButton1Text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchButton2Text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchButton3Text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_ShowMessageOverlay*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ShowMessageOverlay::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVROverlay::_ShowMessageOverlay::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_ShowMessageOverlay::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchCaption = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchButton0Text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchButton1Text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchButton2Text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchButton3Text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_ShowMessageOverlay*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ShowMessageOverlay::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (OVR::OpenVR::IVROverlay::_ShowMessageOverlay::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_ShowMessageOverlay::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_ShowMessageOverlay*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
