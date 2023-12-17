#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConnectedPlayerName)
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class ConnectedPlayerName;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::ConnectedPlayerName);
// Type: BeatSaber.AvatarCore::ConnectedPlayerName
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15189))
// CS Name: ::BeatSaber.AvatarCore::ConnectedPlayerName*
class CORDL_TYPE ConnectedPlayerName : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _nameText offset 0x18
 __declspec(property(get=__get__nameText, put=__set__nameText)) ::TMPro::TextMeshProUGUI*  _nameText;

/// @brief Field _connectedPlayer offset 0x20
 __declspec(property(get=__get__connectedPlayer, put=__set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer*  _connectedPlayer;

constexpr void __set__nameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__nameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__nameText() const;

constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer*  value) ;

constexpr ::GlobalNamespace::IConnectedPlayer* __get__connectedPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> __get__connectedPlayer() const;

/// @brief Method Start addr 0xe0f56c size 0xc4 virtual false final false
inline void Start() ;

static inline ::BeatSaber::AvatarCore::ConnectedPlayerName* New_ctor() ;

/// @brief Method .ctor addr 0xe0f630 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectedPlayerName(ConnectedPlayerName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectedPlayerName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectedPlayerName(ConnectedPlayerName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConnectedPlayerName()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::ConnectedPlayerName, 0x28>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::ConnectedPlayerName);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::ConnectedPlayerName*, "BeatSaber.AvatarCore", "ConnectedPlayerName");
