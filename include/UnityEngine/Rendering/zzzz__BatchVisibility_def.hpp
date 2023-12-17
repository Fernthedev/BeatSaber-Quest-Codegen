#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchVisibility)
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchVisibility;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchVisibility);
// Type: UnityEngine.Rendering::BatchVisibility
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10364))
// CS Name: ::UnityEngine.Rendering::BatchVisibility
struct CORDL_TYPE BatchVisibility : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field offset offset 0x0
 __declspec(property(get=__get_offset, put=__set_offset)) int32_t  offset;

/// @brief Field instancesCount offset 0x4
 __declspec(property(get=__get_instancesCount, put=__set_instancesCount)) int32_t  instancesCount;

/// @brief Field visibleCount offset 0x8
 __declspec(property(get=__get_visibleCount, put=__set_visibleCount)) int32_t  visibleCount;

constexpr void __set_offset(int32_t  value) ;

constexpr int32_t& __get_offset() ;

constexpr int32_t const& __get_offset() const;

constexpr void __set_instancesCount(int32_t  value) ;

constexpr int32_t& __get_instancesCount() ;

constexpr int32_t const& __get_instancesCount() const;

constexpr void __set_visibleCount(int32_t  value) ;

constexpr int32_t& __get_visibleCount() ;

constexpr int32_t const& __get_visibleCount() const;

// Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "instancesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BatchVisibility(int32_t  offset, int32_t  instancesCount, int32_t  visibleCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BatchVisibility(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BatchVisibility()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchVisibility, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchVisibility, "UnityEngine.Rendering", "BatchVisibility");
