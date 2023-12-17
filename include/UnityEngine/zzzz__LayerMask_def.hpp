#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayerMask)
// Forward declare root types
namespace UnityEngine {
struct LayerMask;
}
// Write type traits
MARK_VAL_T(::UnityEngine::LayerMask);
// Type: UnityEngine::LayerMask
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10204))
// CS Name: ::UnityEngine::LayerMask
struct CORDL_TYPE LayerMask : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Mask offset 0x0
 __declspec(property(get=__get_m_Mask, put=__set_m_Mask)) int32_t  m_Mask;

 __declspec(property(get=get_value, put=set_value)) int32_t  value;

constexpr void __set_m_Mask(int32_t  value) ;

constexpr int32_t& __get_m_Mask() ;

constexpr int32_t const& __get_m_Mask() const;

/// @brief Method op_Implicit addr 0x2cd0cb8 size 0x4 virtual false final false
static inline int32_t op_Implicit_int32_t(::UnityEngine::LayerMask  mask) ;

/// @brief Method op_Implicit addr 0x2cd0cbc size 0x8 virtual false final false
static inline ::UnityEngine::LayerMask op_Implicit___UnityEngine__LayerMask(int32_t  intVal) ;

/// @brief Method get_value addr 0x2cd0cc4 size 0x8 virtual false final false
inline int32_t get_value() ;

/// @brief Method set_value addr 0x2cd0ccc size 0x8 virtual false final false
inline void set_value(int32_t  value) ;

/// @brief Method LayerToName addr 0x2cd0cd4 size 0x3c virtual false final false
static inline ::StringW LayerToName(int32_t  layer) ;

/// @brief Method NameToLayer addr 0x2cd0d10 size 0x3c virtual false final false
static inline int32_t NameToLayer(::StringW  layerName) ;

/// @brief Method GetMask addr 0x2cd0d4c size 0x108 virtual false final false
static inline int32_t GetMask(::ArrayW<::StringW,::Array<::StringW>*>  layerNames) ;

// Ctor Parameters [CppParam { name: "m_Mask", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LayerMask(int32_t  m_Mask) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LayerMask(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LayerMask()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LayerMask, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LayerMask, "UnityEngine", "LayerMask");
