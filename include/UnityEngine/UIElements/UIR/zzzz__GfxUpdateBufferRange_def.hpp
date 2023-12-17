#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GfxUpdateBufferRange)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct GfxUpdateBufferRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange);
// Type: UnityEngine.UIElements.UIR::GfxUpdateBufferRange
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15379))
// CS Name: ::UnityEngine.UIElements.UIR::GfxUpdateBufferRange
struct CORDL_TYPE GfxUpdateBufferRange : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field offsetFromWriteStart offset 0x0
 __declspec(property(get=__get_offsetFromWriteStart, put=__set_offsetFromWriteStart)) uint32_t  offsetFromWriteStart;

/// @brief Field size offset 0x4
 __declspec(property(get=__get_size, put=__set_size)) uint32_t  size;

/// @brief Field source offset 0x8
 __declspec(property(get=__get_source, put=__set_source)) ::cordl_internals::uintptr_t  source;

constexpr void __set_offsetFromWriteStart(uint32_t  value) ;

constexpr uint32_t& __get_offsetFromWriteStart() ;

constexpr uint32_t const& __get_offsetFromWriteStart() const;

constexpr void __set_size(uint32_t  value) ;

constexpr uint32_t& __get_size() ;

constexpr uint32_t const& __get_size() const;

constexpr void __set_source(::cordl_internals::uintptr_t  value) ;

constexpr ::cordl_internals::uintptr_t& __get_source() ;

constexpr ::cordl_internals::uintptr_t const& __get_source() const;

// Ctor Parameters [CppParam { name: "offsetFromWriteStart", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "source", ty: "::cordl_internals::uintptr_t", modifiers: "", def_value: None }]
constexpr GfxUpdateBufferRange(uint32_t  offsetFromWriteStart, uint32_t  size, ::cordl_internals::uintptr_t  source) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GfxUpdateBufferRange(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GfxUpdateBufferRange()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GfxUpdateBufferRange, "UnityEngine.UIElements.UIR", "GfxUpdateBufferRange");
