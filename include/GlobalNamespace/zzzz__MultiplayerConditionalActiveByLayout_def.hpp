#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerConditionalActiveByLayout)
namespace GlobalNamespace {
class MultiplayerLayoutProvider;
}
namespace GlobalNamespace {
struct __MultiplayerConditionalActiveByLayout__Condition;
}
namespace GlobalNamespace {
struct MultiplayerPlayerLayout;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerConditionalActiveByLayout__Condition;
}
namespace GlobalNamespace {
class MultiplayerConditionalActiveByLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerConditionalActiveByLayout);
// Type: ::Condition
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5195))
// CS Name: ::MultiplayerConditionalActiveByLayout::Condition
struct CORDL_TYPE __MultiplayerConditionalActiveByLayout__Condition : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____MultiplayerConditionalActiveByLayout__Condition_Unwrapped
enum struct ____MultiplayerConditionalActiveByLayout__Condition_Unwrapped : int32_t {
__E_ShowIf = static_cast<int32_t>(0x0),
__E_HideIf = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ShowIf value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const ShowIf;

/// @brief Field HideIf value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const HideIf;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____MultiplayerConditionalActiveByLayout__Condition_Unwrapped () const noexcept {
return std::bit_cast<____MultiplayerConditionalActiveByLayout__Condition_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __MultiplayerConditionalActiveByLayout__Condition(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MultiplayerConditionalActiveByLayout__Condition(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MultiplayerConditionalActiveByLayout__Condition()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MultiplayerConditionalActiveByLayout
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5196))
// CS Name: ::MultiplayerConditionalActiveByLayout*
class CORDL_TYPE MultiplayerConditionalActiveByLayout : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Condition = ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _condition offset 0x18
 __declspec(property(get=__get__condition, put=__set__condition)) ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition  _condition;

/// @brief Field _layout offset 0x1c
 __declspec(property(get=__get__layout, put=__set__layout)) ::GlobalNamespace::MultiplayerPlayerLayout  _layout;

/// @brief Field _layoutProvider offset 0x20
 __declspec(property(get=__get__layoutProvider, put=__set__layoutProvider)) ::GlobalNamespace::MultiplayerLayoutProvider*  _layoutProvider;

constexpr void __set__condition(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition  value) ;

constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition& __get__condition() ;

constexpr ::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition const& __get__condition() const;

constexpr void __set__layout(::GlobalNamespace::MultiplayerPlayerLayout  value) ;

constexpr ::GlobalNamespace::MultiplayerPlayerLayout& __get__layout() ;

constexpr ::GlobalNamespace::MultiplayerPlayerLayout const& __get__layout() const;

constexpr void __set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider*  value) ;

constexpr ::GlobalNamespace::MultiplayerLayoutProvider* __get__layoutProvider() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLayoutProvider*> __get__layoutProvider() const;

/// @brief Method Start addr 0x22462a4 size 0xa0 virtual false final false
inline void Start() ;

/// @brief Method HandlePlayersLayoutWasCalculated addr 0x2246344 size 0x58 virtual false final false
inline void HandlePlayersLayoutWasCalculated(::GlobalNamespace::MultiplayerPlayerLayout  layout, int32_t  playersCount) ;

static inline ::GlobalNamespace::MultiplayerConditionalActiveByLayout* New_ctor() ;

/// @brief Method .ctor addr 0x224639c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConditionalActiveByLayout", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiplayerConditionalActiveByLayout(MultiplayerConditionalActiveByLayout && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerConditionalActiveByLayout", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiplayerConditionalActiveByLayout(MultiplayerConditionalActiveByLayout const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MultiplayerConditionalActiveByLayout()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerConditionalActiveByLayout, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerConditionalActiveByLayout__Condition, "", "MultiplayerConditionalActiveByLayout/Condition");
NEED_NO_BOX(::GlobalNamespace::MultiplayerConditionalActiveByLayout);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerConditionalActiveByLayout*, "", "MultiplayerConditionalActiveByLayout");
