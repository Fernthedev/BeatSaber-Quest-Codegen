#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_def.hpp"
namespace {
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class SettingsSection;
}
// Type: System.Net.Configuration::SettingsSection
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16073))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8425))
// CS Name: System.Net.Configuration.SettingsSection
class CORDL_TYPE SettingsSection : public ::System::Configuration::ConfigurationSection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SettingsSection() = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSection", modifiers: " const&", def_value: None }]
constexpr SettingsSection(SettingsSection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSection", modifiers: "&&", def_value: None }]
constexpr SettingsSection(SettingsSection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SettingsSection(void* ptr) noexcept : ::System::Configuration::ConfigurationSection(ptr) {
}


  constexpr SettingsSection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SettingsSection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SettingsSection& operator=(SettingsSection&& o) noexcept = default;
  constexpr SettingsSection& operator=(SettingsSection const& o) noexcept = default;
                


// Properties

 ::System::Configuration::ConfigurationPropertyCollection __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters []
explicit SettingsSection() ;

/// @brief Method .ctor addr 0x27b251c size 0x38 virtual false final false
 void _ctor() ;

/// @brief Method get_Properties addr 0x27b2554 size 0x38 virtual true final false
 ::System::Configuration::ConfigurationPropertyCollection get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Configuration::SettingsSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Configuration::SettingsSection, "System.Net.Configuration", "SettingsSection");
