#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(BadCutsMissionObjectiveChecker)
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class BadCutsMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BadCutsMissionObjectiveChecker);
// Type: ::BadCutsMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5086))
// CS Name: ::BadCutsMissionObjectiveChecker*
class CORDL_TYPE BadCutsMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::SimpleValueMissionObjectiveChecker)]{};

/// @brief Field _beatmapObjectManager offset 0x48
 __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager)) ::GlobalNamespace::BeatmapObjectManager*  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectManager* __get__beatmapObjectManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> __get__beatmapObjectManager() const;

/// @brief Method Init addr 0x23cb068 size 0x14c virtual true final false
inline void Init() ;

/// @brief Method OnDestroy addr 0x23cb1f0 size 0x98 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleNoteWasCut addr 0x23cb288 size 0x8c virtual false final false
inline void HandleNoteWasCut(::GlobalNamespace::NoteController*  noteController, ByRef<::GlobalNamespace::NoteCutInfo>  noteCutInfo) ;

static inline ::GlobalNamespace::BadCutsMissionObjectiveChecker* New_ctor() ;

/// @brief Method .ctor addr 0x23cb454 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BadCutsMissionObjectiveChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BadCutsMissionObjectiveChecker(BadCutsMissionObjectiveChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BadCutsMissionObjectiveChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BadCutsMissionObjectiveChecker(BadCutsMissionObjectiveChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BadCutsMissionObjectiveChecker()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BadCutsMissionObjectiveChecker, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BadCutsMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BadCutsMissionObjectiveChecker*, "", "BadCutsMissionObjectiveChecker");
