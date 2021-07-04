// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
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
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: SpatialAnchorPose_t
  struct SpatialAnchorPose_t;
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
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose
  // [UnmanagedFunctionPointerAttribute] Offset: DCE9BC
  class IVRSpatialAnchors::_GetSpatialAnchorPose : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetSpatialAnchorPose
    _GetSpatialAnchorPose() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20ACDF8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSpatialAnchors::_GetSpatialAnchorPose* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSpatialAnchors::_GetSpatialAnchorPose*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.UInt32 unHandle, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPoseOut)
    // Offset: 0x20ACE08
    OVR::OpenVR::EVRSpatialAnchorError Invoke(uint unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPoseOut);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unHandle, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, ref OVR.OpenVR.SpatialAnchorPose_t pPoseOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20AD0A8
    System::IAsyncResult* BeginInvoke(uint unHandle, OVR::OpenVR::ETrackingUniverseOrigin eOrigin, OVR::OpenVR::SpatialAnchorPose_t& pPoseOut, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(ref OVR.OpenVR.SpatialAnchorPose_t pPoseOut, System.IAsyncResult result)
    // Offset: 0x20AD17C
    OVR::OpenVR::EVRSpatialAnchorError EndInvoke(OVR::OpenVR::SpatialAnchorPose_t& pPoseOut, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/_GetSpatialAnchorPose
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*, "OVR.OpenVR", "IVRSpatialAnchors/_GetSpatialAnchorPose");
// Writing includes for template specializations
#include "OVR/OpenVR/ETrackingUniverseOrigin.hpp"
#include "OVR/OpenVR/SpatialAnchorPose_t.hpp"
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::*)(uint, OVR::OpenVR::ETrackingUniverseOrigin, OVR::OpenVR::SpatialAnchorPose_t&)>(&OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackingUniverseOrigin>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::SpatialAnchorPose_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::*)(uint, OVR::OpenVR::ETrackingUniverseOrigin, OVR::OpenVR::SpatialAnchorPose_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<uint>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::ETrackingUniverseOrigin>(), ::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::SpatialAnchorPose_t&>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::*)(OVR::OpenVR::SpatialAnchorPose_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_GetSpatialAnchorPose*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::SpatialAnchorPose_t&>(), ::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
