// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerController/<>c__DisplayClass43_0
  // [CompilerGeneratedAttribute] Offset: E12278
  class MultiplayerController::$$c__DisplayClass43_0 : public ::Il2CppObject {
    public:
    // public MultiplayerController <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::MultiplayerController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerController*) == 0x8);
    // public System.Single introAnimationStartSyncTime
    // Size: 0x4
    // Offset: 0x18
    float introAnimationStartSyncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass43_0
    $$c__DisplayClass43_0(GlobalNamespace::MultiplayerController* $$4__this_ = {}, float introAnimationStartSyncTime_ = {}) noexcept : $$4__this{$$4__this_}, introAnimationStartSyncTime{introAnimationStartSyncTime_} {}
    // System.Void <HandleSongStartSyncControllerSyncStartSuccess>b__0()
    // Offset: 0x1152FF0
    void $HandleSongStartSyncControllerSyncStartSuccess$b__0();
    // public System.Void .ctor()
    // Offset: 0x1152124
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerController::$$c__DisplayClass43_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerController::$$c__DisplayClass43_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerController::$$c__DisplayClass43_0*, creationType>()));
    }
  }; // MultiplayerController/<>c__DisplayClass43_0
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerController::$$c__DisplayClass43_0), 24 + sizeof(float)> __GlobalNamespace_MultiplayerController_$$c__DisplayClass43_0SizeCheck;
  static_assert(sizeof(MultiplayerController::$$c__DisplayClass43_0) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerController::$$c__DisplayClass43_0*, "", "MultiplayerController/<>c__DisplayClass43_0");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerController::$$c__DisplayClass43_0::$HandleSongStartSyncControllerSyncStartSuccess$b__0
// Il2CppName: <HandleSongStartSyncControllerSyncStartSuccess>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerController::$$c__DisplayClass43_0::*)()>(&GlobalNamespace::MultiplayerController::$$c__DisplayClass43_0::$HandleSongStartSyncControllerSyncStartSuccess$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerController::$$c__DisplayClass43_0*), "<HandleSongStartSyncControllerSyncStartSuccess>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerController::$$c__DisplayClass43_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
