#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
CORDL_MODULE_EXPORT(TutorialNoTransitionInstaller)
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialNoTransitionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialNoTransitionInstaller);
// Type: ::TutorialNoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6044))
// CS Name: ::TutorialNoTransitionInstaller*
class CORDL_TYPE TutorialNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::NoTransitionInstaller)]{};

/// @brief Field _scenesTransitionSetupData offset 0x18
 __declspec(property(get=__get__scenesTransitionSetupData, put=__set__scenesTransitionSetupData)) ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*  _scenesTransitionSetupData;

/// @brief Field _playerSpecificSettings offset 0x20
 __declspec(property(get=__get__playerSpecificSettings, put=__set__playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings*  _playerSpecificSettings;

constexpr void __set__scenesTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*  value) ;

constexpr ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* __get__scenesTransitionSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialScenesTransitionSetupDataSO*> __get__scenesTransitionSetupData() const;

constexpr void __set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings*  value) ;

constexpr ::GlobalNamespace::PlayerSpecificSettings* __get__playerSpecificSettings() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> __get__playerSpecificSettings() const;

/// @brief Method InstallBindings addr 0x231bfc4 size 0x40 virtual true final false
inline void InstallBindings(::Zenject::DiContainer*  container) ;

static inline ::GlobalNamespace::TutorialNoTransitionInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x231c280 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TutorialNoTransitionInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialNoTransitionInstaller(TutorialNoTransitionInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialNoTransitionInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialNoTransitionInstaller(TutorialNoTransitionInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TutorialNoTransitionInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialNoTransitionInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialNoTransitionInstaller*, "", "TutorialNoTransitionInstaller");
