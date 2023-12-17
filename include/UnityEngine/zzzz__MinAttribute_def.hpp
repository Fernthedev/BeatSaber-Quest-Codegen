#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MinAttribute)
// Forward declare root types
namespace UnityEngine {
class MinAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MinAttribute);
// Type: UnityEngine::MinAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10177))
// CS Name: ::UnityEngine::MinAttribute*
class CORDL_TYPE MinAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::PropertyAttribute)]{};

/// @brief Field min offset 0x10
 __declspec(property(get=__get_min, put=__set_min)) float_t  min;

constexpr void __set_min(float_t  value) ;

constexpr float_t& __get_min() ;

constexpr float_t const& __get_min() const;

static inline ::UnityEngine::MinAttribute* New_ctor(float_t  min) ;

/// @brief Method .ctor addr 0x2ccc1e4 size 0x28 virtual false final false
inline void _ctor(float_t  min) ;

// Ctor Parameters [CppParam { name: "", ty: "MinAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MinAttribute(MinAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MinAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MinAttribute(MinAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MinAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MinAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::MinAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MinAttribute*, "UnityEngine", "MinAttribute");
