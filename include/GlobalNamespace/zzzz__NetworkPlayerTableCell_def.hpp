#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetworkPlayerTableCell)
namespace UnityEngine {
class GameObject;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkPlayerTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayerTableCell);
// Type: ::NetworkPlayerTableCell
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13664))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5588))
// CS Name: ::NetworkPlayerTableCell*
class CORDL_TYPE NetworkPlayerTableCell : public ::HMUI::TableCell {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc8 - sizeof(::HMUI::TableCell)]{};

/// @brief Field _playerNameText offset 0x58
 __declspec(property(get=__get__playerNameText, put=__set__playerNameText)) ::TMPro::TextMeshProUGUI*  _playerNameText;

/// @brief Field _separator offset 0x60
 __declspec(property(get=__get__separator, put=__set__separator)) ::UnityEngine::GameObject*  _separator;

/// @brief Field _privateIcon offset 0x68
 __declspec(property(get=__get__privateIcon, put=__set__privateIcon)) ::UnityEngine::UI::Image*  _privateIcon;

/// @brief Field _spectateIcon offset 0x70
 __declspec(property(get=__get__spectateIcon, put=__set__spectateIcon)) ::UnityEngine::UI::Image*  _spectateIcon;

/// @brief Field _partyLeaderIcon offset 0x78
 __declspec(property(get=__get__partyLeaderIcon, put=__set__partyLeaderIcon)) ::UnityEngine::UI::Image*  _partyLeaderIcon;

/// @brief Field _bgImage offset 0x80
 __declspec(property(get=__get__bgImage, put=__set__bgImage)) ::UnityEngine::UI::Image*  _bgImage;

/// @brief Field _highlightImage offset 0x88
 __declspec(property(get=__get__highlightImage, put=__set__highlightImage)) ::UnityEngine::UI::Image*  _highlightImage;

/// @brief Field _textColorNormal offset 0x90
 __declspec(property(get=__get__textColorNormal, put=__set__textColorNormal)) ::UnityEngine::Color  _textColorNormal;

/// @brief Field _textColorMe offset 0xa0
 __declspec(property(get=__get__textColorMe, put=__set__textColorMe)) ::UnityEngine::Color  _textColorMe;

/// @brief Field _textColorSelected offset 0xb0
 __declspec(property(get=__get__textColorSelected, put=__set__textColorSelected)) ::UnityEngine::Color  _textColorSelected;

/// @brief Field _isMe offset 0xc0
 __declspec(property(get=__get__isMe, put=__set__isMe)) bool  _isMe;

 __declspec(property(get=get_showSeparator, put=set_showSeparator)) bool  showSeparator;

 __declspec(property(get=get_activeColor)) ::UnityEngine::Color  activeColor;

constexpr void __set__playerNameText(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get__playerNameText() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get__playerNameText() const;

constexpr void __set__separator(::UnityEngine::GameObject*  value) ;

constexpr ::UnityEngine::GameObject* __get__separator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> __get__separator() const;

constexpr void __set__privateIcon(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__privateIcon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__privateIcon() const;

constexpr void __set__spectateIcon(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__spectateIcon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__spectateIcon() const;

constexpr void __set__partyLeaderIcon(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__partyLeaderIcon() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__partyLeaderIcon() const;

constexpr void __set__bgImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__bgImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__bgImage() const;

constexpr void __set__highlightImage(::UnityEngine::UI::Image*  value) ;

constexpr ::UnityEngine::UI::Image* __get__highlightImage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> __get__highlightImage() const;

constexpr void __set__textColorNormal(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__textColorNormal() ;

constexpr ::UnityEngine::Color const& __get__textColorNormal() const;

constexpr void __set__textColorMe(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__textColorMe() ;

constexpr ::UnityEngine::Color const& __get__textColorMe() const;

constexpr void __set__textColorSelected(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__textColorSelected() ;

constexpr ::UnityEngine::Color const& __get__textColorSelected() const;

constexpr void __set__isMe(bool  value) ;

constexpr bool& __get__isMe() ;

constexpr bool const& __get__isMe() const;

/// @brief Method get_showSeparator addr 0x22a9ab0 size 0x1c virtual false final false
inline bool get_showSeparator() ;

/// @brief Method set_showSeparator addr 0x22a8ea8 size 0x2c virtual false final false
inline void set_showSeparator(bool  value) ;

/// @brief Method SetData addr 0x22a8e0c size 0x9c virtual false final false
inline void SetData(::StringW  userName, bool  isOpenParty, bool  wantsToPlayNextLevel, bool  isMyPartyOwner, bool  isMe) ;

/// @brief Method SelectionDidChange addr 0x22a9ce0 size 0x4 virtual true final false
inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method HighlightDidChange addr 0x22a9ce4 size 0x4 virtual true final false
inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType) ;

/// @brief Method RefreshVisuals addr 0x22a9acc size 0x214 virtual false final false
inline void RefreshVisuals() ;

/// @brief Method get_activeColor addr 0x22a9ce8 size 0x5c virtual false final false
inline ::UnityEngine::Color get_activeColor() ;

static inline ::GlobalNamespace::NetworkPlayerTableCell* New_ctor() ;

/// @brief Method .ctor addr 0x22a9d44 size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerTableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPlayerTableCell(NetworkPlayerTableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPlayerTableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPlayerTableCell(NetworkPlayerTableCell const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetworkPlayerTableCell()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayerTableCell, 0xc8>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkPlayerTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayerTableCell*, "", "NetworkPlayerTableCell");
