// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: INetworkConfig
#include "GlobalNamespace/INetworkConfig.hpp"
// Including type: ServiceEnvironment
#include "GlobalNamespace/ServiceEnvironment.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DnsEndPoint
  class DnsEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomNetworkConfig
  class CustomNetworkConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomNetworkConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomNetworkConfig*, "", "CustomNetworkConfig");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: CustomNetworkConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomNetworkConfig : public ::Il2CppObject/*, public ::GlobalNamespace::INetworkConfig*/ {
    public:
    public:
    // private readonly System.Int32 <maxPartySize>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 <discoveryPort>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int discoveryPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 <partyPort>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int partyPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 <multiplayerPort>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int multiplayerPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly DnsEndPoint <masterServerEndPoint>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::DnsEndPoint* masterServerEndPoint;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::DnsEndPoint*) == 0x8);
    // private readonly System.String <multiplayerStatusUrl>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW multiplayerStatusUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <graphUrl>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::StringW graphUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <graphAccessToken>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    ::StringW graphAccessToken;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Boolean <forceGameLift>k__BackingField
    // Size: 0x1
    // Offset: 0x40
    bool forceGameLift;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forceGameLift and: serviceEnvironment
    char __padding8[0x3] = {};
    // private readonly ServiceEnvironment <serviceEnvironment>k__BackingField
    // Size: 0x4
    // Offset: 0x44
    ::GlobalNamespace::ServiceEnvironment serviceEnvironment;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ServiceEnvironment) == 0x4);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::INetworkConfig
    operator ::GlobalNamespace::INetworkConfig() noexcept {
      return *reinterpret_cast<::GlobalNamespace::INetworkConfig*>(this);
    }
    // Creating interface conversion operator: i_INetworkConfig
    inline ::GlobalNamespace::INetworkConfig* i_INetworkConfig() noexcept {
      return reinterpret_cast<::GlobalNamespace::INetworkConfig*>(this);
    }
    // Get instance field reference: private readonly System.Int32 <maxPartySize>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$maxPartySize$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <discoveryPort>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$discoveryPort$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <partyPort>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$partyPort$k__BackingField();
    // Get instance field reference: private readonly System.Int32 <multiplayerPort>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$multiplayerPort$k__BackingField();
    // Get instance field reference: private readonly DnsEndPoint <masterServerEndPoint>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::DnsEndPoint*& dyn_$masterServerEndPoint$k__BackingField();
    // Get instance field reference: private readonly System.String <multiplayerStatusUrl>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$multiplayerStatusUrl$k__BackingField();
    // Get instance field reference: private readonly System.String <graphUrl>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$graphUrl$k__BackingField();
    // Get instance field reference: private readonly System.String <graphAccessToken>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$graphAccessToken$k__BackingField();
    // Get instance field reference: private readonly System.Boolean <forceGameLift>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$forceGameLift$k__BackingField();
    // Get instance field reference: private readonly ServiceEnvironment <serviceEnvironment>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ServiceEnvironment& dyn_$serviceEnvironment$k__BackingField();
    // public System.Int32 get_maxPartySize()
    // Offset: 0x1686464
    int get_maxPartySize();
    // public System.Int32 get_discoveryPort()
    // Offset: 0x168646C
    int get_discoveryPort();
    // public System.Int32 get_partyPort()
    // Offset: 0x1686474
    int get_partyPort();
    // public System.Int32 get_multiplayerPort()
    // Offset: 0x168647C
    int get_multiplayerPort();
    // public DnsEndPoint get_masterServerEndPoint()
    // Offset: 0x1686484
    ::GlobalNamespace::DnsEndPoint* get_masterServerEndPoint();
    // public System.String get_multiplayerStatusUrl()
    // Offset: 0x168648C
    ::StringW get_multiplayerStatusUrl();
    // public System.String get_quickPlaySetupUrl()
    // Offset: 0x1686494
    ::StringW get_quickPlaySetupUrl();
    // public System.String get_graphUrl()
    // Offset: 0x16864E4
    ::StringW get_graphUrl();
    // public System.String get_graphAccessToken()
    // Offset: 0x16864EC
    ::StringW get_graphAccessToken();
    // public System.Boolean get_forceGameLift()
    // Offset: 0x16864F4
    bool get_forceGameLift();
    // public ServiceEnvironment get_serviceEnvironment()
    // Offset: 0x16864FC
    ::GlobalNamespace::ServiceEnvironment get_serviceEnvironment();
    // public System.Void .ctor(INetworkConfig fromNetworkConfig, System.String customServerHostName, System.Int32 port, System.Boolean forceGameLift)
    // Offset: 0x1686504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomNetworkConfig* New_ctor(::GlobalNamespace::INetworkConfig* fromNetworkConfig, ::StringW customServerHostName, int port, bool forceGameLift) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomNetworkConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomNetworkConfig*, creationType>(fromNetworkConfig, customServerHostName, port, forceGameLift)));
    }
  }; // CustomNetworkConfig
  #pragma pack(pop)
  static check_size<sizeof(CustomNetworkConfig), 68 + sizeof(::GlobalNamespace::ServiceEnvironment)> __GlobalNamespace_CustomNetworkConfigSizeCheck;
  static_assert(sizeof(CustomNetworkConfig) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_maxPartySize
// Il2CppName: get_maxPartySize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_maxPartySize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_maxPartySize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_discoveryPort
// Il2CppName: get_discoveryPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_discoveryPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_discoveryPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_partyPort
// Il2CppName: get_partyPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_partyPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_partyPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_multiplayerPort
// Il2CppName: get_multiplayerPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_multiplayerPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_multiplayerPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_masterServerEndPoint
// Il2CppName: get_masterServerEndPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DnsEndPoint* (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_masterServerEndPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_masterServerEndPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_multiplayerStatusUrl
// Il2CppName: get_multiplayerStatusUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_multiplayerStatusUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_multiplayerStatusUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_quickPlaySetupUrl
// Il2CppName: get_quickPlaySetupUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_quickPlaySetupUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_quickPlaySetupUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_graphUrl
// Il2CppName: get_graphUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_graphUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_graphUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_graphAccessToken
// Il2CppName: get_graphAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_graphAccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_graphAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_forceGameLift
// Il2CppName: get_forceGameLift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_forceGameLift)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_forceGameLift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::get_serviceEnvironment
// Il2CppName: get_serviceEnvironment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ServiceEnvironment (GlobalNamespace::CustomNetworkConfig::*)()>(&GlobalNamespace::CustomNetworkConfig::get_serviceEnvironment)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomNetworkConfig*), "get_serviceEnvironment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomNetworkConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
