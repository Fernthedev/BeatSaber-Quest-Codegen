// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
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
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
  // [UnmanagedFunctionPointerAttribute] Offset: DCDA1C
  class IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetLiveCollisionBoundsTagsInfo
    _GetLiveCollisionBoundsTagsInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B5C48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount)
    // Offset: 0x15AE37C
    bool Invoke(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount);
    // public System.IAsyncResult BeginInvoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B5C58
    System::IAsyncResult* BeginInvoke(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 punTagCount, System.IAsyncResult result)
    // Offset: 0x15B5CF4
    bool EndInvoke(uint& punTagCount, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::*)(::Array<uint8_t>*&, uint&)>(&OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::Invoke)> {
  const MethodInfo* get() {
    static auto* pTagsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* punTagCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTagsBuffer, punTagCount});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::*)(::Array<uint8_t>*&, uint&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pTagsBuffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    static auto* punTagCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTagsBuffer, punTagCount, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::*)(uint&, System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::EndInvoke)> {
  const MethodInfo* get() {
    static auto* punTagCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punTagCount, result});
  }
};
