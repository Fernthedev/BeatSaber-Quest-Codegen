#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Extents)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct Extents;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::Extents);
// Type: UnityEngine.TextCore.Text::Extents
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13694))
// CS Name: ::UnityEngine.TextCore.Text::Extents
struct CORDL_TYPE Extents : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field min offset 0x0
 __declspec(property(get=__get_min, put=__set_min)) ::UnityEngine::Vector2  min;

/// @brief Field max offset 0x8
 __declspec(property(get=__get_max, put=__set_max)) ::UnityEngine::Vector2  max;

constexpr void __set_min(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_min() ;

constexpr ::UnityEngine::Vector2 const& __get_min() const;

constexpr void __set_max(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_max() ;

constexpr ::UnityEngine::Vector2 const& __get_max() const;

/// @brief Method ToString addr 0x2d42810 size 0x2ac virtual true final false
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


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::Extents, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::Extents, "UnityEngine.TextCore.Text", "Extents");
