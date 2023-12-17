#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultTimeProvider)
namespace BGNet::Core {
class ITimeProvider;
}
// Forward declare root types
namespace BGNet::Core {
class DefaultTimeProvider;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::DefaultTimeProvider);
// Type: BGNet.Core::DefaultTimeProvider
namespace BGNet::Core {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13001))
// CS Name: ::BGNet.Core::DefaultTimeProvider*
class CORDL_TYPE DefaultTimeProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method get_instance addr 0xe5e164 size 0x58 virtual false final false
static inline ::BGNet::Core::ITimeProvider* get_instance() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTimeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultTimeProvider(DefaultTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultTimeProvider(DefaultTimeProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultTimeProvider()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::DefaultTimeProvider, 0x10>, "Size mismatch!");

} // namespace end def BGNet::Core
NEED_NO_BOX(::BGNet::Core::DefaultTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::DefaultTimeProvider*, "BGNet.Core", "DefaultTimeProvider");
