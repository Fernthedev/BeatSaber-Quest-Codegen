// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerAvailabilityData
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class MasterServerAvailabilityData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus
    struct AvailabilityStatus;
    // Nested type: GlobalNamespace::MasterServerAvailabilityData::UserMessage
    class UserMessage;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MasterServerAvailabilityData/AvailabilityStatus
    // [TokenAttribute] Offset: FFFFFFFF
    struct AvailabilityStatus/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: AvailabilityStatus
      constexpr AvailabilityStatus(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServerAvailabilityData/AvailabilityStatus Online
      static constexpr const int Online = 0;
      // Get static field: static public MasterServerAvailabilityData/AvailabilityStatus Online
      static GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus _get_Online();
      // Set static field: static public MasterServerAvailabilityData/AvailabilityStatus Online
      static void _set_Online(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus value);
      // static field const value: static public MasterServerAvailabilityData/AvailabilityStatus MaintenanceUpcoming
      static constexpr const int MaintenanceUpcoming = 1;
      // Get static field: static public MasterServerAvailabilityData/AvailabilityStatus MaintenanceUpcoming
      static GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus _get_MaintenanceUpcoming();
      // Set static field: static public MasterServerAvailabilityData/AvailabilityStatus MaintenanceUpcoming
      static void _set_MaintenanceUpcoming(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus value);
      // static field const value: static public MasterServerAvailabilityData/AvailabilityStatus Offline
      static constexpr const int Offline = 2;
      // Get static field: static public MasterServerAvailabilityData/AvailabilityStatus Offline
      static GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus _get_Offline();
      // Set static field: static public MasterServerAvailabilityData/AvailabilityStatus Offline
      static void _set_Offline(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus value);
      // Get instance field: public System.Int32 value__
      int _get_value__();
      // Set instance field: public System.Int32 value__
      void _set_value__(int value);
    }; // MasterServerAvailabilityData/AvailabilityStatus
    #pragma pack(pop)
    static check_size<sizeof(MasterServerAvailabilityData::AvailabilityStatus), 0 + sizeof(int)> __GlobalNamespace_MasterServerAvailabilityData_AvailabilityStatusSizeCheck;
    static_assert(sizeof(MasterServerAvailabilityData::AvailabilityStatus) == 0x4);
    // public System.String minimumAppVersion
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* minimumAppVersion;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public MasterServerAvailabilityData/AvailabilityStatus status
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus status;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus) == 0x4);
    // Padding between fields: status and: maintenanceStartTime
    char __padding1[0x4] = {};
    // public System.Int64 maintenanceStartTime
    // Size: 0x8
    // Offset: 0x20
    int64_t maintenanceStartTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int64 maintenanceEndTime
    // Size: 0x8
    // Offset: 0x28
    int64_t maintenanceEndTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public MasterServerAvailabilityData/UserMessage userMessage
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MasterServerAvailabilityData::UserMessage* userMessage;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerAvailabilityData::UserMessage*) == 0x8);
    // Creating value type constructor for type: MasterServerAvailabilityData
    MasterServerAvailabilityData(::Il2CppString* minimumAppVersion_ = {}, GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus status_ = {}, int64_t maintenanceStartTime_ = {}, int64_t maintenanceEndTime_ = {}, GlobalNamespace::MasterServerAvailabilityData::UserMessage* userMessage_ = {}) noexcept : minimumAppVersion{minimumAppVersion_}, status{status_}, maintenanceStartTime{maintenanceStartTime_}, maintenanceEndTime{maintenanceEndTime_}, userMessage{userMessage_} {}
    // Get instance field: public System.String minimumAppVersion
    ::Il2CppString* _get_minimumAppVersion();
    // Set instance field: public System.String minimumAppVersion
    void _set_minimumAppVersion(::Il2CppString* value);
    // Get instance field: public MasterServerAvailabilityData/AvailabilityStatus status
    GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus _get_status();
    // Set instance field: public MasterServerAvailabilityData/AvailabilityStatus status
    void _set_status(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus value);
    // Get instance field: public System.Int64 maintenanceStartTime
    int64_t _get_maintenanceStartTime();
    // Set instance field: public System.Int64 maintenanceStartTime
    void _set_maintenanceStartTime(int64_t value);
    // Get instance field: public System.Int64 maintenanceEndTime
    int64_t _get_maintenanceEndTime();
    // Set instance field: public System.Int64 maintenanceEndTime
    void _set_maintenanceEndTime(int64_t value);
    // Get instance field: public MasterServerAvailabilityData/UserMessage userMessage
    GlobalNamespace::MasterServerAvailabilityData::UserMessage* _get_userMessage();
    // Set instance field: public MasterServerAvailabilityData/UserMessage userMessage
    void _set_userMessage(GlobalNamespace::MasterServerAvailabilityData::UserMessage* value);
    // public System.Void .ctor()
    // Offset: 0x10E4A64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerAvailabilityData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerAvailabilityData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerAvailabilityData*, creationType>()));
    }
  }; // MasterServerAvailabilityData
  #pragma pack(pop)
  static check_size<sizeof(MasterServerAvailabilityData), 48 + sizeof(GlobalNamespace::MasterServerAvailabilityData::UserMessage*)> __GlobalNamespace_MasterServerAvailabilityDataSizeCheck;
  static_assert(sizeof(MasterServerAvailabilityData) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerAvailabilityData*, "", "MasterServerAvailabilityData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerAvailabilityData::AvailabilityStatus, "", "MasterServerAvailabilityData/AvailabilityStatus");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerAvailabilityData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
