#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_def.hpp"
CORDL_MODULE_EXPORT(FullComboMissionObjectiveChecker)
namespace GlobalNamespace {
class ComboController;
}
// Forward declare root types
namespace GlobalNamespace {
class FullComboMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FullComboMissionObjectiveChecker);
// Type: ::FullComboMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5093))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5089))
// CS Name: ::FullComboMissionObjectiveChecker*
class CORDL_TYPE FullComboMissionObjectiveChecker : public ::GlobalNamespace::MissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::MissionObjectiveChecker)]{};

/// @brief Field _comboController offset 0x48
 __declspec(property(get=__get__comboController, put=__set__comboController)) ::GlobalNamespace::ComboController*  _comboController;

constexpr void __set__comboController(::GlobalNamespace::ComboController*  value) ;

constexpr ::GlobalNamespace::ComboController* __get__comboController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> __get__comboController() const;

/// @brief Method Init addr 0x23cba24 size 0x104 virtual true final false
inline void Init() ;

/// @brief Method OnDestroy addr 0x23cbb28 size 0xd4 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleComboBreakingEventHappened addr 0x23cbbfc size 0x3c virtual false final false
inline void HandleComboBreakingEventHappened() ;

static inline ::GlobalNamespace::FullComboMissionObjectiveChecker* New_ctor() ;

/// @brief Method .ctor addr 0x23cbc38 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FullComboMissionObjectiveChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FullComboMissionObjectiveChecker(FullComboMissionObjectiveChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FullComboMissionObjectiveChecker()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FullComboMissionObjectiveChecker, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FullComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FullComboMissionObjectiveChecker*, "", "FullComboMissionObjectiveChecker");
