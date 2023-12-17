#pragma once
#include "UnityEngine/zzzz__HumanBone_def.hpp"
#include "UnityEngine/zzzz__HumanLimit_def.hpp"
constexpr void UnityEngine::HumanBone::__set_m_BoneName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::HumanBone::__get_m_BoneName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::HumanBone::__get_m_BoneName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::HumanBone::__set_m_HumanName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::HumanBone::__get_m_HumanName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::HumanBone::__get_m_HumanName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::HumanBone::__set_limit(::UnityEngine::HumanLimit  value)  {
::cordl_internals::setInstanceField<::UnityEngine::HumanLimit, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::HumanLimit>(value));
}
constexpr ::UnityEngine::HumanLimit& UnityEngine::HumanBone::__get_limit()  {
return ::cordl_internals::getInstanceField<::UnityEngine::HumanLimit, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::HumanLimit const& UnityEngine::HumanBone::__get_limit() const {
return ::cordl_internals::getInstanceField<::UnityEngine::HumanLimit, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_BoneName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_HumanName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "limit", ty: "::UnityEngine::HumanLimit", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::HumanBone::HumanBone(::StringW  m_BoneName, ::StringW  m_HumanName, ::UnityEngine::HumanLimit  limit) noexcept : ::bs_hook::ValueTypeWrapper<0x40>() {this->m_BoneName = m_BoneName;
this->m_HumanName = m_HumanName;
this->limit = limit;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
