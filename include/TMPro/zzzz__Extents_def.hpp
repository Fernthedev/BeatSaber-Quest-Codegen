#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Extents)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace TMPro {
struct Extents;
}
// Write type traits
MARK_VAL_T(::TMPro::Extents);
// Type: TMPro::Extents
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12322))
// CS Name: ::TMPro::Extents
struct CORDL_TYPE Extents : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field min offset 0x0
 __declspec(property(get=__get_min, put=__set_min)) ::UnityEngine::Vector2  min;

/// @brief Field max offset 0x8
 __declspec(property(get=__get_max, put=__set_max)) ::UnityEngine::Vector2  max;

static inline void setStaticF_zero(::TMPro::Extents  value) ;

static inline ::TMPro::Extents getStaticF_zero() ;

static inline void setStaticF_uninitialized(::TMPro::Extents  value) ;

static inline ::TMPro::Extents getStaticF_uninitialized() ;

constexpr void __set_min(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_min() ;

constexpr ::UnityEngine::Vector2 const& __get_min() const;

constexpr void __set_max(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_max() ;

constexpr ::UnityEngine::Vector2 const& __get_max() const;

/// @brief Method .ctor addr 0x2c010b0 size 0xc virtual false final false
inline void _ctor(::UnityEngine::Vector2  min, ::UnityEngine::Vector2  max) ;

/// @brief Method ToString addr 0x2c010bc size 0x2ac virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "min", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "max", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr Extents(::UnityEngine::Vector2  min, ::UnityEngine::Vector2  max) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Extents(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Extents()  = default;


// Fields

// Static field zero

// Static field uninitialized


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::Extents, 0x10>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Extents, "TMPro", "Extents");
