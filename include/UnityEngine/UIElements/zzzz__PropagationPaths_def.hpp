#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropagationPaths)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __PropagationPaths__Type;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __PropagationPaths__Type;
}
namespace UnityEngine::UIElements {
class PropagationPaths;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__PropagationPaths__Type);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropagationPaths);
// Type: ::Type
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7171))
// CS Name: ::PropagationPaths::Type
struct CORDL_TYPE __PropagationPaths__Type : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____PropagationPaths__Type_Unwrapped
enum struct ____PropagationPaths__Type_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_TrickleDown = static_cast<int32_t>(0x1),
__E_BubbleUp = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::UIElements::__PropagationPaths__Type const None;

/// @brief Field TrickleDown value: static_cast<int32_t>(0x1)
static ::UnityEngine::UIElements::__PropagationPaths__Type const TrickleDown;

/// @brief Field BubbleUp value: static_cast<int32_t>(0x2)
static ::UnityEngine::UIElements::__PropagationPaths__Type const BubbleUp;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____PropagationPaths__Type_Unwrapped () const noexcept {
return std::bit_cast<____PropagationPaths__Type_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __PropagationPaths__Type(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __PropagationPaths__Type(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __PropagationPaths__Type()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PropagationPaths__Type, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::PropagationPaths
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7172))
// CS Name: ::UnityEngine.UIElements::PropagationPaths*
class CORDL_TYPE PropagationPaths : public ::System::Object {
public:
// Declarations
using Type = ::UnityEngine::UIElements::__PropagationPaths__Type;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field k_DefaultPropagationDepth offset 0x0
static constexpr int32_t  k_DefaultPropagationDepth{static_cast<int32_t>(0x10)};

/// @brief Field k_DefaultTargetCount offset 0x0
static constexpr int32_t  k_DefaultTargetCount{static_cast<int32_t>(0x4)};

/// @brief Field trickleDownPath offset 0x10
 __declspec(property(get=__get_trickleDownPath, put=__set_trickleDownPath)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  trickleDownPath;

/// @brief Field targetElements offset 0x18
 __declspec(property(get=__get_targetElements, put=__set_targetElements)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  targetElements;

/// @brief Field bubbleUpPath offset 0x20
 __declspec(property(get=__get_bubbleUpPath, put=__set_bubbleUpPath)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  bubbleUpPath;

static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>*  value) ;

static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* getStaticF_s_Pool() ;

constexpr void __set_trickleDownPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* __get_trickleDownPath() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> __get_trickleDownPath() const;

constexpr void __set_targetElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* __get_targetElements() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> __get_targetElements() const;

constexpr void __set_bubbleUpPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* __get_bubbleUpPath() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> __get_bubbleUpPath() const;

static inline ::UnityEngine::UIElements::PropagationPaths* New_ctor() ;

/// @brief Method .ctor addr 0x2e4c718 size 0xcc virtual false final false
inline void _ctor() ;

/// @brief Method Copy addr 0x2e4c7e4 size 0xe0 virtual false final false
static inline ::UnityEngine::UIElements::PropagationPaths* Copy(::UnityEngine::UIElements::PropagationPaths*  paths) ;

/// @brief Method Build addr 0x2e4c8c4 size 0x29c virtual false final false
static inline ::UnityEngine::UIElements::PropagationPaths* Build(::UnityEngine::UIElements::VisualElement*  elem, ::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::UIElements::__PropagationPaths__Type  pathTypesRequested) ;

/// @brief Method Release addr 0x2e4cbbc size 0x110 virtual false final false
inline void Release() ;

// Ctor Parameters [CppParam { name: "", ty: "PropagationPaths", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropagationPaths(PropagationPaths && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropagationPaths", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropagationPaths(PropagationPaths const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PropagationPaths()  = default;
public:


// Fields

// Static field s_Pool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropagationPaths, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PropagationPaths__Type, "UnityEngine.UIElements", "PropagationPaths/Type");
NEED_NO_BOX(::UnityEngine::UIElements::PropagationPaths);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropagationPaths*, "UnityEngine.UIElements", "PropagationPaths");
