#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(MonoPInvokeCallbackAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace Mono::Interop {
class MonoPInvokeCallbackAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Interop::MonoPInvokeCallbackAttribute);
// Type: Mono.Interop::MonoPInvokeCallbackAttribute
namespace Mono::Interop {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2256))
// CS Name: ::Mono.Interop::MonoPInvokeCallbackAttribute*
class CORDL_TYPE MonoPInvokeCallbackAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::Mono::Interop::MonoPInvokeCallbackAttribute* New_ctor(::System::Type*  t) ;

/// @brief Method .ctor addr 0x2415344 size 0x8 virtual false final false
inline void _ctor(::System::Type*  t) ;

// Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonoPInvokeCallbackAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonoPInvokeCallbackAttribute(MonoPInvokeCallbackAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MonoPInvokeCallbackAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Interop::MonoPInvokeCallbackAttribute, 0x10>, "Size mismatch!");

} // namespace end def Mono::Interop
NEED_NO_BOX(::Mono::Interop::MonoPInvokeCallbackAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Interop::MonoPInvokeCallbackAttribute*, "Mono.Interop", "MonoPInvokeCallbackAttribute");
