// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Including type: LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
#include "GlobalNamespace/LiteNetLibConnectionManager_LiteNetLibConnectionParamsBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x51
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/ConnectToServerParams
  // [TokenAttribute] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::ConnectToServerParams : public GlobalNamespace::LiteNetLibConnectionManager::LiteNetLibConnectionParamsBase {
    public:
    // Writing base type padding for base size: 0x34 to desired offset: 0x38
    char ___base_padding[0x4] = {};
    // public System.Net.IPEndPoint endPoint
    // Size: 0x8
    // Offset: 0x38
    System::Net::IPEndPoint* endPoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // public System.String serverUserId
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* serverUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String serverUserName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* serverUserName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Boolean serverIsConnectionOwner
    // Size: 0x1
    // Offset: 0x50
    bool serverIsConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ConnectToServerParams
    ConnectToServerParams(System::Net::IPEndPoint* endPoint_ = {}, ::Il2CppString* serverUserId_ = {}, ::Il2CppString* serverUserName_ = {}, bool serverIsConnectionOwner_ = {}) noexcept : endPoint{endPoint_}, serverUserId{serverUserId_}, serverUserName{serverUserName_}, serverIsConnectionOwner{serverIsConnectionOwner_} {}
    // Get instance field reference: public System.Net.IPEndPoint endPoint
    System::Net::IPEndPoint*& dyn_endPoint();
    // Get instance field reference: public System.String serverUserId
    ::Il2CppString*& dyn_serverUserId();
    // Get instance field reference: public System.String serverUserName
    ::Il2CppString*& dyn_serverUserName();
    // Get instance field reference: public System.Boolean serverIsConnectionOwner
    bool& dyn_serverIsConnectionOwner();
    // public System.Void .ctor()
    // Offset: 0x132E070
    // Implemented from: LiteNetLibConnectionManager/LiteNetLibConnectionParamsBase
    // Base method: System.Void LiteNetLibConnectionParamsBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::ConnectToServerParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LiteNetLibConnectionManager::ConnectToServerParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::ConnectToServerParams*, creationType>()));
    }
  }; // LiteNetLibConnectionManager/ConnectToServerParams
  #pragma pack(pop)
  static check_size<sizeof(LiteNetLibConnectionManager::ConnectToServerParams), 80 + sizeof(bool)> __GlobalNamespace_LiteNetLibConnectionManager_ConnectToServerParamsSizeCheck;
  static_assert(sizeof(LiteNetLibConnectionManager::ConnectToServerParams) == 0x51);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::ConnectToServerParams*, "", "LiteNetLibConnectionManager/ConnectToServerParams");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LiteNetLibConnectionManager::ConnectToServerParams::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
