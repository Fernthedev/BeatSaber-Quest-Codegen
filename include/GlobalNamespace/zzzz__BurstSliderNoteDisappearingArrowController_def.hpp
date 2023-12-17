#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BurstSliderGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
CORDL_MODULE_EXPORT(BurstSliderNoteDisappearingArrowController)
namespace GlobalNamespace {
class BurstSliderGameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstSliderNoteDisappearingArrowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BurstSliderNoteDisappearingArrowController);
// Type: ::BurstSliderNoteDisappearingArrowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4742)), TypeDefinitionIndex(TypeDefinitionIndex(4738)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4742), inst: 288 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4739))
// CS Name: ::BurstSliderNoteDisappearingArrowController*
class CORDL_TYPE BurstSliderNoteDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::BurstSliderGameNoteController*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::BurstSliderGameNoteController*>)]{};

/// @brief Field _burstSliderNoteController offset 0x50
 __declspec(property(get=__get__burstSliderNoteController, put=__set__burstSliderNoteController)) ::GlobalNamespace::BurstSliderGameNoteController*  _burstSliderNoteController;

 __declspec(property(get=get_gameNoteController)) ::GlobalNamespace::BurstSliderGameNoteController*  gameNoteController;

constexpr void __set__burstSliderNoteController(::GlobalNamespace::BurstSliderGameNoteController*  value) ;

constexpr ::GlobalNamespace::BurstSliderGameNoteController* __get__burstSliderNoteController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BurstSliderGameNoteController*> __get__burstSliderNoteController() const;

/// @brief Method get_gameNoteController addr 0x2384ba4 size 0x8 virtual true final false
inline ::GlobalNamespace::BurstSliderGameNoteController* get_gameNoteController() ;

static inline ::GlobalNamespace::BurstSliderNoteDisappearingArrowController* New_ctor() ;

/// @brief Method .ctor addr 0x2384bac size 0x6c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BurstSliderNoteDisappearingArrowController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstSliderNoteDisappearingArrowController(BurstSliderNoteDisappearingArrowController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstSliderNoteDisappearingArrowController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstSliderNoteDisappearingArrowController(BurstSliderNoteDisappearingArrowController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BurstSliderNoteDisappearingArrowController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstSliderNoteDisappearingArrowController, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BurstSliderNoteDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderNoteDisappearingArrowController*, "", "BurstSliderNoteDisappearingArrowController");
