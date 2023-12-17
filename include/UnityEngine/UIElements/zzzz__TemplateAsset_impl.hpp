#pragma once
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
constexpr void UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__set_m_ElementName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__get_m_ElementName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__get_m_ElementName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__set_m_AttributeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__get_m_AttributeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__get_m_AttributeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__set_m_Value(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__get_m_Value()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__get_m_Value() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__TemplateAsset__AttributeOverride(::StringW  m_ElementName, ::StringW  m_AttributeName, ::StringW  m_Value) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->m_ElementName = m_ElementName;
this->m_AttributeName = m_AttributeName;
this->m_Value = m_Value;
}
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_attributeOverrides
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* (::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_attributeOverrides)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e0ff1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                            "get_attributeOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_slotUsages
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* (::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_slotUsages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0ff9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                            "get_slotUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::TemplateAsset::__set_m_TemplateAlias(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x60>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::TemplateAsset::__get_m_TemplateAlias()  {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::TemplateAsset::__get_m_TemplateAlias() const {
return ::cordl_internals::getInstanceField<::StringW, 0x60>(this);
}
constexpr void UnityEngine::UIElements::TemplateAsset::__set_m_AttributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*, 0x68>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* UnityEngine::UIElements::TemplateAsset::__get_m_AttributeOverrides()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*> UnityEngine::UIElements::TemplateAsset::__get_m_AttributeOverrides() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*, 0x68>(this);
}
constexpr void UnityEngine::UIElements::TemplateAsset::__set_m_SlotUsages(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*, 0x70>(this, std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* UnityEngine::UIElements::TemplateAsset::__get_m_SlotUsages()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*> UnityEngine::UIElements::TemplateAsset::__get_m_SlotUsages() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*, 0x70>(this);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* UnityEngine::UIElements::TemplateAsset::get_attributeOverrides()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                            "get_attributeOverrides",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*, false>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* UnityEngine::UIElements::TemplateAsset::get_slotUsages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                            "get_slotUsages",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
