#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InjectSources)
// Forward declare root types
namespace Zenject {
struct InjectSources;
}
// Write type traits
MARK_VAL_T(::Zenject::InjectSources);
// Type: Zenject::InjectSources
namespace Zenject {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15712))
// CS Name: ::Zenject::InjectSources
struct CORDL_TYPE InjectSources : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InjectSources_Unwrapped
enum struct __InjectSources_Unwrapped : int32_t {
__E_Any = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
__E_Parent = static_cast<int32_t>(0x2),
__E_AnyParent = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Any value: static_cast<int32_t>(0x0)
static ::Zenject::InjectSources const Any;

/// @brief Field Local value: static_cast<int32_t>(0x1)
static ::Zenject::InjectSources const Local;

/// @brief Field Parent value: static_cast<int32_t>(0x2)
static ::Zenject::InjectSources const Parent;

/// @brief Field AnyParent value: static_cast<int32_t>(0x3)
static ::Zenject::InjectSources const AnyParent;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InjectSources_Unwrapped () const noexcept {
return std::bit_cast<__InjectSources_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InjectSources(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InjectSources(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InjectSources()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectSources, 0x4>, "Size mismatch!");

} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectSources, "Zenject", "InjectSources");
