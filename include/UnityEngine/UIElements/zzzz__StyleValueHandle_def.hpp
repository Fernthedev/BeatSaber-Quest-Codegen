#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleValueHandle)
namespace UnityEngine::UIElements {
struct StyleValueType;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleValueHandle);
// Type: UnityEngine.UIElements::StyleValueHandle
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7277))
// CS Name: ::UnityEngine.UIElements::StyleValueHandle
struct CORDL_TYPE StyleValueHandle : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_ValueType offset 0x0
 __declspec(property(get=__get_m_ValueType, put=__set_m_ValueType)) ::UnityEngine::UIElements::StyleValueType  m_ValueType;

/// @brief Field valueIndex offset 0x4
 __declspec(property(get=__get_valueIndex, put=__set_valueIndex)) int32_t  valueIndex;

 __declspec(property(get=get_valueType, put=set_valueType)) ::UnityEngine::UIElements::StyleValueType  valueType;

constexpr void __set_m_ValueType(::UnityEngine::UIElements::StyleValueType  value) ;

constexpr ::UnityEngine::UIElements::StyleValueType& __get_m_ValueType() ;

constexpr ::UnityEngine::UIElements::StyleValueType const& __get_m_ValueType() const;

constexpr void __set_valueIndex(int32_t  value) ;

constexpr int32_t& __get_valueIndex() ;

constexpr int32_t const& __get_valueIndex() const;

/// @brief Method get_valueType addr 0x2e6a974 size 0x8 virtual false final false
inline ::UnityEngine::UIElements::StyleValueType get_valueType() ;

/// @brief Method set_valueType addr 0x2e6b53c size 0x8 virtual false final false
inline void set_valueType(::UnityEngine::UIElements::StyleValueType  value) ;

// Ctor Parameters [CppParam { name: "m_ValueType", ty: "::UnityEngine::UIElements::StyleValueType", modifiers: "", def_value: None }, CppParam { name: "valueIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StyleValueHandle(::UnityEngine::UIElements::StyleValueType  m_ValueType, int32_t  valueIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StyleValueHandle(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StyleValueHandle()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleValueHandle, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueHandle, "UnityEngine.UIElements", "StyleValueHandle");
