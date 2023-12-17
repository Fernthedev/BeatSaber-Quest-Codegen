#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawBufferRange)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::DrawBufferRange);
// Type: UnityEngine.UIElements.UIR::DrawBufferRange
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15380))
// CS Name: ::UnityEngine.UIElements.UIR::DrawBufferRange
struct CORDL_TYPE DrawBufferRange : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field firstIndex offset 0x0
 __declspec(property(get=__get_firstIndex, put=__set_firstIndex)) int32_t  firstIndex;

/// @brief Field indexCount offset 0x4
 __declspec(property(get=__get_indexCount, put=__set_indexCount)) int32_t  indexCount;

/// @brief Field minIndexVal offset 0x8
 __declspec(property(get=__get_minIndexVal, put=__set_minIndexVal)) int32_t  minIndexVal;

/// @brief Field vertsReferenced offset 0xc
 __declspec(property(get=__get_vertsReferenced, put=__set_vertsReferenced)) int32_t  vertsReferenced;

constexpr void __set_firstIndex(int32_t  value) ;

constexpr int32_t& __get_firstIndex() ;

constexpr int32_t const& __get_firstIndex() const;

constexpr void __set_indexCount(int32_t  value) ;

constexpr int32_t& __get_indexCount() ;

constexpr int32_t const& __get_indexCount() const;

constexpr void __set_minIndexVal(int32_t  value) ;

constexpr int32_t& __get_minIndexVal() ;

constexpr int32_t const& __get_minIndexVal() const;

constexpr void __set_vertsReferenced(int32_t  value) ;

constexpr int32_t& __get_vertsReferenced() ;

constexpr int32_t const& __get_vertsReferenced() const;

// Ctor Parameters [CppParam { name: "firstIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "indexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minIndexVal", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertsReferenced", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DrawBufferRange(int32_t  firstIndex, int32_t  indexCount, int32_t  minIndexVal, int32_t  vertsReferenced) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DrawBufferRange(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DrawBufferRange()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::DrawBufferRange, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::DrawBufferRange, "UnityEngine.UIElements.UIR", "DrawBufferRange");
