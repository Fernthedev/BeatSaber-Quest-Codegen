// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: CampaignFlowCoordinator
#include "GlobalNamespace/CampaignFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionHelpViewController
  class MissionHelpViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CampaignFlowCoordinator/<>c__DisplayClass20_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CampaignFlowCoordinator::$$c__DisplayClass20_0 : public ::Il2CppObject {
    public:
    // public CampaignFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::CampaignFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CampaignFlowCoordinator*) == 0x8);
    // public MissionHelpViewController viewController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionHelpViewController* viewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionHelpViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass20_0
    $$c__DisplayClass20_0(GlobalNamespace::CampaignFlowCoordinator* $$4__this_ = {}, GlobalNamespace::MissionHelpViewController* viewController_ = {}) noexcept : $$4__this{$$4__this_}, viewController{viewController_} {}
    // Get instance field: public CampaignFlowCoordinator <>4__this
    GlobalNamespace::CampaignFlowCoordinator* _get_$$4__this();
    // Set instance field: public CampaignFlowCoordinator <>4__this
    void _set_$$4__this(GlobalNamespace::CampaignFlowCoordinator* value);
    // Get instance field: public MissionHelpViewController viewController
    GlobalNamespace::MissionHelpViewController* _get_viewController();
    // Set instance field: public MissionHelpViewController viewController
    void _set_viewController(GlobalNamespace::MissionHelpViewController* value);
    // System.Void <HandleMissionHelpViewControllerDidFinish>b__0()
    // Offset: 0x10E9E68
    void $HandleMissionHelpViewControllerDidFinish$b__0();
    // public System.Void .ctor()
    // Offset: 0x10E9E60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CampaignFlowCoordinator::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CampaignFlowCoordinator::$$c__DisplayClass20_0*, creationType>()));
    }
  }; // CampaignFlowCoordinator/<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(CampaignFlowCoordinator::$$c__DisplayClass20_0), 24 + sizeof(GlobalNamespace::MissionHelpViewController*)> __GlobalNamespace_CampaignFlowCoordinator_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(CampaignFlowCoordinator::$$c__DisplayClass20_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0*, "", "CampaignFlowCoordinator/<>c__DisplayClass20_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::$HandleMissionHelpViewControllerDidFinish$b__0
// Il2CppName: <HandleMissionHelpViewControllerDidFinish>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::*)()>(&GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::$HandleMissionHelpViewControllerDidFinish$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0*), "<HandleMissionHelpViewControllerDidFinish>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
