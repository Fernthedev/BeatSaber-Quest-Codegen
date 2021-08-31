// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IMasterServerAvailabilityModel
#include "GlobalNamespace/IMasterServerAvailabilityModel.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Forward declaring type: MasterServerAvailabilityData
  class MasterServerAvailabilityData;
}
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpClient
  class HttpClient;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerAvailabilityModel
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerAvailabilityModel : public ::Il2CppObject/*, public GlobalNamespace::IMasterServerAvailabilityModel*/ {
    public:
    // Nested type: GlobalNamespace::MasterServerAvailabilityModel::$GetAvailabilityAsyncInternal$d__10
    struct $GetAvailabilityAsyncInternal$d__10;
    // [InjectAttribute] Offset: 0xE344C8
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkConfig*) == 0x8);
    // private System.Net.Http.HttpClient _client
    // Size: 0x8
    // Offset: 0x18
    System::Net::Http::HttpClient* client;
    // Field size check
    static_assert(sizeof(System::Net::Http::HttpClient*) == 0x8);
    // private System.Threading.Tasks.Task`1<MasterServerAvailabilityData> _request
    // Size: 0x8
    // Offset: 0x20
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* request;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>*) == 0x8);
    // private System.DateTime _lastRequestTime
    // Size: 0x8
    // Offset: 0x28
    System::DateTime lastRequestTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: MasterServerAvailabilityModel
    MasterServerAvailabilityModel(GlobalNamespace::INetworkConfig* networkConfig_ = {}, System::Net::Http::HttpClient* client_ = {}, System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* request_ = {}, System::DateTime lastRequestTime_ = {}) noexcept : networkConfig{networkConfig_}, client{client_}, request{request_}, lastRequestTime{lastRequestTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMasterServerAvailabilityModel
    operator GlobalNamespace::IMasterServerAvailabilityModel() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMasterServerAvailabilityModel*>(this);
    }
    // static field const value: static private System.Single kRequestCacheTimeHours
    static constexpr const float kRequestCacheTimeHours = 1;
    // Get static field: static private System.Single kRequestCacheTimeHours
    static float _get_kRequestCacheTimeHours();
    // Set static field: static private System.Single kRequestCacheTimeHours
    static void _set_kRequestCacheTimeHours(float value);
    // static field const value: static private System.Int32 kRequestTimeoutSeconds
    static constexpr const int kRequestTimeoutSeconds = 30;
    // Get static field: static private System.Int32 kRequestTimeoutSeconds
    static int _get_kRequestTimeoutSeconds();
    // Set static field: static private System.Int32 kRequestTimeoutSeconds
    static void _set_kRequestTimeoutSeconds(int value);
    // Get instance field: private readonly INetworkConfig _networkConfig
    GlobalNamespace::INetworkConfig* _get__networkConfig();
    // Set instance field: private readonly INetworkConfig _networkConfig
    void _set__networkConfig(GlobalNamespace::INetworkConfig* value);
    // Get instance field: private System.Net.Http.HttpClient _client
    System::Net::Http::HttpClient* _get__client();
    // Set instance field: private System.Net.Http.HttpClient _client
    void _set__client(System::Net::Http::HttpClient* value);
    // Get instance field: private System.Threading.Tasks.Task`1<MasterServerAvailabilityData> _request
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* _get__request();
    // Set instance field: private System.Threading.Tasks.Task`1<MasterServerAvailabilityData> _request
    void _set__request(System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* value);
    // Get instance field: private System.DateTime _lastRequestTime
    System::DateTime _get__lastRequestTime();
    // Set instance field: private System.DateTime _lastRequestTime
    void _set__lastRequestTime(System::DateTime value);
    // private System.Void Init()
    // Offset: 0x10E4A7C
    void Init();
    // public System.Threading.Tasks.Task`1<MasterServerAvailabilityData> GetAvailabilityAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x10E4AF8
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* GetAvailabilityAsync(System::Threading::CancellationToken cancellationToken);
    // private System.Boolean IsAvailabilityTaskValid()
    // Offset: 0x10E4B6C
    bool IsAvailabilityTaskValid();
    // private System.Void StartRequest()
    // Offset: 0x10E4A80
    void StartRequest();
    // private System.Threading.Tasks.Task`1<MasterServerAvailabilityData> GetAvailabilityAsyncInternal()
    // Offset: 0x10E4C78
    System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* GetAvailabilityAsyncInternal();
    // public System.Void .ctor()
    // Offset: 0x10E4D78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerAvailabilityModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerAvailabilityModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerAvailabilityModel*, creationType>()));
    }
  }; // MasterServerAvailabilityModel
  #pragma pack(pop)
  static check_size<sizeof(MasterServerAvailabilityModel), 40 + sizeof(System::DateTime)> __GlobalNamespace_MasterServerAvailabilityModelSizeCheck;
  static_assert(sizeof(MasterServerAvailabilityModel) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerAvailabilityModel*, "", "MasterServerAvailabilityModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerAvailabilityModel::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MasterServerAvailabilityModel::*)()>(&GlobalNamespace::MasterServerAvailabilityModel::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerAvailabilityModel*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerAvailabilityModel::GetAvailabilityAsync
// Il2CppName: GetAvailabilityAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* (GlobalNamespace::MasterServerAvailabilityModel::*)(System::Threading::CancellationToken)>(&GlobalNamespace::MasterServerAvailabilityModel::GetAvailabilityAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerAvailabilityModel*), "GetAvailabilityAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerAvailabilityModel::IsAvailabilityTaskValid
// Il2CppName: IsAvailabilityTaskValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MasterServerAvailabilityModel::*)()>(&GlobalNamespace::MasterServerAvailabilityModel::IsAvailabilityTaskValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerAvailabilityModel*), "IsAvailabilityTaskValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerAvailabilityModel::StartRequest
// Il2CppName: StartRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MasterServerAvailabilityModel::*)()>(&GlobalNamespace::MasterServerAvailabilityModel::StartRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerAvailabilityModel*), "StartRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerAvailabilityModel::GetAvailabilityAsyncInternal
// Il2CppName: GetAvailabilityAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::Tasks::Task_1<GlobalNamespace::MasterServerAvailabilityData*>* (GlobalNamespace::MasterServerAvailabilityModel::*)()>(&GlobalNamespace::MasterServerAvailabilityModel::GetAvailabilityAsyncInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MasterServerAvailabilityModel*), "GetAvailabilityAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MasterServerAvailabilityModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
