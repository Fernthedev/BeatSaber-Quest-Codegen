// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
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
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
  // Forward declaring type: EIOBufferMode
  struct EIOBufferMode;
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
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/OVR.OpenVR._Open
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF4250
  class IVRIOBuffer::_Open : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _Open
    _Open() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F5A634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRIOBuffer::_Open* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRIOBuffer::_Open::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRIOBuffer::_Open*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EIOBufferError Invoke(System.String pchPath, OVR.OpenVR.EIOBufferMode mode, System.UInt32 unElementSize, System.UInt32 unElements, ref System.UInt64 pulBuffer)
    // Offset: 0x1F5A644
    OVR::OpenVR::EIOBufferError Invoke(::Il2CppString* pchPath, OVR::OpenVR::EIOBufferMode mode, uint unElementSize, uint unElements, ByRef<uint64_t> pulBuffer);
    // public System.IAsyncResult BeginInvoke(System.String pchPath, OVR.OpenVR.EIOBufferMode mode, System.UInt32 unElementSize, System.UInt32 unElements, ref System.UInt64 pulBuffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F5AAD4
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchPath, OVR::OpenVR::EIOBufferMode mode, uint unElementSize, uint unElements, ByRef<uint64_t> pulBuffer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EIOBufferError EndInvoke(ref System.UInt64 pulBuffer, System.IAsyncResult result)
    // Offset: 0x1F5ABC4
    OVR::OpenVR::EIOBufferError EndInvoke(ByRef<uint64_t> pulBuffer, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/OVR.OpenVR._Open
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_Open*, "OVR.OpenVR", "IVRIOBuffer/_Open");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Open::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Open::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EIOBufferError (OVR::OpenVR::IVRIOBuffer::_Open::*)(::Il2CppString*, OVR::OpenVR::EIOBufferMode, uint, uint, ByRef<uint64_t>)>(&OVR::OpenVR::IVRIOBuffer::_Open::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EIOBufferMode")->byval_arg;
    static auto* unElementSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unElements = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_Open*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchPath, mode, unElementSize, unElements, pulBuffer});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Open::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRIOBuffer::_Open::*)(::Il2CppString*, OVR::OpenVR::EIOBufferMode, uint, uint, ByRef<uint64_t>, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRIOBuffer::_Open::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EIOBufferMode")->byval_arg;
    static auto* unElementSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unElements = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_Open*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchPath, mode, unElementSize, unElements, pulBuffer, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Open::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EIOBufferError (OVR::OpenVR::IVRIOBuffer::_Open::*)(ByRef<uint64_t>, System::IAsyncResult*)>(&OVR::OpenVR::IVRIOBuffer::_Open::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_Open*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pulBuffer, result});
  }
};
