#pragma once
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::GlobalKeyword::*)()>(&::UnityEngine::Rendering::GlobalKeyword::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cef1f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalKeyword>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalKeyword>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Rendering::GlobalKeyword::__set_m_Name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::Rendering::GlobalKeyword::__get_m_Name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::Rendering::GlobalKeyword::__get_m_Name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::Rendering::GlobalKeyword::__set_m_Index(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint32_t>(value));
}
constexpr uint32_t& UnityEngine::Rendering::GlobalKeyword::__get_m_Index()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint32_t const& UnityEngine::Rendering::GlobalKeyword::__get_m_Index() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::StringW UnityEngine::Rendering::GlobalKeyword::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalKeyword>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GlobalKeyword::GlobalKeyword(::StringW  m_Name, uint32_t  m_Index) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->m_Name = m_Name;
this->m_Index = m_Index;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
