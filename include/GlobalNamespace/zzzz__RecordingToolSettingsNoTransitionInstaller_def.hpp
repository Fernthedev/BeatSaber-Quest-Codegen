#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(RecordingToolSettingsNoTransitionInstaller)
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
// Type: ::RecordingToolSettingsNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6041))
// CS Name: ::RecordingToolSettingsNoTransitionInstaller*
class CORDL_TYPE RecordingToolSettingsNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::NoTransitionInstaller)]{};

/// @brief Field _recordingToolSceneSetupData offset 0x18
 __declspec(property(get=__get__recordingToolSceneSetupData, put=__set__recordingToolSceneSetupData)) ::GlobalNamespace::RecordingToolSceneSetupData*  _recordingToolSceneSetupData;

/// @brief Field _scenesTransitionSetupData offset 0x20
 __declspec(property(get=__get__scenesTransitionSetupData, put=__set__scenesTransitionSetupData)) ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*  _scenesTransitionSetupData;

constexpr void __set__recordingToolSceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData*  value) ;

constexpr ::GlobalNamespace::RecordingToolSceneSetupData* __get__recordingToolSceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSceneSetupData*> __get__recordingToolSceneSetupData() const;

constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO* __get__scenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO*> __get__scenesTransitionSetupData() const;

/// @brief Method InstallBindings addr 0x231b6f8 size 0x44 virtual true final false
inline void InstallBindings(::Zenject::DiContainer*  container) ;

static inline ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x231b744 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RecordingToolSettingsNoTransitionInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*, "", "RecordingToolSettingsNoTransitionInstaller");
