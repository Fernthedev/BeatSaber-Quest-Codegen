// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PS4PublisherSKUSettingsSO
  class PS4PublisherSKUSettingsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PS4ActivePublisherSKUSettingsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4ActivePublisherSKUSettingsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // [NullAllowed] Offset: 0xE3AFE8
    // public PS4PublisherSKUSettingsSO activePublisherSKUSettings
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::PS4PublisherSKUSettingsSO* activePublisherSKUSettings;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PS4PublisherSKUSettingsSO*) == 0x8);
    // Creating value type constructor for type: PS4ActivePublisherSKUSettingsSO
    PS4ActivePublisherSKUSettingsSO(GlobalNamespace::PS4PublisherSKUSettingsSO* activePublisherSKUSettings_ = {}) noexcept : activePublisherSKUSettings{activePublisherSKUSettings_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: public PS4PublisherSKUSettingsSO activePublisherSKUSettings
    GlobalNamespace::PS4PublisherSKUSettingsSO*& dyn_activePublisherSKUSettings();
    // public System.Void .ctor()
    // Offset: 0x1034A58
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4ActivePublisherSKUSettingsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4ActivePublisherSKUSettingsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4ActivePublisherSKUSettingsSO*, creationType>()));
    }
  }; // PS4ActivePublisherSKUSettingsSO
  #pragma pack(pop)
  static check_size<sizeof(PS4ActivePublisherSKUSettingsSO), 24 + sizeof(GlobalNamespace::PS4PublisherSKUSettingsSO*)> __GlobalNamespace_PS4ActivePublisherSKUSettingsSOSizeCheck;
  static_assert(sizeof(PS4ActivePublisherSKUSettingsSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4ActivePublisherSKUSettingsSO*, "", "PS4ActivePublisherSKUSettingsSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4ActivePublisherSKUSettingsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
