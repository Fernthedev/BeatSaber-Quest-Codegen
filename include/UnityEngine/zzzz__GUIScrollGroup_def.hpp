#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__GUILayoutGroup_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GUIScrollGroup)
namespace UnityEngine {
class GUIStyle;
}
// Forward declare root types
namespace UnityEngine {
class GUIScrollGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIScrollGroup);
// Type: UnityEngine::GUIScrollGroup
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14622))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14623))
// CS Name: ::UnityEngine::GUIScrollGroup*
class CORDL_TYPE GUIScrollGroup : public ::UnityEngine::GUILayoutGroup {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc0 - sizeof(::UnityEngine::GUILayoutGroup)]{};

/// @brief Field calcMinWidth offset 0x90
 __declspec(property(get=__get_calcMinWidth, put=__set_calcMinWidth)) float_t  calcMinWidth;

/// @brief Field calcMaxWidth offset 0x94
 __declspec(property(get=__get_calcMaxWidth, put=__set_calcMaxWidth)) float_t  calcMaxWidth;

/// @brief Field calcMinHeight offset 0x98
 __declspec(property(get=__get_calcMinHeight, put=__set_calcMinHeight)) float_t  calcMinHeight;

/// @brief Field calcMaxHeight offset 0x9c
 __declspec(property(get=__get_calcMaxHeight, put=__set_calcMaxHeight)) float_t  calcMaxHeight;

/// @brief Field clientWidth offset 0xa0
 __declspec(property(get=__get_clientWidth, put=__set_clientWidth)) float_t  clientWidth;

/// @brief Field clientHeight offset 0xa4
 __declspec(property(get=__get_clientHeight, put=__set_clientHeight)) float_t  clientHeight;

/// @brief Field allowHorizontalScroll offset 0xa8
 __declspec(property(get=__get_allowHorizontalScroll, put=__set_allowHorizontalScroll)) bool  allowHorizontalScroll;

/// @brief Field allowVerticalScroll offset 0xa9
 __declspec(property(get=__get_allowVerticalScroll, put=__set_allowVerticalScroll)) bool  allowVerticalScroll;

/// @brief Field needsHorizontalScrollbar offset 0xaa
 __declspec(property(get=__get_needsHorizontalScrollbar, put=__set_needsHorizontalScrollbar)) bool  needsHorizontalScrollbar;

/// @brief Field needsVerticalScrollbar offset 0xab
 __declspec(property(get=__get_needsVerticalScrollbar, put=__set_needsVerticalScrollbar)) bool  needsVerticalScrollbar;

/// @brief Field horizontalScrollbar offset 0xb0
 __declspec(property(get=__get_horizontalScrollbar, put=__set_horizontalScrollbar)) ::UnityEngine::GUIStyle*  horizontalScrollbar;

/// @brief Field verticalScrollbar offset 0xb8
 __declspec(property(get=__get_verticalScrollbar, put=__set_verticalScrollbar)) ::UnityEngine::GUIStyle*  verticalScrollbar;

constexpr void __set_calcMinWidth(float_t  value) ;

constexpr float_t& __get_calcMinWidth() ;

constexpr float_t const& __get_calcMinWidth() const;

constexpr void __set_calcMaxWidth(float_t  value) ;

constexpr float_t& __get_calcMaxWidth() ;

constexpr float_t const& __get_calcMaxWidth() const;

constexpr void __set_calcMinHeight(float_t  value) ;

constexpr float_t& __get_calcMinHeight() ;

constexpr float_t const& __get_calcMinHeight() const;

constexpr void __set_calcMaxHeight(float_t  value) ;

constexpr float_t& __get_calcMaxHeight() ;

constexpr float_t const& __get_calcMaxHeight() const;

constexpr void __set_clientWidth(float_t  value) ;

constexpr float_t& __get_clientWidth() ;

constexpr float_t const& __get_clientWidth() const;

constexpr void __set_clientHeight(float_t  value) ;

constexpr float_t& __get_clientHeight() ;

constexpr float_t const& __get_clientHeight() const;

constexpr void __set_allowHorizontalScroll(bool  value) ;

constexpr bool& __get_allowHorizontalScroll() ;

constexpr bool const& __get_allowHorizontalScroll() const;

constexpr void __set_allowVerticalScroll(bool  value) ;

constexpr bool& __get_allowVerticalScroll() ;

constexpr bool const& __get_allowVerticalScroll() const;

constexpr void __set_needsHorizontalScrollbar(bool  value) ;

constexpr bool& __get_needsHorizontalScrollbar() ;

constexpr bool const& __get_needsHorizontalScrollbar() const;

constexpr void __set_needsVerticalScrollbar(bool  value) ;

constexpr bool& __get_needsVerticalScrollbar() ;

constexpr bool const& __get_needsVerticalScrollbar() const;

constexpr void __set_horizontalScrollbar(::UnityEngine::GUIStyle*  value) ;

constexpr ::UnityEngine::GUIStyle* __get_horizontalScrollbar() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> __get_horizontalScrollbar() const;

constexpr void __set_verticalScrollbar(::UnityEngine::GUIStyle*  value) ;

constexpr ::UnityEngine::GUIStyle* __get_verticalScrollbar() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> __get_verticalScrollbar() const;

static inline ::UnityEngine::GUIScrollGroup* New_ctor() ;

/// @brief Method .ctor addr 0x2d0c040 size 0x60 virtual false final false
inline void _ctor() ;

/// @brief Method CalcWidth addr 0x2d0c0a0 size 0x80 virtual true final false
inline void CalcWidth() ;

/// @brief Method SetHorizontal addr 0x2d0c120 size 0x12c virtual true final false
inline void SetHorizontal(float_t  x, float_t  width) ;

/// @brief Method CalcHeight addr 0x2d0c330 size 0x100 virtual true final false
inline void CalcHeight() ;

/// @brief Method SetVertical addr 0x2d0c46c size 0x218 virtual true final false
inline void SetVertical(float_t  y, float_t  height) ;

// Ctor Parameters [CppParam { name: "", ty: "GUIScrollGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIScrollGroup(GUIScrollGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIScrollGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIScrollGroup(GUIScrollGroup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GUIScrollGroup()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIScrollGroup, 0xc0>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::GUIScrollGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIScrollGroup*, "UnityEngine", "GUIScrollGroup");
