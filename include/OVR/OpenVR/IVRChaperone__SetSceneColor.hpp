// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
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
  // Autogenerated type: OVR.OpenVR.IVRChaperone/OVR.OpenVR._SetSceneColor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF31C0
  class IVRChaperone::_SetSceneColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetSceneColor
    _SetSceneColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15CDE78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_SetSceneColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_SetSceneColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_SetSceneColor*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVR.OpenVR.HmdColor_t color)
    // Offset: 0x15C36A4
    void Invoke(OVR::OpenVR::HmdColor_t color);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.HmdColor_t color, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15CDE88
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdColor_t color, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15CDF18
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/OVR.OpenVR._SetSceneColor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_SetSceneColor*, "OVR.OpenVR", "IVRChaperone/_SetSceneColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_SetSceneColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_SetSceneColor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperone::_SetSceneColor::*)(OVR::OpenVR::HmdColor_t)>(&OVR::OpenVR::IVRChaperone::_SetSceneColor::Invoke)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_SetSceneColor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_SetSceneColor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperone::_SetSceneColor::*)(OVR::OpenVR::HmdColor_t, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperone::_SetSceneColor::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_SetSceneColor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_SetSceneColor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperone::_SetSceneColor::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperone::_SetSceneColor::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_SetSceneColor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
