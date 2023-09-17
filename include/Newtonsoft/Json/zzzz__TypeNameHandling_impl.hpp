#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Newtonsoft/Json/zzzz__TypeNameHandling_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Newtonsoft::Json::TypeNameHandling::TypeNameHandling(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Newtonsoft::Json::TypeNameHandling::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Newtonsoft::Json::TypeNameHandling::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Newtonsoft::Json::TypeNameHandling  ::Newtonsoft::Json::TypeNameHandling::None{0};
constexpr ::Newtonsoft::Json::TypeNameHandling  ::Newtonsoft::Json::TypeNameHandling::Objects{1};
constexpr ::Newtonsoft::Json::TypeNameHandling  ::Newtonsoft::Json::TypeNameHandling::Arrays{2};
constexpr ::Newtonsoft::Json::TypeNameHandling  ::Newtonsoft::Json::TypeNameHandling::All{3};
constexpr ::Newtonsoft::Json::TypeNameHandling  ::Newtonsoft::Json::TypeNameHandling::Auto{4};
} // end anonymous namespace
