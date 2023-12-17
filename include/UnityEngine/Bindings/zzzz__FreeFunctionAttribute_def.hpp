#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Bindings/zzzz__NativeMethodAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FreeFunctionAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class FreeFunctionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::FreeFunctionAttribute);
// Type: UnityEngine.Bindings::FreeFunctionAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16017))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16025))
// CS Name: ::UnityEngine.Bindings::FreeFunctionAttribute*
class CORDL_TYPE FreeFunctionAttribute : public ::UnityEngine::Bindings::NativeMethodAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::Bindings::NativeMethodAttribute)]{};

static inline ::UnityEngine::Bindings::FreeFunctionAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2d188b0 size 0x20 virtual false final false
inline void _ctor() ;

static inline ::UnityEngine::Bindings::FreeFunctionAttribute* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2d188d0 size 0x1c virtual false final false
inline void _ctor(::StringW  name) ;

static inline ::UnityEngine::Bindings::FreeFunctionAttribute* New_ctor(::StringW  name, bool  isThreadSafe) ;

/// @brief Method .ctor addr 0x2d188ec size 0x30 virtual false final false
inline void _ctor(::StringW  name, bool  isThreadSafe) ;

// Ctor Parameters [CppParam { name: "", ty: "FreeFunctionAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FreeFunctionAttribute(FreeFunctionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FreeFunctionAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FreeFunctionAttribute(FreeFunctionAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FreeFunctionAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::FreeFunctionAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::FreeFunctionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::FreeFunctionAttribute*, "UnityEngine.Bindings", "FreeFunctionAttribute");
