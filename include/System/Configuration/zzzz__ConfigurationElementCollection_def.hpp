#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(ConfigurationElementCollection)
// Forward declare root types
namespace System::Configuration {
class ConfigurationElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Configuration::ConfigurationElementCollection);
// Type: System.Configuration::ConfigurationElementCollection
namespace System::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16257))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16261))
// CS Name: ::System.Configuration::ConfigurationElementCollection*
class CORDL_TYPE ConfigurationElementCollection : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Configuration::ConfigurationElement)]{};

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConfigurationElementCollection(ConfigurationElementCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConfigurationElementCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConfigurationElementCollection(ConfigurationElementCollection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConfigurationElementCollection()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Configuration::ConfigurationElementCollection, 0x10>, "Size mismatch!");

} // namespace end def System::Configuration
NEED_NO_BOX(::System::Configuration::ConfigurationElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::ConfigurationElementCollection*, "System.Configuration", "ConfigurationElementCollection");
