// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: EventsTestGameplayManager
#include "GlobalNamespace/EventsTestGameplayManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightGroup
  class LightGroup;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass19_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass19_0*, "", "EventsTestGameplayManager/<>c__DisplayClass19_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: EventsTestGameplayManager/<>c__DisplayClass19_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class EventsTestGameplayManager::$$c__DisplayClass19_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 lightGroupId
    // Size: 0x4
    // Offset: 0x10
    int lightGroupId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return lightGroupId;
    }
    // Get instance field reference: public System.Int32 lightGroupId
    [[deprecated("Use field access instead!")]] int& dyn_lightGroupId();
    // public System.Void .ctor()
    // Offset: 0x136D450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventsTestGameplayManager::$$c__DisplayClass19_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass19_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventsTestGameplayManager::$$c__DisplayClass19_0*, creationType>()));
    }
    // System.Boolean <AddInstantToggleEventsForLightGroup>b__0(LightGroup x)
    // Offset: 0x136DA78
    bool $AddInstantToggleEventsForLightGroup$b__0(::GlobalNamespace::LightGroup* x);
  }; // EventsTestGameplayManager/<>c__DisplayClass19_0
  #pragma pack(pop)
  static check_size<sizeof(EventsTestGameplayManager::$$c__DisplayClass19_0), 16 + sizeof(int)> __GlobalNamespace_EventsTestGameplayManager_$$c__DisplayClass19_0SizeCheck;
  static_assert(sizeof(EventsTestGameplayManager::$$c__DisplayClass19_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass19_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass19_0::$AddInstantToggleEventsForLightGroup$b__0
// Il2CppName: <AddInstantToggleEventsForLightGroup>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass19_0::*)(::GlobalNamespace::LightGroup*)>(&GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass19_0::$AddInstantToggleEventsForLightGroup$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "LightGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EventsTestGameplayManager::$$c__DisplayClass19_0*), "<AddInstantToggleEventsForLightGroup>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
