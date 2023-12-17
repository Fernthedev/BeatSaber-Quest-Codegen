#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComboMissionObjectiveChecker)
namespace GlobalNamespace {
class ComboController;
}
// Forward declare root types
namespace GlobalNamespace {
class ComboMissionObjectiveChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ComboMissionObjectiveChecker);
// Type: ::ComboMissionObjectiveChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5098))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5087))
// CS Name: ::ComboMissionObjectiveChecker*
class CORDL_TYPE ComboMissionObjectiveChecker : public ::GlobalNamespace::SimpleValueMissionObjectiveChecker {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::SimpleValueMissionObjectiveChecker)]{};

/// @brief Field _comboController offset 0x48
 __declspec(property(get=__get__comboController, put=__set__comboController)) ::GlobalNamespace::ComboController*  _comboController;

constexpr void __set__comboController(::GlobalNamespace::ComboController*  value) ;

constexpr ::GlobalNamespace::ComboController* __get__comboController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> __get__comboController() const;

/// @brief Method Init addr 0x23cb464 size 0x14c virtual true final false
inline void Init() ;

/// @brief Method OnDestroy addr 0x23cb5b0 size 0xd4 virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleComboDidChange addr 0x23cb684 size 0x50 virtual false final false
inline void HandleComboDidChange(int32_t  combo) ;

static inline ::GlobalNamespace::ComboMissionObjectiveChecker* New_ctor() ;

/// @brief Method .ctor addr 0x23cb6d4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ComboMissionObjectiveChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComboMissionObjectiveChecker(ComboMissionObjectiveChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComboMissionObjectiveChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComboMissionObjectiveChecker(ComboMissionObjectiveChecker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ComboMissionObjectiveChecker()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ComboMissionObjectiveChecker, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ComboMissionObjectiveChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ComboMissionObjectiveChecker*, "", "ComboMissionObjectiveChecker");
