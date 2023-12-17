#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CannotStartGameReasonMethods)
namespace GlobalNamespace {
struct CannotStartGameReason;
}
// Forward declare root types
namespace GlobalNamespace {
class CannotStartGameReasonMethods;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CannotStartGameReasonMethods);
// Type: ::CannotStartGameReasonMethods
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4484))
// CS Name: ::CannotStartGameReasonMethods*
class CORDL_TYPE CannotStartGameReasonMethods : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kAllPlayersSpectating offset 0x0
static constexpr ::ConstString  kAllPlayersSpectating{u"LABEL_CANT_START_GAME_ALL_PLAYERS_SPECTATING"};

/// @brief Field kNoSongSelected offset 0x0
static constexpr ::ConstString  kNoSongSelected{u"LABEL_CANT_START_GAME_NO_SONG_SELECTED"};

/// @brief Field kAllPlayersNotInLobby offset 0x0
static constexpr ::ConstString  kAllPlayersNotInLobby{u"LABEL_CANT_START_GAME_ALL_PLAYERS_NOT_IN_LOBBY"};

/// @brief Field kDoNotOwnSong offset 0x0
static constexpr ::ConstString  kDoNotOwnSong{u"LABEL_CANT_START_GAME_DO_NOT_OWN_SONG"};

/// @brief Method LocalizedKey addr 0x2355840 size 0xd8 virtual false final false
static inline ::StringW LocalizedKey(::GlobalNamespace::CannotStartGameReason  cannotStartGameReason) ;

// Ctor Parameters [CppParam { name: "", ty: "CannotStartGameReasonMethods", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CannotStartGameReasonMethods(CannotStartGameReasonMethods && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CannotStartGameReasonMethods", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CannotStartGameReasonMethods(CannotStartGameReasonMethods const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CannotStartGameReasonMethods()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CannotStartGameReasonMethods, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CannotStartGameReasonMethods);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CannotStartGameReasonMethods*, "", "CannotStartGameReasonMethods");
