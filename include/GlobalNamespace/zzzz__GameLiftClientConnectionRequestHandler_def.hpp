#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameLiftClientConnectionRequestHandler)
namespace GlobalNamespace {
class IConnectionRequestHandler;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
class GameLiftClientConnectionRequestHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameLiftClientConnectionRequestHandler);
// Type: ::GameLiftClientConnectionRequestHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12731))
// CS Name: ::GameLiftClientConnectionRequestHandler*
class CORDL_TYPE GameLiftClientConnectionRequestHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <playerSessionId>k__BackingField offset 0x10
 __declspec(property(get=__get__playerSessionId_k__BackingField, put=__set__playerSessionId_k__BackingField)) ::StringW  _playerSessionId_k__BackingField;

 __declspec(property(get=get_playerSessionId, put=set_playerSessionId)) ::StringW  playerSessionId;

/// @brief Convert operator to "::GlobalNamespace::IConnectionRequestHandler"
constexpr operator  ::GlobalNamespace::IConnectionRequestHandler*() noexcept;

constexpr void __set__playerSessionId_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__playerSessionId_k__BackingField() ;

constexpr ::StringW const& __get__playerSessionId_k__BackingField() const;

/// @brief Method get_playerSessionId addr 0xe36b84 size 0x8 virtual false final false
inline ::StringW get_playerSessionId() ;

/// @brief Method set_playerSessionId addr 0xe36b8c size 0x8 virtual false final false
inline void set_playerSessionId(::StringW  value) ;

/// @brief Method GetConnectionMessage addr 0xe36b94 size 0x70 virtual true final true
inline void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter*  writer, ::StringW  userId, ::StringW  userName, bool  isConnectionOwner) ;

/// @brief Method ValidateConnectionMessage addr 0xe36c04 size 0x14 virtual true final true
inline bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader*  reader, ByRef<::StringW>  userId, ByRef<::StringW>  userName, ByRef<bool>  isConnectionOwner) ;

static inline ::GlobalNamespace::GameLiftClientConnectionRequestHandler* New_ctor() ;

/// @brief Method .ctor addr 0xe36c18 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftClientConnectionRequestHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameLiftClientConnectionRequestHandler(GameLiftClientConnectionRequestHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameLiftClientConnectionRequestHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameLiftClientConnectionRequestHandler(GameLiftClientConnectionRequestHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameLiftClientConnectionRequestHandler()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameLiftClientConnectionRequestHandler, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameLiftClientConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftClientConnectionRequestHandler*, "", "GameLiftClientConnectionRequestHandler");
