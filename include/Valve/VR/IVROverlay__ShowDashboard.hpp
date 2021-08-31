// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Autogenerated type: Valve.VR.IVROverlay/Valve.VR._ShowDashboard
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF3E00
  class IVROverlay::_ShowDashboard : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ShowDashboard
    _ShowDashboard() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D3F16C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_ShowDashboard* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_ShowDashboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_ShowDashboard*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String pchOverlayToShow)
    // Offset: 0x1D3F17C
    void Invoke(::Il2CppString* pchOverlayToShow);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayToShow, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D3F510
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayToShow, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D3F534
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/Valve.VR._ShowDashboard
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_ShowDashboard*, "Valve.VR", "IVROverlay/_ShowDashboard");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowDashboard::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowDashboard::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVROverlay::_ShowDashboard::*)(::Il2CppString*)>(&Valve::VR::IVROverlay::_ShowDashboard::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchOverlayToShow = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_ShowDashboard*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchOverlayToShow});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowDashboard::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_ShowDashboard::*)(::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_ShowDashboard::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchOverlayToShow = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_ShowDashboard*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchOverlayToShow, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowDashboard::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Valve::VR::IVROverlay::_ShowDashboard::*)(System::IAsyncResult*)>(&Valve::VR::IVROverlay::_ShowDashboard::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_ShowDashboard*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
