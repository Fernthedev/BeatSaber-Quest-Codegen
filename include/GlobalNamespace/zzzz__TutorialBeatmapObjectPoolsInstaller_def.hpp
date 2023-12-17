#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(TutorialBeatmapObjectPoolsInstaller)
namespace GlobalNamespace {
class TutorialNoteController;
}
namespace GlobalNamespace {
class BombNoteController;
}
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class NoteLineConnectionController;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialBeatmapObjectPoolsInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller);
// Type: ::TutorialBeatmapObjectPoolsInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5404))
// CS Name: ::TutorialBeatmapObjectPoolsInstaller*
class CORDL_TYPE TutorialBeatmapObjectPoolsInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _basicNotePrefab offset 0x20
 __declspec(property(get=__get__basicNotePrefab, put=__set__basicNotePrefab)) ::GlobalNamespace::TutorialNoteController*  _basicNotePrefab;

/// @brief Field _bombNotePrefab offset 0x28
 __declspec(property(get=__get__bombNotePrefab, put=__set__bombNotePrefab)) ::GlobalNamespace::BombNoteController*  _bombNotePrefab;

/// @brief Field _obstaclePrefab offset 0x30
 __declspec(property(get=__get__obstaclePrefab, put=__set__obstaclePrefab)) ::GlobalNamespace::ObstacleController*  _obstaclePrefab;

/// @brief Field _noteLineConnectionControllerPrefab offset 0x38
 __declspec(property(get=__get__noteLineConnectionControllerPrefab, put=__set__noteLineConnectionControllerPrefab)) ::GlobalNamespace::NoteLineConnectionController*  _noteLineConnectionControllerPrefab;

constexpr void __set__basicNotePrefab(::GlobalNamespace::TutorialNoteController*  value) ;

constexpr ::GlobalNamespace::TutorialNoteController* __get__basicNotePrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TutorialNoteController*> __get__basicNotePrefab() const;

constexpr void __set__bombNotePrefab(::GlobalNamespace::BombNoteController*  value) ;

constexpr ::GlobalNamespace::BombNoteController* __get__bombNotePrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BombNoteController*> __get__bombNotePrefab() const;

constexpr void __set__obstaclePrefab(::GlobalNamespace::ObstacleController*  value) ;

constexpr ::GlobalNamespace::ObstacleController* __get__obstaclePrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleController*> __get__obstaclePrefab() const;

constexpr void __set__noteLineConnectionControllerPrefab(::GlobalNamespace::NoteLineConnectionController*  value) ;

constexpr ::GlobalNamespace::NoteLineConnectionController* __get__noteLineConnectionControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteLineConnectionController*> __get__noteLineConnectionControllerPrefab() const;

/// @brief Method InstallBindings addr 0x227356c size 0x18c virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x22736f8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectPoolsInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TutorialBeatmapObjectPoolsInstaller(TutorialBeatmapObjectPoolsInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TutorialBeatmapObjectPoolsInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TutorialBeatmapObjectPoolsInstaller(TutorialBeatmapObjectPoolsInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TutorialBeatmapObjectPoolsInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialBeatmapObjectPoolsInstaller*, "", "TutorialBeatmapObjectPoolsInstaller");
