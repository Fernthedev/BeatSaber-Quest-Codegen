#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptingUtility_def.hpp"
#include "UnityEngine/zzzz__ScriptingUtility_def.hpp"
constexpr void UnityEngine::__ScriptingUtility__TestClass::__set_value(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::__ScriptingUtility__TestClass::__get_value()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::__ScriptingUtility__TestClass::__get_value() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::__ScriptingUtility__TestClass::__ScriptingUtility__TestClass(int32_t  value) noexcept : ::bs_hook::ValueTypeWrapper<0x4>() {this->value = value;
}
//  Writing Method size for method: ::UnityEngine::ScriptingUtility.IsManagedCodeWorking
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::ScriptingUtility::IsManagedCodeWorking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cd3668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScriptingUtility*>::get(),
                            "IsManagedCodeWorking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline bool UnityEngine::ScriptingUtility::IsManagedCodeWorking()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ScriptingUtility*>::get(),
                            "IsManagedCodeWorking",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
