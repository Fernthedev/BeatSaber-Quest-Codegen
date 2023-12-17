#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AppDomainSetup)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class AppDomainSetup;
}
// Write type traits
MARK_REF_PTR_T(::System::AppDomainSetup);
// Type: System::AppDomainSetup
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2582))
// CS Name: ::System::AppDomainSetup*
class CORDL_TYPE AppDomainSetup : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc8};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc8 - sizeof(::System::Object)]{};

/// @brief Field application_base offset 0x10
 __declspec(property(get=__get_application_base, put=__set_application_base)) ::StringW  application_base;

/// @brief Field application_name offset 0x18
 __declspec(property(get=__get_application_name, put=__set_application_name)) ::StringW  application_name;

/// @brief Field cache_path offset 0x20
 __declspec(property(get=__get_cache_path, put=__set_cache_path)) ::StringW  cache_path;

/// @brief Field configuration_file offset 0x28
 __declspec(property(get=__get_configuration_file, put=__set_configuration_file)) ::StringW  configuration_file;

/// @brief Field dynamic_base offset 0x30
 __declspec(property(get=__get_dynamic_base, put=__set_dynamic_base)) ::StringW  dynamic_base;

/// @brief Field license_file offset 0x38
 __declspec(property(get=__get_license_file, put=__set_license_file)) ::StringW  license_file;

/// @brief Field private_bin_path offset 0x40
 __declspec(property(get=__get_private_bin_path, put=__set_private_bin_path)) ::StringW  private_bin_path;

/// @brief Field private_bin_path_probe offset 0x48
 __declspec(property(get=__get_private_bin_path_probe, put=__set_private_bin_path_probe)) ::StringW  private_bin_path_probe;

/// @brief Field shadow_copy_directories offset 0x50
 __declspec(property(get=__get_shadow_copy_directories, put=__set_shadow_copy_directories)) ::StringW  shadow_copy_directories;

/// @brief Field shadow_copy_files offset 0x58
 __declspec(property(get=__get_shadow_copy_files, put=__set_shadow_copy_files)) ::StringW  shadow_copy_files;

/// @brief Field publisher_policy offset 0x60
 __declspec(property(get=__get_publisher_policy, put=__set_publisher_policy)) bool  publisher_policy;

/// @brief Field path_changed offset 0x61
 __declspec(property(get=__get_path_changed, put=__set_path_changed)) bool  path_changed;

/// @brief Field loader_optimization offset 0x64
 __declspec(property(get=__get_loader_optimization, put=__set_loader_optimization)) int32_t  loader_optimization;

/// @brief Field disallow_binding_redirects offset 0x68
 __declspec(property(get=__get_disallow_binding_redirects, put=__set_disallow_binding_redirects)) bool  disallow_binding_redirects;

/// @brief Field disallow_code_downloads offset 0x69
 __declspec(property(get=__get_disallow_code_downloads, put=__set_disallow_code_downloads)) bool  disallow_code_downloads;

/// @brief Field _activationArguments offset 0x70
 __declspec(property(get=__get__activationArguments, put=__set__activationArguments)) ::System::Object*  _activationArguments;

/// @brief Field domain_initializer offset 0x78
 __declspec(property(get=__get_domain_initializer, put=__set_domain_initializer)) ::System::Object*  domain_initializer;

/// @brief Field application_trust offset 0x80
 __declspec(property(get=__get_application_trust, put=__set_application_trust)) ::System::Object*  application_trust;

/// @brief Field domain_initializer_args offset 0x88
 __declspec(property(get=__get_domain_initializer_args, put=__set_domain_initializer_args)) ::ArrayW<::StringW,::Array<::StringW>*>  domain_initializer_args;

/// @brief Field disallow_appbase_probe offset 0x90
 __declspec(property(get=__get_disallow_appbase_probe, put=__set_disallow_appbase_probe)) bool  disallow_appbase_probe;

/// @brief Field configuration_bytes offset 0x98
 __declspec(property(get=__get_configuration_bytes, put=__set_configuration_bytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  configuration_bytes;

/// @brief Field serialized_non_primitives offset 0xa0
 __declspec(property(get=__get_serialized_non_primitives, put=__set_serialized_non_primitives)) ::ArrayW<uint8_t,::Array<uint8_t>*>  serialized_non_primitives;

/// @brief Field manager_assembly offset 0xa8
 __declspec(property(get=__get_manager_assembly, put=__set_manager_assembly)) ::StringW  manager_assembly;

/// @brief Field manager_type offset 0xb0
 __declspec(property(get=__get_manager_type, put=__set_manager_type)) ::StringW  manager_type;

/// @brief Field partial_visible_assemblies offset 0xb8
 __declspec(property(get=__get_partial_visible_assemblies, put=__set_partial_visible_assemblies)) ::ArrayW<::StringW,::Array<::StringW>*>  partial_visible_assemblies;

/// @brief Field <TargetFrameworkName>k__BackingField offset 0xc0
 __declspec(property(get=__get__TargetFrameworkName_k__BackingField, put=__set__TargetFrameworkName_k__BackingField)) ::StringW  _TargetFrameworkName_k__BackingField;

constexpr void __set_application_base(::StringW  value) ;

constexpr ::StringW& __get_application_base() ;

constexpr ::StringW const& __get_application_base() const;

constexpr void __set_application_name(::StringW  value) ;

constexpr ::StringW& __get_application_name() ;

constexpr ::StringW const& __get_application_name() const;

constexpr void __set_cache_path(::StringW  value) ;

constexpr ::StringW& __get_cache_path() ;

constexpr ::StringW const& __get_cache_path() const;

constexpr void __set_configuration_file(::StringW  value) ;

constexpr ::StringW& __get_configuration_file() ;

constexpr ::StringW const& __get_configuration_file() const;

constexpr void __set_dynamic_base(::StringW  value) ;

constexpr ::StringW& __get_dynamic_base() ;

constexpr ::StringW const& __get_dynamic_base() const;

constexpr void __set_license_file(::StringW  value) ;

constexpr ::StringW& __get_license_file() ;

constexpr ::StringW const& __get_license_file() const;

constexpr void __set_private_bin_path(::StringW  value) ;

constexpr ::StringW& __get_private_bin_path() ;

constexpr ::StringW const& __get_private_bin_path() const;

constexpr void __set_private_bin_path_probe(::StringW  value) ;

constexpr ::StringW& __get_private_bin_path_probe() ;

constexpr ::StringW const& __get_private_bin_path_probe() const;

constexpr void __set_shadow_copy_directories(::StringW  value) ;

constexpr ::StringW& __get_shadow_copy_directories() ;

constexpr ::StringW const& __get_shadow_copy_directories() const;

constexpr void __set_shadow_copy_files(::StringW  value) ;

constexpr ::StringW& __get_shadow_copy_files() ;

constexpr ::StringW const& __get_shadow_copy_files() const;

constexpr void __set_publisher_policy(bool  value) ;

constexpr bool& __get_publisher_policy() ;

constexpr bool const& __get_publisher_policy() const;

constexpr void __set_path_changed(bool  value) ;

constexpr bool& __get_path_changed() ;

constexpr bool const& __get_path_changed() const;

constexpr void __set_loader_optimization(int32_t  value) ;

constexpr int32_t& __get_loader_optimization() ;

constexpr int32_t const& __get_loader_optimization() const;

constexpr void __set_disallow_binding_redirects(bool  value) ;

constexpr bool& __get_disallow_binding_redirects() ;

constexpr bool const& __get_disallow_binding_redirects() const;

constexpr void __set_disallow_code_downloads(bool  value) ;

constexpr bool& __get_disallow_code_downloads() ;

constexpr bool const& __get_disallow_code_downloads() const;

constexpr void __set__activationArguments(::System::Object*  value) ;

constexpr ::System::Object* __get__activationArguments() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__activationArguments() const;

constexpr void __set_domain_initializer(::System::Object*  value) ;

constexpr ::System::Object* __get_domain_initializer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_domain_initializer() const;

constexpr void __set_application_trust(::System::Object*  value) ;

constexpr ::System::Object* __get_application_trust() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get_application_trust() const;

constexpr void __set_domain_initializer_args(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_domain_initializer_args() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_domain_initializer_args() const;

constexpr void __set_disallow_appbase_probe(bool  value) ;

constexpr bool& __get_disallow_appbase_probe() ;

constexpr bool const& __get_disallow_appbase_probe() const;

constexpr void __set_configuration_bytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_configuration_bytes() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_configuration_bytes() const;

constexpr void __set_serialized_non_primitives(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_serialized_non_primitives() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_serialized_non_primitives() const;

constexpr void __set_manager_assembly(::StringW  value) ;

constexpr ::StringW& __get_manager_assembly() ;

constexpr ::StringW const& __get_manager_assembly() const;

constexpr void __set_manager_type(::StringW  value) ;

constexpr ::StringW& __get_manager_type() ;

constexpr ::StringW const& __get_manager_type() const;

constexpr void __set_partial_visible_assemblies(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_partial_visible_assemblies() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_partial_visible_assemblies() const;

constexpr void __set__TargetFrameworkName_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__TargetFrameworkName_k__BackingField() ;

constexpr ::StringW const& __get__TargetFrameworkName_k__BackingField() const;

static inline ::System::AppDomainSetup* New_ctor() ;

/// @brief Method .ctor addr 0x25f62a4 size 0x4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainSetup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AppDomainSetup(AppDomainSetup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AppDomainSetup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AppDomainSetup(AppDomainSetup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AppDomainSetup()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AppDomainSetup, 0xc8>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::AppDomainSetup);
DEFINE_IL2CPP_ARG_TYPE(::System::AppDomainSetup*, "System", "AppDomainSetup");
