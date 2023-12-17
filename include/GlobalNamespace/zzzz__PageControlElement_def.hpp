#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PageControlElement)
namespace HMUI {
class ImageView;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class PageControlElement;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PageControlElement);
// Type: ::PageControlElement
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5803))
// CS Name: ::PageControlElement*
class CORDL_TYPE PageControlElement : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _rectTransform offset 0x18
 __declspec(property(get=__get__rectTransform, put=__set__rectTransform)) ::UnityEngine::RectTransform*  _rectTransform;

/// @brief Field _imageView offset 0x20
 __declspec(property(get=__get__imageView, put=__set__imageView)) ::HMUI::ImageView*  _imageView;

/// @brief Field _selectedColor offset 0x28
 __declspec(property(get=__get__selectedColor, put=__set__selectedColor)) ::UnityEngine::Color  _selectedColor;

/// @brief Field _unselectedColor offset 0x38
 __declspec(property(get=__get__unselectedColor, put=__set__unselectedColor)) ::UnityEngine::Color  _unselectedColor;

 __declspec(property(get=get_rectTransform)) ::UnityEngine::RectTransform*  rectTransform;

constexpr void __set__rectTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__rectTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__rectTransform() const;

constexpr void __set__imageView(::HMUI::ImageView*  value) ;

constexpr ::HMUI::ImageView* __get__imageView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> __get__imageView() const;

constexpr void __set__selectedColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__selectedColor() ;

constexpr ::UnityEngine::Color const& __get__selectedColor() const;

constexpr void __set__unselectedColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__unselectedColor() ;

constexpr ::UnityEngine::Color const& __get__unselectedColor() const;

/// @brief Method get_rectTransform addr 0x22e7fa0 size 0x8 virtual false final false
inline ::UnityEngine::RectTransform* get_rectTransform() ;

/// @brief Method SetSelected addr 0x22e7d74 size 0x64 virtual false final false
inline void SetSelected(bool  isSelected) ;

static inline ::GlobalNamespace::PageControlElement* New_ctor() ;

/// @brief Method .ctor addr 0x22e7fa8 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PageControlElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PageControlElement(PageControlElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PageControlElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PageControlElement(PageControlElement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PageControlElement()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PageControlElement, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PageControlElement);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PageControlElement*, "", "PageControlElement");
