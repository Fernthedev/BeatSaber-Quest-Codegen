#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameServerPlayerTableItem)
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayerTableItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerPlayerTableItem);
// Type: ::GameServerPlayerTableItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4488))
// CS Name: ::GameServerPlayerTableItem*
class CORDL_TYPE GameServerPlayerTableItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field playerName offset 0x10
 __declspec(property(get=__get_playerName, put=__set_playerName)) ::StringW  playerName;

/// @brief Field suggestedLevel offset 0x18
 __declspec(property(get=__get_suggestedLevel, put=__set_suggestedLevel)) ::StringW  suggestedLevel;

/// @brief Field suggestedModifiers offset 0x20
 __declspec(property(get=__get_suggestedModifiers, put=__set_suggestedModifiers)) ::StringW  suggestedModifiers;

/// @brief Field isReady offset 0x28
 __declspec(property(get=__get_isReady, put=__set_isReady)) bool  isReady;

constexpr void __set_playerName(::StringW  value) ;

constexpr ::StringW& __get_playerName() ;

constexpr ::StringW const& __get_playerName() const;

constexpr void __set_suggestedLevel(::StringW  value) ;

constexpr ::StringW& __get_suggestedLevel() ;

constexpr ::StringW const& __get_suggestedLevel() const;

constexpr void __set_suggestedModifiers(::StringW  value) ;

constexpr ::StringW& __get_suggestedModifiers() ;

constexpr ::StringW const& __get_suggestedModifiers() const;

constexpr void __set_isReady(bool  value) ;

constexpr bool& __get_isReady() ;

constexpr bool const& __get_isReady() const;

static inline ::GlobalNamespace::GameServerPlayerTableItem* New_ctor(::StringW  playerName, ::StringW  suggestedLevel, ::StringW  suggestedModifiers, bool  isReady) ;

/// @brief Method .ctor addr 0x2355bb8 size 0x44 virtual false final false
inline void _ctor(::StringW  playerName, ::StringW  suggestedLevel, ::StringW  suggestedModifiers, bool  isReady) ;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServerPlayerTableItem(GameServerPlayerTableItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServerPlayerTableItem(GameServerPlayerTableItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameServerPlayerTableItem()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerPlayerTableItem, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerPlayerTableItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerPlayerTableItem*, "", "GameServerPlayerTableItem");
