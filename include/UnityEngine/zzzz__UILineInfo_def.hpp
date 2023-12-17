#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UILineInfo)
// Forward declare root types
namespace UnityEngine {
struct UILineInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UILineInfo);
// Type: UnityEngine::UILineInfo
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15906))
// CS Name: ::UnityEngine::UILineInfo
struct CORDL_TYPE UILineInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field startCharIdx offset 0x0
 __declspec(property(get=__get_startCharIdx, put=__set_startCharIdx)) int32_t  startCharIdx;

/// @brief Field height offset 0x4
 __declspec(property(get=__get_height, put=__set_height)) int32_t  height;

/// @brief Field topY offset 0x8
 __declspec(property(get=__get_topY, put=__set_topY)) float_t  topY;

/// @brief Field leading offset 0xc
 __declspec(property(get=__get_leading, put=__set_leading)) float_t  leading;

constexpr void __set_startCharIdx(int32_t  value) ;

constexpr int32_t& __get_startCharIdx() ;

constexpr int32_t const& __get_startCharIdx() const;

constexpr void __set_height(int32_t  value) ;

constexpr int32_t& __get_height() ;

constexpr int32_t const& __get_height() const;

constexpr void __set_topY(float_t  value) ;

constexpr float_t& __get_topY() ;

constexpr float_t const& __get_topY() const;

constexpr void __set_leading(float_t  value) ;

constexpr float_t& __get_leading() ;

constexpr float_t const& __get_leading() const;

// Ctor Parameters [CppParam { name: "startCharIdx", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "topY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "leading", ty: "float_t", modifiers: "", def_value: None }]
constexpr UILineInfo(int32_t  startCharIdx, int32_t  height, float_t  topY, float_t  leading) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UILineInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UILineInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UILineInfo, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UILineInfo, "UnityEngine", "UILineInfo");
