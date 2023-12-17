#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
CORDL_MODULE_EXPORT(GameServerListTableCell)
namespace HMUI {
class CurvedTextMeshPro;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerListTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerListTableCell);
// Type: ::GameServerListTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5422))
// CS Name: ::GameServerListTableCell*
class CORDL_TYPE GameServerListTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::HMUI::TableCell)]{};

/// @brief Field _serverName offset 0x58
 __declspec(property(get=__get__serverName, put=__set__serverName)) ::HMUI::CurvedTextMeshPro*  _serverName;

/// @brief Field _difficultiesText offset 0x60
 __declspec(property(get=__get__difficultiesText, put=__set__difficultiesText)) ::HMUI::CurvedTextMeshPro*  _difficultiesText;

/// @brief Field _musicPackText offset 0x68
 __declspec(property(get=__get__musicPackText, put=__set__musicPackText)) ::HMUI::CurvedTextMeshPro*  _musicPackText;

/// @brief Field _playerCount offset 0x70
 __declspec(property(get=__get__playerCount, put=__set__playerCount)) ::HMUI::CurvedTextMeshPro*  _playerCount;

/// @brief Field _passwordProtected offset 0x78
 __declspec(property(get=__get__passwordProtected, put=__set__passwordProtected)) ::UnityEngine::GameObject*  _passwordProtected;

/// @brief Field _songPackMasksModel offset 0x80
 __declspec(property(get=__get__songPackMasksModel, put=__set__songPackMasksModel)) ::GlobalNamespace::SongPackMasksModel*  _songPackMasksModel;

constexpr void __set__serverName(::HMUI::CurvedTextMeshPro*  value) ;

constexpr ::HMUI::CurvedTextMeshPro* __get__serverName() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> __get__serverName() const;

constexpr void __set__difficultiesText(::HMUI::CurvedTextMeshPro*  value) ;

constexpr ::HMUI::CurvedTextMeshPro* __get__difficultiesText() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> __get__difficultiesText() const;

constexpr void __set__musicPackText(::HMUI::CurvedTextMeshPro*  value) ;

constexpr ::HMUI::CurvedTextMeshPro* __get__musicPackText() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> __get__musicPackText() const;

constexpr void __set__playerCount(::HMUI::CurvedTextMeshPro*  value) ;

constexpr ::HMUI::CurvedTextMeshPro* __get__playerCount() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::CurvedTextMeshPro*> __get__playerCount() const;

constexpr void __set__passwordProtected(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__passwordProtected() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__passwordProtected() const;

constexpr void __set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel*  value) ;

constexpr ::GlobalNamespace::SongPackMasksModel* __get__songPackMasksModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> __get__songPackMasksModel() const;

/// @brief Method SetData addr 0x2278f74 size 0x390 virtual false final false
inline void SetData(::GlobalNamespace::INetworkPlayer*  player) ;

static inline ::GlobalNamespace::GameServerListTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x2279304 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameServerListTableCell(GameServerListTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameServerListTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameServerListTableCell(GameServerListTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameServerListTableCell()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerListTableCell, 0x88>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerListTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerListTableCell*, "", "GameServerListTableCell");
