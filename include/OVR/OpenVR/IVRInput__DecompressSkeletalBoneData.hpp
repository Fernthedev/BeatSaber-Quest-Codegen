// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.VRBoneTransform_t
#include "OVR/OpenVR/VRBoneTransform_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: EVRSkeletalTransformSpace
  struct EVRSkeletalTransformSpace;
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
NEED_NO_BOX(::OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData*, "OVR.OpenVR", "IVRInput/_DecompressSkeletalBoneData");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRInput/OVR.OpenVR._DecompressSkeletalBoneData
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 109B5F8
  class IVRInput::_DecompressSkeletalBoneData : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2546DDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRInput::_DecompressSkeletalBoneData* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRInput::_DecompressSkeletalBoneData*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRInputError Invoke(System.IntPtr pvCompressedBuffer, System.UInt32 unCompressedBufferSize, ref OVR.OpenVR.EVRSkeletalTransformSpace peTransformSpace, in OVR.OpenVR.VRBoneTransform_t[] pTransformArray, System.UInt32 unTransformArrayCount)
    // Offset: 0x2546DEC
    ::OVR::OpenVR::EVRInputError Invoke(::System::IntPtr pvCompressedBuffer, uint unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint unTransformArrayCount);
    // public System.IAsyncResult BeginInvoke(System.IntPtr pvCompressedBuffer, System.UInt32 unCompressedBufferSize, ref OVR.OpenVR.EVRSkeletalTransformSpace peTransformSpace, in OVR.OpenVR.VRBoneTransform_t[] pTransformArray, System.UInt32 unTransformArrayCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x25470C0
    ::System::IAsyncResult* BeginInvoke(::System::IntPtr pvCompressedBuffer, uint unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>> pTransformArray, uint unTransformArrayCount, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRInputError EndInvoke(ref OVR.OpenVR.EVRSkeletalTransformSpace peTransformSpace, System.IAsyncResult result)
    // Offset: 0x25471AC
    ::OVR::OpenVR::EVRInputError EndInvoke(ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRInput/OVR.OpenVR._DecompressSkeletalBoneData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::*)(::System::IntPtr, uint, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>, uint)>(&OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::Invoke)> {
  static const MethodInfo* get() {
    static auto* pvCompressedBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unCompressedBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peTransformSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalTransformSpace")->this_arg;
    static auto* pTransformArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRBoneTransform_t"), 1)->this_arg;
    static auto* unTransformArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray, unTransformArrayCount});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::*)(::System::IntPtr, uint, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>, ByRef<::ArrayW<::OVR::OpenVR::VRBoneTransform_t>>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pvCompressedBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unCompressedBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peTransformSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalTransformSpace")->this_arg;
    static auto* pTransformArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRBoneTransform_t"), 1)->this_arg;
    static auto* unTransformArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray, unTransformArrayCount, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::*)(ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* peTransformSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalTransformSpace")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRInput::_DecompressSkeletalBoneData*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peTransformSpace, result});
  }
};
