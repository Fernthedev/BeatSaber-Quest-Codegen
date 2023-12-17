#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__AppDomainSetup_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::AppDomainSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::AppDomainSetup::*)()>(&::System::AppDomainSetup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25f62a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomainSetup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::AppDomainSetup::__set_application_base(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_application_base()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_application_base() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::AppDomainSetup::__set_application_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_application_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_application_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::AppDomainSetup::__set_cache_path(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_cache_path()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_cache_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void System::AppDomainSetup::__set_configuration_file(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_configuration_file()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_configuration_file() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void System::AppDomainSetup::__set_dynamic_base(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_dynamic_base()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_dynamic_base() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void System::AppDomainSetup::__set_license_file(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_license_file()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_license_file() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void System::AppDomainSetup::__set_private_bin_path(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_private_bin_path()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_private_bin_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void System::AppDomainSetup::__set_private_bin_path_probe(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x48>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_private_bin_path_probe()  {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_private_bin_path_probe() const {
return ::cordl_internals::getInstanceField<::StringW, 0x48>(this);
}
constexpr void System::AppDomainSetup::__set_shadow_copy_directories(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_shadow_copy_directories()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_shadow_copy_directories() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr void System::AppDomainSetup::__set_shadow_copy_files(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_shadow_copy_files()  {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_shadow_copy_files() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this);
}
constexpr void System::AppDomainSetup::__set_publisher_policy(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this, std::forward<bool>(value));
}
constexpr bool& System::AppDomainSetup::__get_publisher_policy()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr bool const& System::AppDomainSetup::__get_publisher_policy() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this);
}
constexpr void System::AppDomainSetup::__set_path_changed(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this, std::forward<bool>(value));
}
constexpr bool& System::AppDomainSetup::__get_path_changed()  {
return ::cordl_internals::getInstanceField<bool, 0x61>(this);
}
constexpr bool const& System::AppDomainSetup::__get_path_changed() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this);
}
constexpr void System::AppDomainSetup::__set_loader_optimization(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x64>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::AppDomainSetup::__get_loader_optimization()  {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr int32_t const& System::AppDomainSetup::__get_loader_optimization() const {
return ::cordl_internals::getInstanceField<int32_t, 0x64>(this);
}
constexpr void System::AppDomainSetup::__set_disallow_binding_redirects(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x68>(this, std::forward<bool>(value));
}
constexpr bool& System::AppDomainSetup::__get_disallow_binding_redirects()  {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr bool const& System::AppDomainSetup::__get_disallow_binding_redirects() const {
return ::cordl_internals::getInstanceField<bool, 0x68>(this);
}
constexpr void System::AppDomainSetup::__set_disallow_code_downloads(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x69>(this, std::forward<bool>(value));
}
constexpr bool& System::AppDomainSetup::__get_disallow_code_downloads()  {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr bool const& System::AppDomainSetup::__get_disallow_code_downloads() const {
return ::cordl_internals::getInstanceField<bool, 0x69>(this);
}
constexpr void System::AppDomainSetup::__set__activationArguments(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x70>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::AppDomainSetup::__get__activationArguments()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::AppDomainSetup::__get__activationArguments() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x70>(this);
}
constexpr void System::AppDomainSetup::__set_domain_initializer(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x78>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::AppDomainSetup::__get_domain_initializer()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::AppDomainSetup::__get_domain_initializer() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x78>(this);
}
constexpr void System::AppDomainSetup::__set_application_trust(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x80>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::AppDomainSetup::__get_application_trust()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::AppDomainSetup::__get_application_trust() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x80>(this);
}
constexpr void System::AppDomainSetup::__set_domain_initializer_args(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x88>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::AppDomainSetup::__get_domain_initializer_args()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x88>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::AppDomainSetup::__get_domain_initializer_args() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x88>(this);
}
constexpr void System::AppDomainSetup::__set_disallow_appbase_probe(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this, std::forward<bool>(value));
}
constexpr bool& System::AppDomainSetup::__get_disallow_appbase_probe()  {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr bool const& System::AppDomainSetup::__get_disallow_appbase_probe() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this);
}
constexpr void System::AppDomainSetup::__set_configuration_bytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x98>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::AppDomainSetup::__get_configuration_bytes()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x98>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::AppDomainSetup::__get_configuration_bytes() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x98>(this);
}
constexpr void System::AppDomainSetup::__set_serialized_non_primitives(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xa0>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::AppDomainSetup::__get_serialized_non_primitives()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xa0>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::AppDomainSetup::__get_serialized_non_primitives() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0xa0>(this);
}
constexpr void System::AppDomainSetup::__set_manager_assembly(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_manager_assembly()  {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_manager_assembly() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr void System::AppDomainSetup::__set_manager_type(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get_manager_type()  {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get_manager_type() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this);
}
constexpr void System::AppDomainSetup::__set_partial_visible_assemblies(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0xb8>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::AppDomainSetup::__get_partial_visible_assemblies()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0xb8>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::AppDomainSetup::__get_partial_visible_assemblies() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0xb8>(this);
}
constexpr void System::AppDomainSetup::__set__TargetFrameworkName_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xc0>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::AppDomainSetup::__get__TargetFrameworkName_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this);
}
constexpr ::StringW const& System::AppDomainSetup::__get__TargetFrameworkName_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0xc0>(this);
}
inline ::System::AppDomainSetup* System::AppDomainSetup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::AppDomainSetup*>());
}
inline void System::AppDomainSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::AppDomainSetup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
