#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsFlowCoordinator)
namespace GlobalNamespace {
class __RecordingToolSettingsFlowCoordinator__InitData;
}
namespace GlobalNamespace {
class RecordingToolLoggingViewController;
}
namespace GlobalNamespace {
class RecordingToolConfigViewController;
}
namespace GlobalNamespace {
class RecordingToolSettingsViewController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsFlowCoordinator;
}
namespace GlobalNamespace {
class __RecordingToolSettingsFlowCoordinator__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsFlowCoordinator);
MARK_REF_PTR_T(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5521))
// CS Name: ::RecordingToolSettingsFlowCoordinator::InitData*
class CORDL_TYPE __RecordingToolSettingsFlowCoordinator__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field nextScenesTransitionSetupData offset 0x10
 __declspec(property(get=__get_nextScenesTransitionSetupData, put=__set_nextScenesTransitionSetupData)) ::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData;

constexpr void __set_nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* __get_nextScenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> __get_nextScenesTransitionSetupData() const;

static inline ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData) ;

/// @brief Method .ctor addr 0x229b6a8 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData) ;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolSettingsFlowCoordinator__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RecordingToolSettingsFlowCoordinator__InitData(__RecordingToolSettingsFlowCoordinator__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RecordingToolSettingsFlowCoordinator__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RecordingToolSettingsFlowCoordinator__InitData(__RecordingToolSettingsFlowCoordinator__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __RecordingToolSettingsFlowCoordinator__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::RecordingToolSettingsFlowCoordinator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13582))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5522))
// CS Name: ::RecordingToolSettingsFlowCoordinator*
class CORDL_TYPE RecordingToolSettingsFlowCoordinator : public ::HMUI::FlowCoordinator {
public:
// Declarations
using InitData = ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::HMUI::FlowCoordinator)]{};

/// @brief Field _recordingToolConfigViewController offset 0xa8
 __declspec(property(get=__get__recordingToolConfigViewController, put=__set__recordingToolConfigViewController)) ::GlobalNamespace::RecordingToolConfigViewController*  _recordingToolConfigViewController;

/// @brief Field _recordingToolSettingsViewController offset 0xb0
 __declspec(property(get=__get__recordingToolSettingsViewController, put=__set__recordingToolSettingsViewController)) ::GlobalNamespace::RecordingToolSettingsViewController*  _recordingToolSettingsViewController;

/// @brief Field _recordingToolLoggingViewController offset 0xb8
 __declspec(property(get=__get__recordingToolLoggingViewController, put=__set__recordingToolLoggingViewController)) ::GlobalNamespace::RecordingToolLoggingViewController*  _recordingToolLoggingViewController;

/// @brief Field _gameScenesManager offset 0xc0
 __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager)) ::GlobalNamespace::GameScenesManager*  _gameScenesManager;

/// @brief Field _initData offset 0xc8
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*  _initData;

constexpr void __set__recordingToolConfigViewController(::GlobalNamespace::RecordingToolConfigViewController*  value) ;

constexpr ::GlobalNamespace::RecordingToolConfigViewController* __get__recordingToolConfigViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolConfigViewController*> __get__recordingToolConfigViewController() const;

constexpr void __set__recordingToolSettingsViewController(::GlobalNamespace::RecordingToolSettingsViewController*  value) ;

constexpr ::GlobalNamespace::RecordingToolSettingsViewController* __get__recordingToolSettingsViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSettingsViewController*> __get__recordingToolSettingsViewController() const;

constexpr void __set__recordingToolLoggingViewController(::GlobalNamespace::RecordingToolLoggingViewController*  value) ;

constexpr ::GlobalNamespace::RecordingToolLoggingViewController* __get__recordingToolLoggingViewController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolLoggingViewController*> __get__recordingToolLoggingViewController() const;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager*  value) ;

constexpr ::GlobalNamespace::GameScenesManager* __get__gameScenesManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> __get__gameScenesManager() const;

constexpr void __set__initData(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*  value) ;

constexpr ::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*> __get__initData() const;

/// @brief Method DidActivate addr 0x229b4a0 size 0xf4 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x229b594 size 0xa0 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method Update addr 0x229b634 size 0x2c virtual false final false
inline void Update() ;

/// @brief Method HandleRecordingToolSettingsViewControllerDidFinish addr 0x229b660 size 0x4 virtual false final false
inline void HandleRecordingToolSettingsViewControllerDidFinish() ;

/// @brief Method GoToNextScene addr 0x229b664 size 0x3c virtual false final false
inline void GoToNextScene() ;

static inline ::GlobalNamespace::RecordingToolSettingsFlowCoordinator* New_ctor() ;

/// @brief Method .ctor addr 0x229b6a0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsFlowCoordinator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolSettingsFlowCoordinator(RecordingToolSettingsFlowCoordinator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolSettingsFlowCoordinator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsFlowCoordinator, 0xd0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsFlowCoordinator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsFlowCoordinator*, "", "RecordingToolSettingsFlowCoordinator");
NEED_NO_BOX(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RecordingToolSettingsFlowCoordinator__InitData*, "", "RecordingToolSettingsFlowCoordinator/InitData");
