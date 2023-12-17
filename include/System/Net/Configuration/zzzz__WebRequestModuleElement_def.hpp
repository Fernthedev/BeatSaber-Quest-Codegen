#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(WebRequestModuleElement)
// Forward declare root types
namespace System::Net::Configuration {
class WebRequestModuleElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Configuration::WebRequestModuleElement);
// Type: System.Net.Configuration::WebRequestModuleElement
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16257))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9582))
// CS Name: ::System.Net.Configuration::WebRequestModuleElement*
class CORDL_TYPE WebRequestModuleElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Configuration::ConfigurationElement)]{};

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestModuleElement(WebRequestModuleElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestModuleElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestModuleElement(WebRequestModuleElement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WebRequestModuleElement()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Configuration::WebRequestModuleElement, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Configuration
NEED_NO_BOX(::System::Net::Configuration::WebRequestModuleElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::WebRequestModuleElement*, "System.Net.Configuration", "WebRequestModuleElement");
