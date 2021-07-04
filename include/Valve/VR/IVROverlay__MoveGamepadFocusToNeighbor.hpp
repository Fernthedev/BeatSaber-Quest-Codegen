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
  // Forward declaring type: EOverlayDirection
  struct EOverlayDirection;
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
  // Autogenerated type: Valve.VR.IVROverlay/_MoveGamepadFocusToNeighbor
  // [UnmanagedFunctionPointerAttribute] Offset: DD4324
  class IVROverlay::_MoveGamepadFocusToNeighbor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _MoveGamepadFocusToNeighbor
    _MoveGamepadFocusToNeighbor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FCD994
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_MoveGamepadFocusToNeighbor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_MoveGamepadFocusToNeighbor*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(Valve.VR.EOverlayDirection eDirection, System.UInt64 ulFrom)
    // Offset: 0x1FCD9A4
    Valve::VR::EVROverlayError Invoke(Valve::VR::EOverlayDirection eDirection, uint64_t ulFrom);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EOverlayDirection eDirection, System.UInt64 ulFrom, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FCDC3C
    System::IAsyncResult* BeginInvoke(Valve::VR::EOverlayDirection eDirection, uint64_t ulFrom, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FCDCE8
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_MoveGamepadFocusToNeighbor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor*, "Valve.VR", "IVROverlay/_MoveGamepadFocusToNeighbor");
// Writing includes for template specializations
#include "Valve/VR/EOverlayDirection.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::*)(Valve::VR::EOverlayDirection, uint64_t)>(&Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::EOverlayDirection>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::*)(Valve::VR::EOverlayDirection, uint64_t, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Valve::VR::EOverlayDirection>(), ::il2cpp_utils::ExtractIndependentType<uint64_t>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::*)(System::IAsyncResult*)>(&Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_MoveGamepadFocusToNeighbor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
