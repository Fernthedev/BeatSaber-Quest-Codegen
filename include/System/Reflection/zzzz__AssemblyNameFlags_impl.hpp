#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Reflection/zzzz__AssemblyNameFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::AssemblyNameFlags::AssemblyNameFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Reflection::AssemblyNameFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::AssemblyNameFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Reflection::AssemblyNameFlags  ::System::Reflection::AssemblyNameFlags::None{0};
constexpr ::System::Reflection::AssemblyNameFlags  ::System::Reflection::AssemblyNameFlags::PublicKey{1};
constexpr ::System::Reflection::AssemblyNameFlags  ::System::Reflection::AssemblyNameFlags::EnableJITcompileOptimizer{16384};
constexpr ::System::Reflection::AssemblyNameFlags  ::System::Reflection::AssemblyNameFlags::EnableJITcompileTracking{32768};
constexpr ::System::Reflection::AssemblyNameFlags  ::System::Reflection::AssemblyNameFlags::Retargetable{256};
} // end anonymous namespace
