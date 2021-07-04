// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.HmdQuad_t
#include "OVR/OpenVR/HmdQuad_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRChaperoneSetup
  class CVRChaperoneSetup : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.IVRChaperoneSetup FnTable
    // Size: 0xA0
    // Offset: 0x10
    OVR::OpenVR::IVRChaperoneSetup FnTable;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVRChaperoneSetup) == 0xA0);
    // Creating value type constructor for type: CVRChaperoneSetup
    CVRChaperoneSetup(OVR::OpenVR::IVRChaperoneSetup FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator OVR::OpenVR::IVRChaperoneSetup
    constexpr operator OVR::OpenVR::IVRChaperoneSetup() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x15ABB6C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRChaperoneSetup* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::CVRChaperoneSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRChaperoneSetup*, creationType>(pInterface)));
    }
    // public System.Boolean CommitWorkingCopy(OVR.OpenVR.EChaperoneConfigFile configFile)
    // Offset: 0x15ABC74
    bool CommitWorkingCopy(OVR::OpenVR::EChaperoneConfigFile configFile);
    // public System.Void RevertWorkingCopy()
    // Offset: 0x15ABF08
    void RevertWorkingCopy();
    // public System.Boolean GetWorkingPlayAreaSize(ref System.Single pSizeX, ref System.Single pSizeZ)
    // Offset: 0x15AC12C
    bool GetWorkingPlayAreaSize(float& pSizeX, float& pSizeZ);
    // public System.Boolean GetWorkingPlayAreaRect(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0x15AC3C4
    bool GetWorkingPlayAreaRect(OVR::OpenVR::HmdQuad_t& rect);
    // public System.Boolean GetWorkingCollisionBoundsInfo(out OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AC63C
    bool GetWorkingCollisionBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetLiveCollisionBoundsInfo(out OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AC950
    bool GetLiveCollisionBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean GetWorkingSeatedZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x15ACC64
    bool GetWorkingSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Boolean GetWorkingStandingZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pmatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x15ACEDC
    bool GetWorkingStandingZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pmatStandingZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingPlayAreaSize(System.Single sizeX, System.Single sizeZ)
    // Offset: 0x15AD154
    void SetWorkingPlayAreaSize(float sizeX, float sizeZ);
    // public System.Void SetWorkingCollisionBoundsInfo(OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AD3E4
    void SetWorkingCollisionBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>* pQuadsBuffer);
    // public System.Void SetWorkingSeatedZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pMatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x15AD678
    void SetWorkingSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pMatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingStandingZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pMatStandingZeroPoseToRawTrackingPose)
    // Offset: 0x15AD8E4
    void SetWorkingStandingZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pMatStandingZeroPoseToRawTrackingPose);
    // public System.Void ReloadFromDisk(OVR.OpenVR.EChaperoneConfigFile configFile)
    // Offset: 0x15ADB50
    void ReloadFromDisk(OVR::OpenVR::EChaperoneConfigFile configFile);
    // public System.Boolean GetLiveSeatedZeroPoseToRawTrackingPose(ref OVR.OpenVR.HmdMatrix34_t pmatSeatedZeroPoseToRawTrackingPose)
    // Offset: 0x15ADDD8
    bool GetLiveSeatedZeroPoseToRawTrackingPose(OVR::OpenVR::HmdMatrix34_t& pmatSeatedZeroPoseToRawTrackingPose);
    // public System.Void SetWorkingCollisionBoundsTagsInfo(System.Byte[] pTagsBuffer)
    // Offset: 0x15AE050
    void SetWorkingCollisionBoundsTagsInfo(::Array<uint8_t>* pTagsBuffer);
    // public System.Boolean GetLiveCollisionBoundsTagsInfo(out System.Byte[] pTagsBuffer)
    // Offset: 0x15AE2E4
    bool GetLiveCollisionBoundsTagsInfo(::Array<uint8_t>*& pTagsBuffer);
    // public System.Boolean SetWorkingPhysicalBoundsInfo(OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AE5F8
    bool SetWorkingPhysicalBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>* pQuadsBuffer);
    // public System.Boolean GetLivePhysicalBoundsInfo(out OVR.OpenVR.HmdQuad_t[] pQuadsBuffer)
    // Offset: 0x15AE898
    bool GetLivePhysicalBoundsInfo(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer);
    // public System.Boolean ExportLiveToBuffer(System.Text.StringBuilder pBuffer, ref System.UInt32 pnBufferLength)
    // Offset: 0x15AEBAC
    bool ExportLiveToBuffer(System::Text::StringBuilder* pBuffer, uint& pnBufferLength);
    // public System.Boolean ImportFromBufferToWorking(System.String pBuffer, System.UInt32 nImportFlags)
    // Offset: 0x15AEFBC
    bool ImportFromBufferToWorking(::Il2CppString* pBuffer, uint nImportFlags);
  }; // OVR.OpenVR.CVRChaperoneSetup
  #pragma pack(pop)
  static check_size<sizeof(CVRChaperoneSetup), 16 + sizeof(OVR::OpenVR::IVRChaperoneSetup)> __OVR_OpenVR_CVRChaperoneSetupSizeCheck;
  static_assert(sizeof(CVRChaperoneSetup) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVRChaperoneSetup*, "OVR.OpenVR", "CVRChaperoneSetup");
// Writing includes for template specializations
#include "OVR/OpenVR/EChaperoneConfigFile.hpp"
#include "OVR/OpenVR/HmdMatrix34_t.hpp"
#include "System/Text/StringBuilder.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy
// Il2CppName: CommitWorkingCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::EChaperoneConfigFile)>(&OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "CommitWorkingCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EChaperoneConfigFile>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy
// Il2CppName: RevertWorkingCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)()>(&OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "RevertWorkingCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize
// Il2CppName: GetWorkingPlayAreaSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(float&, float&)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "GetWorkingPlayAreaSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float&>(), ::il2cpp_utils::ExtractIndependentType<float&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect
// Il2CppName: GetWorkingPlayAreaRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::HmdQuad_t&)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "GetWorkingPlayAreaRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdQuad_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo
// Il2CppName: GetWorkingCollisionBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(::Array<OVR::OpenVR::HmdQuad_t>*&)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "GetWorkingCollisionBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<OVR::OpenVR::HmdQuad_t>*&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo
// Il2CppName: GetLiveCollisionBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(::Array<OVR::OpenVR::HmdQuad_t>*&)>(&OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "GetLiveCollisionBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<OVR::OpenVR::HmdQuad_t>*&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose
// Il2CppName: GetWorkingSeatedZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::HmdMatrix34_t&)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "GetWorkingSeatedZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdMatrix34_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose
// Il2CppName: GetWorkingStandingZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::HmdMatrix34_t&)>(&OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "GetWorkingStandingZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdMatrix34_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize
// Il2CppName: SetWorkingPlayAreaSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(float, float)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "SetWorkingPlayAreaSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>(), ::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo
// Il2CppName: SetWorkingCollisionBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(::Array<OVR::OpenVR::HmdQuad_t>*)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "SetWorkingCollisionBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<OVR::OpenVR::HmdQuad_t>*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose
// Il2CppName: SetWorkingSeatedZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::HmdMatrix34_t&)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "SetWorkingSeatedZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdMatrix34_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose
// Il2CppName: SetWorkingStandingZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::HmdMatrix34_t&)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "SetWorkingStandingZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdMatrix34_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk
// Il2CppName: ReloadFromDisk
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::EChaperoneConfigFile)>(&OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "ReloadFromDisk", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::EChaperoneConfigFile>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose
// Il2CppName: GetLiveSeatedZeroPoseToRawTrackingPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(OVR::OpenVR::HmdMatrix34_t&)>(&OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "GetLiveSeatedZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<OVR::OpenVR::HmdMatrix34_t&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo
// Il2CppName: SetWorkingCollisionBoundsTagsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRChaperoneSetup::*)(::Array<uint8_t>*)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "SetWorkingCollisionBoundsTagsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo
// Il2CppName: GetLiveCollisionBoundsTagsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(::Array<uint8_t>*&)>(&OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "GetLiveCollisionBoundsTagsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<uint8_t>*&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo
// Il2CppName: SetWorkingPhysicalBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(::Array<OVR::OpenVR::HmdQuad_t>*)>(&OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "SetWorkingPhysicalBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<OVR::OpenVR::HmdQuad_t>*>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo
// Il2CppName: GetLivePhysicalBoundsInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(::Array<OVR::OpenVR::HmdQuad_t>*&)>(&OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "GetLivePhysicalBoundsInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Array<OVR::OpenVR::HmdQuad_t>*&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer
// Il2CppName: ExportLiveToBuffer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(System::Text::StringBuilder*, uint&)>(&OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "ExportLiveToBuffer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Text::StringBuilder*>(), ::il2cpp_utils::ExtractIndependentType<uint&>()});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking
// Il2CppName: ImportFromBufferToWorking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRChaperoneSetup::*)(::Il2CppString*, uint)>(&OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRChaperoneSetup*), "ImportFromBufferToWorking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>(), ::il2cpp_utils::ExtractIndependentType<uint>()});
  }
};
