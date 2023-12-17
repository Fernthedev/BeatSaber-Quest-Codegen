#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServiceProvider)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class IServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::IServiceProvider);
// Type: System::IServiceProvider
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2515))
// CS Name: ::System::IServiceProvider*
class CORDL_TYPE IServiceProvider {
public:
// Declarations
/// @brief Method GetService addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* GetService(::System::Type*  serviceType) ;

// Ctor Parameters [CppParam { name: "", ty: "IServiceProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IServiceProvider(IServiceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IServiceProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServiceProvider(IServiceProvider const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(::System::IServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::IServiceProvider*, "System", "IServiceProvider");
