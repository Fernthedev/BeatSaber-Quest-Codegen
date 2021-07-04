// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HapticFeedbackController
#include "GlobalNamespace/HapticFeedbackController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HapticFeedbackController/RumbleData
  class HapticFeedbackController::RumbleData : public ::Il2CppObject {
    public:
    // public System.Boolean active
    // Size: 0x1
    // Offset: 0x10
    bool active;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean continuous
    // Size: 0x1
    // Offset: 0x11
    bool continuous;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: continuous and: strength
    char __padding1[0x2] = {};
    // public System.Single strength
    // Size: 0x4
    // Offset: 0x14
    float strength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single endTime
    // Size: 0x4
    // Offset: 0x18
    float endTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single frequency
    // Size: 0x4
    // Offset: 0x1C
    float frequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: RumbleData
    RumbleData(bool active_ = {}, bool continuous_ = {}, float strength_ = {}, float endTime_ = {}, float frequency_ = {}) noexcept : active{active_}, continuous{continuous_}, strength{strength_}, endTime{endTime_}, frequency{frequency_} {}
    // public System.Void .ctor()
    // Offset: 0x124B704
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HapticFeedbackController::RumbleData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HapticFeedbackController::RumbleData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HapticFeedbackController::RumbleData*, creationType>()));
    }
  }; // HapticFeedbackController/RumbleData
  #pragma pack(pop)
  static check_size<sizeof(HapticFeedbackController::RumbleData), 28 + sizeof(float)> __GlobalNamespace_HapticFeedbackController_RumbleDataSizeCheck;
  static_assert(sizeof(HapticFeedbackController::RumbleData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HapticFeedbackController::RumbleData*, "", "HapticFeedbackController/RumbleData");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::HapticFeedbackController::RumbleData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
