#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerGameNoteController_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerConnectedPlayerDisappearingArrowController)
namespace GlobalNamespace {
class MultiplayerConnectedPlayerGameNoteController;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerConnectedPlayerDisappearingArrowController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController);
// Type: ::MultiplayerConnectedPlayerDisappearingArrowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4742)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4742), inst: 356 }), TypeDefinitionIndex(TypeDefinitionIndex(5137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5135))
// CS Name: ::MultiplayerConnectedPlayerDisappearingArrowController*
class CORDL_TYPE MultiplayerConnectedPlayerDisappearingArrowController : public ::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::DisappearingArrowControllerBase_1<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>)]{};

/// @brief Field _gameNoteController offset 0x50
 __declspec(property(get=__get__gameNoteController, put=__set__gameNoteController)) ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*  _gameNoteController;

 __declspec(property(get=get_gameNoteController)) ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*  gameNoteController;

constexpr void __set__gameNoteController(::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*  value) ;

constexpr ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* __get__gameNoteController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*> __get__gameNoteController() const;

/// @brief Method get_gameNoteController addr 0x23d77ec size 0x8 virtual true final false
inline ::GlobalNamespace::MultiplayerConnectedPlayerGameNoteController* get_gameNoteController() ;

static inline ::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController* New_ctor() ;

/// @brief Method .ctor addr 0x23d77f4 size 0x6c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerDisappearingArrowController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConnectedPlayerDisappearingArrowController(MultiplayerConnectedPlayerDisappearingArrowController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConnectedPlayerDisappearingArrowController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConnectedPlayerDisappearingArrowController(MultiplayerConnectedPlayerDisappearingArrowController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConnectedPlayerDisappearingArrowController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConnectedPlayerDisappearingArrowController*, "", "MultiplayerConnectedPlayerDisappearingArrowController");
