#pragma once
#include "TMPro/zzzz__TMP_MaterialReference_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
constexpr void TMPro::TMP_MaterialReference::__set_material(::UnityEngine::Material*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Material*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::Material*>(value));
}
constexpr ::UnityEngine::Material* TMPro::TMP_MaterialReference::__get_material()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> TMPro::TMP_MaterialReference::__get_material() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Material*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::TMP_MaterialReference::__set_referenceCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_MaterialReference::__get_referenceCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TMP_MaterialReference::__get_referenceCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "referenceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_MaterialReference::TMP_MaterialReference(::UnityEngine::Material*  material, int32_t  referenceCount) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->material = material;
this->referenceCount = referenceCount;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
