#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameServerListItem)
// Forward declare root types
namespace GlobalNamespace {
class GameServerListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerListItem);
// Type: ::GameServerListItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4487))
// CS Name: ::GameServerListItem*
class CORDL_TYPE GameServerListItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field serverName offset 0x10
 __declspec(property(get=__get_serverName, put=__set_serverName)) ::StringW  serverName;

/// @brief Field capacity offset 0x18
 __declspec(property(get=__get_capacity, put=__set_capacity)) int32_t  capacity;

/// @brief Field occupied offset 0x1c
 __declspec(property(get=__get_occupied, put=__set_occupied)) int32_t  occupied;

/// @brief Field password offset 0x20
 __declspec(property(get=__get_password, put=__set_password)) bool  password;

constexpr void __set_serverName(::StringW  value) ;

constexpr ::StringW& __get_serverName() ;

constexpr ::StringW const& __get_serverName() const;

constexpr void __set_capacity(int32_t  value) ;

constexpr int32_t& __get_capacity() ;

constexpr int32_t const& __get_capacity() const;

constexpr void __set_occupied(int32_t  value) ;

constexpr int32_t& __get_occupied() ;

constexpr int32_t const& __get_occupied() const;

constexpr void __set_password(bool  value) ;

constexpr bool& __get_password() ;

constexpr bool const& __get_password() const;

static inline ::GlobalNamespace::GameServerListItem* New_ctor(::StringW  serverName, int32_t  capacity, int32_t  occupied, bool  password) ;

/// @brief Method .ctor addr 0x2355b74 size 0x44 virtual false final false
inline void _ctor(::StringW  serverName, int32_t  capacity, int32_t  occupied, bool  password) ;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServerListItem(GameServerListItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServerListItem(GameServerListItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameServerListItem()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerListItem, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerListItem*, "", "GameServerListItem");
