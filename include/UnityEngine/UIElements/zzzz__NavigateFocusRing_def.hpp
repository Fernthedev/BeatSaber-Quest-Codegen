#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigateFocusRing)
namespace UnityEngine::UIElements {
class VisualElementFocusRing;
}
namespace UnityEngine::UIElements {
class __NavigateFocusRing__ChangeDirection;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct __NavigateFocusRing__FocusableHierarchyTraversal;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigateFocusRing;
}
namespace UnityEngine::UIElements {
class __NavigateFocusRing__ChangeDirection;
}
namespace UnityEngine::UIElements {
struct __NavigateFocusRing__FocusableHierarchyTraversal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigateFocusRing);
MARK_REF_PTR_T(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection);
MARK_VAL_T(::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal);
// Type: ::ChangeDirection
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6881))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7020))
// CS Name: ::NavigateFocusRing::ChangeDirection*
class CORDL_TYPE __NavigateFocusRing__ChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::FocusChangeDirection)]{};

static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* New_ctor(int32_t  i) ;

/// @brief Method .ctor addr 0x2e18640 size 0x68 virtual false final false
inline void _ctor(int32_t  i) ;

// Ctor Parameters [CppParam { name: "", ty: "__NavigateFocusRing__ChangeDirection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NavigateFocusRing__ChangeDirection(__NavigateFocusRing__ChangeDirection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NavigateFocusRing__ChangeDirection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NavigateFocusRing__ChangeDirection(__NavigateFocusRing__ChangeDirection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NavigateFocusRing__ChangeDirection()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: ::FocusableHierarchyTraversal
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7021))
// CS Name: ::NavigateFocusRing::FocusableHierarchyTraversal
struct CORDL_TYPE __NavigateFocusRing__FocusableHierarchyTraversal : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field currentFocusable offset 0x0
 __declspec(property(get=__get_currentFocusable, put=__set_currentFocusable)) ::UnityEngine::UIElements::VisualElement*  currentFocusable;

/// @brief Field validRect offset 0x8
 __declspec(property(get=__get_validRect, put=__set_validRect)) ::UnityEngine::Rect  validRect;

/// @brief Field firstPass offset 0x18
 __declspec(property(get=__get_firstPass, put=__set_firstPass)) bool  firstPass;

/// @brief Field direction offset 0x20
 __declspec(property(get=__get_direction, put=__set_direction)) ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  direction;

constexpr void __set_currentFocusable(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_currentFocusable() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_currentFocusable() const;

constexpr void __set_validRect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_validRect() ;

constexpr ::UnityEngine::Rect const& __get_validRect() const;

constexpr void __set_firstPass(bool  value) ;

constexpr bool& __get_firstPass() ;

constexpr bool const& __get_firstPass() const;

constexpr void __set_direction(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value) ;

constexpr ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* __get_direction() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*> __get_direction() const;

/// @brief Method ValidateHierarchyTraversal addr 0x2e186a8 size 0xb0 virtual false final false
inline bool ValidateHierarchyTraversal(::UnityEngine::UIElements::VisualElement*  v) ;

/// @brief Method ValidateElement addr 0x2e18758 size 0xc4 virtual false final false
inline bool ValidateElement(::UnityEngine::UIElements::VisualElement*  v) ;

/// @brief Method Order addr 0x2e1881c size 0xec virtual false final false
inline int32_t Order(::UnityEngine::UIElements::VisualElement*  a, ::UnityEngine::UIElements::VisualElement*  b) ;

/// @brief Method StrictOrder addr 0x2e18c30 size 0x84 virtual false final false
inline int32_t StrictOrder(::UnityEngine::UIElements::VisualElement*  a, ::UnityEngine::UIElements::VisualElement*  b) ;

/// @brief Method StrictOrder addr 0x2e18908 size 0x1f4 virtual false final false
inline int32_t StrictOrder(::UnityEngine::Rect  ra, ::UnityEngine::Rect  rb) ;

/// @brief Method TieBreaker addr 0x2e18afc size 0x134 virtual false final false
inline int32_t TieBreaker(::UnityEngine::Rect  ra, ::UnityEngine::Rect  rb) ;

/// @brief Method GetBestOverall addr 0x2e18064 size 0x13c virtual false final false
inline ::UnityEngine::UIElements::VisualElement* GetBestOverall(::UnityEngine::UIElements::VisualElement*  candidate, ::UnityEngine::UIElements::VisualElement*  bestSoFar) ;

// Ctor Parameters [CppParam { name: "currentFocusable", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "validRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "firstPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "direction", ty: "::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*", modifiers: "", def_value: None }]
constexpr __NavigateFocusRing__FocusableHierarchyTraversal(::UnityEngine::UIElements::VisualElement*  currentFocusable, ::UnityEngine::Rect  validRect, bool  firstPass, ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  direction) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NavigateFocusRing__FocusableHierarchyTraversal(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NavigateFocusRing__FocusableHierarchyTraversal()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::NavigateFocusRing
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7022))
// CS Name: ::UnityEngine.UIElements::NavigateFocusRing*
class CORDL_TYPE NavigateFocusRing : public ::System::Object {
public:
// Declarations
using FocusableHierarchyTraversal = ::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal;

using ChangeDirection = ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Root offset 0x10
 __declspec(property(get=__get_m_Root, put=__set_m_Root)) ::UnityEngine::UIElements::VisualElement*  m_Root;

/// @brief Field m_Ring offset 0x18
 __declspec(property(get=__get_m_Ring, put=__set_m_Ring)) ::UnityEngine::UIElements::VisualElementFocusRing*  m_Ring;

 __declspec(property(get=get_focusController)) ::UnityEngine::UIElements::FocusController*  focusController;

/// @brief Convert operator to "::UnityEngine::UIElements::IFocusRing"
constexpr operator  ::UnityEngine::UIElements::IFocusRing*() noexcept;

static inline void setStaticF_Left(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value) ;

static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Left() ;

static inline void setStaticF_Right(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value) ;

static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Right() ;

static inline void setStaticF_Up(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value) ;

static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Up() ;

static inline void setStaticF_Down(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value) ;

static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Down() ;

static inline void setStaticF_Next(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value) ;

static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Next() ;

static inline void setStaticF_Previous(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  value) ;

static inline ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection* getStaticF_Previous() ;

constexpr void __set_m_Root(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_m_Root() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_m_Root() const;

constexpr void __set_m_Ring(::UnityEngine::UIElements::VisualElementFocusRing*  value) ;

constexpr ::UnityEngine::UIElements::VisualElementFocusRing* __get_m_Ring() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElementFocusRing*> __get_m_Ring() const;

/// @brief Method get_focusController addr 0x2e1733c size 0x24 virtual false final false
inline ::UnityEngine::UIElements::FocusController* get_focusController() ;

static inline ::UnityEngine::UIElements::NavigateFocusRing* New_ctor(::UnityEngine::UIElements::VisualElement*  root) ;

/// @brief Method .ctor addr 0x2e16824 size 0x84 virtual false final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  root) ;

/// @brief Method GetFocusChangeDirection addr 0x2e17360 size 0x438 virtual true final true
inline ::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::EventBase*  e) ;

/// @brief Method GetNextFocusable addr 0x2e17798 size 0x2b4 virtual true final false
inline ::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection*  direction) ;

/// @brief Method GetNextFocusable2D addr 0x2e17a4c size 0x590 virtual false final false
inline ::UnityEngine::UIElements::Focusable* GetNextFocusable2D(::UnityEngine::UIElements::Focusable*  currentFocusable, ::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*  direction) ;

/// @brief Method IsActive addr 0x2e18200 size 0xd8 virtual false final false
static inline bool IsActive(::UnityEngine::UIElements::VisualElement*  v) ;

/// @brief Method IsFocusable addr 0x2e182d8 size 0x40 virtual false final false
static inline bool IsFocusable(::UnityEngine::UIElements::Focusable*  focusable) ;

/// @brief Method IsLeaf addr 0x2e18318 size 0x40 virtual false final false
static inline bool IsLeaf(::UnityEngine::UIElements::Focusable*  focusable) ;

/// @brief Method IsFocusRoot addr 0x2e18358 size 0xb0 virtual false final false
static inline bool IsFocusRoot(::UnityEngine::UIElements::VisualElement*  focusable) ;

/// @brief Method GetLeafFocusable addr 0x2e181a0 size 0x60 virtual false final false
static inline ::UnityEngine::UIElements::VisualElement* GetLeafFocusable(::UnityEngine::UIElements::VisualElement*  v) ;

/// @brief Method GetLeafFocusableRecursive addr 0x2e18408 size 0x10c virtual false final false
static inline ::UnityEngine::UIElements::VisualElement* GetLeafFocusableRecursive(::UnityEngine::UIElements::VisualElement*  v) ;

/// @brief Method GetRootFocusable addr 0x2e17fdc size 0x88 virtual false final false
static inline ::UnityEngine::UIElements::VisualElement* GetRootFocusable(::UnityEngine::UIElements::VisualElement*  v) ;

// Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NavigateFocusRing(NavigateFocusRing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavigateFocusRing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavigateFocusRing(NavigateFocusRing const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NavigateFocusRing()  = default;
public:


// Fields

// Static field Left

// Static field Right

// Static field Up

// Static field Down

// Static field Next

// Static field Previous


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigateFocusRing, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::NavigateFocusRing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigateFocusRing*, "UnityEngine.UIElements", "NavigateFocusRing");
NEED_NO_BOX(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigateFocusRing__ChangeDirection*, "UnityEngine.UIElements", "NavigateFocusRing/ChangeDirection");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__NavigateFocusRing__FocusableHierarchyTraversal, "UnityEngine.UIElements", "NavigateFocusRing/FocusableHierarchyTraversal");
