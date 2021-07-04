// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
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
  // Autogenerated type: Valve.VR.IVROverlay/_ShowKeyboardForOverlay
  // [UnmanagedFunctionPointerAttribute] Offset: DD448C
  class IVROverlay::_ShowKeyboardForOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _ShowKeyboardForOverlay
    _ShowKeyboardForOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C88B10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_ShowKeyboardForOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_ShowKeyboardForOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_ShowKeyboardForOverlay*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue)
    // Offset: 0x1C88B20
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C88E6C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C88F98
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_ShowKeyboardForOverlay
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_ShowKeyboardForOverlay*, "Valve.VR", "IVROverlay/_ShowKeyboardForOverlay");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowKeyboardForOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowKeyboardForOverlay::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_ShowKeyboardForOverlay::*)(uint64_t, int, int, ::Il2CppString*, uint, ::Il2CppString*, bool, uint64_t)>(&Valve::VR::IVROverlay::_ShowKeyboardForOverlay::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_ShowKeyboardForOverlay*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowKeyboardForOverlay::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_ShowKeyboardForOverlay::*)(uint64_t, int, int, ::Il2CppString*, uint, ::Il2CppString*, bool, uint64_t, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_ShowKeyboardForOverlay::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_ShowKeyboardForOverlay*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<int>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<bool>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_ShowKeyboardForOverlay::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_ShowKeyboardForOverlay::*)(System::IAsyncResult*)>(&Valve::VR::IVROverlay::_ShowKeyboardForOverlay::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_ShowKeyboardForOverlay*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
