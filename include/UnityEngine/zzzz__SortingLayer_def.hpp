#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortingLayer)
// Forward declare root types
namespace UnityEngine {
struct SortingLayer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::SortingLayer);
// Type: UnityEngine::SortingLayer
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10266))
// CS Name: ::UnityEngine::SortingLayer
struct CORDL_TYPE SortingLayer : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Id offset 0x0
 __declspec(property(get=__get_m_Id, put=__set_m_Id)) int32_t  m_Id;

constexpr void __set_m_Id(int32_t  value) ;

constexpr int32_t& __get_m_Id() ;

constexpr int32_t const& __get_m_Id() const;

/// @brief Method GetLayerValueFromID addr 0x2cde834 size 0x3c virtual false final false
static inline int32_t GetLayerValueFromID(int32_t  id) ;

// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SortingLayer(int32_t  m_Id) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SortingLayer(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SortingLayer()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SortingLayer, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SortingLayer, "UnityEngine", "SortingLayer");
