#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
CORDL_MODULE_EXPORT(ConnectionManagementElementCollection)
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementElementCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::ConnectionManagementElementCollection);
// Type: System.Net.Configuration::ConnectionManagementElementCollection
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16261))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9568))
// CS Name: ::System.Net.Configuration::ConnectionManagementElementCollection*
class CORDL_TYPE ConnectionManagementElementCollection : public ::System::Configuration::ConfigurationElementCollection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Configuration::ConfigurationElementCollection)]{};

static inline ::System::Net::Configuration::ConnectionManagementElementCollection* New_ctor() ;

/// @brief Method .ctor addr 0x2944cac size 0x38 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElementCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionManagementElementCollection(ConnectionManagementElementCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElementCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionManagementElementCollection(ConnectionManagementElementCollection const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConnectionManagementElementCollection()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::ConnectionManagementElementCollection, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::ConnectionManagementElementCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::ConnectionManagementElementCollection*, "System.Net.Configuration", "ConnectionManagementElementCollection");
