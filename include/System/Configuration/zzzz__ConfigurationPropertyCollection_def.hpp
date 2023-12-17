#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationPropertyCollection)
// Forward declare root types
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationPropertyCollection);
// Type: System.Configuration::ConfigurationPropertyCollection
namespace System::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16260))
// CS Name: ::System.Configuration::ConfigurationPropertyCollection*
class CORDL_TYPE ConfigurationPropertyCollection : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationPropertyCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationPropertyCollection(ConfigurationPropertyCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationPropertyCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationPropertyCollection(ConfigurationPropertyCollection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConfigurationPropertyCollection()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationPropertyCollection, 0x10>, "Size mismatch!");

} // namespace end def System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationPropertyCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationPropertyCollection*, "System.Configuration", "ConfigurationPropertyCollection");
