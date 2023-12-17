#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatSaberDefineSymbols)
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberDefineSymbols;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatSaberDefineSymbols);
// Type: ::BeatSaberDefineSymbols
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16243))
// CS Name: ::BeatSaberDefineSymbols*
class CORDL_TYPE BeatSaberDefineSymbols : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kIgnoreVrFocusLostEvents offset 0x0
static constexpr ::ConstString  kIgnoreVrFocusLostEvents{u"IGNORE_VR_FOCUS_LOST_EVENTS"};

/// @brief Field kEnableMultiplayerMock offset 0x0
static constexpr ::ConstString  kEnableMultiplayerMock{u"ENABLE_MULTIPLAYER_MOCK"};

// Ctor Parameters [CppParam { name: "", ty: "BeatSaberDefineSymbols", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatSaberDefineSymbols(BeatSaberDefineSymbols && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatSaberDefineSymbols", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatSaberDefineSymbols(BeatSaberDefineSymbols const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatSaberDefineSymbols()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberDefineSymbols, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatSaberDefineSymbols);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberDefineSymbols*, "", "BeatSaberDefineSymbols");
