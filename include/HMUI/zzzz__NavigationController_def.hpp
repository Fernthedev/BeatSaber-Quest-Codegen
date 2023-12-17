#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ContainerViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigationController)
namespace HMUI {
class __NavigationController____c__DisplayClass10_0;
}
namespace HMUI {
struct __NavigationController__Alignment;
}
namespace System {
class Action;
}
namespace HMUI {
class ViewController;
}
namespace HMUI {
struct __NavigationController__Orientation;
}
namespace HMUI {
class __NavigationController____c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace HMUI {
struct __NavigationController__Alignment;
}
namespace HMUI {
struct __NavigationController__Orientation;
}
namespace HMUI {
class NavigationController;
}
namespace HMUI {
class __NavigationController____c__DisplayClass10_0;
}
namespace HMUI {
class __NavigationController____c__DisplayClass8_0;
}
// Write type traits
MARK_VAL_T(::HMUI::__NavigationController__Alignment);
MARK_VAL_T(::HMUI::__NavigationController__Orientation);
MARK_REF_PTR_T(::HMUI::NavigationController);
MARK_REF_PTR_T(::HMUI::__NavigationController____c__DisplayClass10_0);
MARK_REF_PTR_T(::HMUI::__NavigationController____c__DisplayClass8_0);
// Type: ::Orientation
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13584))
// CS Name: ::NavigationController::Orientation
struct CORDL_TYPE __NavigationController__Orientation : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____NavigationController__Orientation_Unwrapped
enum struct ____NavigationController__Orientation_Unwrapped : int32_t {
__E_Horizontal = static_cast<int32_t>(0x0),
__E_Vertical = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Horizontal value: static_cast<int32_t>(0x0)
static ::HMUI::__NavigationController__Orientation const Horizontal;

/// @brief Field Vertical value: static_cast<int32_t>(0x1)
static ::HMUI::__NavigationController__Orientation const Vertical;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____NavigationController__Orientation_Unwrapped () const noexcept {
return std::bit_cast<____NavigationController__Orientation_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NavigationController__Orientation(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NavigationController__Orientation(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NavigationController__Orientation()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NavigationController__Orientation, 0x4>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::Alignment
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13585))
// CS Name: ::NavigationController::Alignment
struct CORDL_TYPE __NavigationController__Alignment : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____NavigationController__Alignment_Unwrapped
enum struct ____NavigationController__Alignment_Unwrapped : int32_t {
__E_Beginning = static_cast<int32_t>(0x0),
__E_Middle = static_cast<int32_t>(0x1),
__E_End = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Beginning value: static_cast<int32_t>(0x0)
static ::HMUI::__NavigationController__Alignment const Beginning;

/// @brief Field Middle value: static_cast<int32_t>(0x1)
static ::HMUI::__NavigationController__Alignment const Middle;

/// @brief Field End value: static_cast<int32_t>(0x2)
static ::HMUI::__NavigationController__Alignment const End;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____NavigationController__Alignment_Unwrapped () const noexcept {
return std::bit_cast<____NavigationController__Alignment_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __NavigationController__Alignment(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __NavigationController__Alignment(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __NavigationController__Alignment()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NavigationController__Alignment, 0x4>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass8_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13586))
// CS Name: ::NavigationController::<>c__DisplayClass8_0*
class CORDL_TYPE __NavigationController____c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field startPositions offset 0x10
 __declspec(property(get=__get_startPositions, put=__set_startPositions)) ::ArrayW<float_t,::Array<float_t>*>  startPositions;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::NavigationController*  __4__this;

/// @brief Field viewController offset 0x20
 __declspec(property(get=__get_viewController, put=__set_viewController)) ::HMUI::ViewController*  viewController;

/// @brief Field endPositions offset 0x28
 __declspec(property(get=__get_endPositions, put=__set_endPositions)) ::ArrayW<float_t,::Array<float_t>*>  endPositions;

constexpr void __set_startPositions(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_startPositions() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_startPositions() const;

constexpr void __set___4__this(::HMUI::NavigationController*  value) ;

constexpr ::HMUI::NavigationController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> __get___4__this() const;

constexpr void __set_viewController(::HMUI::ViewController*  value) ;

constexpr ::HMUI::ViewController* __get_viewController() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> __get_viewController() const;

constexpr void __set_endPositions(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_endPositions() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_endPositions() const;

static inline ::HMUI::__NavigationController____c__DisplayClass8_0* New_ctor() ;

/// @brief Method .ctor addr 0x212b32c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PushViewController>g__AnimationLayouter|0 addr 0x212b5dc size 0x2a8 virtual false final false
inline void _PushViewController_g__AnimationLayouter_0(float_t  t, ::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>  viewControllers) ;

// Ctor Parameters [CppParam { name: "", ty: "__NavigationController____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NavigationController____c__DisplayClass8_0(__NavigationController____c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NavigationController____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NavigationController____c__DisplayClass8_0(__NavigationController____c__DisplayClass8_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NavigationController____c__DisplayClass8_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NavigationController____c__DisplayClass8_0, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: ::<>c__DisplayClass10_0
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13587))
// CS Name: ::NavigationController::<>c__DisplayClass10_0*
class CORDL_TYPE __NavigationController____c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field startPositions offset 0x10
 __declspec(property(get=__get_startPositions, put=__set_startPositions)) ::ArrayW<float_t,::Array<float_t>*>  startPositions;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::HMUI::NavigationController*  __4__this;

/// @brief Field endPositions offset 0x20
 __declspec(property(get=__get_endPositions, put=__set_endPositions)) ::ArrayW<float_t,::Array<float_t>*>  endPositions;

/// @brief Field moveOffset offset 0x28
 __declspec(property(get=__get_moveOffset, put=__set_moveOffset)) float_t  moveOffset;

constexpr void __set_startPositions(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_startPositions() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_startPositions() const;

constexpr void __set___4__this(::HMUI::NavigationController*  value) ;

constexpr ::HMUI::NavigationController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> __get___4__this() const;

constexpr void __set_endPositions(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get_endPositions() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get_endPositions() const;

constexpr void __set_moveOffset(float_t  value) ;

constexpr float_t& __get_moveOffset() ;

constexpr float_t const& __get_moveOffset() const;

static inline ::HMUI::__NavigationController____c__DisplayClass10_0* New_ctor() ;

/// @brief Method .ctor addr 0x212b530 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <PopViewControllers>g__AnimationLayouter|0 addr 0x212b884 size 0x274 virtual false final false
inline void _PopViewControllers_g__AnimationLayouter_0(float_t  t, ::ArrayW<::HMUI::ViewController*,::Array<::HMUI::ViewController*>*>  viewControllers, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*  removingViewControllers) ;

// Ctor Parameters [CppParam { name: "", ty: "__NavigationController____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NavigationController____c__DisplayClass10_0(__NavigationController____c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NavigationController____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NavigationController____c__DisplayClass10_0(__NavigationController____c__DisplayClass10_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __NavigationController____c__DisplayClass10_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__NavigationController____c__DisplayClass10_0, 0x30>, "Size mismatch!");

} // namespace end def HMUI
// Type: HMUI::NavigationController
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13570))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13588))
// CS Name: ::HMUI::NavigationController*
class CORDL_TYPE NavigationController : public ::HMUI::ContainerViewController {
public:
// Declarations
using __c__DisplayClass10_0 = ::HMUI::__NavigationController____c__DisplayClass10_0;

using __c__DisplayClass8_0 = ::HMUI::__NavigationController____c__DisplayClass8_0;

using Alignment = ::HMUI::__NavigationController__Alignment;

using Orientation = ::HMUI::__NavigationController__Orientation;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x98};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x98 - sizeof(::HMUI::ContainerViewController)]{};

/// @brief Field _orientation offset 0x80
 __declspec(property(get=__get__orientation, put=__set__orientation)) ::HMUI::__NavigationController__Orientation  _orientation;

/// @brief Field _reversedStacking offset 0x84
 __declspec(property(get=__get__reversedStacking, put=__set__reversedStacking)) bool  _reversedStacking;

/// @brief Field _alignment offset 0x88
 __declspec(property(get=__get__alignment, put=__set__alignment)) ::HMUI::__NavigationController__Alignment  _alignment;

/// @brief Field _edgeSize offset 0x8c
 __declspec(property(get=__get__edgeSize, put=__set__edgeSize)) float_t  _edgeSize;

/// @brief Field _viewControllersSeparator offset 0x90
 __declspec(property(get=__get__viewControllersSeparator, put=__set__viewControllersSeparator)) float_t  _viewControllersSeparator;

constexpr void __set__orientation(::HMUI::__NavigationController__Orientation  value) ;

constexpr ::HMUI::__NavigationController__Orientation& __get__orientation() ;

constexpr ::HMUI::__NavigationController__Orientation const& __get__orientation() const;

constexpr void __set__reversedStacking(bool  value) ;

constexpr bool& __get__reversedStacking() ;

constexpr bool const& __get__reversedStacking() const;

constexpr void __set__alignment(::HMUI::__NavigationController__Alignment  value) ;

constexpr ::HMUI::__NavigationController__Alignment& __get__alignment() ;

constexpr ::HMUI::__NavigationController__Alignment const& __get__alignment() const;

constexpr void __set__edgeSize(float_t  value) ;

constexpr float_t& __get__edgeSize() ;

constexpr float_t const& __get__edgeSize() const;

constexpr void __set__viewControllersSeparator(float_t  value) ;

constexpr float_t& __get__viewControllersSeparator() ;

constexpr float_t const& __get__viewControllersSeparator() const;

/// @brief Method LayoutViewControllers addr 0x212abf4 size 0x118 virtual true final false
inline void LayoutViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>*  viewControllers) ;

/// @brief Method PushViewController addr 0x212b24c size 0xe0 virtual false final false
inline void PushViewController(::HMUI::ViewController*  viewController, ::System::Action*  finishedCallback, bool  immediately) ;

/// @brief Method PopViewController addr 0x212b334 size 0x14 virtual false final false
inline void PopViewController(::System::Action*  finishedCallback, bool  immediately) ;

/// @brief Method PopViewControllers addr 0x212b348 size 0x1e8 virtual false final false
inline void PopViewControllers(int32_t  numberOfViewControllersToPop, ::System::Action*  finishedCallback, bool  immediately) ;

/// @brief Method PositionVector addr 0x212b22c size 0x20 virtual false final false
inline ::UnityEngine::Vector3 PositionVector(float_t  pos) ;

/// @brief Method SetupViewControllerRect addr 0x212b200 size 0x2c virtual false final false
inline void SetupViewControllerRect(::HMUI::ViewController*  viewController) ;

/// @brief Method GetNewPositionsForViewControllers addr 0x212ad0c size 0x4f4 virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> GetNewPositionsForViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>*  viewControllers, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*  fixedViewControllers, float_t  fixedEndPos) ;

static inline ::HMUI::NavigationController* New_ctor() ;

/// @brief Method .ctor addr 0x212b5cc size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NavigationController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NavigationController(NavigationController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavigationController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavigationController(NavigationController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NavigationController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::NavigationController, 0x98>, "Size mismatch!");

} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NavigationController__Alignment, "HMUI", "NavigationController/Alignment");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NavigationController__Orientation, "HMUI", "NavigationController/Orientation");
NEED_NO_BOX(::HMUI::NavigationController);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::NavigationController*, "HMUI", "NavigationController");
NEED_NO_BOX(::HMUI::__NavigationController____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NavigationController____c__DisplayClass10_0*, "HMUI", "NavigationController/<>c__DisplayClass10_0");
NEED_NO_BOX(::HMUI::__NavigationController____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__NavigationController____c__DisplayClass8_0*, "HMUI", "NavigationController/<>c__DisplayClass8_0");
