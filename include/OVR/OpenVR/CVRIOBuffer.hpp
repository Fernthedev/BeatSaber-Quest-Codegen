// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRIOBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRIOBuffer : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRIOBuffer FnTable
    // Size: 0x28
    // Offset: 0x10
    OVR::OpenVR::IVRIOBuffer FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRIOBuffer) == 0x28);
    // Creating value type constructor for type: CVRIOBuffer
    CVRIOBuffer(OVR::OpenVR::IVRIOBuffer FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRIOBuffer
    constexpr operator OVR::OpenVR::IVRIOBuffer() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private OVR.OpenVR.IVRIOBuffer FnTable
    OVR::OpenVR::IVRIOBuffer& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x15C8248
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRIOBuffer* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRIOBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRIOBuffer*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.EIOBufferError Open(System.String pchPath, OVR.OpenVR.EIOBufferMode mode, System.UInt32 unElementSize, System.UInt32 unElements, ref System.UInt64 pulBuffer)
    // Offset: 0x15C8350
    OVR::OpenVR::EIOBufferError Open(::Il2CppString* pchPath, OVR::OpenVR::EIOBufferMode mode, uint unElementSize, uint unElements, ByRef<uint64_t> pulBuffer);
    // public OVR.OpenVR.EIOBufferError Close(System.UInt64 ulBuffer)
    // Offset: 0x15C8370
    OVR::OpenVR::EIOBufferError Close(uint64_t ulBuffer);
    // public OVR.OpenVR.EIOBufferError Read(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, ref System.UInt32 punRead)
    // Offset: 0x15C838C
    OVR::OpenVR::EIOBufferError Read(uint64_t ulBuffer, System::IntPtr pDst, uint unBytes, ByRef<uint> punRead);
    // public OVR.OpenVR.EIOBufferError Write(System.UInt64 ulBuffer, System.IntPtr pSrc, System.UInt32 unBytes)
    // Offset: 0x15C83AC
    OVR::OpenVR::EIOBufferError Write(uint64_t ulBuffer, System::IntPtr pSrc, uint unBytes);
    // public System.UInt64 PropertyContainer(System.UInt64 ulBuffer)
    // Offset: 0x15C83C8
    uint64_t PropertyContainer(uint64_t ulBuffer);
  }; // OVR.OpenVR.CVRIOBuffer
  #pragma pack(pop)
  static check_size<sizeof(CVRIOBuffer), 16 + sizeof(OVR::OpenVR::IVRIOBuffer)> __OVR_OpenVR_CVRIOBufferSizeCheck;
  static_assert(sizeof(CVRIOBuffer) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRIOBuffer*, "OVR.OpenVR", "CVRIOBuffer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRIOBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRIOBuffer::Open
// Il2CppName: Open
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EIOBufferError (OVR::OpenVR::CVRIOBuffer::*)(::Il2CppString*, OVR::OpenVR::EIOBufferMode, uint, uint, ByRef<uint64_t>)>(&OVR::OpenVR::CVRIOBuffer::Open)> {
  static const MethodInfo* get() {
    static auto* pchPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* mode = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EIOBufferMode")->byval_arg;
    static auto* unElementSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* unElements = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRIOBuffer*), "Open", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchPath, mode, unElementSize, unElements, pulBuffer});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRIOBuffer::Close
// Il2CppName: Close
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EIOBufferError (OVR::OpenVR::CVRIOBuffer::*)(uint64_t)>(&OVR::OpenVR::CVRIOBuffer::Close)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRIOBuffer*), "Close", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRIOBuffer::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EIOBufferError (OVR::OpenVR::CVRIOBuffer::*)(uint64_t, System::IntPtr, uint, ByRef<uint>)>(&OVR::OpenVR::CVRIOBuffer::Read)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pDst = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* punRead = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRIOBuffer*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer, pDst, unBytes, punRead});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRIOBuffer::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EIOBufferError (OVR::OpenVR::CVRIOBuffer::*)(uint64_t, System::IntPtr, uint)>(&OVR::OpenVR::CVRIOBuffer::Write)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pSrc = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRIOBuffer*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer, pSrc, unBytes});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRIOBuffer::PropertyContainer
// Il2CppName: PropertyContainer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (OVR::OpenVR::CVRIOBuffer::*)(uint64_t)>(&OVR::OpenVR::CVRIOBuffer::PropertyContainer)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRIOBuffer*), "PropertyContainer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer});
  }
};
