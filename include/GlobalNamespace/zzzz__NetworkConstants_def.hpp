#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkConstants)
// Forward declare root types
namespace GlobalNamespace {
class NetworkConstants;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkConstants);
// Type: ::NetworkConstants
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12889))
// CS Name: ::NetworkConstants*
class CORDL_TYPE NetworkConstants : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kProtocolVersion offset 0x0
static constexpr uint32_t  kProtocolVersion{static_cast<uint32_t>(0x5abef009u)};

/// @brief Field kHandshakeMessageType offset 0x0
static constexpr uint32_t  kHandshakeMessageType{static_cast<uint32_t>(0x475abef0u)};

/// @brief Field kUserMasterServerMessageType offset 0x0
static constexpr uint32_t  kUserMasterServerMessageType{static_cast<uint32_t>(0x20030201u)};

/// @brief Field kDedicatedServerMasterServerMessageType offset 0x0
static constexpr uint32_t  kDedicatedServerMasterServerMessageType{static_cast<uint32_t>(0x64200302u)};

/// @brief Field kGameLiftMessageType offset 0x0
static constexpr uint32_t  kGameLiftMessageType{static_cast<uint32_t>(0x65642003u)};

/// @brief Field dedicatedServerState offset 0x0
static constexpr ::ConstString  dedicatedServerState{u"dedicated_server"};

/// @brief Field playerState offset 0x0
static constexpr ::ConstString  playerState{u"player"};

/// @brief Field spectatingState offset 0x0
static constexpr ::ConstString  spectatingState{u"spectating"};

/// @brief Field backgroundedState offset 0x0
static constexpr ::ConstString  backgroundedState{u"backgrounded"};

/// @brief Field terminatingState offset 0x0
static constexpr ::ConstString  terminatingState{u"terminating"};

/// @brief Field wantsToPlayNextLevel offset 0x0
static constexpr ::ConstString  wantsToPlayNextLevel{u"wants_to_play_next_level"};

/// @brief Field wasActiveAtLevelStart offset 0x0
static constexpr ::ConstString  wasActiveAtLevelStart{u"was_active_at_level_start"};

/// @brief Field isActive offset 0x0
static constexpr ::ConstString  isActive{u"is_active"};

/// @brief Field finishedLevel offset 0x0
static constexpr ::ConstString  finishedLevel{u"finished_level"};

// Ctor Parameters [CppParam { name: "", ty: "NetworkConstants", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkConstants(NetworkConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkConstants", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkConstants(NetworkConstants const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetworkConstants()  = default;
public:


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkConstants, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkConstants*, "", "NetworkConstants");
