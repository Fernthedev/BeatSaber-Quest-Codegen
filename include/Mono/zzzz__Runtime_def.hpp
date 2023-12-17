#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Runtime)
namespace System {
class Object;
}
// Forward declare root types
namespace Mono {
class Runtime;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Runtime);
// Type: Mono::Runtime
namespace Mono {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2227))
// CS Name: ::Mono::Runtime*
class CORDL_TYPE Runtime : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_dump(::System::Object*  value) ;

static inline ::System::Object* getStaticF_dump() ;

// Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Runtime(Runtime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Runtime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Runtime(Runtime const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Runtime()  = default;
public:


// Fields

// Static field dump


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Runtime, 0x10>, "Size mismatch!");

} // namespace end def Mono
NEED_NO_BOX(::Mono::Runtime);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Runtime*, "Mono", "Runtime");
